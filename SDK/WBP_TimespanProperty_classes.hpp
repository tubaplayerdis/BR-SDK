﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TimespanProperty

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "BrickRigs_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TimespanProperty.WBP_TimespanProperty_C
// 0x0050 (0x02D0 - 0x0280)
class UWBP_TimespanProperty_C final : public UTimespanPropertyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BrickSlider_C*                     DaysSlider;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BrickSlider_C*                     HoursSlider;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BrickButton_C*                     InfiniteButton;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickTextBlock*                        InfiniteTextBlock;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BrickSlider_C*                     MinutesSlider;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BrickSlider_C*                     SecondsSlider;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimespan                              CurrentValue;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              MinValue;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              MaxValue;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TimespanProperty(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_TimespanProperty_DaysSlider_K2Node_ComponentBoundEvent_5_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType);
	void BndEvt__WBP_TimespanProperty_HoursSlider_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType);
	void BndEvt__WBP_TimespanProperty_MinutesSlider_K2Node_ComponentBoundEvent_3_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType);
	void BndEvt__WBP_TimespanProperty_SecondsSlider_K2Node_ComponentBoundEvent_2_OnSliderValueChanged__DelegateSignature(float Value, EValueChangedEventType EventType);
	void BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_TimespanProperty_InfiniteButton_K2Node_ComponentBoundEvent_0_OnUpdateContentStyle__DelegateSignature(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState);
	void UpdateTimespanProperty(const struct FTimespan& Timespan, const struct FTimespan& MinValue_0, const struct FTimespan& MaxValue_0, bool bAllowInfinite);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TimespanProperty_C">();
	}
	static class UWBP_TimespanProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TimespanProperty_C>();
	}
};
static_assert(alignof(UWBP_TimespanProperty_C) == 0x000008, "Wrong alignment on UWBP_TimespanProperty_C");
static_assert(sizeof(UWBP_TimespanProperty_C) == 0x0002D0, "Wrong size on UWBP_TimespanProperty_C");
static_assert(offsetof(UWBP_TimespanProperty_C, UberGraphFrame) == 0x000280, "Member 'UWBP_TimespanProperty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, DaysSlider) == 0x000288, "Member 'UWBP_TimespanProperty_C::DaysSlider' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, HoursSlider) == 0x000290, "Member 'UWBP_TimespanProperty_C::HoursSlider' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, InfiniteButton) == 0x000298, "Member 'UWBP_TimespanProperty_C::InfiniteButton' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, InfiniteTextBlock) == 0x0002A0, "Member 'UWBP_TimespanProperty_C::InfiniteTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, MinutesSlider) == 0x0002A8, "Member 'UWBP_TimespanProperty_C::MinutesSlider' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, SecondsSlider) == 0x0002B0, "Member 'UWBP_TimespanProperty_C::SecondsSlider' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, CurrentValue) == 0x0002B8, "Member 'UWBP_TimespanProperty_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, MinValue) == 0x0002C0, "Member 'UWBP_TimespanProperty_C::MinValue' has a wrong offset!");
static_assert(offsetof(UWBP_TimespanProperty_C, MaxValue) == 0x0002C8, "Member 'UWBP_TimespanProperty_C::MaxValue' has a wrong offset!");

}

