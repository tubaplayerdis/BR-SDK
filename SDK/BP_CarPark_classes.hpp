﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarPark

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CarPark.BP_CarPark_C
// 0x0020 (0x0330 - 0x0310)
class ABP_CarPark_C final : public ALegacyBuilding
{
public:
	class UInstancedStaticMeshComponent*          Ramps;                                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Ceilings;                                          // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Poles;                                             // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CarPark_C">();
	}
	static class ABP_CarPark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CarPark_C>();
	}
};
static_assert(alignof(ABP_CarPark_C) == 0x000010, "Wrong alignment on ABP_CarPark_C");
static_assert(sizeof(ABP_CarPark_C) == 0x000330, "Wrong size on ABP_CarPark_C");
static_assert(offsetof(ABP_CarPark_C, Ramps) == 0x000310, "Member 'ABP_CarPark_C::Ramps' has a wrong offset!");
static_assert(offsetof(ABP_CarPark_C, Ceilings) == 0x000318, "Member 'ABP_CarPark_C::Ceilings' has a wrong offset!");
static_assert(offsetof(ABP_CarPark_C, Poles) == 0x000320, "Member 'ABP_CarPark_C::Poles' has a wrong offset!");

}

