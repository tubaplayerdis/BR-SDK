﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hospital_Builder

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hospital_Builder.BP_Hospital_Builder_C
// 0x0000 (0x0310 - 0x0310)
class ABP_Hospital_Builder_C final : public ALegacyBuilding
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hospital_Builder_C">();
	}
	static class ABP_Hospital_Builder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hospital_Builder_C>();
	}
};
static_assert(alignof(ABP_Hospital_Builder_C) == 0x000010, "Wrong alignment on ABP_Hospital_Builder_C");
static_assert(sizeof(ABP_Hospital_Builder_C) == 0x000310, "Wrong size on ABP_Hospital_Builder_C");

}

