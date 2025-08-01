﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TargetMarkerIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BrickRigs_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TargetMarkerIcon.WBP_TargetMarkerIcon_C
// 0x0028 (0x02B8 - 0x0290)
class UWBP_TargetMarkerIcon_C final : public UTargetMarkerIconWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBrickImage*                            AmmoTypeIcon;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickBorder*                           BrickBorder_0;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickTextBlock*                        DistanceTextBlock;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrickImage*                            FireActionIcon;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateAmmoType(EAmmoType NewType);
	void UpdateTargetDistance(float NewDist);
	void UpdateFireAction(int32 NewActionIndex);
	void UpdateHasValidTarget(bool bNewHasValidTarget);
	void ExecuteUbergraph_WBP_TargetMarkerIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TargetMarkerIcon_C">();
	}
	static class UWBP_TargetMarkerIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TargetMarkerIcon_C>();
	}
};
static_assert(alignof(UWBP_TargetMarkerIcon_C) == 0x000008, "Wrong alignment on UWBP_TargetMarkerIcon_C");
static_assert(sizeof(UWBP_TargetMarkerIcon_C) == 0x0002B8, "Wrong size on UWBP_TargetMarkerIcon_C");
static_assert(offsetof(UWBP_TargetMarkerIcon_C, UberGraphFrame) == 0x000290, "Member 'UWBP_TargetMarkerIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TargetMarkerIcon_C, AmmoTypeIcon) == 0x000298, "Member 'UWBP_TargetMarkerIcon_C::AmmoTypeIcon' has a wrong offset!");
static_assert(offsetof(UWBP_TargetMarkerIcon_C, BrickBorder_0) == 0x0002A0, "Member 'UWBP_TargetMarkerIcon_C::BrickBorder_0' has a wrong offset!");
static_assert(offsetof(UWBP_TargetMarkerIcon_C, DistanceTextBlock) == 0x0002A8, "Member 'UWBP_TargetMarkerIcon_C::DistanceTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TargetMarkerIcon_C, FireActionIcon) == 0x0002B0, "Member 'UWBP_TargetMarkerIcon_C::FireActionIcon' has a wrong offset!");

}

