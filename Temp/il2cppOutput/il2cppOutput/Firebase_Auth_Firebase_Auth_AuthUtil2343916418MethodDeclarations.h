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

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t3105883899;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t3080659151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Firebase_Auth_Firebase_Auth_FirebaseAuth3105883899.h"
#include "Firebase_Auth_Firebase_Auth_FirebaseAuth_StateChan3080659151.h"

// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateChangedListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C"  IntPtr_t AuthUtil_CreateAuthStateChangedListener_m1484217948 (Il2CppObject * __this /* static, unused */, FirebaseAuth_t3105883899 * ___auth0, StateChangedDelegate_t3080659151 * ___stateChangedDelegate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateChangedListener(System.IntPtr)
extern "C"  void AuthUtil_DestroyAuthStateChangedListener_m2167235822 (Il2CppObject * __this /* static, unused */, IntPtr_t ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
