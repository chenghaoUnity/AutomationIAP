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

// Firebase.Database.Core.GAuthToken
struct GAuthToken_t2345784186;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Core.GAuthToken::.ctor(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void GAuthToken__ctor_m2026883488 (GAuthToken_t2345784186 * __this, String_t* ___token0, Il2CppObject* ___auth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.GAuthToken Firebase.Database.Core.GAuthToken::TryParseFromString(System.String)
extern "C"  GAuthToken_t2345784186 * GAuthToken_TryParseFromString_m892847205 (Il2CppObject * __this /* static, unused */, String_t* ___rawToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Core.GAuthToken::SerializeToString()
extern "C"  String_t* GAuthToken_SerializeToString_m3377862433 (GAuthToken_t2345784186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Core.GAuthToken::GetToken()
extern "C"  String_t* GAuthToken_GetToken_m2105177960 (GAuthToken_t2345784186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Core.GAuthToken::GetAuth()
extern "C"  Il2CppObject* GAuthToken_GetAuth_m1177668035 (GAuthToken_t2345784186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
