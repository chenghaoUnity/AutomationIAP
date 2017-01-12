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

// Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>
struct ArraySortedMap_2_t3398066313;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t280592844;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<System.Object,System.Object>
struct ImmutableSortedMap_2_t3217094540;
// Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<System.Object,System.Object>
struct NodeVisitor_t2944196615;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1809345768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TK>)
extern "C"  void ArraySortedMap_2__ctor_m1213294893_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject* ___comparator0, const MethodInfo* method);
#define ArraySortedMap_2__ctor_m1213294893(__this, ___comparator0, method) ((  void (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject*, const MethodInfo*))ArraySortedMap_2__ctor_m1213294893_gshared)(__this, ___comparator0, method)
// System.Void Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TK>,TK[],TV[])
extern "C"  void ArraySortedMap_2__ctor_m459065254_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject* ___comparator0, ObjectU5BU5D_t3614634134* ___keys1, ObjectU5BU5D_t3614634134* ___values2, const MethodInfo* method);
#define ArraySortedMap_2__ctor_m459065254(__this, ___comparator0, ___keys1, ___values2, method) ((  void (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject*, ObjectU5BU5D_t3614634134*, ObjectU5BU5D_t3614634134*, const MethodInfo*))ArraySortedMap_2__ctor_m459065254_gshared)(__this, ___comparator0, ___keys1, ___values2, method)
// Firebase.Database.Internal.Collection.ArraySortedMap`2<TK,TV> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::FromMap(System.Collections.Generic.IDictionary`2<TK,TV>,System.Collections.Generic.IComparer`1<TK>)
extern "C"  ArraySortedMap_2_t3398066313 * ArraySortedMap_2_FromMap_m850096373_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___map0, Il2CppObject* ___comparator1, const MethodInfo* method);
#define ArraySortedMap_2_FromMap_m850096373(__this /* static, unused */, ___map0, ___comparator1, method) ((  ArraySortedMap_2_t3398066313 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, Il2CppObject*, const MethodInfo*))ArraySortedMap_2_FromMap_m850096373_gshared)(__this /* static, unused */, ___map0, ___comparator1, method)
// System.Boolean Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::ContainsKey(TK)
extern "C"  bool ArraySortedMap_2_ContainsKey_m4035413709_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define ArraySortedMap_2_ContainsKey_m4035413709(__this, ___key0, method) ((  bool (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_ContainsKey_m4035413709_gshared)(__this, ___key0, method)
// TV Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::Get(TK)
extern "C"  Il2CppObject * ArraySortedMap_2_Get_m3150758520_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define ArraySortedMap_2_Get_m3150758520(__this, ___key0, method) ((  Il2CppObject * (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_Get_m3150758520_gshared)(__this, ___key0, method)
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<TK,TV> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::Remove(TK)
extern "C"  ImmutableSortedMap_2_t3217094540 * ArraySortedMap_2_Remove_m3965377617_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define ArraySortedMap_2_Remove_m3965377617(__this, ___key0, method) ((  ImmutableSortedMap_2_t3217094540 * (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_Remove_m3965377617_gshared)(__this, ___key0, method)
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<TK,TV> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::Insert(TK,TV)
extern "C"  ImmutableSortedMap_2_t3217094540 * ArraySortedMap_2_Insert_m797993744_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define ArraySortedMap_2_Insert_m797993744(__this, ___key0, ___value1, method) ((  ImmutableSortedMap_2_t3217094540 * (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_Insert_m797993744_gshared)(__this, ___key0, ___value1, method)
// TK Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::GetMinKey()
extern "C"  Il2CppObject * ArraySortedMap_2_GetMinKey_m3154603777_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_GetMinKey_m3154603777(__this, method) ((  Il2CppObject * (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_GetMinKey_m3154603777_gshared)(__this, method)
// TK Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::GetMaxKey()
extern "C"  Il2CppObject * ArraySortedMap_2_GetMaxKey_m2926417175_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_GetMaxKey_m2926417175(__this, method) ((  Il2CppObject * (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_GetMaxKey_m2926417175_gshared)(__this, method)
// System.Int32 Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::Size()
extern "C"  int32_t ArraySortedMap_2_Size_m2956848197_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_Size_m2956848197(__this, method) ((  int32_t (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_Size_m2956848197_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::IsEmpty()
extern "C"  bool ArraySortedMap_2_IsEmpty_m2644371141_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_IsEmpty_m2644371141(__this, method) ((  bool (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_IsEmpty_m2644371141_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::InOrderTraversal(Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<TK,TV>)
extern "C"  void ArraySortedMap_2_InOrderTraversal_m2890703614_gshared (ArraySortedMap_2_t3398066313 * __this, NodeVisitor_t2944196615 * ___visitor0, const MethodInfo* method);
#define ArraySortedMap_2_InOrderTraversal_m2890703614(__this, ___visitor0, method) ((  void (*) (ArraySortedMap_2_t3398066313 *, NodeVisitor_t2944196615 *, const MethodInfo*))ArraySortedMap_2_InOrderTraversal_m2890703614_gshared)(__this, ___visitor0, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TK,TV>> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::Iterator(System.Int32,System.Boolean)
extern "C"  Il2CppObject* ArraySortedMap_2_Iterator_m320963300_gshared (ArraySortedMap_2_t3398066313 * __this, int32_t ___pos0, bool ___reverse1, const MethodInfo* method);
#define ArraySortedMap_2_Iterator_m320963300(__this, ___pos0, ___reverse1, method) ((  Il2CppObject* (*) (ArraySortedMap_2_t3398066313 *, int32_t, bool, const MethodInfo*))ArraySortedMap_2_Iterator_m320963300_gshared)(__this, ___pos0, ___reverse1, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TK,TV>> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Il2CppObject* ArraySortedMap_2_GetEnumerator_m780148810_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_GetEnumerator_m780148810(__this, method) ((  Il2CppObject* (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_GetEnumerator_m780148810_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TK,TV>> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::ReverseIterator()
extern "C"  Il2CppObject* ArraySortedMap_2_ReverseIterator_m2182111192_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_ReverseIterator_m2182111192(__this, method) ((  Il2CppObject* (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_ReverseIterator_m2182111192_gshared)(__this, method)
// TK Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::GetPredecessorKey(TK)
extern "C"  Il2CppObject * ArraySortedMap_2_GetPredecessorKey_m371765065_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define ArraySortedMap_2_GetPredecessorKey_m371765065(__this, ___key0, method) ((  Il2CppObject * (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_GetPredecessorKey_m371765065_gshared)(__this, ___key0, method)
// System.Collections.Generic.IComparer`1<TK> Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::GetComparator()
extern "C"  Il2CppObject* ArraySortedMap_2_GetComparator_m1626728834_gshared (ArraySortedMap_2_t3398066313 * __this, const MethodInfo* method);
#define ArraySortedMap_2_GetComparator_m1626728834(__this, method) ((  Il2CppObject* (*) (ArraySortedMap_2_t3398066313 *, const MethodInfo*))ArraySortedMap_2_GetComparator_m1626728834_gshared)(__this, method)
// System.Int32 Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::FindKeyOrInsertPosition(TK)
extern "C"  int32_t ArraySortedMap_2_FindKeyOrInsertPosition_m2031308278_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define ArraySortedMap_2_FindKeyOrInsertPosition_m2031308278(__this, ___key0, method) ((  int32_t (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_FindKeyOrInsertPosition_m2031308278_gshared)(__this, ___key0, method)
// System.Int32 Firebase.Database.Internal.Collection.ArraySortedMap`2<System.Object,System.Object>::FindKey(TK)
extern "C"  int32_t ArraySortedMap_2_FindKey_m2334624529_gshared (ArraySortedMap_2_t3398066313 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define ArraySortedMap_2_FindKey_m2334624529(__this, ___key0, method) ((  int32_t (*) (ArraySortedMap_2_t3398066313 *, Il2CppObject *, const MethodInfo*))ArraySortedMap_2_FindKey_m2334624529_gshared)(__this, ___key0, method)
