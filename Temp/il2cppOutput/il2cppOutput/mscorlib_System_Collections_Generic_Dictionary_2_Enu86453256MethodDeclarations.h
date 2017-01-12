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

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t3061395850;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enu86453256.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_818741072.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m3025226368_gshared (Enumerator_t86453256 * __this, Dictionary_2_t3061395850 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m3025226368(__this, ___dictionary0, method) ((  void (*) (Enumerator_t86453256 *, Dictionary_2_t3061395850 *, const MethodInfo*))Enumerator__ctor_m3025226368_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m2591061757_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m2591061757(__this, method) ((  Il2CppObject * (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m2591061757_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m2645290253_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m2645290253(__this, method) ((  void (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m2645290253_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2076077042_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2076077042(__this, method) ((  DictionaryEntry_t3048875398  (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2076077042_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2928849115_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2928849115(__this, method) ((  Il2CppObject * (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2928849115_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2052459099_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2052459099(__this, method) ((  Il2CppObject * (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2052459099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3282539621_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3282539621(__this, method) ((  bool (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_MoveNext_m3282539621_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_Current()
extern "C"  KeyValuePair_2_t818741072  Enumerator_get_Current_m2886623121_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m2886623121(__this, method) ((  KeyValuePair_2_t818741072  (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_get_Current_m2886623121_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentKey()
extern "C"  int64_t Enumerator_get_CurrentKey_m3844258184_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m3844258184(__this, method) ((  int64_t (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_get_CurrentKey_m3844258184_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::get_CurrentValue()
extern "C"  int32_t Enumerator_get_CurrentValue_m1182545736_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1182545736(__this, method) ((  int32_t (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_get_CurrentValue_m1182545736_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Reset()
extern "C"  void Enumerator_Reset_m199703458_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_Reset_m199703458(__this, method) ((  void (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_Reset_m199703458_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyState()
extern "C"  void Enumerator_VerifyState_m1919460771_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1919460771(__this, method) ((  void (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_VerifyState_m1919460771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m2643482197_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m2643482197(__this, method) ((  void (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_VerifyCurrent_m2643482197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m3531528168_gshared (Enumerator_t86453256 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m3531528168(__this, method) ((  void (*) (Enumerator_t86453256 *, const MethodInfo*))Enumerator_Dispose_m3531528168_gshared)(__this, method)
