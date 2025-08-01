﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Chat.WBP_Chat_C
// 0x0010 (0x02C0 - 0x02B0)
class UWBP_Chat_C final : public UChatWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBrickBorder*                           WarningBorder;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Chat(int32 EntryPoint);
	void UpdateIsTyping(bool bNewTyping);
	void UpdateIsFocused(bool bNewFocused);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Chat_C">();
	}
	static class UWBP_Chat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Chat_C>();
	}
};
static_assert(alignof(UWBP_Chat_C) == 0x000008, "Wrong alignment on UWBP_Chat_C");
static_assert(sizeof(UWBP_Chat_C) == 0x0002C0, "Wrong size on UWBP_Chat_C");
static_assert(offsetof(UWBP_Chat_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_Chat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Chat_C, WarningBorder) == 0x0002B8, "Member 'UWBP_Chat_C::WarningBorder' has a wrong offset!");

}

