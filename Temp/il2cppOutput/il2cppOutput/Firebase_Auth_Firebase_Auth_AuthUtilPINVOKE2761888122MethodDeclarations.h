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
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t3080659151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"
#include "Firebase_Auth_Firebase_Auth_FirebaseAuth_StateChan3080659151.h"

// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
extern "C"  void AuthUtilPINVOKE__cctor_m659306542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
extern "C"  IntPtr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m4057723011 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, bool ___jarg21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_UserId_get(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m572498592 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
extern "C"  void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m2178992323 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseAuth(System.Runtime.InteropServices.HandleRef)
extern "C"  void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseAuth_m1391292 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
extern "C"  IntPtr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m6131012 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, int32_t* ___jarg21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CurrentUser_get(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUser_get_m4035012579 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateAuthStateChangedListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C"  IntPtr_t AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateChangedListener_m1488217552 (Il2CppObject * __this /* static, unused */, HandleRef_t2419939847  ___jarg10, StateChangedDelegate_t3080659151 * ___jarg21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyAuthStateChangedListener(System.IntPtr)
extern "C"  void AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateChangedListener_m1829959023 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jarg10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
