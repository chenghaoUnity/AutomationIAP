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

// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t3080659151;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StateChangedDelegate__ctor_m1800607001 (StateChangedDelegate_t3080659151 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
extern "C"  void StateChangedDelegate_Invoke_m436547703 (StateChangedDelegate_t3080659151 * __this, IntPtr_t ___authCPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Firebase.Auth.FirebaseAuth/StateChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateChangedDelegate_BeginInvoke_m2514628660 (StateChangedDelegate_t3080659151 * __this, IntPtr_t ___authCPtr0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StateChangedDelegate_EndInvoke_m3910520615 (StateChangedDelegate_t3080659151 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
