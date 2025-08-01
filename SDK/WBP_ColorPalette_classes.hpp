﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ColorPalette

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ColorPalette.WBP_ColorPalette_C
// 0x0000 (0x02B8 - 0x02B8)
class UWBP_ColorPalette_C final : public UColorPaletteWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ColorPalette_C">();
	}
	static class UWBP_ColorPalette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ColorPalette_C>();
	}
};
static_assert(alignof(UWBP_ColorPalette_C) == 0x000008, "Wrong alignment on UWBP_ColorPalette_C");
static_assert(sizeof(UWBP_ColorPalette_C) == 0x0002B8, "Wrong size on UWBP_ColorPalette_C");

}

