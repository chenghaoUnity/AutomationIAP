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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>>
struct Transform_1_t3652704231;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21979316409.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3862666998_gshared (Transform_1_t3652704231 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3862666998(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3652704231 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3862666998_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1979316409  Transform_1_Invoke_m514070902_gshared (Transform_1_t3652704231 * __this, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m514070902(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1979316409  (*) (Transform_1_t3652704231 *, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Transform_1_Invoke_m514070902_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3575693983_gshared (Transform_1_t3652704231 * __this, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3575693983(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3652704231 *, Il2CppObject *, Nullable_1_t334943763 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3575693983_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Nullable`1<System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1979316409  Transform_1_EndInvoke_m895528780_gshared (Transform_1_t3652704231 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m895528780(__this, ___result0, method) ((  KeyValuePair_2_t1979316409  (*) (Transform_1_t3652704231 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m895528780_gshared)(__this, ___result0, method)
