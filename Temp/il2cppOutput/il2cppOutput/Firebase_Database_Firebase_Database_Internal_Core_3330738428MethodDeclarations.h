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

// Firebase.Database.Internal.Core.SyncTree/NodeVisitor826
struct NodeVisitor826_t3330738428;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W351426802.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::.ctor(Firebase.Database.Internal.Core.SyncTree,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Core.Operation.Operation,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>)
extern "C"  void NodeVisitor826__ctor_m670758957 (NodeVisitor826_t3330738428 * __this, SyncTree_t528142079 * ___enclosing0, Node_t2640059010 * ___resolvedServerCache1, WriteTreeRef_t351426802 * ___writesCache2, Operation_t3598067969 * ___operation3, Il2CppObject* ___events4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::VisitEntry(Firebase.Database.Internal.Snapshot.ChildKey,System.Object)
extern "C"  void NodeVisitor826_VisitEntry_m1884817958 (NodeVisitor826_t3330738428 * __this, ChildKey_t1197802383 * ___key0, Il2CppObject * ___childTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
