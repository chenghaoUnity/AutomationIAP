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

// Firebase.FutureString/Action
struct Action_t3062064994;
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

// System.Void Firebase.FutureString/Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m3716776567 (Action_t3062064994 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString/Action::Invoke()
extern "C"  void Action_Invoke_m4105640499 (Action_t3062064994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Firebase.FutureString/Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_BeginInvoke_m1000576792 (Action_t3062064994 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureString/Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m2605602173 (Action_t3062064994 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
