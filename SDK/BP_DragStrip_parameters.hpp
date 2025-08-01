﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DragStrip

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DragStrip.BP_DragStrip_C.CreateTreeMID
// 0x0010 (0x0010 - 0x0000)
struct BP_DragStrip_C_CreateTreeMID final
{
public:
	class UMaterialInstanceDynamic*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DragStrip_C_CreateTreeMID) == 0x000008, "Wrong alignment on BP_DragStrip_C_CreateTreeMID");
static_assert(sizeof(BP_DragStrip_C_CreateTreeMID) == 0x000010, "Wrong size on BP_DragStrip_C_CreateTreeMID");
static_assert(offsetof(BP_DragStrip_C_CreateTreeMID, ReturnValue) == 0x000000, "Member 'BP_DragStrip_C_CreateTreeMID::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragStrip_C_CreateTreeMID, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'BP_DragStrip_C_CreateTreeMID::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_DragStrip.BP_DragStrip_C.GetInteractionLocation
// 0x0024 (0x0024 - 0x0000)
struct BP_DragStrip_C_GetInteractionLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DragStrip_C_GetInteractionLocation) == 0x000004, "Wrong alignment on BP_DragStrip_C_GetInteractionLocation");
static_assert(sizeof(BP_DragStrip_C_GetInteractionLocation) == 0x000024, "Wrong size on BP_DragStrip_C_GetInteractionLocation");
static_assert(offsetof(BP_DragStrip_C_GetInteractionLocation, ReturnValue) == 0x000000, "Member 'BP_DragStrip_C_GetInteractionLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragStrip_C_GetInteractionLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00000C, "Member 'BP_DragStrip_C_GetInteractionLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DragStrip_C_GetInteractionLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000018, "Member 'BP_DragStrip_C_GetInteractionLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

