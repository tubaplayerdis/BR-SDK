#include "GameFunctions.hpp"
#include "Offsets.hpp"
#include <windows.h>
#include <tlhelp32.h>
#include "UnrealContainers.hpp"
#include "../SDK/Basic.hpp"
#include "../SDK/Engine_classes.hpp"
#include "../SDK/Engine_structs.hpp"
#include "../SDK/CoreUObject_classes.hpp"
#include "../SDK/UMG_classes.hpp"
#include "header"

namespace __Utilities
{
	namespace __Data
	{
		 struct FSHFiller
		 {
		 	uint8_t padding[0x10];
		 };

		 struct FStreamableHandle : FSHFiller
		 {
		 	bool bLoadCompleted;
		 	bool bReleased;
		 	bool bCanceled;
		 	bool bStalled;
		 	bool bReleaseWhenLoaded;
		 	bool bIsCombinedHandle;
		 	uint8_t pad[50];
		 	UC::FString DebugName;
		 	int priority;
		 	int StreamablesLoading;
		 	int CompletedChildCount;
		 	int CanceledChildCount;
		 	uint8_t pad1[48];
		 	void* OwningManager;
		 };

		 static_assert(sizeof(FStreamableHandle) == 0xA0);

		 struct falseSharedPtr
		 {
		 	FStreamableHandle* ptr;
		 	uint8_t pad[0x8];
		 };
	}

 	inline SDK::TDelegate<void __cdecl(void)> delasync = SDK::TDelegate<void __cdecl(void)>(); //Mock delegate to pass to LoadPackageAsync

	inline void* GetStreamableManager()
	{
		return CallGameFunction<void*>(FGetStreamableManager);
	}

 	inline void* GetPlatformFile()
	{
		return CallGameFunction<void*, void*>(FGetPlatformFile, CallGameFunction<void*>(FGetPlatformFileManager));
	}

	inline void SetPath(SDK::FakeSoftObjectPtr::FSoftObjectPath* This, SDK::FName pathname)
	{
		return CallGameFunction<void, SDK::FakeSoftObjectPtr::FSoftObjectPath*, SDK::FName>(FSetPath, This, pathname);
	}

    inline std::wstring towstring(const std::string& str)
    {
        int size_needed = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, nullptr, 0);
        std::wstring wstr(size_needed, 0);
        MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, &wstr[0], size_needed);
        wstr.pop_back();
        return wstr;
    }

 	inline UC::TArray<UC::FString> GetVirtualFileSystemFiles()
	{
   		UC::FString gamepath = SDK::UBlueprintPathsLibrary::ProjectContentDir();
  		UC::TArray<UC::FString> ret;
		CallGameFunction<void, void*, UC::TArray<UC::FString>*, const wchar_t*, const wchar_t*>(FFindFilesRecursively, GetPlatformFile(), &ret, gamepath.CStr(), L".uasset");
		return ret;
	}

	inline void RequestAsyncLoad(SDK::FakeSoftObjectPtr::FSoftObjectPath* path)
	{
		__Data::falseSharedPtr ptr{};
		ptr.ptr = nullptr;
		UC::FString str = UC::FString(L"LoadAssetList");
		__Data::falseSharedPtr* ptrret = CallGameFunction<__Data::falseSharedPtr*, void*, __Data::falseSharedPtr*, const SDK::FakeSoftObjectPtr::FSoftObjectPath*, SDK::TDelegate<void __cdecl(void)>*, int, bool, bool, SDK::FString*>(FRequestAsyncLoad, GetStreamableManager(), &ptr, path, &delasync, 0, true, false, &str);
		CallGameFunction<void, bool>(FFlushRenderingCommands, true);//FlushRenderingCommands. Force a wait as the package queues.
		CallGameFunction<void, bool>(FFlushRenderingCommands, true);
		CallGameFunction<__int64, void*, float, bool>(FWaitUntilComplete, ptr.ptr, 0.0, 1);
	}

    inline void AttemptLoadClass(const char* classname)
    {
    	std::wstring universal = towstring(classname);
    	universal = universal.substr(universal.find_first_of('B'));//remove the ABP, UBP, UWBP.
    	std::wstring lookfor = universal;
    	lookfor.pop_back();
    	lookfor.pop_back();
    	lookfor.append(L".");//Remove the _C and add a dot so that we know when the name ends.
    	std::wstring res = std::wstring(L"NONE");
    	UC::TArray<UC::FString> files = GetVirtualFileSystemFiles();
    	for (int i = 0; i < files.Num(); i++)
    	{
    		if (files[i].ToWString().find(std::wstring(lookfor)) != std::string::npos)
    		{
    			//../../../BrickRigs/Content/BrickRigs/UI/Properties/WBP_PropertiesPanel.uasset
    			std::wstring original = files[i].ToWString();
    			const std::wstring target = L"BrickRigs/";

    			// Find the first occurrence of "BrickRigs/"
    			size_t firstBrickRigs = original.find(target);
    			if (firstBrickRigs == std::wstring::npos) {
    				break;
    			}

    			// Find the next "BrickRigs/" after the first one (skipping "BrickRigs/Content/")
    			size_t secondBrickRigs = original.find(target, firstBrickRigs + target.length());
    			if (secondBrickRigs == std::wstring::npos) {
    				break;
    			}
    			// Extract from the second "BrickRigs/"
    			std::wstring result = original.substr(secondBrickRigs);

    			// Remove the ".uasset" extension
    			size_t dotPos = result.rfind('.');
    			if (dotPos != std::wstring::npos) {
    				result = result.substr(0, dotPos);
    			}

    			//Find the package name. Everything after the last slash
    			size_t slashpos = result.find_last_of('/');
    			std::wstring packname = L"";
    			if (slashpos != std::wstring::npos)
    			{
    				packname = result.substr(slashpos + 1);
    			}

    			result = L"/Game/" + result;

    			result.append(L".");
    			result.append(packname);
    			result.append(L"_C");

    			std::wcout << result << std::endl;

    			res = result;
    			break;
    		}
    	}

    	if (res == L"NONE") { std::cout << "Failed to load Class!" << std::endl; return; }

    	SDK::TSoftClassPtr<SDK::UClass> ptr = SDK::TSoftClassPtr<SDK::UClass>();
    	const SDK::FName path = SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(res.c_str()));//FString is volatile and wrong. only use as const for final step moving on.
    	SetPath(&ptr.ObjectID, path);
    	RequestAsyncLoad(&ptr.ObjectID);
    	return;
    }
}

template<typename T>
inline SDK::UClass* GetClassInternal(const char* clsobjname)
{
	SDK::UClass* objcls = T::StaticClass();
	if (objcls == nullptr) {
		__Utilities::AttemptLoadClass(clsobjname); //This should only be called on UBP classes.
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			objcls = T::StaticClass();
			if (objcls) {
				return objcls;
			}
			Sleep(200);
		}
	}
	return nullptr;
}

template<typename T>
inline T* SpawnObjectInternal(SDK::UObject* outerobj, const char* objclsname)
{
	SDK::UClass* objcls = T::StaticClass();
	if (objcls == nullptr) {
		__Utilities::AttemptLoadClass(objclsname); //This should only be called on UBP classes.
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			objcls = T::StaticClass();
			if (objcls) {
				break;
			}
			Sleep(200);
		}
	}
	return static_cast<T*>(SDK::UGameplayStatics::SpawnObject(objcls, outerobj));
}

template<typename T>
inline T* CreateWidgetInternal(SDK::TSubclassOf<SDK::UUserWidget> UserWidgetClass, const char* WidgetClassName)
{

	if (UserWidgetClass == nullptr) {
		__Utilities::AttemptLoadClass(WidgetClassName);
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			UserWidgetClass = T::StaticClass();
			if (UserWidgetClass) {
				break;
			}
			Sleep(200);
		}
	}

	return static_cast<T*>(CallGameFunction<SDK::UUserWidget*, SDK::UWorld*, SDK::TSubclassOf<SDK::UUserWidget>, SDK::FName>(FCreateWidget, SDK::UWorld::GetWorld(), UserWidgetClass, SDK::FName()));
}

template<typename T>
inline T* SpawnActorInternal(SDK::AActor* outeract, const char* objclsname)
{
	if (outeract == nullptr)
	{
		std::cout << "outer was null!" << std::endl;
		return nullptr;//requires it.
	}
	SDK::FTransform transform = outeract->GetTransform();
	SDK::UClass* objcls = T::StaticClass();
	if (objcls == nullptr) {
		__Utilities::AttemptLoadClass(objclsname);
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			objcls = T::StaticClass();
			if (objcls) {
				break;
			}
			Sleep(200);
		}
	}
	else std::cout << "class was present!" << std::endl;
	SDK::ESpawnActorCollisionHandlingMethod method = SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SDK::AActor* act = SDK::UGameplayStatics::BeginDeferredActorSpawnFromClass(SDK::UWorld::GetWorld(), objcls, transform, method, outeract);
	return static_cast<T*>(SDK::UGameplayStatics::FinishSpawningActor(act, transform));
}

template<typename T>
inline T* SpawnActorInternal(SDK::FTransform transform, SDK::AActor* outeract, const char* objclsname, bool deferred)
{
	SDK::UClass* objcls = T::StaticClass();
	if (objcls == nullptr) {
		__Utilities::AttemptLoadClass(objclsname);
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			objcls = T::StaticClass();
			if (objcls) {
				break;
			}
			Sleep(200);
		}
	}
	SDK::ESpawnActorCollisionHandlingMethod method = SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SDK::AActor* act = SDK::UGameplayStatics::BeginDeferredActorSpawnFromClass(SDK::UWorld::GetWorld(), objcls, transform, method, outeract);
	SDK::UGameplayStatics::FinishSpawningActor(act, transform);
	return static_cast<T*>(act);
}

template<typename T>
inline T* SpawnActorInternal(SDK::FVector position, SDK::AActor* outeract, const char* objclsname)
{
	SDK::FRotator rotator = SDK::FRotator();
	if (!outeract)
	{
		rotator = SDK::FRotator(0, 0, 0);
	}
	else rotator = outeract->K2_GetActorRotation();
	SDK::FTransform transform = SDK::FTransform();
	transform.Translation = position;
	transform.Scale3D = SDK::FVector(1, 1, 1);
	SDK::FQuat formed = SDK::FQuat();
	SDK::FQuat* ptr = CallGameFunction<SDK::FQuat*, SDK::FRotator*, SDK::FQuat*>(FQuaternion, &rotator, &formed);
	formed = *ptr;
	transform.Rotation = formed;
	SDK::UClass* objcls = T::StaticClass();
	if (objcls == nullptr) {
		__Utilities::AttemptLoadClass(objclsname);
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			objcls = T::StaticClass();
			if (objcls) {
				break;
			}
			Sleep(200);
		}
	}
	SDK::ESpawnActorCollisionHandlingMethod method = SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SDK::AActor* act = SDK::UGameplayStatics::BeginDeferredActorSpawnFromClass(SDK::UWorld::GetWorld(), objcls, transform, method, outeract);
	SDK::UGameplayStatics::FinishSpawningActor(act, transform);
	return static_cast<T*>(act);
}

template<typename T>
inline T* SpawnActorInternal(SDK::FVector position, SDK::FRotator rotation, SDK::AActor* outeract, const char* objclsname)
{
	SDK::FTransform transform = SDK::FTransform();
	transform.Translation = position;
	transform.Scale3D = SDK::FVector(1, 1, 1);
	SDK::FQuat formed = SDK::FQuat();
	formed = &CallGameFunction<SDK::FQuat*, SDK::FRotator*, SDK::FQuat*>(FQuaternion, &rotation, &formed);
	transform.Rotation = formed;
	SDK::UClass* objcls = T::StaticClass();
	if (objcls == nullptr) {
		__Utilities::AttemptLoadClass(objclsname);
		for (int i = 0; i < 5; i++) //The class should have loaded, but give it some time if not.
		{
			objcls = T::StaticClass();
			if (objcls) {
				break;
			}
			Sleep(200);
		}
	}
	SDK::ESpawnActorCollisionHandlingMethod method = SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SDK::AActor* act = SDK::UGameplayStatics::BeginDeferredActorSpawnFromClass(SDK::UWorld::GetWorld(), objcls, transform, method, outeract);
	SDK::UGameplayStatics::FinishSpawningActor(act, transform);
	return static_cast<T*>(act);
}