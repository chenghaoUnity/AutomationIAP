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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Int32,System.IntPtr>
struct Transform_1_t1584656104;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Int32,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m963744174_gshared (Transform_1_t1584656104 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m963744174(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1584656104 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m963744174_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Int32,System.IntPtr>::Invoke(TKey,TValue)
extern "C"  IntPtr_t Transform_1_Invoke_m2250487894_gshared (Transform_1_t1584656104 * __this, IntPtr_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2250487894(__this, ___key0, ___value1, method) ((  IntPtr_t (*) (Transform_1_t1584656104 *, IntPtr_t, int32_t, const MethodInfo*))Transform_1_Invoke_m2250487894_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Int32,System.IntPtr>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1506524387_gshared (Transform_1_t1584656104 * __this, IntPtr_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1506524387(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1584656104 *, IntPtr_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1506524387_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Int32,System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C"  IntPtr_t Transform_1_EndInvoke_m3407152920_gshared (Transform_1_t1584656104 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3407152920(__this, ___result0, method) ((  IntPtr_t (*) (Transform_1_t1584656104 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3407152920_gshared)(__this, ___result0, method)
