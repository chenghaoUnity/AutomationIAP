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

// System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>
struct Dictionary_2_t4221971187;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,System.Nullable`1<System.Int32>>
struct IDictionary_2_t2221054608;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3641524600;
// System.Collections.Generic.ICollection`1<System.Nullable`1<System.Int32>>
struct ICollection_1_t1287019068;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>[]
struct KeyValuePair_2U5BU5D_t1021761604;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>>
struct IEnumerator_1_t3749807532;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Nullable`1<System.Int32>>
struct KeyCollection_t2410501662;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Nullable`1<System.Int32>>
struct ValueCollection_t2925031030;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21979316409.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1247028593.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor()
extern "C"  void Dictionary_2__ctor_m974011665_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m974011665(__this, method) ((  void (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2__ctor_m974011665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1799045174_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1799045174(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1799045174_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m2811729439_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m2811729439(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2811729439_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m97162598_gshared (Dictionary_2_t4221971187 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m97162598(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t4221971187 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m97162598_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m650116374_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m650116374(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m650116374_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1058783248_gshared (Dictionary_2_t4221971187 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1058783248(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4221971187 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m1058783248_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1524872569_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1524872569(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1524872569_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1286442513_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1286442513(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1286442513_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2376882899_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2376882899(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2376882899_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m3503525539_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m3503525539(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m3503525539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1703609225_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1703609225(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1703609225_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2769629640_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2769629640(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2769629640_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1647424567_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1647424567(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1647424567_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3489012227_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3489012227(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3489012227_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1594596820_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1594596820(__this, ___key0, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1594596820_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3098552885_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3098552885(__this, method) ((  bool (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3098552885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1261940257_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1261940257(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1261940257_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2761819755_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2761819755(__this, method) ((  bool (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2761819755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3826913502_gshared (Dictionary_2_t4221971187 * __this, KeyValuePair_2_t1979316409  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3826913502(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t4221971187 *, KeyValuePair_2_t1979316409 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3826913502_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3974843638_gshared (Dictionary_2_t4221971187 * __this, KeyValuePair_2_t1979316409  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3974843638(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4221971187 *, KeyValuePair_2_t1979316409 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3974843638_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m507701618_gshared (Dictionary_2_t4221971187 * __this, KeyValuePair_2U5BU5D_t1021761604* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m507701618(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4221971187 *, KeyValuePair_2U5BU5D_t1021761604*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m507701618_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4026252657_gshared (Dictionary_2_t4221971187 * __this, KeyValuePair_2_t1979316409  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4026252657(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4221971187 *, KeyValuePair_2_t1979316409 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4026252657_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m4083013601_gshared (Dictionary_2_t4221971187 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m4083013601(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m4083013601_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1066610448_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1066610448(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1066610448_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2754627219_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2754627219(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2754627219_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2919195510_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2919195510(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2919195510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1414447573_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1414447573(__this, method) ((  int32_t (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_get_Count_m1414447573_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::get_Item(TKey)
extern "C"  Nullable_1_t334943763  Dictionary_2_get_Item_m1107047214_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1107047214(__this, ___key0, method) ((  Nullable_1_t334943763  (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m1107047214_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3866752057_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3866752057(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_set_Item_m3866752057_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3263639933_gshared (Dictionary_2_t4221971187 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3263639933(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t4221971187 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3263639933_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2295736278_gshared (Dictionary_2_t4221971187 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2295736278(__this, ___size0, method) ((  void (*) (Dictionary_2_t4221971187 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2295736278_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1092403372_gshared (Dictionary_2_t4221971187 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1092403372(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1092403372_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1979316409  Dictionary_2_make_pair_m288993626_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m288993626(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1979316409  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_make_pair_m288993626_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2859591928_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2859591928(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_pick_key_m2859591928_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::pick_value(TKey,TValue)
extern "C"  Nullable_1_t334943763  Dictionary_2_pick_value_m2327698664_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2327698664(__this /* static, unused */, ___key0, ___value1, method) ((  Nullable_1_t334943763  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_pick_value_m2327698664_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3955601389_gshared (Dictionary_2_t4221971187 * __this, KeyValuePair_2U5BU5D_t1021761604* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3955601389(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4221971187 *, KeyValuePair_2U5BU5D_t1021761604*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3955601389_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::Resize()
extern "C"  void Dictionary_2_Resize_m1102969039_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1102969039(__this, method) ((  void (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_Resize_m1102969039_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1638444922_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1638444922(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_Add_m1638444922_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::Clear()
extern "C"  void Dictionary_2_Clear_m2347743718_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2347743718(__this, method) ((  void (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_Clear_m2347743718_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2797699318_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2797699318(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2797699318_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m152226886_gshared (Dictionary_2_t4221971187 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m152226886(__this, ___value0, method) ((  bool (*) (Dictionary_2_t4221971187 *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_ContainsValue_m152226886_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m35452661_gshared (Dictionary_2_t4221971187 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m35452661(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4221971187 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m35452661_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1326625129_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1326625129(__this, ___sender0, method) ((  void (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1326625129_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2388658414_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2388658414(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2388658414_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3273910721_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, Nullable_1_t334943763 * ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3273910721(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t4221971187 *, Il2CppObject *, Nullable_1_t334943763 *, const MethodInfo*))Dictionary_2_TryGetValue_m3273910721_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::get_Keys()
extern "C"  KeyCollection_t2410501662 * Dictionary_2_get_Keys_m375175266_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m375175266(__this, method) ((  KeyCollection_t2410501662 * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_get_Keys_m375175266_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::get_Values()
extern "C"  ValueCollection_t2925031030 * Dictionary_2_get_Values_m3650675610_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m3650675610(__this, method) ((  ValueCollection_t2925031030 * (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_get_Values_m3650675610_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m945182671_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m945182671(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m945182671_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::ToTValue(System.Object)
extern "C"  Nullable_1_t334943763  Dictionary_2_ToTValue_m1353554599_gshared (Dictionary_2_t4221971187 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1353554599(__this, ___value0, method) ((  Nullable_1_t334943763  (*) (Dictionary_2_t4221971187 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1353554599_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m323616313_gshared (Dictionary_2_t4221971187 * __this, KeyValuePair_2_t1979316409  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m323616313(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t4221971187 *, KeyValuePair_2_t1979316409 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m323616313_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::GetEnumerator()
extern "C"  Enumerator_t1247028593  Dictionary_2_GetEnumerator_m33495170_gshared (Dictionary_2_t4221971187 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33495170(__this, method) ((  Enumerator_t1247028593  (*) (Dictionary_2_t4221971187 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33495170_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Int32>>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__2_m1260406249_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Nullable_1_t334943763  ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m1260406249(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Nullable_1_t334943763 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m1260406249_gshared)(__this /* static, unused */, ___key0, ___value1, method)
