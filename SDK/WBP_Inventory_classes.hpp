﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Inventory.WBP_Inventory_C
// 0x0000 (0x0298 - 0x0298)
class UWBP_Inventory_C final : public UInventoryWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Inventory_C">();
	}
	static class UWBP_Inventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Inventory_C>();
	}
};
static_assert(alignof(UWBP_Inventory_C) == 0x000008, "Wrong alignment on UWBP_Inventory_C");
static_assert(sizeof(UWBP_Inventory_C) == 0x000298, "Wrong size on UWBP_Inventory_C");

}

