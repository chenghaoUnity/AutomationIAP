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

// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>
struct ImmutableTree_1_t368550071;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object>
struct ImmutableSortedMap_2_t94277708;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,System.Nullable`1<System.Boolean>>>
struct IEnumerator_1_t925984054;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.Utilities.Predicate`1<System.Nullable`1<System.Boolean>>
struct Predicate_1_t605805710;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/ITreeVisitor`1<System.Nullable`1<System.Boolean>,System.Object>
struct ITreeVisitor_1_t2066911337;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::.ctor(T,Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object>)
extern "C"  void ImmutableTree_1__ctor_m1801583884_gshared (ImmutableTree_1_t368550071 * __this, Nullable_1_t2088641033  ___value0, ImmutableSortedMap_2_t94277708 * ___children1, const MethodInfo* method);
#define ImmutableTree_1__ctor_m1801583884(__this, ___value0, ___children1, method) ((  void (*) (ImmutableTree_1_t368550071 *, Nullable_1_t2088641033 , ImmutableSortedMap_2_t94277708 *, const MethodInfo*))ImmutableTree_1__ctor_m1801583884_gshared)(__this, ___value0, ___children1, method)
// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::.ctor(T)
extern "C"  void ImmutableTree_1__ctor_m1738413240_gshared (ImmutableTree_1_t368550071 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method);
#define ImmutableTree_1__ctor_m1738413240(__this, ___value0, method) ((  void (*) (ImmutableTree_1_t368550071 *, Nullable_1_t2088641033 , const MethodInfo*))ImmutableTree_1__ctor_m1738413240_gshared)(__this, ___value0, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,T>> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::GetEnumerator()
extern "C"  Il2CppObject* ImmutableTree_1_GetEnumerator_m1799115700_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetEnumerator_m1799115700(__this, method) ((  Il2CppObject* (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_GetEnumerator_m1799115700_gshared)(__this, method)
// System.Collections.IEnumerator Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ImmutableTree_1_System_Collections_IEnumerable_GetEnumerator_m2023205285_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_System_Collections_IEnumerable_GetEnumerator_m2023205285(__this, method) ((  Il2CppObject * (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_System_Collections_IEnumerable_GetEnumerator_m2023205285_gshared)(__this, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::EmptyInstance()
extern "C"  ImmutableTree_1_t368550071 * ImmutableTree_1_EmptyInstance_m2573230590_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ImmutableTree_1_EmptyInstance_m2573230590(__this /* static, unused */, method) ((  ImmutableTree_1_t368550071 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ImmutableTree_1_EmptyInstance_m2573230590_gshared)(__this /* static, unused */, method)
// T Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::GetValue()
extern "C"  Nullable_1_t2088641033  ImmutableTree_1_GetValue_m2767026044_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetValue_m2767026044(__this, method) ((  Nullable_1_t2088641033  (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_GetValue_m2767026044_gshared)(__this, method)
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,System.Object> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::GetChildren()
extern "C"  ImmutableSortedMap_2_t94277708 * ImmutableTree_1_GetChildren_m1070085586_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetChildren_m1070085586(__this, method) ((  ImmutableSortedMap_2_t94277708 * (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_GetChildren_m1070085586_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::IsEmpty()
extern "C"  bool ImmutableTree_1_IsEmpty_m2012344195_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_IsEmpty_m2012344195(__this, method) ((  bool (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_IsEmpty_m2012344195_gshared)(__this, method)
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::FindRootMostMatchingPath(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.Predicate`1<T>)
extern "C"  Path_t2568473163 * ImmutableTree_1_FindRootMostMatchingPath_m411676773_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, Predicate_1_t605805710 * ___predicate1, const MethodInfo* method);
#define ImmutableTree_1_FindRootMostMatchingPath_m411676773(__this, ___relativePath0, ___predicate1, method) ((  Path_t2568473163 * (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, Predicate_1_t605805710 *, const MethodInfo*))ImmutableTree_1_FindRootMostMatchingPath_m411676773_gshared)(__this, ___relativePath0, ___predicate1, method)
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::FindRootMostPathWithValue(Firebase.Database.Internal.Core.Path)
extern "C"  Path_t2568473163 * ImmutableTree_1_FindRootMostPathWithValue_m1449986173_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_FindRootMostPathWithValue_m1449986173(__this, ___relativePath0, method) ((  Path_t2568473163 * (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_FindRootMostPathWithValue_m1449986173_gshared)(__this, ___relativePath0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::GetChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  ImmutableTree_1_t368550071 * ImmutableTree_1_GetChild_m3783161626_gshared (ImmutableTree_1_t368550071 * __this, ChildKey_t1197802383 * ___child0, const MethodInfo* method);
#define ImmutableTree_1_GetChild_m3783161626(__this, ___child0, method) ((  ImmutableTree_1_t368550071 * (*) (ImmutableTree_1_t368550071 *, ChildKey_t1197802383 *, const MethodInfo*))ImmutableTree_1_GetChild_m3783161626_gshared)(__this, ___child0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::Subtree(Firebase.Database.Internal.Core.Path)
extern "C"  ImmutableTree_1_t368550071 * ImmutableTree_1_Subtree_m206536087_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_Subtree_m206536087(__this, ___relativePath0, method) ((  ImmutableTree_1_t368550071 * (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_Subtree_m206536087_gshared)(__this, ___relativePath0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::Set(Firebase.Database.Internal.Core.Path,T)
extern "C"  ImmutableTree_1_t368550071 * ImmutableTree_1_Set_m495016611_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, Nullable_1_t2088641033  ___value1, const MethodInfo* method);
#define ImmutableTree_1_Set_m495016611(__this, ___relativePath0, ___value1, method) ((  ImmutableTree_1_t368550071 * (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, Nullable_1_t2088641033 , const MethodInfo*))ImmutableTree_1_Set_m495016611_gshared)(__this, ___relativePath0, ___value1, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::Remove(Firebase.Database.Internal.Core.Path)
extern "C"  ImmutableTree_1_t368550071 * ImmutableTree_1_Remove_m3151072967_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_Remove_m3151072967(__this, ___relativePath0, method) ((  ImmutableTree_1_t368550071 * (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_Remove_m3151072967_gshared)(__this, ___relativePath0, method)
// T Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::Get(Firebase.Database.Internal.Core.Path)
extern "C"  Nullable_1_t2088641033  ImmutableTree_1_Get_m1924369382_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, const MethodInfo* method);
#define ImmutableTree_1_Get_m1924369382(__this, ___relativePath0, method) ((  Nullable_1_t2088641033  (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, const MethodInfo*))ImmutableTree_1_Get_m1924369382_gshared)(__this, ___relativePath0, method)
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::SetTree(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<T>)
extern "C"  ImmutableTree_1_t368550071 * ImmutableTree_1_SetTree_m902619558_gshared (ImmutableTree_1_t368550071 * __this, Path_t2568473163 * ___relativePath0, ImmutableTree_1_t368550071 * ___newTree1, const MethodInfo* method);
#define ImmutableTree_1_SetTree_m902619558(__this, ___relativePath0, ___newTree1, method) ((  ImmutableTree_1_t368550071 * (*) (ImmutableTree_1_t368550071 *, Path_t2568473163 *, ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_SetTree_m902619558_gshared)(__this, ___relativePath0, ___newTree1, method)
// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::Foreach(Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/ITreeVisitor`1<T,System.Object>)
extern "C"  void ImmutableTree_1_Foreach_m555067238_gshared (ImmutableTree_1_t368550071 * __this, Il2CppObject* ___visitor0, const MethodInfo* method);
#define ImmutableTree_1_Foreach_m555067238(__this, ___visitor0, method) ((  void (*) (ImmutableTree_1_t368550071 *, Il2CppObject*, const MethodInfo*))ImmutableTree_1_Foreach_m555067238_gshared)(__this, ___visitor0, method)
// System.String Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::ToString()
extern "C"  String_t* ImmutableTree_1_ToString_m450004739_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_ToString_m450004739(__this, method) ((  String_t* (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_ToString_m450004739_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::Equals(System.Object)
extern "C"  bool ImmutableTree_1_Equals_m1063714981_gshared (ImmutableTree_1_t368550071 * __this, Il2CppObject * ___o0, const MethodInfo* method);
#define ImmutableTree_1_Equals_m1063714981(__this, ___o0, method) ((  bool (*) (ImmutableTree_1_t368550071 *, Il2CppObject *, const MethodInfo*))ImmutableTree_1_Equals_m1063714981_gshared)(__this, ___o0, method)
// System.Int32 Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::GetHashCode()
extern "C"  int32_t ImmutableTree_1_GetHashCode_m3650643267_gshared (ImmutableTree_1_t368550071 * __this, const MethodInfo* method);
#define ImmutableTree_1_GetHashCode_m3650643267(__this, method) ((  int32_t (*) (ImmutableTree_1_t368550071 *, const MethodInfo*))ImmutableTree_1_GetHashCode_m3650643267_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>::.cctor()
extern "C"  void ImmutableTree_1__cctor_m507018603_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define ImmutableTree_1__cctor_m507018603(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))ImmutableTree_1__cctor_m507018603_gshared)(__this /* static, unused */, method)
