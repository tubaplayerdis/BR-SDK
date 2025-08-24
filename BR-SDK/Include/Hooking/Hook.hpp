/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Copyright (c) Aaron Wilk 2025, All rights reserved.                     */
/*                                                                            */
/*    Module:     Hook.h			                                          */
/*    Author:     Aaron Wilk                                                  */
/*    Created:    25 June 2025                                                */
/*                                                                            */
/*    Revisions:  V0.5                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#pragma once
#include <memory>

/// Creates a Hook object using smart pointers and lambdas. Creates a function called "name()" (Where name is the first parameter of the macro) that can be used to access the Hook object created by this macro.
/// @note Creates a function called "name()" (Where name is the first parameter of the macro) that can be used to access the Hook object created by this macro.
/// @note Does not need to be explicitly deleted but is recommended to be explicitly disabled.
/// @param name Name of the Hook, used when defining the access function .
/// @param addr Address of the function to hook.
/// @param lamb Lambda that represents the trampoline function, IE, the replacement function.
/// @param sig Pseudo-signature of the Hook, in format: Ret(Args).
#define HOOK(name, addr, lamb, sig) \
std::unique_ptr<Hook<sig>>& name##(); \
inline std::unique_ptr<Hook<sig>> H_##name = std::make_unique<Hook<sig>>(addr, lamb); \
inline std::unique_ptr<Hook<sig>>& name##() { return H_##name; } \

/// Creates a Hook object using smart pointers and lambdas. Also created a function called "name()" (Where name is the first parameter of the macro) to be used to access the Hook object created by this macro. Does not need to be explicitly deleted but is recommended to be explicitly disabled.
/// @param name Name of the Hook, used when defining the access function .
/// @param pat Pattern of the signature to scan for, in format: \x00.
/// @param mask Mask of the signature to scan for, using x for matches and ? for wildcards.
/// @param lamb Lambda that represents the trampoline function, IE, the replacement function.
/// @param sig Pseudo-signature of the Hook, in format: Ret(Args).
/// @param ... Variadic argument that can be used to define the SearchType of the pattern scanning.
#define HOOK_PATTERN(name, pat, mask, lamb, sig, ...) \
std::unique_ptr<Hook<sig>>& name##(); \
inline std::unique_ptr<Hook<sig>> H_##name = std::make_unique<Hook<sig>>(pat, mask, lamb, __VA_ARGS__); \
inline std::unique_ptr<Hook<sig>>& name##() { return H_##name; } \

/// Registers the Hook with MinHook.
/// @note Equivalent to Create().
/// @param ptr Pointer to the hook object. use "name()"  (Where name is the first parameter of the macro that you defined earlier)
#define HOOK_INIT(ptr) ptr->Create()

/// Destroys the hook object explicitly. If the hook is running at the time this can cause issues.
/// @note If the hook is running at the time this is called, a crash will happen. If you used the HOOK() macro to define your Hook, you do not need to explicitly destroy it.
/// @param ptr Pointer to the hook object. use "name()"  (Where name is the first parameter of the macro that you defined earlier)
#define HOOK_DESTROY(ptr) ptr.reset()

/// Enables the Hook.
/// @note Equivalent to Enable()
/// @param ptr Pointer to the hook object. use "name()"  (Where name is the first parameter of the macro that you defined earlier)
#define HOOK_ENABLE(ptr) ptr->Enable()

/// Disables the Hook.
/// @note Equivalent to Disable()
/// @param ptr Pointer to the hook object. use "name()"  (Where name is the first parameter of the macro that you defined earlier)
#define HOOK_DISABLE(ptr) ptr->Disable()

/// Whether the Hook has been Initialized with MinHook.
/// @note Equivalent to IsInitialized()
/// @param ptr Pointer to the hook object. use "name()"  (Where name is the first parameter of the macro that you defined earlier)
/// @return The Hooks initialization state in regard to MinHook.
#define HOOK_IS_INIT(ptr) ptr->IsInitialized()

/// Calls the original Hooks function, bypassing the trampoline
/// @note Equivalent to CallOriginalFunction()
/// @param ptr Pointer to the hook object. use "name()"  (Where name is the first parameter of the macro that you defined earlier)
/// @param ... Variadic arguments of the original function to pass.
#define HOOK_CALL_ORIGINAL(ptr, ...) ptr->CallOriginalFunction(__VA_ARGS__)

/// Current module base address macro.
#define BASE ((unsigned long long)GetModuleHandle(nullptr))

/// @enum SearchType
/// @brief Enum representing the search method to use for pattern scanning.
enum SearchType
{

	/// @brief Corresponds to the Boyer-Moore-Horespool algorithm for the fastest pattern scanning. use SAFE if the pattern is not found.
	FAST = 0,

	/// @brief Corresponds to a non-optimized pattern scanning algorithm for when the FAST algorithm fails.
	SAFE = 1,

	/// @brief Corresponds to searching every module using the SAFE method for pattern scanning.
	ALL = 2
};

/// Forward declaration allowing a pseudo-signature to use as template arguments.
template <typename>
class Hook;

/// Class representing a Hook. Smart abstraction layer over MinHook.
/// @tparam Ret Return type of the function to Hook.
/// @tparam Args Arguments of the function to Hook.
template <typename Ret, typename... Args>
class Hook<Ret(Args...)>
{
public:

	/// Creates a Hook object using the specified pattern, mask, trampoline function pointer, and SearchType. Does not register the Hook with MinHook. Use Create() to register with MinHook.
	/// @param pattern Pattern of the signature to scan for, in format: \x00.
	/// @param mask Mask of the signature to scan for, using x for matches and ? for wildcards.
	/// @param trampFunc Valid trampoline function pointer matching the signature specified in the Hook objects template signature.
	/// @param typeSearch Search algorithm to be used for pattern scanning. Default is FAST.
	Hook(const char* pattern, const char* mask, Ret(__fastcall* trampFunc)(Args...), SearchType typeSearch = FAST);

	/// Creates a Hook object using the specified address and trampoline function. Does not register the Hook with MinHook. Use Create() to register with MinHook.
	/// @param address Address of the function to hook.
	/// @param trampFunc Valid trampoline function pointer matching the signature specified in the Hook objects template signature.
	Hook(unsigned long long address, Ret(__fastcall* trampFunc)(Args...));

	/// Creates a Hook object using the specified function pointer and trampoline function. Does not register the Hook with MinHook. For VTable entries use reinterpret_cast<Ret(__fastcall*)(Args...)>(vtable[index]).
	/// @param pointer Function pointer of the specified signature in the Hook objects template signature.
	/// @param trampFunc Valid trampoline function pointer matching the signature specified in the Hook objects template signature.
	Hook(Ret(__fastcall* pointer)(Args...), Ret(__fastcall* trampFunc)(Args...));

	/// Explicit deconstructor for Hook. Disables then removes the Hook with MinHook. It is suggested to call Disable() or HOOK_DISABLE() instead of calling this if using the HOOK() macro to define the Hook.
	~Hook();

private:
	bool enabled;
	bool initialized;
	SearchType Stype;

	unsigned long long FunctionPointer;
	const char* pattern;
	const char* mask;
	using Function_t = Ret(__fastcall*)(Args...);

	/// Initializes the Hook with MinHook and Searches patterns if necessary.
	/// @return Whether initialization completed successfully. Called in Create().
	bool Init();

public:
	Function_t OriginalFunction;

protected:
	Function_t hookedFunction;

public:

	/// Registers the Hook with MinHook but does not enable it
	void Create();

	/// Enables the Hook.
	void Enable();

	/// Disables the Hook.
	void Disable();

	/// Calls the original function of the Hook, bypassing the trampoline
	/// @param args Args of the function as defined in the Hook objects template signature
	/// @return The return type defined in the Hook objects template signature
	Ret CallOriginalFunction(Args... args);

	/// Whether the Hook has been registered with MinHook
	/// @return Initialization state of the Hook in respect to its MinHook registration.
	bool IsInitialized() const;

	/// Whether the Hook is enabled
	/// @return Enabled state of the Hook.
	bool IsEnabled() const;

public:

	/// Finds the function address of the given pattern, mask, module base, and module size. Uses the Boyer-Moore-Horespool algorithm, but is not 100% guaranteed a match.
	/// @param pattern pattern of the signature to scan for, in format: \x00
	/// @param mask mask of the signature to scan for, using x for matches and ? for wildcards
	/// @param base module base of the module to be scanned
	/// @param size module size of the module to be scanned
	/// @return Function address of the given pattern and mask, will return 0 if not found.
	static unsigned long long FindPatternF(const char* pattern, const char* mask, unsigned long long base, unsigned __int64 size);

	/// Finds the function address of the given pattern, mask, module base, and module size. Slower but is guaranteed a match given the pattern and mask are valid.
	/// @param pattern pattern of the signature to scan for, in format: \x00
	/// @param mask mask of the signature to scan for, using x for matches and ? for wildcards
	/// @param base module base of the module to be scanned
	/// @param size module size of the module to be scanned
	/// @return Function address of the given pattern and mask, will return 0 if not found.
	static unsigned long long FindPatternS(const char* pattern, const char* mask, unsigned long long base, unsigned __int64 size);

	/// Finds the function address of the given pattern and mask searching through every module loaded in the program. Very slow and not recommended to use.
	/// @param pattern pattern of the signature to scan for, in format: \x00
	/// @param mask mask of the signature to scan for, using x for matches and ? for wildcards
	/// @return Function address of the given pattern and mask, will return 0 if not found.
	static unsigned long long FindPatternAll(const char* pattern, const char* mask);

	/// Gets the base address of the current module specified by NULL.
	/// @return Module base address of the current module, an Abstraction over the Win32 function GetModuleBaseAddress(NULL).
	static unsigned long long GetModuleBase();

	/// Gets the size of the current module specified by NULL.
	/// @return Module size of the current module, Uses GetModuleBase() as the current module.
	static unsigned long long GetModuleSize();

	/// Gets the base and size of the current modules text section. Used for pattern scanning.
	/// @param textBase In, reference to a "unsigned long long" variable to be modified.
	/// @param textSize In, reference to a "unsigned __int64" variable to be modified.
	/// @return Whether the text section of the current module was found.
	static bool GetTextSection(unsigned long long& textBase, unsigned __int64& textSize);

};