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

// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"

// System.Void Google.Sharpen.Extensions::.cctor()
extern "C"  void Extensions__cctor_m2108434394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.Sharpen.Extensions::Decode(System.Text.Encoding,System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Extensions_Decode_m3940288778 (Il2CppObject * __this /* static, unused */, Encoding_t663144255 * ___e0, ByteU5BU5D_t3397334013* ___chars1, int32_t ___start2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Google.Sharpen.Extensions::Split(System.String,System.String)
extern "C"  StringU5BU5D_t1642385972* Extensions_Split_m3989241300 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___regex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Google.Sharpen.Extensions::Split(System.String,System.String,System.Int32)
extern "C"  StringU5BU5D_t1642385972* Extensions_Split_m4164737263 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___regex1, int32_t ___limit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.Extensions::ToMillisecondsSinceEpoch(System.DateTime)
extern "C"  int64_t Extensions_ToMillisecondsSinceEpoch_m1284608604 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.Extensions::ToMillisecondsSinceEpoch(System.DateTimeOffset)
extern "C"  int64_t Extensions_ToMillisecondsSinceEpoch_m3229456447 (Il2CppObject * __this /* static, unused */, DateTimeOffset_t1362988906  ___dateTimeOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
