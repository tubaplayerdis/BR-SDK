﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ConnectorSpacingAxis

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "BrickRigs_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ConnectorSpacingAxis.WBP_ConnectorSpacingAxis_C
// 0x0040 (0x02A0 - 0x0260)
class UWBP_ConnectorSpacingAxis_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BrickButton_C*                     Button;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickImage*                            Icon;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickTextBlock*                        TextBlock;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFluAxisSigned                                SpacingAxis;                                       // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(EFluAxisSigned Axis)> OnClicked;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EConnectorSpacing                             ConnectorSpacing;                                  // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ConnectorSpacingAxis(int32 EntryPoint);
	void UpdateSpacingAxis(EFluAxisSigned InSpacingAxis, EConnectorSpacing InSpacing);
	void BndEvt__WBP_ConnectorSpacingAxis_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_ConnectorSpacingAxis_WBP_BrickButton_K2Node_ComponentBoundEvent_0_OnUpdateContentStyle__DelegateSignature(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ConnectorSpacingAxis_C">();
	}
	static class UWBP_ConnectorSpacingAxis_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ConnectorSpacingAxis_C>();
	}
};
static_assert(alignof(UWBP_ConnectorSpacingAxis_C) == 0x000008, "Wrong alignment on UWBP_ConnectorSpacingAxis_C");
static_assert(sizeof(UWBP_ConnectorSpacingAxis_C) == 0x0002A0, "Wrong size on UWBP_ConnectorSpacingAxis_C");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, UberGraphFrame) == 0x000260, "Member 'UWBP_ConnectorSpacingAxis_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, Button) == 0x000268, "Member 'UWBP_ConnectorSpacingAxis_C::Button' has a wrong offset!");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, Icon) == 0x000270, "Member 'UWBP_ConnectorSpacingAxis_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, TextBlock) == 0x000278, "Member 'UWBP_ConnectorSpacingAxis_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, SpacingAxis) == 0x000280, "Member 'UWBP_ConnectorSpacingAxis_C::SpacingAxis' has a wrong offset!");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, OnClicked) == 0x000288, "Member 'UWBP_ConnectorSpacingAxis_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ConnectorSpacingAxis_C, ConnectorSpacing) == 0x000298, "Member 'UWBP_ConnectorSpacingAxis_C::ConnectorSpacing' has a wrong offset!");

}

