﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HostGame

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_HostGame.WBP_HostGame_C.ExecuteUbergraph_WBP_HostGame
// 0x0098 (0x0098 - 0x0000)
struct WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCanPlay;                             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsOnline;                            // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0060(0x0018)()
	class UMenuWidget*                            CallFunc_GetMenuWidget_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Menu_C*                            K2Node_DynamicCast_AsWBP_Menu;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMenuButtonWidget*                      CallFunc_CreateButton_ReturnValue;                 // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame) == 0x000008, "Wrong alignment on WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame");
static_assert(sizeof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame) == 0x000098, "Wrong size on WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, EntryPoint) == 0x000000, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, Temp_text_Variable) == 0x000018, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, Temp_text_Variable_1) == 0x000030, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, Temp_bool_Variable) == 0x000048, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, Temp_int_Variable) == 0x00004C, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, Temp_int_Variable_1) == 0x000050, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_Event_bCanPlay) == 0x000054, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_Event_bCanPlay' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_Event_bIsOnline) == 0x000055, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_Event_bIsOnline' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_Select_Default) == 0x000058, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, Temp_bool_Variable_1) == 0x00005C, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_Select_Default_1) == 0x000060, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, CallFunc_GetMenuWidget_ReturnValue) == 0x000078, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::CallFunc_GetMenuWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_DynamicCast_AsWBP_Menu) == 0x000080, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_DynamicCast_AsWBP_Menu' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame, CallFunc_CreateButton_ReturnValue) == 0x000090, "Member 'WBP_HostGame_C_ExecuteUbergraph_WBP_HostGame::CallFunc_CreateButton_ReturnValue' has a wrong offset!");

// Function WBP_HostGame.WBP_HostGame_C.UpdatePlayButton
// 0x0002 (0x0002 - 0x0000)
struct WBP_HostGame_C_UpdatePlayButton final
{
public:
	bool                                          bCanPlay;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsOnline;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_HostGame_C_UpdatePlayButton) == 0x000001, "Wrong alignment on WBP_HostGame_C_UpdatePlayButton");
static_assert(sizeof(WBP_HostGame_C_UpdatePlayButton) == 0x000002, "Wrong size on WBP_HostGame_C_UpdatePlayButton");
static_assert(offsetof(WBP_HostGame_C_UpdatePlayButton, bCanPlay) == 0x000000, "Member 'WBP_HostGame_C_UpdatePlayButton::bCanPlay' has a wrong offset!");
static_assert(offsetof(WBP_HostGame_C_UpdatePlayButton, bIsOnline) == 0x000001, "Member 'WBP_HostGame_C_UpdatePlayButton::bIsOnline' has a wrong offset!");

}

