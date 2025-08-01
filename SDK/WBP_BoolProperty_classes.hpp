﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BoolProperty

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BoolProperty.WBP_BoolProperty_C
// 0x0000 (0x0288 - 0x0288)
class UWBP_BoolProperty_C final : public UBoolPropertyWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BoolProperty_C">();
	}
	static class UWBP_BoolProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BoolProperty_C>();
	}
};
static_assert(alignof(UWBP_BoolProperty_C) == 0x000008, "Wrong alignment on UWBP_BoolProperty_C");
static_assert(sizeof(UWBP_BoolProperty_C) == 0x000288, "Wrong size on UWBP_BoolProperty_C");

}

