#include "../../Include/Utils/GameFunctions.hpp"

#include <libloaderapi.h>
#include <cstdlib>
#include <utility>
#include <psapi.h>
#include <processthreadsapi.h>
#include <string>
#include <vector>
#include <sstream>

static unsigned long long FindPatternF(const char* pattern, const char* mask, unsigned long long base, unsigned __int64 size)
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

static unsigned long long FindPatternS(const char* pattern, const char* mask, unsigned long long base, unsigned __int64 size)
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

static bool GetTextSection(unsigned long long& textBase, unsigned __int64& textSize)
{
	uintptr_t moduleBase = (unsigned long long)GetModuleHandle(NULL);
	auto dos = (PIMAGE_DOS_HEADER)moduleBase;
	auto nt = (PIMAGE_NT_HEADERS)(moduleBase + dos->e_lfanew);

	auto section = IMAGE_FIRST_SECTION(nt);
	for (unsigned i = 0; i < nt->FileHeader.NumberOfSections; ++i, ++section)
	{
		if (strncmp((char*)section->Name, ".text", 5) == 0)
		{
			textBase = moduleBase + section->VirtualAddress;
			textSize = section->Misc.VirtualSize;
			return true;
		}
	}

	return false;
}

static void SignatureToPatternAndMask(const char* signature, std::vector<char>& pattern, std::string& mask) {
	pattern.clear();
	mask.clear();

	std::string sig_str = signature;
	std::stringstream ss(sig_str);
	std::string token;

	while (ss >> token) {
		if (token == "??") {
			// For wildcards, use any value (0x00) in pattern, '?' in mask
			pattern.push_back(0x00);
			mask += '?';
		}
		else {
			// Convert hex string to byte value
			if (token.length() == 2) {
				char value = static_cast<char>(std::stoi(token, nullptr, 16));
				pattern.push_back(value);
				mask += 'x';
			}
		}
	}

	// Ensure null termination for C-style strings
	pattern.push_back(0x00);
}

static std::pair<const char*, const char*> ConvertSignature(const char* signature) {
	static std::vector<char> pattern;
	static std::string mask;

	SignatureToPatternAndMask(signature, pattern, mask);

	return { pattern.data(), mask.c_str() };
}



/// Resolve a signature to an address. Uses the format: "48 89 7C 24 ?? 41 56 48 83 EC ?? 48 8B FA 4C 8B F1 E8 ?? ?? ?? ??"
/// @param signature signature to resolve
/// @return address of the function representing the signature. 0 if not found.
inline unsigned long long ResolveSignature(const char* signature)
{
	//Only Scan Current Module
	unsigned long long base = 0;
	unsigned __int64 size = 0;
	if (!GetTextSection(base, size)) return 1;

	// Convert signature to pattern/mask format
	auto [pattern, mask] = ConvertSignature(signature);
	// Use your working functions

	unsigned long long addr = FindPatternF(pattern, mask, base, size);
	if (addr == 0) {
		addr = FindPatternS(pattern, mask, base, size);
	}

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