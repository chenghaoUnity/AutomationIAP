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
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.String Firebase.Database.Internal.Util.JsonMapper::SerializeJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* JsonMapper_SerializeJson_m2214956388 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Util.JsonMapper::ParseJson(System.String)
extern "C"  Il2CppObject* JsonMapper_ParseJson_m3202953091 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
