﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnPointContainer

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SpawnPointContainer.WBP_SpawnPointContainer_C.ExecuteUbergraph_WBP_SpawnPointContainer
// 0x0018 (0x0018 - 0x0000)
struct WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHUDIconWidget*                         K2Node_Event_Widget;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer) == 0x000008, "Wrong alignment on WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer");
static_assert(sizeof(WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer) == 0x000018, "Wrong size on WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer");
static_assert(offsetof(WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer, EntryPoint) == 0x000000, "Member 'WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer, K2Node_Event_Widget) == 0x000008, "Member 'WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000010, "Member 'WBP_SpawnPointContainer_C_ExecuteUbergraph_WBP_SpawnPointContainer::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function WBP_SpawnPointContainer.WBP_SpawnPointContainer_C.AddIconWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_SpawnPointContainer_C_AddIconWidget final
{
public:
	class UHUDIconWidget*                         Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SpawnPointContainer_C_AddIconWidget) == 0x000008, "Wrong alignment on WBP_SpawnPointContainer_C_AddIconWidget");
static_assert(sizeof(WBP_SpawnPointContainer_C_AddIconWidget) == 0x000008, "Wrong size on WBP_SpawnPointContainer_C_AddIconWidget");
static_assert(offsetof(WBP_SpawnPointContainer_C_AddIconWidget, Widget) == 0x000000, "Member 'WBP_SpawnPointContainer_C_AddIconWidget::Widget' has a wrong offset!");

}

