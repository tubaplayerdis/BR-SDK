﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "LevelSequence_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "UMG_classes.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class LevelSequence.AnimSequenceLevelSequenceLink
// 0x0028 (0x0050 - 0x0028)
class UAnimSequenceLevelSequenceLink final : public UAssetUserData
{
public:
	struct FGuid                                  SkelTrackGuid;                                     // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        PathToLevelSequence;                               // 0x0038(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSequenceLevelSequenceLink">();
	}
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequenceLevelSequenceLink>();
	}
};
static_assert(alignof(UAnimSequenceLevelSequenceLink) == 0x000008, "Wrong alignment on UAnimSequenceLevelSequenceLink");
static_assert(sizeof(UAnimSequenceLevelSequenceLink) == 0x000050, "Wrong size on UAnimSequenceLevelSequenceLink");
static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 0x000028, "Member 'UAnimSequenceLevelSequenceLink::SkelTrackGuid' has a wrong offset!");
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 0x000038, "Member 'UAnimSequenceLevelSequenceLink::PathToLevelSequence' has a wrong offset!");

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TransformOriginActor;                              // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TransformOrigin;                                   // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultLevelSequenceInstanceData">();
	}
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultLevelSequenceInstanceData>();
	}
};
static_assert(alignof(UDefaultLevelSequenceInstanceData) == 0x000010, "Wrong alignment on UDefaultLevelSequenceInstanceData");
static_assert(sizeof(UDefaultLevelSequenceInstanceData) == 0x000070, "Wrong size on UDefaultLevelSequenceInstanceData");
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 0x000030, "Member 'UDefaultLevelSequenceInstanceData::TransformOriginActor' has a wrong offset!");
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 0x000040, "Member 'UDefaultLevelSequenceInstanceData::TransformOrigin' has a wrong offset!");

// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0000 - 0x0000)
class ILevelSequenceMetaData final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceMetaData">();
	}
	static class ILevelSequenceMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILevelSequenceMetaData>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(ILevelSequenceMetaData) == 0x000001, "Wrong alignment on ILevelSequenceMetaData");
static_assert(sizeof(ILevelSequenceMetaData) == 0x000001, "Wrong size on ILevelSequenceMetaData");

// Class LevelSequence.LevelSequence
// 0x0168 (0x01C8 - 0x0060)
class ULevelSequence final : public UMovieSceneSequence
{
public:
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovieScene*                            MovieScene;                                        // 0x0068(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap       ObjectReferences;                                  // 0x0070(0x0050)(Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences        BindingReferences;                                 // 0x00C0(0x00A0)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                               // 0x0160(0x0050)(Deprecated, Protected, NativeAccessSpecifierProtected)
	class UClass*                                 DirectorClass;                                     // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x01B8(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)

public:
	class UObject* CopyMetaData(class UObject* InMetaData);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);

	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequence">();
	}
	static class ULevelSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequence>();
	}
};
static_assert(alignof(ULevelSequence) == 0x000008, "Wrong alignment on ULevelSequence");
static_assert(sizeof(ULevelSequence) == 0x0001C8, "Wrong size on ULevelSequence");
static_assert(offsetof(ULevelSequence, MovieScene) == 0x000068, "Member 'ULevelSequence::MovieScene' has a wrong offset!");
static_assert(offsetof(ULevelSequence, ObjectReferences) == 0x000070, "Member 'ULevelSequence::ObjectReferences' has a wrong offset!");
static_assert(offsetof(ULevelSequence, BindingReferences) == 0x0000C0, "Member 'ULevelSequence::BindingReferences' has a wrong offset!");
static_assert(offsetof(ULevelSequence, PossessedObjects) == 0x000160, "Member 'ULevelSequence::PossessedObjects' has a wrong offset!");
static_assert(offsetof(ULevelSequence, DirectorClass) == 0x0001B0, "Member 'ULevelSequence::DirectorClass' has a wrong offset!");
static_assert(offsetof(ULevelSequence, AssetUserData) == 0x0001B8, "Member 'ULevelSequence::AssetUserData' has a wrong offset!");

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnInInitSettings">();
	}
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnInInitSettings>();
	}
};
static_assert(alignof(ULevelSequenceBurnInInitSettings) == 0x000008, "Wrong alignment on ULevelSequenceBurnInInitSettings");
static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x000028, "Wrong size on ULevelSequenceBurnInInitSettings");

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions final : public UObject
{
public:
	bool                                          bUseBurnIn;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         BurnInClass;                                       // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*       Settings;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnInOptions">();
	}
	static class ULevelSequenceBurnInOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnInOptions>();
	}
};
static_assert(alignof(ULevelSequenceBurnInOptions) == 0x000008, "Wrong alignment on ULevelSequenceBurnInOptions");
static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x000050, "Wrong size on ULevelSequenceBurnInOptions");
static_assert(offsetof(ULevelSequenceBurnInOptions, bUseBurnIn) == 0x000028, "Member 'ULevelSequenceBurnInOptions::bUseBurnIn' has a wrong offset!");
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 0x000030, "Member 'ULevelSequenceBurnInOptions::BurnInClass' has a wrong offset!");
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 0x000048, "Member 'ULevelSequenceBurnInOptions::Settings' has a wrong offset!");

// Class LevelSequence.LevelSequenceActor
// 0x0088 (0x02A8 - 0x0220)
class ALevelSequenceActor final : public AActor
{
public:
	uint8                                         Pad_220[0x18];                                     // 0x0220(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x0238(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequencePlayer*                   SequencePlayer;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        LevelSequence;                                     // 0x0258(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceCameraSettings           CameraSettings;                                    // 0x0270(0x0002)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_272[0x6];                                      // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequenceBurnInOptions*            BurnInOptions;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*            BindingOverrides;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAutoPlay : 1;                                     // 0x0288(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideInstanceData : 1;                         // 0x0288(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReplicatePlayback : 1;                            // 0x0288(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                DefaultInstanceData;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                   BurnInInstance;                                    // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bShowBurnin;                                       // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void HideBurnin();
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void RemoveBindingByTag(class FName Tag, class AActor* Actor);
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void ResetBindings();
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBindingByTag(class FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetSequence(class ULevelSequence* InSequence);
	void ShowBurnin();

	struct FMovieSceneObjectBindingID FindNamedBinding(class FName Tag) const;
	const TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(class FName Tag) const;
	class ULevelSequence* GetSequence() const;
	class ULevelSequencePlayer* GetSequencePlayer() const;
	class ULevelSequence* LoadSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceActor">();
	}
	static class ALevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceActor>();
	}
};
static_assert(alignof(ALevelSequenceActor) == 0x000008, "Wrong alignment on ALevelSequenceActor");
static_assert(sizeof(ALevelSequenceActor) == 0x0002A8, "Wrong size on ALevelSequenceActor");
static_assert(offsetof(ALevelSequenceActor, PlaybackSettings) == 0x000238, "Member 'ALevelSequenceActor::PlaybackSettings' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, SequencePlayer) == 0x000250, "Member 'ALevelSequenceActor::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, LevelSequence) == 0x000258, "Member 'ALevelSequenceActor::LevelSequence' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, CameraSettings) == 0x000270, "Member 'ALevelSequenceActor::CameraSettings' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, BurnInOptions) == 0x000278, "Member 'ALevelSequenceActor::BurnInOptions' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, BindingOverrides) == 0x000280, "Member 'ALevelSequenceActor::BindingOverrides' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, DefaultInstanceData) == 0x000290, "Member 'ALevelSequenceActor::DefaultInstanceData' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, BurnInInstance) == 0x000298, "Member 'ALevelSequenceActor::BurnInInstance' has a wrong offset!");
static_assert(offsetof(ALevelSequenceActor, bShowBurnin) == 0x0002A0, "Member 'ALevelSequenceActor::bShowBurnin' has a wrong offset!");

// Class LevelSequence.LevelSequenceAnimSequenceLink
// 0x0010 (0x0038 - 0x0028)
class ULevelSequenceAnimSequenceLink final : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                             // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceAnimSequenceLink">();
	}
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceAnimSequenceLink>();
	}
};
static_assert(alignof(ULevelSequenceAnimSequenceLink) == 0x000008, "Wrong alignment on ULevelSequenceAnimSequenceLink");
static_assert(sizeof(ULevelSequenceAnimSequenceLink) == 0x000038, "Wrong size on ULevelSequenceAnimSequenceLink");
static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 0x000028, "Member 'ULevelSequenceAnimSequenceLink::AnimSequenceLinks' has a wrong offset!");

// Class LevelSequence.LevelSequenceBurnIn
// 0x00C0 (0x0320 - 0x0260)
class ULevelSequenceBurnIn final : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot           FrameInformation;                                  // 0x0260(0x00B8)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                    LevelSequenceActor;                                // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void SetSettings(class UObject* InSettings);

	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnIn">();
	}
	static class ULevelSequenceBurnIn* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnIn>();
	}
};
static_assert(alignof(ULevelSequenceBurnIn) == 0x000008, "Wrong alignment on ULevelSequenceBurnIn");
static_assert(sizeof(ULevelSequenceBurnIn) == 0x000320, "Wrong size on ULevelSequenceBurnIn");
static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 0x000260, "Member 'ULevelSequenceBurnIn::FrameInformation' has a wrong offset!");
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 0x000318, "Member 'ULevelSequenceBurnIn::LevelSequenceActor' has a wrong offset!");

// Class LevelSequence.LevelSequenceDirector
// 0x0010 (0x0038 - 0x0028)
class ULevelSequenceDirector final : public UObject
{
public:
	class ULevelSequencePlayer*                   Player;                                            // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubSequenceID;                                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MovieScenePlayerIndex;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UMovieSceneSequence* GetSequence();
	void OnCreated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceDirector">();
	}
	static class ULevelSequenceDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceDirector>();
	}
};
static_assert(alignof(ULevelSequenceDirector) == 0x000008, "Wrong alignment on ULevelSequenceDirector");
static_assert(sizeof(ULevelSequenceDirector) == 0x000038, "Wrong size on ULevelSequenceDirector");
static_assert(offsetof(ULevelSequenceDirector, Player) == 0x000028, "Member 'ULevelSequenceDirector::Player' has a wrong offset!");
static_assert(offsetof(ULevelSequenceDirector, SubSequenceID) == 0x000030, "Member 'ULevelSequenceDirector::SubSequenceID' has a wrong offset!");
static_assert(offsetof(ULevelSequenceDirector, MovieScenePlayerIndex) == 0x000034, "Member 'ULevelSequenceDirector::MovieScenePlayerIndex' has a wrong offset!");

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class ULegacyLevelSequenceDirectorBlueprint final : public UBlueprint
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyLevelSequenceDirectorBlueprint">();
	}
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyLevelSequenceDirectorBlueprint>();
	}
};
static_assert(alignof(ULegacyLevelSequenceDirectorBlueprint) == 0x000008, "Wrong alignment on ULegacyLevelSequenceDirectorBlueprint");
static_assert(sizeof(ULegacyLevelSequenceDirectorBlueprint) == 0x0000A0, "Wrong size on ULegacyLevelSequenceDirectorBlueprint");

// Class LevelSequence.LevelSequencePlayer
// 0x0118 (0x0600 - 0x04E8)
class ULevelSequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	TMulticastInlineDelegate<void(class UCameraComponent* CameraComponent)> OnCameraCut;             // 0x04E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_4F8[0x108];                                    // 0x04F8(0x0108)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);

	class UCameraComponent* GetActiveCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequencePlayer">();
	}
	static class ULevelSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequencePlayer>();
	}
};
static_assert(alignof(ULevelSequencePlayer) == 0x000008, "Wrong alignment on ULevelSequencePlayer");
static_assert(sizeof(ULevelSequencePlayer) == 0x000600, "Wrong size on ULevelSequencePlayer");
static_assert(offsetof(ULevelSequencePlayer, OnCameraCut) == 0x0004E8, "Member 'ULevelSequencePlayer::OnCameraCut' has a wrong offset!");

// Class LevelSequence.LevelSequenceProjectSettings
// 0x0030 (0x0068 - 0x0038)
class ULevelSequenceProjectSettings final : public UDeveloperSettings
{
public:
	bool                                          bDefaultLockEngineToDisplayRate;                   // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultDisplayRate;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultTickResolution;                             // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUpdateClockSource                            DefaultClockSource;                                // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceProjectSettings">();
	}
	static class ULevelSequenceProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceProjectSettings>();
	}
};
static_assert(alignof(ULevelSequenceProjectSettings) == 0x000008, "Wrong alignment on ULevelSequenceProjectSettings");
static_assert(sizeof(ULevelSequenceProjectSettings) == 0x000068, "Wrong size on ULevelSequenceProjectSettings");
static_assert(offsetof(ULevelSequenceProjectSettings, bDefaultLockEngineToDisplayRate) == 0x000038, "Member 'ULevelSequenceProjectSettings::bDefaultLockEngineToDisplayRate' has a wrong offset!");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultDisplayRate) == 0x000040, "Member 'ULevelSequenceProjectSettings::DefaultDisplayRate' has a wrong offset!");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultTickResolution) == 0x000050, "Member 'ULevelSequenceProjectSettings::DefaultTickResolution' has a wrong offset!");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultClockSource) == 0x000060, "Member 'ULevelSequenceProjectSettings::DefaultClockSource' has a wrong offset!");

// Class LevelSequence.LevelSequenceMediaController
// 0x0028 (0x0248 - 0x0220)
class ALevelSequenceMediaController final : public AActor
{
public:
	uint8                                         Pad_220[0x8];                                      // 0x0220(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class ALevelSequenceActor*                    Sequence;                                          // 0x0228(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaComponent*                        MediaComponent;                                    // 0x0230(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ServerStartTimeSeconds;                            // 0x0238(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_23C[0xC];                                      // 0x023C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_ServerStartTimeSeconds();
	void Play();
	void SynchronizeToServer(float DesyncThresholdSeconds);

	class UMediaComponent* GetMediaComponent() const;
	class ALevelSequenceActor* GetSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceMediaController">();
	}
	static class ALevelSequenceMediaController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceMediaController>();
	}
};
static_assert(alignof(ALevelSequenceMediaController) == 0x000008, "Wrong alignment on ALevelSequenceMediaController");
static_assert(sizeof(ALevelSequenceMediaController) == 0x000248, "Wrong size on ALevelSequenceMediaController");
static_assert(offsetof(ALevelSequenceMediaController, Sequence) == 0x000228, "Member 'ALevelSequenceMediaController::Sequence' has a wrong offset!");
static_assert(offsetof(ALevelSequenceMediaController, MediaComponent) == 0x000230, "Member 'ALevelSequenceMediaController::MediaComponent' has a wrong offset!");
static_assert(offsetof(ALevelSequenceMediaController, ServerStartTimeSeconds) == 0x000238, "Member 'ALevelSequenceMediaController::ServerStartTimeSeconds' has a wrong offset!");

}

