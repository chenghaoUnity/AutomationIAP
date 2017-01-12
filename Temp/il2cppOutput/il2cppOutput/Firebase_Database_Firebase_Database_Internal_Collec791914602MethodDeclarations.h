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

// Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>
struct RbTreeSortedMap_2_t791914602;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
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

// System.Void Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::.ctor(Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>,System.Collections.Generic.IComparer`1<TK>)
extern "C"  void RbTreeSortedMap_2__ctor_m3316159118_gshared (RbTreeSortedMap_2_t791914602 * __this, LlrbNode_2_t4262869811 * ___root0, Il2CppObject* ___comparator1, const MethodInfo* method);
#define RbTreeSortedMap_2__ctor_m3316159118(__this, ___root0, ___comparator1, method) ((  void (*) (RbTreeSortedMap_2_t791914602 *, LlrbNode_2_t4262869811 *, Il2CppObject*, const MethodInfo*))RbTreeSortedMap_2__ctor_m3316159118_gshared)(__this, ___root0, ___comparator1, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::GetNode(TK)
extern "C"  LlrbNode_2_t4262869811 * RbTreeSortedMap_2_GetNode_m726917759_gshared (RbTreeSortedMap_2_t791914602 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define RbTreeSortedMap_2_GetNode_m726917759(__this, ___key0, method) ((  LlrbNode_2_t4262869811 * (*) (RbTreeSortedMap_2_t791914602 *, Il2CppObject *, const MethodInfo*))RbTreeSortedMap_2_GetNode_m726917759_gshared)(__this, ___key0, method)
// System.Boolean Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::ContainsKey(TK)
extern "C"  bool RbTreeSortedMap_2_ContainsKey_m2568327266_gshared (RbTreeSortedMap_2_t791914602 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define RbTreeSortedMap_2_ContainsKey_m2568327266(__this, ___key0, method) ((  bool (*) (RbTreeSortedMap_2_t791914602 *, Il2CppObject *, const MethodInfo*))RbTreeSortedMap_2_ContainsKey_m2568327266_gshared)(__this, ___key0, method)
// TV Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::Get(TK)
extern "C"  Il2CppObject * RbTreeSortedMap_2_Get_m1997454941_gshared (RbTreeSortedMap_2_t791914602 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define RbTreeSortedMap_2_Get_m1997454941(__this, ___key0, method) ((  Il2CppObject * (*) (RbTreeSortedMap_2_t791914602 *, Il2CppObject *, const MethodInfo*))RbTreeSortedMap_2_Get_m1997454941_gshared)(__this, ___key0, method)
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<TK,TV> Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::Remove(TK)
extern "C"  ImmutableSortedMap_2_t3217094540 * RbTreeSortedMap_2_Remove_m3907863786_gshared (RbTreeSortedMap_2_t791914602 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define RbTreeSortedMap_2_Remove_m3907863786(__this, ___key0, method) ((  ImmutableSortedMap_2_t3217094540 * (*) (RbTreeSortedMap_2_t791914602 *, Il2CppObject *, const MethodInfo*))RbTreeSortedMap_2_Remove_m3907863786_gshared)(__this, ___key0, method)
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<TK,TV> Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::Insert(TK,TV)
extern "C"  ImmutableSortedMap_2_t3217094540 * RbTreeSortedMap_2_Insert_m691565085_gshared (RbTreeSortedMap_2_t791914602 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define RbTreeSortedMap_2_Insert_m691565085(__this, ___key0, ___value1, method) ((  ImmutableSortedMap_2_t3217094540 * (*) (RbTreeSortedMap_2_t791914602 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))RbTreeSortedMap_2_Insert_m691565085_gshared)(__this, ___key0, ___value1, method)
// TK Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::GetMinKey()
extern "C"  Il2CppObject * RbTreeSortedMap_2_GetMinKey_m337601112_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_GetMinKey_m337601112(__this, method) ((  Il2CppObject * (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_GetMinKey_m337601112_gshared)(__this, method)
// TK Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::GetMaxKey()
extern "C"  Il2CppObject * RbTreeSortedMap_2_GetMaxKey_m1733774194_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_GetMaxKey_m1733774194(__this, method) ((  Il2CppObject * (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_GetMaxKey_m1733774194_gshared)(__this, method)
// System.Int32 Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::Size()
extern "C"  int32_t RbTreeSortedMap_2_Size_m4289517240_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_Size_m4289517240(__this, method) ((  int32_t (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_Size_m4289517240_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::IsEmpty()
extern "C"  bool RbTreeSortedMap_2_IsEmpty_m3650965036_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_IsEmpty_m3650965036(__this, method) ((  bool (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_IsEmpty_m3650965036_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::InOrderTraversal(Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<TK,TV>)
extern "C"  void RbTreeSortedMap_2_InOrderTraversal_m4262549487_gshared (RbTreeSortedMap_2_t791914602 * __this, NodeVisitor_t2944196615 * ___visitor0, const MethodInfo* method);
#define RbTreeSortedMap_2_InOrderTraversal_m4262549487(__this, ___visitor0, method) ((  void (*) (RbTreeSortedMap_2_t791914602 *, NodeVisitor_t2944196615 *, const MethodInfo*))RbTreeSortedMap_2_InOrderTraversal_m4262549487_gshared)(__this, ___visitor0, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TK,TV>> Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Il2CppObject* RbTreeSortedMap_2_GetEnumerator_m4061730193_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_GetEnumerator_m4061730193(__this, method) ((  Il2CppObject* (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_GetEnumerator_m4061730193_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TK,TV>> Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::ReverseIterator()
extern "C"  Il2CppObject* RbTreeSortedMap_2_ReverseIterator_m3656546497_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_ReverseIterator_m3656546497(__this, method) ((  Il2CppObject* (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_ReverseIterator_m3656546497_gshared)(__this, method)
// TK Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::GetPredecessorKey(TK)
extern "C"  Il2CppObject * RbTreeSortedMap_2_GetPredecessorKey_m1189796600_gshared (RbTreeSortedMap_2_t791914602 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define RbTreeSortedMap_2_GetPredecessorKey_m1189796600(__this, ___key0, method) ((  Il2CppObject * (*) (RbTreeSortedMap_2_t791914602 *, Il2CppObject *, const MethodInfo*))RbTreeSortedMap_2_GetPredecessorKey_m1189796600_gshared)(__this, ___key0, method)
// System.Collections.Generic.IComparer`1<TK> Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>::GetComparator()
extern "C"  Il2CppObject* RbTreeSortedMap_2_GetComparator_m2623139801_gshared (RbTreeSortedMap_2_t791914602 * __this, const MethodInfo* method);
#define RbTreeSortedMap_2_GetComparator_m2623139801(__this, method) ((  Il2CppObject* (*) (RbTreeSortedMap_2_t791914602 *, const MethodInfo*))RbTreeSortedMap_2_GetComparator_m2623139801_gshared)(__this, method)
