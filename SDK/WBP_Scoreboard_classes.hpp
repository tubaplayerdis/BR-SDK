﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Scoreboard

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Scoreboard.WBP_Scoreboard_C
// 0x0010 (0x02F8 - 0x02E8)
class UWBP_Scoreboard_C final : public UScoreboardWidget
{
public:
	class UMenuButtonWidget*                      PlayerProfileButton;                               // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuButtonWidget*                      KickButton;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Scoreboard_C">();
	}
	static class UWBP_Scoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Scoreboard_C>();
	}
};
static_assert(alignof(UWBP_Scoreboard_C) == 0x000008, "Wrong alignment on UWBP_Scoreboard_C");
static_assert(sizeof(UWBP_Scoreboard_C) == 0x0002F8, "Wrong size on UWBP_Scoreboard_C");
static_assert(offsetof(UWBP_Scoreboard_C, PlayerProfileButton) == 0x0002E8, "Member 'UWBP_Scoreboard_C::PlayerProfileButton' has a wrong offset!");
static_assert(offsetof(UWBP_Scoreboard_C, KickButton) == 0x0002F0, "Member 'UWBP_Scoreboard_C::KickButton' has a wrong offset!");

}

