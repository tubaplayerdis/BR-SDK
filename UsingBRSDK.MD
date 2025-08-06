# Using BR-SDK

This guide will go over the specifics of BR-SDK and its special abilities and functions. Firstly, read this to learn how to setup and use the SDK in a more general way.

# Please Read:
[Dumper-7 Tutorial](https://github.com/Encryqed/Dumper-7/blob/main/UsingTheSDK.md)

## Note

All of these function are included using the file: ```Utils.hpp```

## Linker Errors

Due to the nature of the SDK, calling functions on classes causes linker errors. To fix this use the add existing item feature of Rider and VS to "add" the SDK's cpp files to your project. For rider make sure to add file links instead of moving thr files. The SDK's cpp files are in the SDK directory. **READ** the dumper-7 UsingTheSDK.MD for more info.

## Classes

One of the more important aspects of Brick Rigs is its use of Blueprints for the highest level interactions and gameplay logic. Due to Unreal Engine optimizations, the classes of Blueprints get unloaded/loaded as needed. Because of this, the traditional way of getting the UClass of a class from the SDK EX: (SDK::UBrick::StaticClass()) is not always safe and might return a nullptr, cauing a crash. **To fix this**, BR-SDK replicates the class loading system of UE when getting classes. For a safer way of getting the UClass of a class, use the `GetUClass` macro.

## Functions

One of the unfortunate things regarding generated SDK's is that they are not complete. This is mostly due to that the only functions that get exposed in SDK's have to be accessible from the reflection system. To get around this, BR-SDK introduces the function: `CallGameFunction()`, which is a templated function that can internally call any function in the game. Its documentation is available below. There is also a VTable specific verion: `CallVTableFunction()`

## UObjects

Another important aspect of Unreal Engine are UObjects, which is the base class for almost everything in a UE game. To create them use the `SpawnObject()` macro. It is a class safe version of `SDK::UGameplayStatics::SpawnObject()` Its documentation is avialible below.

## Widgets

To create widgets properly in Unreal Engine using BR-SDK, use the `CreateWidget()` macro. It is a class safe version and can be used to properly create widgets.

## Actors

To spawn in actors properly use the `SpawnActor()` macro or any of its similars. This macro is class safe and works with internal Unreal Engine systems

# BR-SDK Specific Documentation:

---

## `GetUClass`

Gets the `UClass` from the SDK class. Will load Blueprint classes as necessary.

### Declaration

```cpp
#define GetUClass(cls) GetClassInternal<cls>(#cls)
```

### Parameters

- `cls`: The SDK class of the new object (not the `UClass`).  
  **Example**: `SDK::UBrickBorder`

### Returns

A pointer to the corresponding `UClass`.

### Notes

This macro internally calls `GetClassInternal<cls>(#cls)` to retrieve the `UClass`, and supports loading Blueprint classes if they are not already loaded.

---

## `SpawnObject`

Spawns a new `UObject` using internal Unreal Engine systems. Use this when creating `UObject` instances. Will load blueprint classes as necessary.

### Declaration

```cpp
#define SpawnObject(cls, out) SpawnObjectInternal<cls>(out, #cls)
```

### Parameters

- `cls`: The class of the new object (not the `UClass`).  
  **Example**: `SDK::UBrickBorder`
- `out`: A pointer to the outer object with which the new object should be created.

### Returns

A pointer to the newly created `UObject`.

---

## `CreateWidget`

Creates a new `UUserWidget`-derived object using internal Unreal Engine systems.  
Use `SpawnObject` for widgets not derived from `UUserWidget`. Will load Blueprint classes as necessary.

### Declaration

```cpp
#define CreateWidget(cls) CreateWidgetInternal<cls>(cls::StaticClass(), #cls)
```

### Parameters

- `cls`: The class of the new widget (not the `UClass`).  
  **Example**: `SDK::UWPB_PropertyContainer_C`

### Returns

A pointer to the newly created widget.

---

# BR-SDK Docs-Functions

## `CallGameFunction`

Calls an internal game function using its absolute memory address.

### Template Parameters

- `TRet`: Return type of the function.
- `TArgs...`: Argument types of the function.

### Declaration

```cpp
template<typename TRet, typename... TArgs>
inline TRet CallGameFunction(unsigned long long addr, TArgs... args);
```

### Parameters

- `addr`: Address of the function (calculated as an offset from the base module).
- `args...`: Arguments to pass to the function.

### Returns

`TRet` — The return value of the called function.

### Example

```cpp
double* foo = CallGameFunction<double*, int>((unsigned long long)GetModuleHandle(NULL) + 0x123456, 5);
```

---

## `CallVTableFunction`

Calls an internal game function using its index in a virtual function table (vtable).

### Template Parameters

- `TRet`: Return type of the function.
- `TArgs...`: Argument types of the function.

### Declaration

```cpp
template<typename TRet, typename... TArgs>
inline TRet CallVTableFunction(int index, void* object, TArgs... args);
```

### Parameters

- `index`: Index of the function in the vtable (not pre-divided by 8).
- `object`: A valid pointer to an object whose vtable contains the function.
- `args...`: Arguments to pass to the function.

### Returns

`TRet` — The return value of the called function.

---

## `FindPatternF`

Finds the address of a function in memory using a byte pattern and mask.

### Declaration

```cpp
inline unsigned long long FindPatternF(const char* pattern, const char* mask);
```

### Parameters

- `pattern`: The byte pattern to search for (format: `\x00`).
- `mask`: The mask for the pattern. Use `'x'` for exact matches and `'?'` for wildcards.

### Returns

A pointer to the function matching the given pattern and mask, or `0` if not found.

---

## `DestroyActor`

Destroys an `AActor` using internal Unreal Engine (UE) systems.

### Declaration

```cpp
#define DestroyActor(actor) actor->K2_DestroyActor()
````

### Parameters

  - `actor`: A valid pointer to the `AActor` to be destroyed.

### Returns

`None` — This function does not return a value.

-----

## `SpawnActor`

Spawns a new `AActor` using internal UE systems. The actor is created with the specified parent and inherits its location and rotation. If no parent is specified, its location and rotation are set to `0,0,0`.

### Declaration

```cpp
#define SpawnActor(cls, parent) SpawnActorInternal<cls>(parent, #cls)
```

### Parameters

  - `cls`: The class of the new actor.
  - `parent`: A valid pointer to the parent of the new actor.

### Returns

A pointer to the newly created actor.

-----

## `SpawnActorAt`

Spawns a new `AActor` using internal UE systems. The actor will be created with the specified parent and inherit the location and rotation of another specified actor.

### Declaration

```cpp
#define SpawnActorAt(cls, parent, actor) SpawnActorInternal<cls>(actor->K2_GetActorLocation(), actor->K2_GetActorRotation(), parent, #cls)
```

### Parameters

  - `cls`: The class of the new actor.
  - `parent`: A valid pointer to the parent of the new actor.
  - `actor`: A valid pointer to the actor from which to get the location and rotation.

### Returns

A pointer to the newly created actor.

-----

## `SpawnActorVec`

Spawns a new `AActor` using internal UE systems. The actor will be created with the specified parent and at a specified location.

### Declaration

```cpp
#define SpawnActorVec(cls, parent, vector) SpawnActorInternal<cls>(vector, parent, #cls)
```

### Parameters

  - `cls`: The class of the new actor.
  - `parent`: A valid pointer to the parent of the new actor.
  - `vector`: The location of the new actor.

### Returns

A pointer to the newly created actor.

-----

## `SpawnActorLoc`

Spawns a new `AActor` using internal UE systems. The actor will be created with the specified parent and at a specified location and rotation.

### Declaration

```cpp
#define SpawnActorLoc(cls, parent, vector, rotator) SpawnActorInternal<cls>(vector, rotator, parent, #cls)
```

### Parameters

  - `cls`: The class of the new actor.
  - `parent`: A valid pointer to the parent of the new actor.
  - `vector`: The location of the new actor.
  - `rotator`: The rotation of the new actor.

### Returns

A pointer to the newly created actor.

-----

## `SpawnActorTrans`

Spawns a new `AActor` using internal UE systems. The actor will be created with the specified parent and at a specified transform.

### Declaration

```cpp
#define SpawnActorTrans(cls, parent, transform) SpawnActorInternal<cls>(transform, parent, #cls, false)
```

### Parameters

  - `cls`: The class of the new actor.
  - `parent`: A valid pointer to the parent of the new actor.
  - `transform`: The transform (location, rotation, and scale) of the new actor.

### Returns

A pointer to the newly created actor.

-----

## `DeferredSpawnActorTrans`

Spawns a new `AActor` using internal UE systems, but its final creation is deferred until `FinishSpawningDeferredActor` is called. The actor will be created with the specified parent and at the specified transform.

### Declaration

```cpp
#define DeferredSpawnActorTrans(cls, parent, transform) SpawnActorInternal<cls>(transform, parent, #cls, true)
```

### Parameters

  - `cls`: The class of the new actor.
  - `parent`: A valid pointer to the parent of the new actor.
  - `transform`: The transform of the new actor.

### Returns

A pointer to the new actor.

-----

## `FinishSpawningDeferredActor`

Finishes the spawning process for a deferred actor created with `DeferredSpawnActorTrans`. The actor is spawned at the specified transform.

### Declaration

```cpp
#define FinishSpawningDeferredActor(actor, transform) SDK::UGameplayStatics::FinishSpawningActor(actor, transform);
```

### Parameters

  - `actor`: A valid pointer to the actor to finish spawning.
  - `transform`: The transform of the actor.

### Returns

A pointer to the newly spawned actor.


