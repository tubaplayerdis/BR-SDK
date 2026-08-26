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


int32 SDK::Offsets::GObjects()
{
    if (O_GObjects == 0)
    {
        Hook<void(void*, void*, bool)> FUObjectArray_AllocateUObjectIndexHOOK(ALLOCATE_UOBJECT_INDEX_SIG,
        [&](void* GObjects, void* Object, bool bMergingThreads) -> void
        {
            O_GObjects = static_cast<int32>((uintptr_t)GObjects - SDK::InSDKUtils::GetImageBase());
            FUObjectArray_AllocateUObjectIndexHOOK.CallOriginal(GObjects, Object, bMergingThreads);
            FUObjectArray_AllocateUObjectIndexHOOK.Destroy();
        });


        FUObjectArray_AllocateUObjectIndexHOOK.Create();
        FUObjectArray_AllocateUObjectIndexHOOK.Enable();

        while (FUObjectArray_AllocateUObjectIndexHOOK.IsCreated())
        {
            Sleep(10);
        }
    }
    return O_GObjects;
}

int32 SDK::Offsets::AppendString()
{
    if (O_AppendString == 0)
    {
        O_AppendString = static_cast<int32>(Signature(APPEND_STRING_SIG).GetPtr() - InSDKUtils::GetImageBase());
    }
    return O_AppendString;
}

int32 SDK::Offsets::GNames()
{
    //TODO: Implement
    return 0x049FA580;
}

int32 SDK::Offsets::GWorld()
{
    using namespace SDK;
    return 0x04B7A1F8;
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
}

int32 SDK::Offsets::ProcessEvent()
{
    if (O_ProcessEvent == 0)
    {
        O_ProcessEvent = static_cast<int32>(Signature(PROCESS_EVENT_SIG).GetPtr() - InSDKUtils::GetImageBase());
    }
    return O_ProcessEvent;
}

void SDK::Offsets::FindOffsets()
{

}