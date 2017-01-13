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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>>
struct Transform_1_t2008331585;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1864940023_gshared (Transform_1_t2008331585 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1864940023(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2008331585 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1864940023_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>>::Invoke(TKey,TValue)
extern "C"  Nullable_1_t334943763  Transform_1_Invoke_m3781372707_gshared (Transform_1_t2008331585 * __this, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3781372707(__this, ___key0, ___value1, method) ((  Nullable_1_t334943763  (*) (Transform_1_t2008331585 *, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Transform_1_Invoke_m3781372707_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3499650370_gshared (Transform_1_t2008331585 * __this, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3499650370(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2008331585 *, Il2CppObject *, Nullable_1_t334943763 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3499650370_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  Nullable_1_t334943763  Transform_1_EndInvoke_m4154128609_gshared (Transform_1_t2008331585 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4154128609(__this, ___result0, method) ((  Nullable_1_t334943763  (*) (Transform_1_t2008331585 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4154128609_gshared)(__this, ___result0, method)
