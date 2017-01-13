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

// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"

// System.Void Firebase.Database.Internal.Snapshot.Index::.ctor()
extern "C"  void Index__ctor_m954817460 (Index_t2425062456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.Index::IndexedValueChanged(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Node)
extern "C"  bool Index_IndexedValueChanged_m1109587704 (Index_t2425062456 * __this, Node_t2640059010 * ___oldNode0, Node_t2640059010 * ___newNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.Index::MinPost()
extern "C"  NamedNode_t787885785 * Index_MinPost_m2623872829 (Index_t2425062456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.Index::Compare(Firebase.Database.Internal.Snapshot.NamedNode,Firebase.Database.Internal.Snapshot.NamedNode,System.Boolean)
extern "C"  int32_t Index_Compare_m1303420636 (Index_t2425062456 * __this, NamedNode_t787885785 * ___one0, NamedNode_t787885785 * ___two1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
