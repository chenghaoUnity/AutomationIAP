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

// Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>
struct ImmutableSortedMapIterator_2_t2384854130;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"

// System.Void Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::.ctor(Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>,TK,System.Collections.Generic.IComparer`1<TK>,System.Boolean)
extern "C"  void ImmutableSortedMapIterator_2__ctor_m4098854814_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, LlrbNode_2_t4262869811 * ___root0, Il2CppObject * ___startKey1, Il2CppObject* ___comparator2, bool ___isReverse3, const MethodInfo* method);
#define ImmutableSortedMapIterator_2__ctor_m4098854814(__this, ___root0, ___startKey1, ___comparator2, ___isReverse3, method) ((  void (*) (ImmutableSortedMapIterator_2_t2384854130 *, LlrbNode_2_t4262869811 *, Il2CppObject *, Il2CppObject*, bool, const MethodInfo*))ImmutableSortedMapIterator_2__ctor_m4098854814_gshared)(__this, ___root0, ___startKey1, ___comparator2, ___isReverse3, method)
// System.Boolean Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::MoveNext()
extern "C"  bool ImmutableSortedMapIterator_2_MoveNext_m314133173_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, const MethodInfo* method);
#define ImmutableSortedMapIterator_2_MoveNext_m314133173(__this, method) ((  bool (*) (ImmutableSortedMapIterator_2_t2384854130 *, const MethodInfo*))ImmutableSortedMapIterator_2_MoveNext_m314133173_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TK,TV> Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t38854645  ImmutableSortedMapIterator_2_get_Current_m2768638934_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, const MethodInfo* method);
#define ImmutableSortedMapIterator_2_get_Current_m2768638934(__this, method) ((  KeyValuePair_2_t38854645  (*) (ImmutableSortedMapIterator_2_t2384854130 *, const MethodInfo*))ImmutableSortedMapIterator_2_get_Current_m2768638934_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::set_Current(System.Collections.Generic.KeyValuePair`2<TK,TV>)
extern "C"  void ImmutableSortedMapIterator_2_set_Current_m307565391_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, KeyValuePair_2_t38854645  ___value0, const MethodInfo* method);
#define ImmutableSortedMapIterator_2_set_Current_m307565391(__this, ___value0, method) ((  void (*) (ImmutableSortedMapIterator_2_t2384854130 *, KeyValuePair_2_t38854645 , const MethodInfo*))ImmutableSortedMapIterator_2_set_Current_m307565391_gshared)(__this, ___value0, method)
// System.Object Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * ImmutableSortedMapIterator_2_System_Collections_IEnumerator_get_Current_m1907867665_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, const MethodInfo* method);
#define ImmutableSortedMapIterator_2_System_Collections_IEnumerator_get_Current_m1907867665(__this, method) ((  Il2CppObject * (*) (ImmutableSortedMapIterator_2_t2384854130 *, const MethodInfo*))ImmutableSortedMapIterator_2_System_Collections_IEnumerator_get_Current_m1907867665_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::Dispose()
extern "C"  void ImmutableSortedMapIterator_2_Dispose_m1803640002_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, const MethodInfo* method);
#define ImmutableSortedMapIterator_2_Dispose_m1803640002(__this, method) ((  void (*) (ImmutableSortedMapIterator_2_t2384854130 *, const MethodInfo*))ImmutableSortedMapIterator_2_Dispose_m1803640002_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.ImmutableSortedMapIterator`2<System.Object,System.Object>::Reset()
extern "C"  void ImmutableSortedMapIterator_2_Reset_m3402692160_gshared (ImmutableSortedMapIterator_2_t2384854130 * __this, const MethodInfo* method);
#define ImmutableSortedMapIterator_2_Reset_m3402692160(__this, method) ((  void (*) (ImmutableSortedMapIterator_2_t2384854130 *, const MethodInfo*))ImmutableSortedMapIterator_2_Reset_m3402692160_gshared)(__this, method)
