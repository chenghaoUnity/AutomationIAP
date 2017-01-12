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

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4046966602;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1149249240;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FirebaseUser__ctor_m47287326 (FirebaseUser_t4046966602 * __this, IntPtr_t ___cPtr0, bool ___cMemoryOwn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseUser::Finalize()
extern "C"  void FirebaseUser_Finalize_m2016751943 (FirebaseUser_t4046966602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseUser::Dispose()
extern "C"  void FirebaseUser_Dispose_m632137998 (FirebaseUser_t4046966602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Firebase.Auth.FirebaseUser::TokenAsync(System.Boolean)
extern "C"  Task_1_t1149249240 * FirebaseUser_TokenAsync_m3595996755 (FirebaseUser_t4046966602 * __this, bool ___forceRefresh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Auth.FirebaseUser::get_UserId()
extern "C"  String_t* FirebaseUser_get_UserId_m3056192957 (FirebaseUser_t4046966602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
