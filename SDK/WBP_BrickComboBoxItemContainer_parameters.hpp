﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BrickComboBoxItemContainer

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_BrickComboBoxItemContainer.WBP_BrickComboBoxItemContainer_C.ExecuteUbergraph_WBP_BrickComboBoxItemContainer
// 0x0018 (0x0018 - 0x0000)
struct WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBrickComboBoxItemWidget*               K2Node_Event_Widget;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bNewSelected;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer) == 0x000008, "Wrong alignment on WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer");
static_assert(sizeof(WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer) == 0x000018, "Wrong size on WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer");
static_assert(offsetof(WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer, EntryPoint) == 0x000000, "Member 'WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer, K2Node_Event_Widget) == 0x000008, "Member 'WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer, K2Node_Event_bNewSelected) == 0x000010, "Member 'WBP_BrickComboBoxItemContainer_C_ExecuteUbergraph_WBP_BrickComboBoxItemContainer::K2Node_Event_bNewSelected' has a wrong offset!");

// Function WBP_BrickComboBoxItemContainer.WBP_BrickComboBoxItemContainer_C.UpdateIsSelected
// 0x0001 (0x0001 - 0x0000)
struct WBP_BrickComboBoxItemContainer_C_UpdateIsSelected final
{
public:
	bool                                          bNewSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BrickComboBoxItemContainer_C_UpdateIsSelected) == 0x000001, "Wrong alignment on WBP_BrickComboBoxItemContainer_C_UpdateIsSelected");
static_assert(sizeof(WBP_BrickComboBoxItemContainer_C_UpdateIsSelected) == 0x000001, "Wrong size on WBP_BrickComboBoxItemContainer_C_UpdateIsSelected");
static_assert(offsetof(WBP_BrickComboBoxItemContainer_C_UpdateIsSelected, bNewSelected) == 0x000000, "Member 'WBP_BrickComboBoxItemContainer_C_UpdateIsSelected::bNewSelected' has a wrong offset!");

// Function WBP_BrickComboBoxItemContainer.WBP_BrickComboBoxItemContainer_C.AddItemWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_BrickComboBoxItemContainer_C_AddItemWidget final
{
public:
	class UBrickComboBoxItemWidget*               Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BrickComboBoxItemContainer_C_AddItemWidget) == 0x000008, "Wrong alignment on WBP_BrickComboBoxItemContainer_C_AddItemWidget");
static_assert(sizeof(WBP_BrickComboBoxItemContainer_C_AddItemWidget) == 0x000008, "Wrong size on WBP_BrickComboBoxItemContainer_C_AddItemWidget");
static_assert(offsetof(WBP_BrickComboBoxItemContainer_C_AddItemWidget, Widget) == 0x000000, "Member 'WBP_BrickComboBoxItemContainer_C_AddItemWidget::Widget' has a wrong offset!");

}

