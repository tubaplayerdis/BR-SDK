/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Copyright (c) Aaron Wilk 2025, All rights reserved.                     */
/*                                                                            */
/*    Module:     GameFunctions.hpp					      */
/*    Author:     Aaron Wilk                                                  */
/*    Created:    14 July 2025                                                */
/*                                                                            */
/*    Revisions:  V0.1                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#pragma once
#include <windows.h>
#include <libloaderapi.h>
#include <cstdlib>

/// Current module base address.
#define BASE ((unsigned long long)GetModuleHandle(nullptr))

/// <summary>
/// Call an internal game function using its address.
/// </summary>
/// <param name="addr">Address of the function.</param>
/// <param name="sig">Signature of the function</param>
/// <param name="...">Arguments to pass</param>
#define CALL_GAME_FUNCTION(addr, sig, ...) ( (reinterpret_cast<sig>(addr))(__VA_ARGS__) )

/// <summary>
/// Call an internal game function using its address.
/// </summary>
///<typeparam name="TRet">Return type of the function</typeparam>
/// <typeparam name="...TArgs">Argument types of the function</typeparam>
/// <param name="addr">Address of the function.</param>
/// <param name="...args">Arguments to pass</param>
/// <returns>TRet</returns>
template<typename TRet, typename... TArgs>
TRet CallGameFunction(unsigned long long addr, TArgs... args);

/// <summary>
/// Call an internal game function based on its index in a vtable. If calling inside a hook macro surround with parethasees.
/// </summary>
///<typeparam name="TRet">Return type of the function</typeparam>
/// <typeparam name="...TArgs">Argument types of the function</typeparam>
/// <param name="index">Index of the function. Do not predivide by 8</param>
/// <param name="object">Valid pointer to an object of that vtable</param>
/// <param name="...args">Arguments to pass</param>
/// <returns>TRet</returns>
template<typename TRet, typename... TArgs>
TRet CallVTableFunction(int index ,void* object, TArgs... args);

/// <summary>
/// Gets the member of a object given an offset
/// </summary>
/// <typeparam name="T">member type</typeparam>
/// <param name="base">Address of the object.</param>
/// <param name="offset">offset of the member</param>
/// <returns>T</returns>
template<typename T>
T& GetMember(void* base, std::size_t offset);

/// <summary>
/// Sets the member of a object given an offset
/// </summary>
/// <typeparam name="T">member type</typeparam>
/// <param name="base">Address of the object.</param>
/// <param name="offset">offset of the member</param>
/// <param name="value">value to set the member</param>
/// <returns>T</returns>
template<typename T>
void SetMember(void* base, std::size_t offset, const T& value);


/// <summary>
/// Casts a pointer
/// </summary>
/// <typeparam name="T">pointer type</typeparam>
/// <param name="obj">pointer object to cast</param>
/// <returns>T*</returns>
template<typename T>
T* Cast(void* obj);

/// <summary>
/// Find a function address.
/// </summary>
/// <param name="pattern">Pattern of the function. Must adhere to format: \x00</param>
/// <param name="mask">Mask of the function. Use x confirmed and ? for wildcards</param>
/// <returns>A pointer to a function of that pattern and mask</returns>
unsigned long long FindPatternF(const char* pattern, const char* mask);
