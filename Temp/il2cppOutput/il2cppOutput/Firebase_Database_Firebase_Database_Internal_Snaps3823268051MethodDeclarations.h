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

// Firebase.Database.Internal.Snapshot.KeyIndex
struct KeyIndex_t3823268051;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.KeyIndex::.ctor()
extern "C"  void KeyIndex__ctor_m60515699 (KeyIndex_t3823268051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.KeyIndex Firebase.Database.Internal.Snapshot.KeyIndex::GetInstance()
extern "C"  KeyIndex_t3823268051 * KeyIndex_GetInstance_m2407847961 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.KeyIndex::IsDefinedOn(Firebase.Database.Internal.Snapshot.Node)
extern "C"  bool KeyIndex_IsDefinedOn_m245250990 (KeyIndex_t3823268051 * __this, Node_t2640059010 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.KeyIndex::MakePost(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  NamedNode_t787885785 * KeyIndex_MakePost_m3564372651 (KeyIndex_t3823268051 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.KeyIndex::MaxPost()
extern "C"  NamedNode_t787885785 * KeyIndex_MaxPost_m4014458822 (KeyIndex_t3823268051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.KeyIndex::GetQueryDefinition()
extern "C"  String_t* KeyIndex_GetQueryDefinition_m3653493875 (KeyIndex_t3823268051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.KeyIndex::Compare(Firebase.Database.Internal.Snapshot.NamedNode,Firebase.Database.Internal.Snapshot.NamedNode)
extern "C"  int32_t KeyIndex_Compare_m2637765842 (KeyIndex_t3823268051 * __this, NamedNode_t787885785 * ___o10, NamedNode_t787885785 * ___o21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.KeyIndex::Equals(System.Object)
extern "C"  bool KeyIndex_Equals_m2855121950 (KeyIndex_t3823268051 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.KeyIndex::GetHashCode()
extern "C"  int32_t KeyIndex_GetHashCode_m3299603694 (KeyIndex_t3823268051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.KeyIndex::ToString()
extern "C"  String_t* KeyIndex_ToString_m3115306764 (KeyIndex_t3823268051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.KeyIndex::.cctor()
extern "C"  void KeyIndex__cctor_m1947954436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
