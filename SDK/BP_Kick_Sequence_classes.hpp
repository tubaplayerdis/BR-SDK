﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Kick_Sequence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_RC_Sequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Kick_Sequence.BP_Kick_Sequence_C
// 0x0028 (0x02B0 - 0x0288)
class ABP_Kick_Sequence_C final : public ABP_RC_Sequence_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Kick_Sequence_C;                 // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   TextRender;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Runner;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TextTimeline_Height_6E6C29D64FB81D64993200A2DCA8B17F; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TextTimeline__Direction_6E6C29D64FB81D64993200A2DCA8B17F; // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TextTimeline;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Kick_Sequence(int32 EntryPoint);
	void ReceiveBeginPlay();
	void TextTimeline__UpdateFunc();
	void TextTimeline__FinishedFunc();

	struct FVector GetLookAtTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Kick_Sequence_C">();
	}
	static class ABP_Kick_Sequence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Kick_Sequence_C>();
	}
};
static_assert(alignof(ABP_Kick_Sequence_C) == 0x000008, "Wrong alignment on ABP_Kick_Sequence_C");
static_assert(sizeof(ABP_Kick_Sequence_C) == 0x0002B0, "Wrong size on ABP_Kick_Sequence_C");
static_assert(offsetof(ABP_Kick_Sequence_C, UberGraphFrame_BP_Kick_Sequence_C) == 0x000288, "Member 'ABP_Kick_Sequence_C::UberGraphFrame_BP_Kick_Sequence_C' has a wrong offset!");
static_assert(offsetof(ABP_Kick_Sequence_C, TextRender) == 0x000290, "Member 'ABP_Kick_Sequence_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_Kick_Sequence_C, Runner) == 0x000298, "Member 'ABP_Kick_Sequence_C::Runner' has a wrong offset!");
static_assert(offsetof(ABP_Kick_Sequence_C, TextTimeline_Height_6E6C29D64FB81D64993200A2DCA8B17F) == 0x0002A0, "Member 'ABP_Kick_Sequence_C::TextTimeline_Height_6E6C29D64FB81D64993200A2DCA8B17F' has a wrong offset!");
static_assert(offsetof(ABP_Kick_Sequence_C, TextTimeline__Direction_6E6C29D64FB81D64993200A2DCA8B17F) == 0x0002A4, "Member 'ABP_Kick_Sequence_C::TextTimeline__Direction_6E6C29D64FB81D64993200A2DCA8B17F' has a wrong offset!");
static_assert(offsetof(ABP_Kick_Sequence_C, TextTimeline) == 0x0002A8, "Member 'ABP_Kick_Sequence_C::TextTimeline' has a wrong offset!");

}

