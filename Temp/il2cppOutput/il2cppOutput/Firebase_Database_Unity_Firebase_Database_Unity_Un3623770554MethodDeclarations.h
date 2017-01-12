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

// Firebase.Database.Unity.UnityPlatform
struct UnityPlatform_t3623770554;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// Firebase.Database.Logger
struct Logger_t225270238;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Core.AuthTokenProvider
struct AuthTokenProvider_t3681374264;
// Firebase.Database.DotNet.DotNetPlatform
struct DotNetPlatform_t2951135975;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"

// System.Void Firebase.Database.Unity.UnityPlatform::.cctor()
extern "C"  void UnityPlatform__cctor_m1339425218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.UnityPlatform::.ctor(Firebase.FirebaseApp)
extern "C"  void UnityPlatform__ctor_m2132707302 (UnityPlatform_t3623770554 * __this, FirebaseApp_t210707726 * ___firebaseApp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.UnityPlatform::SetPlatformFactory()
extern "C"  void UnityPlatform_SetPlatformFactory_m1143030984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger Firebase.Database.Unity.UnityPlatform::NewLogger(Firebase.Database.Logger/Level,System.Collections.Generic.IList`1<System.String>)
extern "C"  Logger_t225270238 * UnityPlatform_NewLogger_m1758199710 (UnityPlatform_t3623770554 * __this, int32_t ___level0, Il2CppObject* ___components1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.AuthTokenProvider Firebase.Database.Unity.UnityPlatform::NewAuthTokenProvider()
extern "C"  AuthTokenProvider_t3681374264 * UnityPlatform_NewAuthTokenProvider_m4255098023 (UnityPlatform_t3623770554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DotNet.DotNetPlatform Firebase.Database.Unity.UnityPlatform::<SetPlatformFactory>m__0(Firebase.FirebaseApp)
extern "C"  DotNetPlatform_t2951135975 * UnityPlatform_U3CSetPlatformFactoryU3Em__0_m801103290 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
