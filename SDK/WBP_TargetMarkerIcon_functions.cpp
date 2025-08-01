﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TargetMarkerIcon

#include "Basic.hpp"

#include "WBP_TargetMarkerIcon_classes.hpp"
#include "WBP_TargetMarkerIcon_parameters.hpp"


namespace SDK
{

// Function WBP_TargetMarkerIcon.WBP_TargetMarkerIcon_C.UpdateAmmoType
// (Event, Protected, BlueprintEvent)
// Parameters:
// EAmmoType                               NewType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TargetMarkerIcon_C::UpdateAmmoType(EAmmoType NewType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TargetMarkerIcon_C", "UpdateAmmoType");

	Params::WBP_TargetMarkerIcon_C_UpdateAmmoType Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TargetMarkerIcon.WBP_TargetMarkerIcon_C.UpdateTargetDistance
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   NewDist                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TargetMarkerIcon_C::UpdateTargetDistance(float NewDist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TargetMarkerIcon_C", "UpdateTargetDistance");

	Params::WBP_TargetMarkerIcon_C_UpdateTargetDistance Parms{};

	Parms.NewDist = NewDist;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TargetMarkerIcon.WBP_TargetMarkerIcon_C.UpdateFireAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NewActionIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TargetMarkerIcon_C::UpdateFireAction(int32 NewActionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TargetMarkerIcon_C", "UpdateFireAction");

	Params::WBP_TargetMarkerIcon_C_UpdateFireAction Parms{};

	Parms.NewActionIndex = NewActionIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TargetMarkerIcon.WBP_TargetMarkerIcon_C.UpdateHasValidTarget
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bNewHasValidTarget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TargetMarkerIcon_C::UpdateHasValidTarget(bool bNewHasValidTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TargetMarkerIcon_C", "UpdateHasValidTarget");

	Params::WBP_TargetMarkerIcon_C_UpdateHasValidTarget Parms{};

	Parms.bNewHasValidTarget = bNewHasValidTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TargetMarkerIcon.WBP_TargetMarkerIcon_C.ExecuteUbergraph_WBP_TargetMarkerIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TargetMarkerIcon_C::ExecuteUbergraph_WBP_TargetMarkerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TargetMarkerIcon_C", "ExecuteUbergraph_WBP_TargetMarkerIcon");

	Params::WBP_TargetMarkerIcon_C_ExecuteUbergraph_WBP_TargetMarkerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

