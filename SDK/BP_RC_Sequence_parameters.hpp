﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RC_Sequence

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_RC_Sequence.BP_RC_Sequence_C.ExecuteUbergraph_BP_RC_Sequence
// 0x0100 (0x0100 - 0x0000)
struct BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVehicleDestroyed_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue; // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0074(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence) == 0x000010, "Wrong alignment on BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence");
static_assert(sizeof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence) == 0x000100, "Wrong size on BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, EntryPoint) == 0x000000, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_IsVehicleDestroyed_ReturnValue) == 0x000004, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_IsVehicleDestroyed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_GetSplineLength_ReturnValue) == 0x000014, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue) == 0x000020, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_GetTransformAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_BreakTransform_Location) == 0x000050, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000074, "Member 'BP_RC_Sequence_C_ExecuteUbergraph_BP_RC_Sequence::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function BP_RC_Sequence.BP_RC_Sequence_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_RC_Sequence_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RC_Sequence_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_RC_Sequence_C_ReceiveTick");
static_assert(sizeof(BP_RC_Sequence_C_ReceiveTick) == 0x000004, "Wrong size on BP_RC_Sequence_C_ReceiveTick");
static_assert(offsetof(BP_RC_Sequence_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_RC_Sequence_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_RC_Sequence.BP_RC_Sequence_C.KickVehicle
// 0x000C (0x000C - 0x0000)
struct BP_RC_Sequence_C_KickVehicle final
{
public:
	struct FVector                                Impulse;                                           // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RC_Sequence_C_KickVehicle) == 0x000004, "Wrong alignment on BP_RC_Sequence_C_KickVehicle");
static_assert(sizeof(BP_RC_Sequence_C_KickVehicle) == 0x00000C, "Wrong size on BP_RC_Sequence_C_KickVehicle");
static_assert(offsetof(BP_RC_Sequence_C_KickVehicle, Impulse) == 0x000000, "Member 'BP_RC_Sequence_C_KickVehicle::Impulse' has a wrong offset!");

// Function BP_RC_Sequence.BP_RC_Sequence_C.GetLookAtTarget
// 0x0018 (0x0018 - 0x0000)
struct BP_RC_Sequence_C_GetLookAtTarget final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RC_Sequence_C_GetLookAtTarget) == 0x000004, "Wrong alignment on BP_RC_Sequence_C_GetLookAtTarget");
static_assert(sizeof(BP_RC_Sequence_C_GetLookAtTarget) == 0x000018, "Wrong size on BP_RC_Sequence_C_GetLookAtTarget");
static_assert(offsetof(BP_RC_Sequence_C_GetLookAtTarget, ReturnValue) == 0x000000, "Member 'BP_RC_Sequence_C_GetLookAtTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetLookAtTarget, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00000C, "Member 'BP_RC_Sequence_C_GetLookAtTarget::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

// Function BP_RC_Sequence.BP_RC_Sequence_C.GetTrailerRotation
// 0x0048 (0x0048 - 0x0000)
struct BP_RC_Sequence_C_GetTrailerRotation final
{
public:
	struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue; // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RC_Sequence_C_GetTrailerRotation) == 0x000004, "Wrong alignment on BP_RC_Sequence_C_GetTrailerRotation");
static_assert(sizeof(BP_RC_Sequence_C_GetTrailerRotation) == 0x000048, "Wrong size on BP_RC_Sequence_C_GetTrailerRotation");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, ReturnValue) == 0x000000, "Member 'BP_RC_Sequence_C_GetTrailerRotation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_BreakVector_X) == 0x00000C, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_BreakVector_Y) == 0x000010, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_BreakVector_Z) == 0x000014, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_GetSplineLength_ReturnValue) == 0x00001C, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_Add_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_Less_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000028, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_SelectFloat_ReturnValue) == 0x00002C, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue) == 0x000030, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_GetTrailerRotation, CallFunc_ComposeRotators_ReturnValue) == 0x00003C, "Member 'BP_RC_Sequence_C_GetTrailerRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");

// Function BP_RC_Sequence.BP_RC_Sequence_C.IsVehicleDestroyed
// 0x0002 (0x0002 - 0x0000)
struct BP_RC_Sequence_C_IsVehicleDestroyed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RC_Sequence_C_IsVehicleDestroyed) == 0x000001, "Wrong alignment on BP_RC_Sequence_C_IsVehicleDestroyed");
static_assert(sizeof(BP_RC_Sequence_C_IsVehicleDestroyed) == 0x000002, "Wrong size on BP_RC_Sequence_C_IsVehicleDestroyed");
static_assert(offsetof(BP_RC_Sequence_C_IsVehicleDestroyed, ReturnValue) == 0x000000, "Member 'BP_RC_Sequence_C_IsVehicleDestroyed::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RC_Sequence_C_IsVehicleDestroyed, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x000001, "Member 'BP_RC_Sequence_C_IsVehicleDestroyed::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");

}

