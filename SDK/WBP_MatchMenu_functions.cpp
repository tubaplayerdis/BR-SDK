﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MatchMenu

#include "Basic.hpp"

#include "WBP_MatchMenu_classes.hpp"
#include "WBP_MatchMenu_parameters.hpp"


namespace SDK
{

// Function WBP_MatchMenu.WBP_MatchMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MatchMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MatchMenu.WBP_MatchMenu_C.OnClickedRestart
// (BlueprintCallable, BlueprintEvent)

void UWBP_MatchMenu_C::OnClickedRestart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchMenu_C", "OnClickedRestart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MatchMenu.WBP_MatchMenu_C.OnConfirmRestartPopupClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupResult                            Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MatchMenu_C::OnConfirmRestartPopupClosed(EPopupResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchMenu_C", "OnConfirmRestartPopupClosed");

	Params::WBP_MatchMenu_C_OnConfirmRestartPopupClosed Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MatchMenu.WBP_MatchMenu_C.UpdateCanApplyMatchSettings
// (BlueprintEvent)
// Parameters:
// bool                                    bCanApply                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MatchMenu_C::UpdateCanApplyMatchSettings(bool bCanApply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchMenu_C", "UpdateCanApplyMatchSettings");

	Params::WBP_MatchMenu_C_UpdateCanApplyMatchSettings Parms{};

	Parms.bCanApply = bCanApply;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MatchMenu.WBP_MatchMenu_C.UpdateRestartMatchButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCanRestart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSameLevelAndMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MatchMenu_C::UpdateRestartMatchButton(bool bCanRestart, bool bSameLevelAndMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchMenu_C", "UpdateRestartMatchButton");

	Params::WBP_MatchMenu_C_UpdateRestartMatchButton Parms{};

	Parms.bCanRestart = bCanRestart;
	Parms.bSameLevelAndMode = bSameLevelAndMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MatchMenu.WBP_MatchMenu_C.ExecuteUbergraph_WBP_MatchMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MatchMenu_C::ExecuteUbergraph_WBP_MatchMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchMenu_C", "ExecuteUbergraph_WBP_MatchMenu");

	Params::WBP_MatchMenu_C_ExecuteUbergraph_WBP_MatchMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

