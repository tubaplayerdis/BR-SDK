﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PropertyContainer

#include "Basic.hpp"

#include "WBP_PropertyContainer_classes.hpp"
#include "WBP_PropertyContainer_parameters.hpp"


namespace SDK
{

// Function WBP_PropertyContainer.WBP_PropertyContainer_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PropertyContainer_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "OnMouseButtonUp");

	Params::WBP_PropertyContainer_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PropertyContainer.WBP_PropertyContainer_C.AddPropertyWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPropertyWidget*                  Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EOrientation                            InOrientation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyContainer_C::AddPropertyWidget(class UPropertyWidget* Widget, EOrientation InOrientation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "AddPropertyWidget");

	Params::WBP_PropertyContainer_C_AddPropertyWidget Parms{};

	Parms.Widget = Widget;
	Parms.InOrientation = InOrientation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PropertyContainer.WBP_PropertyContainer_C.UpdateOrientation
// (Event, Protected, BlueprintEvent)
// Parameters:
// EOrientation                            InOrientation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyContainer_C::UpdateOrientation(EOrientation InOrientation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "UpdateOrientation");

	Params::WBP_PropertyContainer_C_UpdateOrientation Parms{};

	Parms.InOrientation = InOrientation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PropertyContainer.WBP_PropertyContainer_C.UpdateColorStyle
// (Event, Protected, BlueprintEvent)
// Parameters:
// EBrickUIColorStyle                      InColorStyle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyContainer_C::UpdateColorStyle(EBrickUIColorStyle InColorStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "UpdateColorStyle");

	Params::WBP_PropertyContainer_C_UpdateColorStyle Parms{};

	Parms.InColorStyle = InColorStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PropertyContainer.WBP_PropertyContainer_C.OnMenuButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_PropertyContainer_C::OnMenuButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "OnMenuButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PropertyContainer.WBP_PropertyContainer_C.PostAddPropertyButtons
// (Event, Protected, BlueprintEvent)

void UWBP_PropertyContainer_C::PostAddPropertyButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "PostAddPropertyButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PropertyContainer.WBP_PropertyContainer_C.ExecuteUbergraph_WBP_PropertyContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PropertyContainer_C::ExecuteUbergraph_WBP_PropertyContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PropertyContainer_C", "ExecuteUbergraph_WBP_PropertyContainer");

	Params::WBP_PropertyContainer_C_ExecuteUbergraph_WBP_PropertyContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

