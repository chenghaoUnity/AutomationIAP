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

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Int32>
struct Dictionary_2_t2513902766;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3833927468.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_271247988.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m1446562946_gshared (Enumerator_t3833927468 * __this, Dictionary_2_t2513902766 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m1446562946(__this, ___dictionary0, method) ((  void (*) (Enumerator_t3833927468 *, Dictionary_2_t2513902766 *, const MethodInfo*))Enumerator__ctor_m1446562946_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m2199743181_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m2199743181(__this, method) ((  Il2CppObject * (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m2199743181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m1741774345_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1741774345(__this, method) ((  void (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1741774345_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t3048875398  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1601134310_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1601134310(__this, method) ((  DictionaryEntry_t3048875398  (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1601134310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1520541099_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1520541099(__this, method) ((  Il2CppObject * (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1520541099_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29311651_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29311651(__this, method) ((  Il2CppObject * (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29311651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3274679113_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3274679113(__this, method) ((  bool (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_MoveNext_m3274679113_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::get_Current()
extern "C"  KeyValuePair_2_t271247988  Enumerator_get_Current_m1909749433_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1909749433(__this, method) ((  KeyValuePair_2_t271247988  (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_get_Current_m1909749433_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::get_CurrentKey()
extern "C"  IntPtr_t Enumerator_get_CurrentKey_m1901550810_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1901550810(__this, method) ((  IntPtr_t (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_get_CurrentKey_m1901550810_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::get_CurrentValue()
extern "C"  int32_t Enumerator_get_CurrentValue_m2248732114_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m2248732114(__this, method) ((  int32_t (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_get_CurrentValue_m2248732114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::Reset()
extern "C"  void Enumerator_Reset_m1791350284_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1791350284(__this, method) ((  void (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_Reset_m1791350284_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::VerifyState()
extern "C"  void Enumerator_VerifyState_m1601720759_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1601720759(__this, method) ((  void (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_VerifyState_m1601720759_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m3286417977_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m3286417977(__this, method) ((  void (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_VerifyCurrent_m3286417977_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m3738173754_gshared (Enumerator_t3833927468 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m3738173754(__this, method) ((  void (*) (Enumerator_t3833927468 *, const MethodInfo*))Enumerator_Dispose_m3738173754_gshared)(__this, method)
