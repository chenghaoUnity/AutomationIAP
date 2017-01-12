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

// Firebase.Database.Unity.UnityAuthTokenProvider
struct UnityAuthTokenProvider_t371495853;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// Firebase.Database.Core.AuthTokenProvider/IGetTokenCompletionListener
struct IGetTokenCompletionListener_t2927602790;
// Firebase.Database.Core.AuthTokenProvider/ITokenChangeListener
struct ITokenChangeListener_t4180538330;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"

// System.Void Firebase.Database.Unity.UnityAuthTokenProvider::.ctor(Firebase.FirebaseApp)
extern "C"  void UnityAuthTokenProvider__ctor_m3982661543 (UnityAuthTokenProvider_t371495853 * __this, FirebaseApp_t210707726 * ___firebaseApp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.UnityAuthTokenProvider::GetToken(System.Boolean,Firebase.Database.Core.AuthTokenProvider/IGetTokenCompletionListener)
extern "C"  void UnityAuthTokenProvider_GetToken_m3335724944 (UnityAuthTokenProvider_t371495853 * __this, bool ___forceRefresh0, Il2CppObject * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.UnityAuthTokenProvider::AddTokenChangeListener(Firebase.Database.Core.AuthTokenProvider/ITokenChangeListener)
extern "C"  void UnityAuthTokenProvider_AddTokenChangeListener_m3234711904 (UnityAuthTokenProvider_t371495853 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
