#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Int64 Google.Sharpen.Runtime::CurrentTimeMillis()
extern "C"  int64_t Runtime_CurrentTimeMillis_m3599433806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Google.Sharpen.Runtime::GetBytesForString(System.String)
extern "C"  ByteU5BU5D_t3397334013* Runtime_GetBytesForString_m817875052 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.Sharpen.Runtime::Substring(System.String,System.Int32)
extern "C"  String_t* Runtime_Substring_m3427804960 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.Sharpen.Runtime::Substring(System.String,System.Int32,System.Int32)
extern "C"  String_t* Runtime_Substring_m526998211 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t ___index1, int32_t ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.Sharpen.Runtime::GetStringForBytes(System.Byte[],System.String)
extern "C"  String_t* Runtime_GetStringForBytes_m663703980 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___chars0, String_t* ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Google.Sharpen.Runtime::GetEncoding(System.String)
extern "C"  Encoding_t663144255 * Runtime_GetEncoding_m2199209998 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
