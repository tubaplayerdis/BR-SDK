﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FlashSequenceItemWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_FlashSequenceItemWidget.WBP_FlashSequenceItemWidget_C.ExecuteUbergraph_WBP_FlashSequenceItemWidget
// 0x0028 (0x0028 - 0x0000)
struct WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bNewLit;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget) == 0x000008, "Wrong alignment on WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget");
static_assert(sizeof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget) == 0x000028, "Wrong size on WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget, EntryPoint) == 0x000000, "Member 'WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget, Temp_bool_Variable) == 0x000004, "Member 'WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget, Temp_object_Variable) == 0x000008, "Member 'WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget, Temp_object_Variable_1) == 0x000010, "Member 'WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget, K2Node_Event_bNewLit) == 0x000018, "Member 'WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget::K2Node_Event_bNewLit' has a wrong offset!");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget, K2Node_Select_Default) == 0x000020, "Member 'WBP_FlashSequenceItemWidget_C_ExecuteUbergraph_WBP_FlashSequenceItemWidget::K2Node_Select_Default' has a wrong offset!");

// Function WBP_FlashSequenceItemWidget.WBP_FlashSequenceItemWidget_C.UpdateIsLit
// 0x0001 (0x0001 - 0x0000)
struct WBP_FlashSequenceItemWidget_C_UpdateIsLit final
{
public:
	bool                                          bNewLit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_FlashSequenceItemWidget_C_UpdateIsLit) == 0x000001, "Wrong alignment on WBP_FlashSequenceItemWidget_C_UpdateIsLit");
static_assert(sizeof(WBP_FlashSequenceItemWidget_C_UpdateIsLit) == 0x000001, "Wrong size on WBP_FlashSequenceItemWidget_C_UpdateIsLit");
static_assert(offsetof(WBP_FlashSequenceItemWidget_C_UpdateIsLit, bNewLit) == 0x000000, "Member 'WBP_FlashSequenceItemWidget_C_UpdateIsLit::bNewLit' has a wrong offset!");

}

