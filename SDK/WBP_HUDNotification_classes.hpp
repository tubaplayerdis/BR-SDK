﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BrickRigs_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUDNotification.WBP_HUDNotification_C
// 0x0018 (0x02B8 - 0x02A0)
class UWBP_HUDNotification_C final : public UHUDNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeAnimation;                                     // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBrickBorder*                           Border;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HUDNotification(int32 EntryPoint);
	void InitializeNotification(const struct FBrickUIIconSlot& InIconSlot, const class FText& InText, EBrickUIColorStyle InColorStyle);
	void UpdateIsThumbnailNotification(bool bNewIsThumbnail);
	void PlayFadeOutAnim();
	void PlayFadeInAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUDNotification_C">();
	}
	static class UWBP_HUDNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUDNotification_C>();
	}
};
static_assert(alignof(UWBP_HUDNotification_C) == 0x000008, "Wrong alignment on UWBP_HUDNotification_C");
static_assert(sizeof(UWBP_HUDNotification_C) == 0x0002B8, "Wrong size on UWBP_HUDNotification_C");
static_assert(offsetof(UWBP_HUDNotification_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_HUDNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUDNotification_C, FadeAnimation) == 0x0002A8, "Member 'UWBP_HUDNotification_C::FadeAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_HUDNotification_C, Border) == 0x0002B0, "Member 'UWBP_HUDNotification_C::Border' has a wrong offset!");

}

