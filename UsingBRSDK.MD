# Using BR-SDK

This guide will go over the specifics of BR-SDK and its special abilities and functions. Firstly, read this to learn how to setup and use the SDK in a more general way.

# Please Read:
[Dumper-7 Tutorial](https://github.com/Encryqed/Dumper-7/blob/main/UsingTheSDK.md)

## Note

All of these function are included using the file: ```Utils.hpp```

## Linker Errors

Linker errors may arise through that the binaries for BR-SDK are not linked properly. Please make sure they are linked correctly.

## Classes

One of the more important aspects of Brick Rigs is its use of Blueprints for the highest level interactions and gameplay logic. Due to Unreal Engine optimizations, the classes of Blueprints get unloaded/loaded as needed. Because of this, the traditional way of getting the UClass of a class from the SDK EX: (SDK::UBrick::StaticClass()) is not always safe and might return a nullptr, cauing a crash. **To fix this**, BR-SDK replicates the class loading system of UE when getting classes. For a safer way of getting the UClass of a class, use the `GetUClass` macro.

## Functions

One of the unfortunate things regarding generated SDK's is that they are not complete. This is mostly due to that the only functions that get exposed in SDK's have to be accessible from the reflection system. To get around this, BR-SDK introduces the function: `CallGameFunction()`, which is a templated function that can internally call any function in the game. Its documentation is available below. There is also a VTable specific verion: `CallVTableFunction()`

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

## `CallGameFunction`

Calls an internal game function using a provided signature

### Signature Formatting

 **BR-SDK signature guidelines**
 - Single line
 - 1 space between opcodes
 - Uses ?? as wildcards

##### IDA-Extension (SignatureGenerator)

BR-SDK is compatible with my [personal signature generation plugin for IDA](https://github.com/tubaplayerdis/SignatureGenerator). It creates these signatures automatically

### Template Parameters

- `TRet`: Return type of the function.
- `TArgs...`: Argument types of the function.

### Declaration

```cpp
template<typename TRet, typename... TArgs>
inline TRet CallGameFunction(const char* signature, TArgs... args);
```

### Parameters

- `signature`: Signature of the function. Will be resolved by the function and an assertion will fail if not found. The signature will be cached automatically so it does not need to be found next time it is called
- `args...`: Arguments to pass to the function.

### Returns

`TRet` — The return value of the called function.

### Example

```cpp
#define F_CREATE_WIDGET "48 83 EC ?? 48 85 C9 74 ?? 48 89 5C 24 ?? E8 ?? ?? ?? ?? 48 8B D8 48 85 C0"
double* foo = CallGameFunction<double*, int>(F_CREATE_WIDGET, 5);
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

