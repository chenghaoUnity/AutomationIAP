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

// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Connection.HostInfo::.ctor(System.String,System.String,System.Boolean)
extern "C"  void HostInfo__ctor_m4193734601 (HostInfo_t2292118836 * __this, String_t* ___host0, String_t* ___namespace1, bool ___secure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.HostInfo::ToString()
extern "C"  String_t* HostInfo_ToString_m3773492121 (HostInfo_t2292118836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Firebase.Database.Internal.Connection.HostInfo::GetConnectionUrl(System.String,System.Boolean,System.String,System.String)
extern "C"  Uri_t19570940 * HostInfo_GetConnectionUrl_m2594150838 (Il2CppObject * __this /* static, unused */, String_t* ___host0, bool ___secure1, String_t* ___namespace2, String_t* ___optLastSessionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.HostInfo::GetHost()
extern "C"  String_t* HostInfo_GetHost_m414682589 (HostInfo_t2292118836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.HostInfo::GetNamespace()
extern "C"  String_t* HostInfo_GetNamespace_m2244994052 (HostInfo_t2292118836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.HostInfo::IsSecure()
extern "C"  bool HostInfo_IsSecure_m1043246311 (HostInfo_t2292118836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
