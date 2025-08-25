#include "../../Include/Utils/GameFunctions.hpp"

#include <libloaderapi.h>
#include <cstdlib>
#include <utility>
#include <psapi.h>
#include <processthreadsapi.h>

template<typename TRet, typename... TArgs>
TRet CallGameFunction(unsigned long long addr, TArgs... args)
{
	using FunctionFn = TRet(__fastcall*)(TArgs...);
	FunctionFn OnFunction = reinterpret_cast<FunctionFn>(addr);
	return OnFunction(std::forward<TArgs>(args)...);
}

template<typename TRet, typename... TArgs>
TRet CallVTableFunction(int index ,void* object, TArgs... args)
{
    using FunctionFn = TRet(__fastcall*)(void*, TArgs...);
    void** vtable = *reinterpret_cast<void***>(object);
    FunctionFn FunctionFunc = reinterpret_cast<FunctionFn>(vtable[index]);
    return FunctionFunc(object, std::forward<TArgs>(args)...);
}

template<typename T>
T& GetMember(void* base, std::size_t offset)
{
    return *reinterpret_cast<T*>(reinterpret_cast<std::uint8_t*>(base) + offset);
}

template<typename T>
void SetMember(void* base, std::size_t offset, const T& value)
{
    *reinterpret_cast<T*>(reinterpret_cast<std::uint8_t*>(base) + offset) = value;
}

template<typename T>
T* Cast(void* obj)
{
    return static_cast<T*>(obj);
}

unsigned long long FindPatternF(const char* pattern, const char* mask)
{
    unsigned long long base = (unsigned long long)GetModuleHandle(NULL);
    MODULEINFO info = {};
    GetModuleInformation(GetCurrentProcess(), GetModuleHandle(NULL), &info, sizeof(info));
    unsigned __int64 size = (unsigned __int64)info.SizeOfImage;
    unsigned __int64 patternLen = strlen(mask);

    for (unsigned __int64 i = 0; i < size - patternLen; i++) {
        bool found = true;

        for (unsigned __int64 j = 0; j < patternLen; j++) {
            if (mask[j] != '?' && pattern[j] != *(char*)(base + i + j)) {
                found = false;
                break;
            }
        }

        if (found)
            return base + i;
    }

    return 0;
}