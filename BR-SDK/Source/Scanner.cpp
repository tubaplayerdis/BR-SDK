#include <chrono>
#include "Basic.hpp"
#include "BrickRigs_classes.hpp"
#include "Engine_classes.hpp"
#include "../Include/Hooking/Hook.hpp"
#include "Platform/Platform.h"

using namespace UC;
uintptr_t O_GObjects = 0;
uintptr_t O_AppendString = 0;
uintptr_t O_GNames = 0;
uintptr_t O_GWorld = 0;
uintptr_t O_ProcessEvent = 0;
const bool B_InEditor = GetModuleHandle(L"BrickRigsModKitSteam.exe") != nullptr;

#define PROCESS_EVENT_SIG "40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC F0 00 00 00 48 8D"
#define APPEND_STRING_SIG "48 89 5C 24 18 48 89 74 24 20 57 48 83 EC 20 8B 01 48"
#define UOBJECTBASE_ADD_OBJECT_SIG "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 89 51 18"

//Editor Sigs
#define EDITOR_PROCESS_EVENT_MODULE "BrickRigsModKitSteam-CoreUObject.dll"
#define EDITOR_PROCESS_EVENT_SYB "?ProcessEvent@UObject@@UEAAXPEAVUFunction@@PEAX@Z"

#define EDITOR_GOBJECTS_MODULE "BrickRigsModKitSteam-CoreUObject.dll"
#define EDITOR_GOBJECTS_SYB "?GUObjectArray@@3VFUObjectArray@@A"

#define EDITOR_APPEND_STRING_MODULE "BrickRigsModKitSteam-Core.dll"
#define EDITOR_APPEND_STRING_SYB "?AppendString@FName@@QEBAXAEAVFString@@@Z"

#define EDITOR_GNAMES_MODULE "BrickRigsModKitSteam-Core.dll"
#define EDITOR_GNAMES_SYB "" //Currently not exported

#define EDITOR_GWORLD_MODULE "BrickRigsModKitSteam-Engine.dll"
#define EDITOR_GWORLD_SYB "?GWorld@@3VUWorldProxy@@A"

namespace
{
    uintptr_t GetSymbolAddress(const char* Module, const char* Symbol)
    {
        HMODULE hModuleKit = GetModuleHandleA(Module); // or whatever the module's actually called
        return (uintptr_t)GetProcAddress(hModuleKit, Symbol);
    }


}

//Offset from the object array pointer where GObjects is
#define GOBJECTS_OFFSET 0x10

uintptr_t SDK::Offsets::OGObjects()
{
    if (O_GObjects == 0)
    {
        if (B_InEditor)
        {
            O_GObjects = GetSymbolAddress(EDITOR_GOBJECTS_MODULE, EDITOR_GOBJECTS_SYB) + GOBJECTS_OFFSET;
            return O_GObjects;
        }

        Signature UObjectBase_AddObjectSig(UOBJECTBASE_ADD_OBJECT_SIG);

        uintptr_t AddObjectAddr = UObjectBase_AddObjectSig.GetPtr();

        if (AddObjectAddr == 0)
        {
            std::cerr << "GObjects offset NOT FOUND (AddObject signature missed)\n";
            return 0;
        }

        uint8_t* Bytes = reinterpret_cast<uint8_t*>(AddObjectAddr);

        constexpr int ScanRange = 0x90; // lea is at +0x63, give some headroom

        for (int i = 0; i < ScanRange - 7; i++)
        {
            // lea rcx, [rip+disp32] -> 48 8D 0D
            bool IsLeaRcx = Bytes[i] == 0x48 && Bytes[i + 1] == 0x8D && Bytes[i + 2] == 0x0D;

            if (!IsLeaRcx)
                continue;

            int32_t RelOffset = *reinterpret_cast<int32_t*>(&Bytes[i + 3]);
            uintptr_t InstrEnd = AddObjectAddr + i + 7;
            uintptr_t GUObjectArrayAddr = InstrEnd + RelOffset;

            // GUObjectArrayAddr is the OUTER FUObjectArray - apply the same
            // +0x10 (GOBJECTS_OFFSET) adjustment used previously, if your
            // ByIndex/Num logic expects the ObjObjects sub-struct convention.
            O_GObjects = GUObjectArrayAddr + GOBJECTS_OFFSET;
            break;
        }
    }

    if (O_GObjects == 0)
        std::cerr << "GObjects offset NOT FOUND\n";

    return O_GObjects;
}

uintptr_t SDK::Offsets::OAppendString()
{
    if (O_AppendString == 0)
    {
        if (B_InEditor)
        {
            O_AppendString = GetSymbolAddress(EDITOR_APPEND_STRING_MODULE, EDITOR_APPEND_STRING_SYB);
            return O_AppendString;
        }

        O_AppendString = Signature(APPEND_STRING_SIG).GetPtr();
    }
    if (O_AppendString == 0) std::cerr << "AppendString offset NOT FOUND" << std::endl;
    return O_AppendString;
}

uintptr_t SDK::Offsets::OGNames()
{
    if (O_GNames == 0)
    {
        if (B_InEditor)
        {
            O_GNames = 0;//GetSymbolAddress(EDITOR_GNAMES_MODULE, EDITOR_GNAMES_SYB);
            return O_GNames;
        }

        uintptr_t AppendStringAddr = OAppendString();
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

            O_GNames = GNamesAddr;
            break;
        }
    }
    if (O_GNames == 0) std::cerr << "GNames offset NOT FOUND" << std::endl;
    return O_GNames;
}

uintptr_t SDK::Offsets::OGWorld()
{
    if (O_GWorld != 0) return O_GWorld;

    if (B_InEditor)
    {
        O_GWorld = GetSymbolAddress(EDITOR_GWORLD_MODULE, EDITOR_GWORLD_SYB);
        return O_GWorld;
    }

    using namespace SDK;
    for (int i = 0; i < UObject::GObjects->Num(); i++)
    {
        UObject* Obj = UObject::GObjects->GetByIndex(i);

        if (!Obj)
            continue;

        if (!Obj->IsA(UWorld::StaticClass()) || Obj->IsDefaultObject())
            continue;

        auto Results = Platform::FindAllAlignedValuesInProcess(Obj);

        if (Results.empty())
            continue; // this UWorld instance has no live pointer to it, try the next one

        void* Result = nullptr;

        if (Results.size() == 1)
        {
            Result = Results[0];
        }
        else if (Results.size() == 2)
        {
            auto ObjAddress = reinterpret_cast<uintptr_t>(Obj);
            auto PossibleGWorld = reinterpret_cast<volatile uintptr_t*>(Results[0]);
            auto CurrentValue = *PossibleGWorld;

            for (int j = 0; CurrentValue == ObjAddress && j < 50; ++j)
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
#ifdef _DEBUG
                std::cerr << std::format("Filter GActiveLogWorld at 0x{:X}\n\n", reinterpret_cast<uintptr_t>(PossibleGWorld));
#endif
            }
        }
        else
        {
#ifdef _DEBUG
            std::cerr << std::format("Detected {} candidates for GWorld, skipping this object\n\n", Results.size());
#endif
            continue; // ambiguous — don't guess, try another UWorld instance instead of bailing entirely
        }

        if (Result)
        {
            O_GWorld = reinterpret_cast<uintptr_t>(Result);
            break; // found it — stop scanning immediately
        }
    }

    if (O_GWorld == 0)
        std::cerr << "GWorld offset NOT FOUND" << std::endl;

    return O_GWorld;
}

uintptr_t SDK::Offsets::OProcessEvent()
{
    if (O_ProcessEvent == 0)
    {
        if (B_InEditor)
        {
            O_ProcessEvent = GetSymbolAddress(EDITOR_PROCESS_EVENT_MODULE, EDITOR_PROCESS_EVENT_SYB);
            return O_ProcessEvent;
        }
        O_ProcessEvent = Signature(PROCESS_EVENT_SIG).GetPtr();
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

#define PREFIX "[BR-SDK]: "

void SDK::Offsets::FindOffsets()
{
#ifdef _DEBUG
    if (B_InEditor) std::cout << PREFIX << "Editor Detected! Switching signatures..." << std::endl;

    Timer timer;
    std::cout << PREFIX << "Initializing BR-SDK offsets..." << std::endl;
    OGObjects();
    std::cout << PREFIX << "Found GObjects at: " << timer.elapsed() << "ms" << std::endl;
    OGWorld();
    std::cout << PREFIX << "Found GWorld at: " << timer.elapsed() << "ms" << std::endl;
    OAppendString();
    std::cout << PREFIX << "Found AppendString at: " << timer.elapsed() << "ms" << std::endl;
    if (!B_InEditor)
    {
        OGNames();
        std::cout << PREFIX << "Found GNames at: " << timer.elapsed() << "ms" << std::endl;
    }
    OProcessEvent();
    std::cout << PREFIX << "Found ProcessEvent at: " << timer.elapsed() << std::endl;
    std::cout << PREFIX << "Found BR-SDK offsets in: " << timer.elapsed() << "ms" << std::endl;
#else
    OGObjects();
    OGWorld();
    OAppendString();
    if (!B_InEditor) OGNames();
    OProcessEvent();
#endif
}