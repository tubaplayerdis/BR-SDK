﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MatchEnd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BrickRigs_structs.hpp"
#include "BrickRigs_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MatchEnd.WBP_MatchEnd_C
// 0x0040 (0x02A8 - 0x0268)
class UWBP_MatchEnd_C final : public UMatchEndWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MenuButtonPanel_C*                 ButtonPanel;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickSpacer*                           LeftSpacer;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickSpacer*                           RightSpacer;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickBorder*                           WinnerBorder;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickTextBlock*                        WinnerTextBlock;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButtonWidget*                      ContinueButton;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPopupHandle                           LeavePopupHandle;                                  // 0x02A0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_WBP_MatchEnd(int32 EntryPoint);
	void UpdateMatchWinner(class UBrickTeam* WinnerTeam, ETeamAttitude TeamAttitude);
	void OnClosedExitMatchPopup(EPopupResult Result);
	void OnClickedExit();
	void Construct();
	void UpdateContinueButton(int32 TimeRemaining, bool bIsHost);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MatchEnd_C">();
	}
	static class UWBP_MatchEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MatchEnd_C>();
	}
};
static_assert(alignof(UWBP_MatchEnd_C) == 0x000008, "Wrong alignment on UWBP_MatchEnd_C");
static_assert(sizeof(UWBP_MatchEnd_C) == 0x0002A8, "Wrong size on UWBP_MatchEnd_C");
static_assert(offsetof(UWBP_MatchEnd_C, UberGraphFrame) == 0x000268, "Member 'UWBP_MatchEnd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, ButtonPanel) == 0x000270, "Member 'UWBP_MatchEnd_C::ButtonPanel' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, LeftSpacer) == 0x000278, "Member 'UWBP_MatchEnd_C::LeftSpacer' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, RightSpacer) == 0x000280, "Member 'UWBP_MatchEnd_C::RightSpacer' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, WinnerBorder) == 0x000288, "Member 'UWBP_MatchEnd_C::WinnerBorder' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, WinnerTextBlock) == 0x000290, "Member 'UWBP_MatchEnd_C::WinnerTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, ContinueButton) == 0x000298, "Member 'UWBP_MatchEnd_C::ContinueButton' has a wrong offset!");
static_assert(offsetof(UWBP_MatchEnd_C, LeavePopupHandle) == 0x0002A0, "Member 'UWBP_MatchEnd_C::LeavePopupHandle' has a wrong offset!");

}

