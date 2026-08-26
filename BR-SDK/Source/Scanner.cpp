#include <chrono>
#include "Basic.hpp"
#include "Engine_classes.hpp"
#include "../Include/Hooking/Hook.hpp"
#include "../Platform/Platform.h"

using namespace UC;
int32 O_GObjects = 0;
int32 O_AppendString = 0;
int32 O_GNames = 0;
int32 O_GWorld = 0;
int32 O_ProcessEvent = 0;

#define PROCESS_EVENT_SIG "40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC F0 00 00 00 48 8D"
#define APPEND_STRING_SIG "48 89 5C 24 18 48 89 74 24 20 57 48 83 EC 20 8B 01 48"
#define ALLOCATE_UOBJECT_INDEX_SIG "48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57 48 83 EC 40 48 8B D9 4C"


int32 SDK::Offsets::OGObjects()
{
    if (O_GObjects == 0)
    {
        static Hook<void(void*, void*, bool)>* AllocUObjectHookPtr = nullptr;

        Hook<void(void*, void*, bool)> FUObjectArray_AllocateUObjectIndexHOOK(ALLOCATE_UOBJECT_INDEX_SIG,
        [](void* GObjects, void* Object, bool bMergingThreads) -> void
        {
            O_GObjects = static_cast<int32>((uintptr_t)GObjects - SDK::InSDKUtils::GetImageBase());
            AllocUObjectHookPtr->CallOriginal(GObjects, Object, bMergingThreads);
            AllocUObjectHookPtr->Destroy();
        });

        AllocUObjectHookPtr = &FUObjectArray_AllocateUObjectIndexHOOK;
        FUObjectArray_AllocateUObjectIndexHOOK.Create();
        FUObjectArray_AllocateUObjectIndexHOOK.Enable();

        while (FUObjectArray_AllocateUObjectIndexHOOK.IsCreated())
        {
            Sleep(10);
        }
    }
    if (O_GObjects == 0) std::cerr << "GObjects offset NOT FOUND" << std::endl;
    return O_GObjects;
}

int32 SDK::Offsets::OAppendString()
{
    if (O_AppendString == 0)
    {
        O_AppendString = static_cast<int32>(Signature(APPEND_STRING_SIG).GetPtr() - InSDKUtils::GetImageBase());
    }
    if (O_AppendString == 0) std::cerr << "AppendString offset NOT FOUND" << std::endl;
    return O_AppendString;
}

int32 SDK::Offsets::OGNames()
{
    if (O_GNames == 0)
    {
        uintptr_t AppendStringAddr = InSDKUtils::GetImageBase() + OAppendString();
        uint8_t* Bytes = reinterpret_cast<uint8_t*>(AppendStringAddr);

        constexpr int ScanRange = 0x80; // GNames lea shows up ~0x39 bytes in, plenty of headroom

        for (int i = 0; i < ScanRange - 7; i++)
        {
            // lea rcx, [rip+X]  -> 48 8D 0D
            // lea r8,  [rip+X]  -> 4C 8D 05
            bool IsLeaRcx = Bytes[i] == 0x48 && Bytes[i + 1] == 0x8D && Bytes[i + 2] == 0x0D;
            bool IsLeaR8  = Bytes[i] == 0x4C && Bytes[i + 1] == 0x8D && Bytes[i + 2] == 0x05;

            if (!IsLeaRcx && !IsLeaR8)
                continue;

            int32_t RelOffset = *reinterpret_cast<int32_t*>(&Bytes[i + 3]);
            uintptr_t InstrEnd = AppendStringAddr + i + 7; // lea reg, [rip+disp32] is always 7 bytes here
            uintptr_t GNamesAddr = InstrEnd + RelOffset;

            O_GNames = static_cast<int32>(GNamesAddr - InSDKUtils::GetImageBase());
            break;
        }
    }
    if (O_GNames == 0) std::cerr << "GNames offset NOT FOUND" << std::endl;
    return O_GNames;
}

int32 SDK::Offsets::OGWorld()
{
    using namespace SDK;
    for (int i = 0; i < UObject::GObjects->Num(); i++)
    {
        UObject* Obj = UObject::GObjects->GetByIndex(i);

        if (!Obj)
            continue;

        if (Obj->IsA(UWorld::StaticClass()) && !Obj->IsDefaultObject())
        {
            auto Results = Platform::FindAllAlignedValuesInProcess(Obj);
            void* Result = nullptr;
            if (Results.size())
            {
                if (Results.size() == 1)
                {
                    Result = Results[0];
                }
                else if (Results.size() == 2)
                {
                    auto ObjAddress = reinterpret_cast<uintptr_t>(Obj);
                    auto PossibleGWorld = reinterpret_cast<volatile uintptr_t*>(Results[0]);
                    auto CurrentValue = *PossibleGWorld;

                    for (int i = 0; CurrentValue == ObjAddress && i < 50; ++i)
                    {
                        ::Sleep(1);
                        CurrentValue = *PossibleGWorld;
                    }
                    if (CurrentValue == ObjAddress)
                    {
                        Result = Results[0];
                    }
                    else
                    {
                        Result = Results[1];
                        std::cerr << std::format("Filter GActiveLogWorld at 0x{:X}\n\n", reinterpret_cast<uintptr_t>(PossibleGWorld));
                    }
                }
                else
                {
                    std::cerr << std::format("Detected {} GWorld \n\n", Results.size());
                }
            }

            O_GWorld = Platform::GetOffset(Result);
        }
    }
    if (O_GWorld == 0) std::cerr << "GWorld offset NOT FOUND" << std::endl;
    return O_GWorld;
}

int32 SDK::Offsets::OProcessEvent()
{
    if (O_ProcessEvent == 0)
    {
        O_ProcessEvent = static_cast<int32>(Signature(PROCESS_EVENT_SIG).GetPtr() - InSDKUtils::GetImageBase());
    }
    if (O_ProcessEvent == 0) std::cerr << "ProcessEvent Offset NOT FOUND" << std::endl;
    return O_ProcessEvent;
}

class Timer {
public:
    Timer() :
            m_beg(clock_::now()) {
    }
    void reset() {
        m_beg = clock_::now();
    }

    double elapsed() const {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
                clock_::now() - m_beg).count();
    }

private:
    typedef std::chrono::high_resolution_clock clock_;
    typedef std::chrono::duration<double, std::ratio<1> > second_;
    std::chrono::time_point<clock_> m_beg;
};

void SDK::Offsets::FindOffsets()
{
    Timer timer;
    std::cout << "Initializing BR-SDK offsets..." << std::endl;
    OGObjects();
    OGWorld();
    OAppendString();
    OGNames();
    OProcessEvent();
    std::cout << "Found BR-SDK offsets in: " << timer.elapsed() << "ms" << std::endl;
}