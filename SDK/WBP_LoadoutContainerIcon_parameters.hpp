﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadoutContainerIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LoadoutContainerIcon.WBP_LoadoutContainerIcon_C.GetIconDisplayName
// 0x0018 (0x0018 - 0x0000)
struct WBP_LoadoutContainerIcon_C_GetIconDisplayName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WBP_LoadoutContainerIcon_C_GetIconDisplayName) == 0x000008, "Wrong alignment on WBP_LoadoutContainerIcon_C_GetIconDisplayName");
static_assert(sizeof(WBP_LoadoutContainerIcon_C_GetIconDisplayName) == 0x000018, "Wrong size on WBP_LoadoutContainerIcon_C_GetIconDisplayName");
static_assert(offsetof(WBP_LoadoutContainerIcon_C_GetIconDisplayName, ReturnValue) == 0x000000, "Member 'WBP_LoadoutContainerIcon_C_GetIconDisplayName::ReturnValue' has a wrong offset!");

}

