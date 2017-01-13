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

// Firebase.Database.Unity.ServiceCredential
struct ServiceCredential_t2286218796;
// Firebase.Database.Unity.ServiceCredential/Initializer
struct Initializer_t2915825156;
// System.String
struct String_t;
// Firebase.Database.Unity.IClock
struct IClock_t1761322331;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Unity_Firebase_Database_Unity_Se2915825156.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Unity.ServiceCredential::.ctor(Firebase.Database.Unity.ServiceCredential/Initializer)
extern "C"  void ServiceCredential__ctor_m3146366905 (ServiceCredential_t2286218796 * __this, Initializer_t2915825156 * ___initializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceCredential::get_TokenServerUrl()
extern "C"  String_t* ServiceCredential_get_TokenServerUrl_m591785886 (ServiceCredential_t2286218796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceCredential::set_TokenServerUrl(System.String)
extern "C"  void ServiceCredential_set_TokenServerUrl_m637697169 (ServiceCredential_t2286218796 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Unity.IClock Firebase.Database.Unity.ServiceCredential::get_Clock()
extern "C"  Il2CppObject * ServiceCredential_get_Clock_m4062955925 (ServiceCredential_t2286218796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceCredential::set_Clock(Firebase.Database.Unity.IClock)
extern "C"  void ServiceCredential_set_Clock_m1636754526 (ServiceCredential_t2286218796 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceCredential::GetAccessTokenForRequest()
extern "C"  String_t* ServiceCredential_GetAccessTokenForRequest_m57314549 (ServiceCredential_t2286218796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
