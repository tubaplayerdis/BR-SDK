/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Copyright (c) Aaron Wilk 2025, All rights reserved.                     */
/*                                                                            */
/*    Module:     UtilitiesImplementation.hpp				      */
/*    Author:     Aaron Wilk                                                  */
/*    Created:    14 July 2025                                                */
/*                                                                            */
/*    Revisions:  V0.1                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#pragma once
#include "../SDK/Basic.hpp"
#include "../SDK/BrickRigs_classes.hpp"
#include "../SDK/UMG_classes.hpp"

///Gets the UClass from the string and templates representation of the class. do not use. Use the GetUClass() macro.
template<typename T>
SDK::UClass* GetClassInternal(const char* clsobjname);

///Class safe version of SDK::UGameplayStatics::SpawnObject. Use the SpawnObject() macro instead of this function.
template<typename T>
T* SpawnObjectInternal(SDK::UObject* outerobj, const char* objclsname);

template<typename T>
T* CreateWidgetInternal(SDK::TSubclassOf<SDK::UUserWidget> UserWidgetClass, const char* WidgetClassName);

template<typename T>
T* SpawnActorInternal(SDK::AActor* outeract, const char* objclsname);

template<typename T>
T* SpawnActorInternal(SDK::FTransform transform, SDK::AActor* outeract, const char* objclsname, bool deferred);

template<typename T>
T* SpawnActorInternal(SDK::FVector position, SDK::AActor* outeract, const char* objclsname);

template<typename T>
T* SpawnActorInternal(SDK::FVector position, SDK::FRotator rotation, SDK::AActor* outeract, const char* objclsname);