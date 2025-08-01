﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PagedList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PagedList.WBP_PagedList_C
// 0x0018 (0x0318 - 0x0300)
class UWBP_PagedList_C final : public UPagedListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBrickScrollBox*                        PropertiesScrollBox;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickImage*                            Throbber;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PagedList(int32 EntryPoint);
	void BndEvt__WBP_PagedList_SelectedEntryHeaderWidget_K2Node_ComponentBoundEvent_2_OnClickedClear__DelegateSignature();
	void UpdateIsEntrySelected(bool bIsEntrySelected);
	void UpdateIsLoading(bool bNewLoading);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PagedList_C">();
	}
	static class UWBP_PagedList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PagedList_C>();
	}
};
static_assert(alignof(UWBP_PagedList_C) == 0x000008, "Wrong alignment on UWBP_PagedList_C");
static_assert(sizeof(UWBP_PagedList_C) == 0x000318, "Wrong size on UWBP_PagedList_C");
static_assert(offsetof(UWBP_PagedList_C, UberGraphFrame) == 0x000300, "Member 'UWBP_PagedList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PagedList_C, PropertiesScrollBox) == 0x000308, "Member 'UWBP_PagedList_C::PropertiesScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_PagedList_C, Throbber) == 0x000310, "Member 'UWBP_PagedList_C::Throbber' has a wrong offset!");

}

