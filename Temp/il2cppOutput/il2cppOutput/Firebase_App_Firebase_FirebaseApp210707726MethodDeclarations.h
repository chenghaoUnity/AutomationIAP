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

// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t413676709;
// Firebase.AppOptions
struct AppOptions_t1641189195;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_App_Firebase_FirebaseApp_CreateDelegate413676709.h"

// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FirebaseApp__ctor_m3662482775 (FirebaseApp_t210707726 * __this, IntPtr_t ___cPtr0, bool ___cMemoryOwn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
extern "C"  HandleRef_t2419939847  FirebaseApp_getCPtr_m4255293038 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp::Finalize()
extern "C"  void FirebaseApp_Finalize_m3651549934 (FirebaseApp_t210707726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp::Dispose()
extern "C"  void FirebaseApp_Dispose_m3098692549 (FirebaseApp_t210707726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
extern "C"  FirebaseApp_t210707726 * FirebaseApp_get_DefaultInstance_m465202029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
extern "C"  FirebaseApp_t210707726 * FirebaseApp_GetInstance_m4058350271 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
extern "C"  FirebaseApp_t210707726 * FirebaseApp_Create_m4111948162 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp::RemoveReference(Firebase.FirebaseApp)
extern "C"  void FirebaseApp_RemoveReference_m1475253910 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp::EmptyAppDictionaries()
extern "C"  void FirebaseApp_EmptyAppDictionaries_m4102170024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
extern "C"  Uri_t19570940 * FirebaseApp_UrlStringToUri_m3126757169 (Il2CppObject * __this /* static, unused */, String_t* ___urlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate)
extern "C"  FirebaseApp_t210707726 * FirebaseApp_CreateAndTrack_m2952140369 (Il2CppObject * __this /* static, unused */, CreateDelegate_t413676709 * ___createDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.FirebaseApp::get_Name()
extern "C"  String_t* FirebaseApp_get_Name_m3737532545 (FirebaseApp_t210707726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.AppOptions Firebase.FirebaseApp::get_Options()
extern "C"  AppOptions_t1641189195 * FirebaseApp_get_Options_m763126714 (FirebaseApp_t210707726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
extern "C"  FirebaseApp_t210707726 * FirebaseApp_CreateInternal_m3582107925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.FirebaseApp::get_DefaultName()
extern "C"  String_t* FirebaseApp_get_DefaultName_m2031394344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp::.cctor()
extern "C"  void FirebaseApp__cctor_m2391020073 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp::<Dispose>m__0()
extern "C"  void FirebaseApp_U3CDisposeU3Em__0_m3004522492 (FirebaseApp_t210707726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::<Create>m__1()
extern "C"  FirebaseApp_t210707726 * FirebaseApp_U3CCreateU3Em__1_m64761912 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
