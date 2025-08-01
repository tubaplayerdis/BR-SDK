﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PropertyCategory

#include "Basic.hpp"

#include "WBP_PropertyCategory_classes.hpp"
#include "WBP_PropertyCategory_parameters.hpp"


namespace SDK
{

// Function WBP_PropertyCategory.WBP_PropertyCategory_C.UpdateCategory
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      DisplayName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PropertyCategory_C::UpdateCategory(const class FText& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyCategory_C", "UpdateCategory");

	Params::WBP_PropertyCategory_C_UpdateCategory Parms{};

	Parms.DisplayName = std::move(DisplayName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PropertyCategory.WBP_PropertyCategory_C.UpdatePropertyContainerWidgetSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPropertyContainerWidget*         Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumPerRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyCategory_C::UpdatePropertyContainerWidgetSlot(class UPropertyContainerWidget* Widget, int32 Index_0, int32 NumPerRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyCategory_C", "UpdatePropertyContainerWidgetSlot");

	Params::WBP_PropertyCategory_C_UpdatePropertyContainerWidgetSlot Parms{};

	Parms.Widget = Widget;
	Parms.Index_0 = Index_0;
	Parms.NumPerRow = NumPerRow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PropertyCategory.WBP_PropertyCategory_C.AddPropertyContainerWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPropertyContainerWidget*         Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyCategory_C::AddPropertyContainerWidget(class UPropertyContainerWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyCategory_C", "AddPropertyContainerWidget");

	Params::WBP_PropertyCategory_C_AddPropertyContainerWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PropertyCategory.WBP_PropertyCategory_C.ExecuteUbergraph_WBP_PropertyCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyCategory_C::ExecuteUbergraph_WBP_PropertyCategory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyCategory_C", "ExecuteUbergraph_WBP_PropertyCategory");

	Params::WBP_PropertyCategory_C_ExecuteUbergraph_WBP_PropertyCategory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

