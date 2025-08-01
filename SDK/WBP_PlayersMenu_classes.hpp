﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayersMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayersMenu.WBP_PlayersMenu_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_PlayersMenu_C final : public UPlayersMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMenuButtonWidget*                      ShowProfileButton;                                 // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuButtonWidget*                      KickButton;                                        // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PlayersMenu(int32 EntryPoint);
	void Construct();
	void UpdateCanKickPlayer(bool bCanKick);
	void UpdateCanShowPlayerProfile(bool bCanShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayersMenu_C">();
	}
	static class UWBP_PlayersMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayersMenu_C>();
	}
};
static_assert(alignof(UWBP_PlayersMenu_C) == 0x000008, "Wrong alignment on UWBP_PlayersMenu_C");
static_assert(sizeof(UWBP_PlayersMenu_C) == 0x000290, "Wrong size on UWBP_PlayersMenu_C");
static_assert(offsetof(UWBP_PlayersMenu_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PlayersMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayersMenu_C, ShowProfileButton) == 0x000280, "Member 'UWBP_PlayersMenu_C::ShowProfileButton' has a wrong offset!");
static_assert(offsetof(UWBP_PlayersMenu_C, KickButton) == 0x000288, "Member 'UWBP_PlayersMenu_C::KickButton' has a wrong offset!");

}

