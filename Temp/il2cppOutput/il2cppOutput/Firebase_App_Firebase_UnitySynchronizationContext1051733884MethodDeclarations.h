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

// Firebase.UnitySynchronizationContext
struct UnitySynchronizationContext_t1051733884;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t3420419431;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Threading_ManualResetEvent926074657.h"
#include "mscorlib_System_Threading_SendOrPostCallback296893742.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
extern "C"  void UnitySynchronizationContext__ctor_m1343069354 (UnitySynchronizationContext_t1051733884 * __this, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.UnitySynchronizationContext Firebase.UnitySynchronizationContext::get_Instance()
extern "C"  UnitySynchronizationContext_t1051733884 * UnitySynchronizationContext_get_Instance_m3676127900 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnitySynchronizationContext::Install(UnityEngine.GameObject)
extern "C"  void UnitySynchronizationContext_Install_m3862032013 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ManualResetEvent Firebase.UnitySynchronizationContext::GetThreadEvent()
extern "C"  ManualResetEvent_t926074657 * UnitySynchronizationContext_GetThreadEvent_m2649321943 (UnitySynchronizationContext_t1051733884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnitySynchronizationContext::PostCoroutine(System.Func`1<System.Collections.IEnumerator>)
extern "C"  void UnitySynchronizationContext_PostCoroutine_m567443941 (UnitySynchronizationContext_t1051733884 * __this, Func_1_t3420419431 * ___coroutine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Firebase.UnitySynchronizationContext::SignaledCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Threading.ManualResetEvent)
extern "C"  Il2CppObject * UnitySynchronizationContext_SignaledCoroutine_m2712439634 (UnitySynchronizationContext_t1051733884 * __this, Func_1_t3420419431 * ___coroutine0, ManualResetEvent_t926074657 * ___newSignal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnitySynchronizationContext::SendCoroutine(System.Func`1<System.Collections.IEnumerator>)
extern "C"  void UnitySynchronizationContext_SendCoroutine_m3987642997 (UnitySynchronizationContext_t1051733884 * __this, Func_1_t3420419431 * ___coroutine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void UnitySynchronizationContext_Post_m4267436977 (UnitySynchronizationContext_t1051733884 * __this, SendOrPostCallback_t296893742 * ___d0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnitySynchronizationContext::.cctor()
extern "C"  void UnitySynchronizationContext__cctor_m3960838443 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnitySynchronizationContext::<PostCoroutine>m__0(System.Object)
extern "C"  void UnitySynchronizationContext_U3CPostCoroutineU3Em__0_m2310698975 (UnitySynchronizationContext_t1051733884 * __this, Il2CppObject * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
