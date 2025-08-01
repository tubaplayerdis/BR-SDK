﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Map

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function WBP_Map.WBP_Map_C.AddGameOverlayWidget
// 0x0038 (0x0038 - 0x0000)
struct WBP_Map_C_AddGameOverlayWidget final
{
public:
	class UGameOverlayWidget*                     Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x000C(0x0010)(NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_C_AddGameOverlayWidget) == 0x000008, "Wrong alignment on WBP_Map_C_AddGameOverlayWidget");
static_assert(sizeof(WBP_Map_C_AddGameOverlayWidget) == 0x000038, "Wrong size on WBP_Map_C_AddGameOverlayWidget");
static_assert(offsetof(WBP_Map_C_AddGameOverlayWidget, Widget) == 0x000000, "Member 'WBP_Map_C_AddGameOverlayWidget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_Map_C_AddGameOverlayWidget, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000008, "Member 'WBP_Map_C_AddGameOverlayWidget::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_C_AddGameOverlayWidget, K2Node_MakeStruct_Anchors) == 0x00000C, "Member 'WBP_Map_C_AddGameOverlayWidget::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_Map_C_AddGameOverlayWidget, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'WBP_Map_C_AddGameOverlayWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_Map_C_AddGameOverlayWidget, CallFunc_AddChildToCanvas_ReturnValue) == 0x000030, "Member 'WBP_Map_C_AddGameOverlayWidget::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function WBP_Map.WBP_Map_C.CreateMapMID
// 0x0010 (0x0010 - 0x0000)
struct WBP_Map_C_CreateMapMID final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_C_CreateMapMID) == 0x000008, "Wrong alignment on WBP_Map_C_CreateMapMID");
static_assert(sizeof(WBP_Map_C_CreateMapMID) == 0x000010, "Wrong size on WBP_Map_C_CreateMapMID");
static_assert(offsetof(WBP_Map_C_CreateMapMID, ReturnValue) == 0x000000, "Member 'WBP_Map_C_CreateMapMID::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_C_CreateMapMID, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_Map_C_CreateMapMID::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

