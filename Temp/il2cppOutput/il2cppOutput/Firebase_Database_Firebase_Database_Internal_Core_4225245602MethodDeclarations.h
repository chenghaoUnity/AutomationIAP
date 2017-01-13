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

// Firebase.Database.Internal.Core.ServerValues/SparseSnapshotTreeVisitor40
struct SparseSnapshotTreeVisitor40_t4225245602;
// Firebase.Database.Internal.Core.SparseSnapshotTree
struct SparseSnapshotTree_t504080338;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S504080338.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Core.ServerValues/SparseSnapshotTreeVisitor40::.ctor(Firebase.Database.Internal.Core.SparseSnapshotTree,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void SparseSnapshotTreeVisitor40__ctor_m3614186097 (SparseSnapshotTreeVisitor40_t4225245602 * __this, SparseSnapshotTree_t504080338 * ___resolvedTree0, Il2CppObject* ___serverValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ServerValues/SparseSnapshotTreeVisitor40::VisitTree(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void SparseSnapshotTreeVisitor40_VisitTree_m312119284 (SparseSnapshotTreeVisitor40_t4225245602 * __this, Path_t2568473163 * ___prefixPath0, Node_t2640059010 * ___tree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
