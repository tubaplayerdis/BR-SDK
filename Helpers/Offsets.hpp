/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Copyright (c) Aaron Wilk 2025, All rights reserved.                     */
/*                                                                            */
/*    Module:     Offsets.hpp										          */
/*    Author:     Aaron Wilk                                                  */
/*    Created:    14 July 2025                                                */
/*                                                                            */
/*    Revisions:  V0.1                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/


#pragma once
#include <windows.h>
#include <libloaderapi.h>

/*
* This file is used to store various information regarding non-sdk functions/hooks so that when an update rolls around it is easier to update the information
*
* Prefixes:
* F - Function offset
* V - VTable index
* H - Hook offset
*
* Suffixes:
* _S = Signature
* _M = Mask
*
* Hooks that use sigs/masks have suffixes as to not interfere with the existing naming conventions regarding singletons for the hooks.
*/

#define BASE (unsigned long long )GetModuleHandle(NULL) //Add this to offsets. It is the base of BR: 0x140(IDA)

//Define function offsets

#define FCreateWidget BASE + 0x0CC6140
#define FSetPath BASE + 0x1226320
#define FGetPlatformFile BASE + 0x0F1EDD0
#define FGetPlatformFileManager BASE + 0x0F19360
#define FFindFilesRecursively BASE + 0x0EEF8C0
#define FGetStreamableManager BASE + 0x0CE8250
#define FRequestAsyncLoad BASE + 0x27FB500
#define FFlushRenderingCommands BASE + 0x1CA84B0
#define FWaitUntilComplete BASE + 0x2805580
#define FQuaternion BASE + 0x0F98970