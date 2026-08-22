#include "../../Include/SDK/Basic.hpp"
#include "../../Include/Hooking/Signature.hpp"
#include "../../Include/Hooking/UHook.hpp"

#include <cassert>

#include "CoreUObject_classes.hpp"

namespace
{
    SDK::UFunction* ResolveFunction(SDK::UClass* Class, std::string Name)
    {
        std::string ClassName = Class->GetName();
        return Class->GetFunction(Class->GetName().c_str(), Name.c_str());
    }
}

//TODO: Verify Signatures
namespace
{
    auto F_GetStackTrace =           Function<SDK::FString*(FFrame* This, SDK::FString* result)>("40 55 41 56 41 57 48 8B");
    auto F_KismetExecutionMessage =  Function<void(const wchar_t* Message, ELogVerbosity Verbosity, SDK::FName WarningId)>("48 89 5C 24 08 57 48 83 EC 30 0F B6 DA 48 8B F9 80");
    auto F_Serialize =               Function<void(FFrame* This, const wchar_t* V, ELogVerbosity Verbosity, const SDK::FName* Category)>("41 80 F8 02 0F 85 0F");
    auto F_Step =                    Function<void(FFrame* This, SDK::UObject* Context, void* Z_Param__Result)>("48 8B 41 20 4C 8B D2 48");
    auto F_StepExplicitProperty =    Function<void(FFrame* This, void* Result, SDK::FProperty* Property)>("41 8B 40 40 4D 8B");
}

SDK::FString* FFrame::GetStackTrace(SDK::FString* result)
{
    return F_GetStackTrace(this, result);
}

void FFrame::KismetExecutionMessage(const wchar_t* Message, ELogVerbosity Verbosity, SDK::FName WarningId)
{
    return F_KismetExecutionMessage(Message, Verbosity, WarningId);
}

void FFrame::Serialize(const wchar_t* V, ELogVerbosity Verbosity, const SDK::FName* Category)
{
    return F_Serialize(this, V, Verbosity, Category);
}

void FFrame::Step(SDK::UObject* Context, void* Z_Param__Result)
{
    return F_Step(this, Context, Z_Param__Result);
}

void FFrame::StepExplicitProperty(void* Result, SDK::FProperty* Property)
{
    return F_StepExplicitProperty(this, Result, Property);
}

UHook::UHook(ExecFunc NewFunction) : UEFunction(nullptr), NewFunction(NewFunction), HadFlag(false), Original(nullptr) {}

UHook::UHook(SDK::UFunction* Function, ExecFunc NewFunction) : UEFunction(Function), NewFunction(NewFunction)
{
    assert(Function != nullptr, "UFunction passed to UHook was null!");
    assert(NewFunction != nullptr, "UFunction passed to UHook was null!");
    HadFlag = UEFunction->FunctionFlags & SDK::EFunctionFlags::Native;
    Original = UEFunction->ExecFunction;
}

UHook::UHook(SDK::UClass* Class, std::string Name, ExecFunc NewFunction) : UHook(ResolveFunction(Class, Name), NewFunction) {}

bool UHook::Set(SDK::UFunction* Function)
{
    if (!Function) return false;
    UEFunction = Function;
    HadFlag = UEFunction->FunctionFlags & SDK::EFunctionFlags::Native;
    Original = UEFunction->ExecFunction;
    return true;
}

bool UHook::Set(SDK::UClass* Class, std::string Name)
{
    return Set(ResolveFunction(Class, Name));
}

bool UHook::Set()
{
    return UEFunction != nullptr && NewFunction != nullptr; //Pure BP function original will be nullptr
}

bool UHook::Enabled()
{
    return (UEFunction->FunctionFlags & SDK::EFunctionFlags::Native) && UEFunction->ExecFunction == reinterpret_cast<SDK::UFunction::FNativeFuncPtr>(NewFunction);
}

void UHook::Enable()
{
    if (!Set() || Enabled()) return;
    UEFunction->FunctionFlags |= SDK::EFunctionFlags::Native;
    UEFunction->ExecFunction = reinterpret_cast<SDK::UFunction::FNativeFuncPtr>(NewFunction);
}

void UHook::Disable()
{
    if (!Set() || Disabled()) return;
    if (!HadFlag)
    {
        UEFunction->FunctionFlags = static_cast<SDK::EFunctionFlags>(static_cast<int>(UEFunction->FunctionFlags) & ~static_cast<int>(SDK::EFunctionFlags::Native));
    }
    UEFunction->ExecFunction = Original;
}

void UHook::CallOriginal(SDK::UObject* Context, FFrame* TheStack, void* Result)
{
    Original(Context, TheStack, Result);
}
