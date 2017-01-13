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

// Firebase.FutureString
struct FutureString_t4225986006;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1149249240;
// Firebase.FutureString/Action
struct Action_t3062064994;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t1819656562;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Firebase_App_Firebase_FutureString4225986006.h"
#include "Firebase_App_Firebase_FutureString_Action3062064994.h"
#include "Firebase_App_Firebase_FutureString_SWIG_Completion1819656562.h"

// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FutureString__ctor_m1515554591 (FutureString_t4225986006 * __this, IntPtr_t ___cPtr0, bool ___cMemoryOwn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::Finalize()
extern "C"  void FutureString_Finalize_m4198862634 (FutureString_t4225986006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::Dispose()
extern "C"  void FutureString_Dispose_m37735597 (FutureString_t4225986006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
extern "C"  Task_1_t1149249240 * FutureString_GetTask_m1388189510 (Il2CppObject * __this /* static, unused */, FutureString_t4225986006 * ___fu0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::SetOnCompletionCallback(Firebase.FutureString/Action)
extern "C"  void FutureString_SetOnCompletionCallback_m1709809508 (FutureString_t4225986006 * __this, Action_t3062064994 * ___userCompletionCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::SetCompletionData(System.IntPtr)
extern "C"  void FutureString_SetCompletionData_m3159764978 (FutureString_t4225986006 * __this, IntPtr_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::SWIG_CompletionDispatcher(System.Int32)
extern "C"  void FutureString_SWIG_CompletionDispatcher_m2853657061 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FutureString_SWIG_CompletionDispatcher_m2853657061(int32_t ___key0);
// System.IntPtr Firebase.FutureString::SWIG_OnCompletion(Firebase.FutureString/SWIG_CompletionDelegate,System.Int32)
extern "C"  IntPtr_t FutureString_SWIG_OnCompletion_m3612574184 (FutureString_t4225986006 * __this, SWIG_CompletionDelegate_t1819656562 * ___cs_callback0, int32_t ___cs_key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::SWIG_FreeCompletionData(System.IntPtr)
extern "C"  void FutureString_SWIG_FreeCompletionData_m279119313 (FutureString_t4225986006 * __this, IntPtr_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.FutureString::Result()
extern "C"  String_t* FutureString_Result_m2875035570 (FutureString_t4225986006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString::.cctor()
extern "C"  void FutureString__cctor_m3703236793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
