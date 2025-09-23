#include "../../Include/Utils/GameFunctions.hpp"

#include <libloaderapi.h>
#include <cstdlib>
#include <utility>
#include <psapi.h>
#include <processthreadsapi.h>
#include <string>
#include <vector>
#include <sstream>

unsigned long long FindPatternFast(const char* pattern, const char* mask, unsigned long long base, unsigned __int64 size)
{
    const unsigned __int64 patternLen = strlen(mask);
    if (patternLen == 0) {
        return 0;
    }

    // 1. Create the bad-character skip table
    std::vector<unsigned __int64> skipTable(256, patternLen);
    for (unsigned __int64 i = 0; i < patternLen - 1; ++i) {
        if (mask[i] != '?') {
            skipTable[static_cast<unsigned char>(pattern[i])] = patternLen - 1 - i;
        }
    }

    const unsigned long long searchEnd = base + size - patternLen;
    unsigned long long currentPos = base;

    while (currentPos <= searchEnd) {
        // 2. Compare from the end of the pattern backwards
        bool match = true;
        for (int j = patternLen - 1; j >= 0; --j) {
            if (mask[j] != '?' && pattern[j] != *(char*)(currentPos + j)) {
                // 3. On mismatch, use the skip table to jump forward
                // The character from the memory text determines the jump distance.
                const unsigned char mismatched_char = *(unsigned char*)(currentPos + patternLen - 1);
                currentPos += skipTable[mismatched_char];
                match = false;
                break;
            }
        }

        if (match) {
            return currentPos; // Found it
        }
    }

    return 0; // Not found
}

unsigned long long FindPatternSafe(const char* pattern, const char* mask, unsigned long long base, unsigned __int64 size)
{
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

//Example Arg
//"48 89 7C 24 ?? 41 56 48 83 EC ?? 48 8B FA 4C 8B F1 E8 ?? ?? ?? ??"
static const char* GenerateMaskFromSig(const char* sig)
{

    std::string str = sig;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str.at(i) == ' ') str.erase(i, 1);
    }

    //Now no spaces
    if (str.length() % 2 != 0) return nullptr;//Invalid signature, odd length

    std::string ret;
    for (size_t i = 0; i < str.length(); i+=2)
    {
        if (str.substr(i, 2) == "??") ret.append("?");
        else ret.append("x");
    }

    return ret.c_str();
}

static const char* GeneratePatternFromSig(const char* sig)
{
    std::string str = sig;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str.at(i) == ' ') str.erase(i, 1);
    }

    //Now no spaces
    if (str.length() % 2 != 0) return nullptr;//Invalid signature, odd length

    std::stringstream ret;
    for (size_t i = 0; i < str.length(); i+=2)
    {
        auto token = str.substr(i, 2);
        if (token == "??") ret << "\\x00";
        else
        {
            ret << "\\x" << token;
        }
    }

    return ret.str().c_str();
}

//Example Arg
//"48 89 7C 24 ?? 41 56 48 83 EC ?? 48 8B FA 4C 8B F1 E8 ?? ?? ?? ??"
unsigned long long ResolveSignature(const char* signature)
{
    //Only Scan Current Module
    unsigned long long base = (unsigned long long)GetModuleHandle(NULL);
    MODULEINFO info = {};
    GetModuleInformation(GetCurrentProcess(), GetModuleHandle(NULL), &info, sizeof(info));
    unsigned __int64 size = (unsigned __int64)info.SizeOfImage;

    //Create Pattern and Mask Strings
    const char* pattern = GeneratePatternFromSig(signature);
    const char* mask = GenerateMaskFromSig(signature);

    unsigned long long addr = FindPatternFast(pattern, mask, base, size);
    if (addr == 0) addr = FindPatternSafe(pattern, mask, base, size);
    return addr;
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