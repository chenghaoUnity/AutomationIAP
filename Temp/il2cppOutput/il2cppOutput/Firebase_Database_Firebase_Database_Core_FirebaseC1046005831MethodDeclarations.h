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

// Firebase.Database.DotNet.DotNetPlatform
struct DotNetPlatform_t2951135975;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.Func`2<Firebase.FirebaseApp,Firebase.Database.DotNet.DotNetPlatform>
struct Func_2_t3961743794;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "mscorlib_System_String2029220233.h"

// Firebase.Database.DotNet.DotNetPlatform Firebase.Database.Core.FirebaseConfigExtensions::CreatePlatform(Firebase.FirebaseApp)
extern "C"  DotNetPlatform_t2951135975 * FirebaseConfigExtensions_CreatePlatform_m1440986119 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Core.FirebaseConfigExtensions::SetPlatformFactory(System.Func`2<Firebase.FirebaseApp,Firebase.Database.DotNet.DotNetPlatform>)
extern "C"  void FirebaseConfigExtensions_SetPlatformFactory_m4072611435 (Il2CppObject * __this /* static, unused */, Func_2_t3961743794 * ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Core.FirebaseConfigExtensions::SetDatabaseUrl(Firebase.FirebaseApp,System.String)
extern "C"  void FirebaseConfigExtensions_SetDatabaseUrl_m4171544188 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, String_t* ___databaseUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Core.FirebaseConfigExtensions::GetDatabaseUrl(Firebase.FirebaseApp)
extern "C"  String_t* FirebaseConfigExtensions_GetDatabaseUrl_m4209564815 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Core.FirebaseConfigExtensions::.cctor()
extern "C"  void FirebaseConfigExtensions__cctor_m2575420066 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
