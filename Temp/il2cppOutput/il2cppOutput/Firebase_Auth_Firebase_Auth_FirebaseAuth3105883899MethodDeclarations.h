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
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.EventHandler
struct EventHandler_t277755526;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4046966602;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"
#include "Firebase_Auth_Firebase_Auth_FirebaseAuth3105883899.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "Firebase_App_Firebase_InitResult105293995.h"

// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FirebaseAuth__ctor_m3346144045 (FirebaseAuth_t3105883899 * __this, IntPtr_t ___cPtr0, bool ___cMemoryOwn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
extern "C"  HandleRef_t2419939847  FirebaseAuth_getCPtr_m1394702201 (Il2CppObject * __this /* static, unused */, FirebaseAuth_t3105883899 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth::Finalize()
extern "C"  void FirebaseAuth_Finalize_m316336200 (FirebaseAuth_t3105883899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
extern "C"  void FirebaseAuth_Dispose_m3120571751 (FirebaseAuth_t3105883899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
extern "C"  FirebaseAuth_t3105883899 * FirebaseAuth_GetAuth_m1881142076 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
extern "C"  void FirebaseAuth_StateChangedFunction_m1288632637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___appCPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_StateChangedFunction_m1288632637(intptr_t ___appCPtr0);
// System.Void Firebase.Auth.FirebaseAuth::add_StateChanged(System.EventHandler)
extern "C"  void FirebaseAuth_add_StateChanged_m2504269526 (FirebaseAuth_t3105883899 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth::remove_StateChanged(System.EventHandler)
extern "C"  void FirebaseAuth_remove_StateChanged_m3358990019 (FirebaseAuth_t3105883899 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
extern "C"  FirebaseAuth_t3105883899 * FirebaseAuth_GetAuthInternal_m794040299 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, int32_t* ___init_result_out1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
extern "C"  FirebaseUser_t4046966602 * FirebaseAuth_get_CurrentUser_m3290820871 (FirebaseAuth_t3105883899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth::.cctor()
extern "C"  void FirebaseAuth__cctor_m2218910303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
