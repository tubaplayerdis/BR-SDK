﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SpawnPointContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SpawnPointContainer.WBP_SpawnPointContainer_C
// 0x0010 (0x02E0 - 0x02D0)
class UWBP_SpawnPointContainer_C final : public UHUDIconContainerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBrickHorizontalBox*                    ContentBox;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SpawnPointContainer(int32 EntryPoint);
	void AddIconWidget(class UHUDIconWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SpawnPointContainer_C">();
	}
	static class UWBP_SpawnPointContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SpawnPointContainer_C>();
	}
};
static_assert(alignof(UWBP_SpawnPointContainer_C) == 0x000008, "Wrong alignment on UWBP_SpawnPointContainer_C");
static_assert(sizeof(UWBP_SpawnPointContainer_C) == 0x0002E0, "Wrong size on UWBP_SpawnPointContainer_C");
static_assert(offsetof(UWBP_SpawnPointContainer_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_SpawnPointContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SpawnPointContainer_C, ContentBox) == 0x0002D8, "Member 'UWBP_SpawnPointContainer_C::ContentBox' has a wrong offset!");

}

