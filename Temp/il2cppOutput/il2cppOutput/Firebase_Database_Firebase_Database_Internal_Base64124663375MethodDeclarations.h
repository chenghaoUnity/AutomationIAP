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
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.String Firebase.Database.Internal.Base64::EncodeToString(System.Byte[],System.Int32)
extern "C"  String_t* Base64_EncodeToString_m3418828844 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, int32_t ___flags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Firebase.Database.Internal.Base64::Encode(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Base64_Encode_m900581139 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, int32_t ___flags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Firebase.Database.Internal.Base64::Encode(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Base64_Encode_m2179929055 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, int32_t ___offset1, int32_t ___len2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
