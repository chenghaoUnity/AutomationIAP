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

// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>
struct ImmutableTree_1_t969358333;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object>
struct ImmutableSortedMap_2_t94277708;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,System.Object>>
struct IEnumerator_1_t1526792316;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.Utilities.Predicate`1<System.Object>
struct Predicate_1_t1206613972;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/ITreeVisitor`1<System.Object,System.Object>
struct ITreeVisitor_1_t3362435403;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::.ctor(T,Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object>)
extern "C"  void ImmutableTree_1__ctor_m4028204070_gshared (ImmutableTree_1_t969358333 * __this, Il2CppObject * ___value0, ImmutableSortedMap_2_t94277708 * ___children1, const MethodInfo* method);
#define ImmutableTree_1__ctor_m4028204070(__this, ___value0, ___children1, method) ((  void (*) (ImmutableTree_1_t969358333 *, Il2CppObject *, ImmutableSortedMap_2_t94277708 *, const MethodInfo*))ImmutableTree_1__ctor_m4028204070_gshared)(__this, ___value0, ___children1, method)
// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::.ctor(T)
extern "C"  void ImmutableTree_1__ctor_m2496271442_gshared (ImmutableTree_1_t969358333 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define ImmutableTree_1__ctor_m2496271442(__this, ___value0, method) ((  void (*) (ImmutableTree_1_t969358333 *, Il2CppObject *, const MethodInfo*))ImmutableTree_1__ctor_m2496271442_gshared)(__this, ___value0, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,T>> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::GetEnumerator()
extern "C"  Il2CppObject* ImmutableTree_1_GetEnumerator_m1374165662_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetEnumerator_m1374165662(__this, method) ((  Il2CppObject* (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_GetEnumerator_m1374165662_gshared)(__this, method)
// System.Collections.IEnumerator Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ImmutableTree_1_System_Collections_IEnumerable_GetEnumerator_m1780813397_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_System_Collections_IEnumerable_GetEnumerator_m1780813397(__this, method) ((  Il2CppObject * (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_System_Collections_IEnumerable_GetEnumerator_m1780813397_gshared)(__this, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::EmptyInstance()
extern "C"  ImmutableTree_1_t969358333 * ImmutableTree_1_EmptyInstance_m3642173572_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ImmutableTree_1_EmptyInstance_m3642173572(__this /* static, unused */, method) ((  ImmutableTree_1_t969358333 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ImmutableTree_1_EmptyInstance_m3642173572_gshared)(__this /* static, unused */, method)
// T Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::GetValue()
extern "C"  Il2CppObject * ImmutableTree_1_GetValue_m3705018054_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetValue_m3705018054(__this, method) ((  Il2CppObject * (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_GetValue_m3705018054_gshared)(__this, method)
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::GetChildren()
extern "C"  ImmutableSortedMap_2_t94277708 * ImmutableTree_1_GetChildren_m4256937032_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetChildren_m4256937032(__this, method) ((  ImmutableSortedMap_2_t94277708 * (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_GetChildren_m4256937032_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::IsEmpty()
extern "C"  bool ImmutableTree_1_IsEmpty_m4143570191_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_IsEmpty_m4143570191(__this, method) ((  bool (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_IsEmpty_m4143570191_gshared)(__this, method)
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::FindRootMostMatchingPath(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.Predicate`1<T>)
extern "C"  Path_t2568473163 * ImmutableTree_1_FindRootMostMatchingPath_m1844098277_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, Predicate_1_t1206613972 * ___predicate1, const MethodInfo* method);
#define ImmutableTree_1_FindRootMostMatchingPath_m1844098277(__this, ___relativePath0, ___predicate1, method) ((  Path_t2568473163 * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, Predicate_1_t1206613972 *, const MethodInfo*))ImmutableTree_1_FindRootMostMatchingPath_m1844098277_gshared)(__this, ___relativePath0, ___predicate1, method)
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::FindRootMostPathWithValue(Firebase.Database.Internal.Core.Path)
extern "C"  Path_t2568473163 * ImmutableTree_1_FindRootMostPathWithValue_m318551461_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_FindRootMostPathWithValue_m318551461(__this, ___relativePath0, method) ((  Path_t2568473163 * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_FindRootMostPathWithValue_m318551461_gshared)(__this, ___relativePath0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::GetChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  ImmutableTree_1_t969358333 * ImmutableTree_1_GetChild_m4207950176_gshared (ImmutableTree_1_t969358333 * __this, ChildKey_t1197802383 * ___child0, const MethodInfo* method);
#define ImmutableTree_1_GetChild_m4207950176(__this, ___child0, method) ((  ImmutableTree_1_t969358333 * (*) (ImmutableTree_1_t969358333 *, ChildKey_t1197802383 *, const MethodInfo*))ImmutableTree_1_GetChild_m4207950176_gshared)(__this, ___child0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::Subtree(Firebase.Database.Internal.Core.Path)
extern "C"  ImmutableTree_1_t969358333 * ImmutableTree_1_Subtree_m2292476291_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_Subtree_m2292476291(__this, ___relativePath0, method) ((  ImmutableTree_1_t969358333 * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_Subtree_m2292476291_gshared)(__this, ___relativePath0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::Set(Firebase.Database.Internal.Core.Path,T)
extern "C"  ImmutableTree_1_t969358333 * ImmutableTree_1_Set_m1462385863_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, Il2CppObject * ___value1, const MethodInfo* method);
#define ImmutableTree_1_Set_m1462385863(__this, ___relativePath0, ___value1, method) ((  ImmutableTree_1_t969358333 * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, Il2CppObject *, const MethodInfo*))ImmutableTree_1_Set_m1462385863_gshared)(__this, ___relativePath0, ___value1, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::Remove(Firebase.Database.Internal.Core.Path)
extern "C"  ImmutableTree_1_t969358333 * ImmutableTree_1_Remove_m3691997035_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_Remove_m3691997035(__this, ___relativePath0, method) ((  ImmutableTree_1_t969358333 * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_Remove_m3691997035_gshared)(__this, ___relativePath0, method)
// T Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::Get(Firebase.Database.Internal.Core.Path)
extern "C"  Il2CppObject * ImmutableTree_1_Get_m3285009340_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_Get_m3285009340(__this, ___relativePath0, method) ((  Il2CppObject * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_Get_m3285009340_gshared)(__this, ___relativePath0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::SetTree(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T>)
extern "C"  ImmutableTree_1_t969358333 * ImmutableTree_1_SetTree_m730507020_gshared (ImmutableTree_1_t969358333 * __this, Path_t2568473163 * ___relativePath0, ImmutableTree_1_t969358333 * ___newTree1, const MethodInfo* method);
#define ImmutableTree_1_SetTree_m730507020(__this, ___relativePath0, ___newTree1, method) ((  ImmutableTree_1_t969358333 * (*) (ImmutableTree_1_t969358333 *, Path_t2568473163 *, ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_SetTree_m730507020_gshared)(__this, ___relativePath0, ___newTree1, method)
// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::Foreach(Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/ITreeVisitor`1<T,System.Object>)
extern "C"  void ImmutableTree_1_Foreach_m2205888316_gshared (ImmutableTree_1_t969358333 * __this, Il2CppObject* ___visitor0, const MethodInfo* method);
#define ImmutableTree_1_Foreach_m2205888316(__this, ___visitor0, method) ((  void (*) (ImmutableTree_1_t969358333 *, Il2CppObject*, const MethodInfo*))ImmutableTree_1_Foreach_m2205888316_gshared)(__this, ___visitor0, method)
// System.String Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::ToString()
extern "C"  String_t* ImmutableTree_1_ToString_m1893070879_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_ToString_m1893070879(__this, method) ((  String_t* (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_ToString_m1893070879_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::Equals(System.Object)
extern "C"  bool ImmutableTree_1_Equals_m2384379909_gshared (ImmutableTree_1_t969358333 * __this, Il2CppObject * ___o0, const MethodInfo* method);
#define ImmutableTree_1_Equals_m2384379909(__this, ___o0, method) ((  bool (*) (ImmutableTree_1_t969358333 *, Il2CppObject *, const MethodInfo*))ImmutableTree_1_Equals_m2384379909_gshared)(__this, ___o0, method)
// System.Int32 Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::GetHashCode()
extern "C"  int32_t ImmutableTree_1_GetHashCode_m2582451103_gshared (ImmutableTree_1_t969358333 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetHashCode_m2582451103(__this, method) ((  int32_t (*) (ImmutableTree_1_t969358333 *, const MethodInfo*))ImmutableTree_1_GetHashCode_m2582451103_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Object>::.cctor()
extern "C"  void ImmutableTree_1__cctor_m171993079_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ImmutableTree_1__cctor_m171993079(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ImmutableTree_1__cctor_m171993079_gshared)(__this /* static, unused */, method)
