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

// System.Func`2<System.Byte,System.Byte>
struct Func_2_t3601859201;
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

// System.Void System.Func`2<System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4047094542_gshared (Func_2_t3601859201 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m4047094542(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t3601859201 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4047094542_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Byte,System.Byte>::Invoke(T)
extern "C"  uint8_t Func_2_Invoke_m1042853540_gshared (Func_2_t3601859201 * __this, uint8_t ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m1042853540(__this, ___arg10, method) ((  uint8_t (*) (Func_2_t3601859201 *, uint8_t, const MethodInfo*))Func_2_Invoke_m1042853540_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Byte,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1449091793_gshared (Func_2_t3601859201 * __this, uint8_t ___arg10, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m1449091793(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t3601859201 *, uint8_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m1449091793_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Func_2_EndInvoke_m2735385562_gshared (Func_2_t3601859201 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m2735385562(__this, ___result0, method) ((  uint8_t (*) (Func_2_t3601859201 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2735385562_gshared)(__this, ___result0, method)
