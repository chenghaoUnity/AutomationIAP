﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Policy.Url
struct Url_t627176909;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Policy.Url::.ctor(System.String)
extern "C"  void Url__ctor_m1157180536 (Url_t627176909 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Url::.ctor(System.String,System.Boolean)
extern "C"  void Url__ctor_m2683057883 (Url_t627176909 * __this, String_t* ___name0, bool ___validated1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Url::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Url_CreateIdentityPermission_m2684476899 (Url_t627176909 * __this, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Url::Equals(System.Object)
extern "C"  bool Url_Equals_m739974703 (Url_t627176909 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Url::GetHashCode()
extern "C"  int32_t Url_GetHashCode_m3517788789 (Url_t627176909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::ToString()
extern "C"  String_t* Url_ToString_m1404778661 (Url_t627176909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::get_Value()
extern "C"  String_t* Url_get_Value_m405048413 (Url_t627176909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::Prepare(System.String)
extern "C"  String_t* Url_Prepare_m732234308 (Url_t627176909 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
