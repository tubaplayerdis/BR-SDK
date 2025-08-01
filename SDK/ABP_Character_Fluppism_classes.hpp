﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Character_Fluppism

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Character_Fluppism.ABP_Character_Fluppism_C
// 0x0390 (0x0650 - 0x02C0)
class UABP_Character_Fluppism_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x02F8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0318(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0420(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0528(0x0108)()
	float                                         BowAngle;                                          // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAnimateBowing;                                    // 0x0634(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635[0x3];                                      // 0x0635(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseAmplitude;                                    // 0x063C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PeriodLength;                                      // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseFrequency;                                    // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_Character_Fluppism(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_Fluppism_AnimGraphNode_ModifyBone_99DB893F4C24E6212264FFBE3500F59B();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Character_Fluppism_C">();
	}
	static class UABP_Character_Fluppism_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Character_Fluppism_C>();
	}
};
static_assert(alignof(UABP_Character_Fluppism_C) == 0x000010, "Wrong alignment on UABP_Character_Fluppism_C");
static_assert(sizeof(UABP_Character_Fluppism_C) == 0x000650, "Wrong size on UABP_Character_Fluppism_C");
static_assert(offsetof(UABP_Character_Fluppism_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_Character_Fluppism_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_Character_Fluppism_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, AnimGraphNode_ComponentToLocalSpace) == 0x0002F8, "Member 'UABP_Character_Fluppism_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, AnimGraphNode_ModifyBone_2) == 0x000318, "Member 'UABP_Character_Fluppism_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, AnimGraphNode_ModifyBone_1) == 0x000420, "Member 'UABP_Character_Fluppism_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, AnimGraphNode_ModifyBone) == 0x000528, "Member 'UABP_Character_Fluppism_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, BowAngle) == 0x000630, "Member 'UABP_Character_Fluppism_C::BowAngle' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, bAnimateBowing) == 0x000634, "Member 'UABP_Character_Fluppism_C::bAnimateBowing' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, StartTime) == 0x000638, "Member 'UABP_Character_Fluppism_C::StartTime' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, NoiseAmplitude) == 0x00063C, "Member 'UABP_Character_Fluppism_C::NoiseAmplitude' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, PeriodLength) == 0x000640, "Member 'UABP_Character_Fluppism_C::PeriodLength' has a wrong offset!");
static_assert(offsetof(UABP_Character_Fluppism_C, NoiseFrequency) == 0x000644, "Member 'UABP_Character_Fluppism_C::NoiseFrequency' has a wrong offset!");

}

