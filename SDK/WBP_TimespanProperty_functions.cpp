﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TimespanProperty

#include "Basic.hpp"

#include "WBP_TimespanProperty_classes.hpp"
#include "WBP_TimespanProperty_parameters.hpp"


namespace SDK
{

// Function WBP_TimespanProperty.WBP_TimespanProperty_C.ExecuteUbergraph_WBP_TimespanProperty
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TimespanProperty_C::ExecuteUbergraph_WBP_TimespanProperty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "ExecuteUbergraph_WBP_TimespanProperty");

	Params::WBP_TimespanProperty_C_ExecuteUbergraph_WBP_TimespanProperty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TimespanProperty_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "PreConstruct");

	Params::WBP_TimespanProperty_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.BndEvt__WBP_TimespanProperty_DaysSlider_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValueChangedEventType                  EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TimespanProperty_C::BndEvt__WBP_TimespanProperty_DaysSlider_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "BndEvt__WBP_TimespanProperty_DaysSlider_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature");

	Params::WBP_TimespanProperty_C_BndEvt__WBP_TimespanProperty_DaysSlider_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.BndEvt__WBP_TimespanProperty_HoursSlider_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValueChangedEventType                  EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TimespanProperty_C::BndEvt__WBP_TimespanProperty_HoursSlider_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "BndEvt__WBP_TimespanProperty_HoursSlider_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature");

	Params::WBP_TimespanProperty_C_BndEvt__WBP_TimespanProperty_HoursSlider_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.BndEvt__WBP_TimespanProperty_MinutesSlider_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValueChangedEventType                  EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TimespanProperty_C::BndEvt__WBP_TimespanProperty_MinutesSlider_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "BndEvt__WBP_TimespanProperty_MinutesSlider_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature");

	Params::WBP_TimespanProperty_C_BndEvt__WBP_TimespanProperty_MinutesSlider_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.BndEvt__WBP_TimespanProperty_SecondsSlider_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValueChangedEventType                  EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TimespanProperty_C::BndEvt__WBP_TimespanProperty_SecondsSlider_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "BndEvt__WBP_TimespanProperty_SecondsSlider_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature");

	Params::WBP_TimespanProperty_C_BndEvt__WBP_TimespanProperty_SecondsSlider_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_TimespanProperty_C::BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_0_OnUpdateContentStyle__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EBrickUIColorStyle                      InColorStyle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBrickUIStyleState                      InContentStyleState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TimespanProperty_C::BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_0_OnUpdateContentStyle__DelegateSignature(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_0_OnUpdateContentStyle__DelegateSignature");

	Params::WBP_TimespanProperty_C_BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_0_OnUpdateContentStyle__DelegateSignature Parms{};

	Parms.InColorStyle = InColorStyle;
	Parms.InContentStyleState = InContentStyleState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TimespanProperty.WBP_TimespanProperty_C.UpdateTimespanProperty
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FTimespan&                 Timespan                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// const struct FTimespan&                 MinValue_0                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// const struct FTimespan&                 MaxValue_0                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bAllowInfinite                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TimespanProperty_C::UpdateTimespanProperty(const struct FTimespan& Timespan, const struct FTimespan& MinValue_0, const struct FTimespan& MaxValue_0, bool bAllowInfinite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TimespanProperty_C", "UpdateTimespanProperty");

	Params::WBP_TimespanProperty_C_UpdateTimespanProperty Parms{};

	Parms.Timespan = std::move(Timespan);
	Parms.MinValue_0 = std::move(MinValue_0);
	Parms.MaxValue_0 = std::move(MaxValue_0);
	Parms.bAllowInfinite = bAllowInfinite;

	UObject::ProcessEvent(Func, &Parms);
}

}

