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

// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Snapshot.Node>
struct ImmutableTree_1_t919968048;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>>
struct IEnumerator_1_t1477402031;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>
struct IDictionary_2_t4243616403;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IList_1_t1328826386;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.CompoundWrite>
struct IDictionary_2_t3554680467;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.CompoundWrite::.ctor(Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Snapshot.Node>)
extern "C"  void CompoundWrite__ctor_m2511533617 (CompoundWrite_t496419158 * __this, ImmutableTree_1_t919968048 * ___writeTree0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>> Firebase.Database.Internal.Core.CompoundWrite::GetEnumerator()
extern "C"  Il2CppObject* CompoundWrite_GetEnumerator_m233501126 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Firebase.Database.Internal.Core.CompoundWrite::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * CompoundWrite_System_Collections_IEnumerable_GetEnumerator_m3791594952 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::EmptyWrite()
extern "C"  CompoundWrite_t496419158 * CompoundWrite_EmptyWrite_m272487360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::FromPathMerge(System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>)
extern "C"  CompoundWrite_t496419158 * CompoundWrite_FromPathMerge_m1367741949 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___merge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::AddWrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  CompoundWrite_t496419158 * CompoundWrite_AddWrite_m1615870812 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::AddWrite(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  CompoundWrite_t496419158 * CompoundWrite_AddWrite_m2291778199 (CompoundWrite_t496419158 * __this, ChildKey_t1197802383 * ___key0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::AddWrites(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  CompoundWrite_t496419158 * CompoundWrite_AddWrites_m3592287748 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___updates1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::RemoveWrite(Firebase.Database.Internal.Core.Path)
extern "C"  CompoundWrite_t496419158 * CompoundWrite_RemoveWrite_m2844748950 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.CompoundWrite::HasCompleteWrite(Firebase.Database.Internal.Core.Path)
extern "C"  bool CompoundWrite_HasCompleteWrite_m363055634 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.CompoundWrite::RootWrite()
extern "C"  Node_t2640059010 * CompoundWrite_RootWrite_m1129814944 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.CompoundWrite::GetCompleteNode(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * CompoundWrite_GetCompleteNode_m1680179579 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Core.CompoundWrite::GetCompleteChildren()
extern "C"  Il2CppObject* CompoundWrite_GetCompleteChildren_m1328637489 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::ChildCompoundWrite(Firebase.Database.Internal.Core.Path)
extern "C"  CompoundWrite_t496419158 * CompoundWrite_ChildCompoundWrite_m1874133169 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.CompoundWrite> Firebase.Database.Internal.Core.CompoundWrite::ChildCompoundWrites()
extern "C"  Il2CppObject* CompoundWrite_ChildCompoundWrites_m3242378227 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.CompoundWrite::IsEmpty()
extern "C"  bool CompoundWrite_IsEmpty_m3429328986 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.CompoundWrite::ApplySubtreeWrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Snapshot.Node>,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * CompoundWrite_ApplySubtreeWrite_m2406925940 (CompoundWrite_t496419158 * __this, Path_t2568473163 * ___relativePath0, ImmutableTree_1_t919968048 * ___writeTree1, Node_t2640059010 * ___node2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.CompoundWrite::Apply(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * CompoundWrite_Apply_m2307248070 (CompoundWrite_t496419158 * __this, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Core.CompoundWrite::GetValue(System.Boolean)
extern "C"  Il2CppObject* CompoundWrite_GetValue_m2560861184 (CompoundWrite_t496419158 * __this, bool ___exportFormat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.CompoundWrite::Equals(System.Object)
extern "C"  bool CompoundWrite_Equals_m3452916406 (CompoundWrite_t496419158 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.CompoundWrite::GetHashCode()
extern "C"  int32_t CompoundWrite_GetHashCode_m1413553026 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.CompoundWrite::ToString()
extern "C"  String_t* CompoundWrite_ToString_m1145269354 (CompoundWrite_t496419158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.CompoundWrite::.cctor()
extern "C"  void CompoundWrite__cctor_m2562333192 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
