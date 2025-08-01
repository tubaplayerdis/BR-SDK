﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DragV8

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DragV8.BP_DragV8_C
// 0x0000 (0x01E8 - 0x01E8)
class UBP_DragV8_C final : public UMotorBrickStaticInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DragV8_C">();
	}
	static class UBP_DragV8_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DragV8_C>();
	}
};
static_assert(alignof(UBP_DragV8_C) == 0x000008, "Wrong alignment on UBP_DragV8_C");
static_assert(sizeof(UBP_DragV8_C) == 0x0001E8, "Wrong size on UBP_DragV8_C");

}

