﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightRamp

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightRamp.BP_LightRamp_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_LightRamp_C final : public ULightBrickStaticInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightRamp_C">();
	}
	static class UBP_LightRamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LightRamp_C>();
	}
};
static_assert(alignof(UBP_LightRamp_C) == 0x000008, "Wrong alignment on UBP_LightRamp_C");
static_assert(sizeof(UBP_LightRamp_C) == 0x0001A8, "Wrong size on UBP_LightRamp_C");

}

