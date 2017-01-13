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

// Firebase.Database.Internal.Core.SparseSnapshotTree
struct SparseSnapshotTree_t504080338;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotTreeVisitor
struct ISparseSnapshotTreeVisitor_t690780912;
// Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotChildVisitor
struct ISparseSnapshotChildVisitor_t4293880746;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Core.SparseSnapshotTree::.ctor()
extern "C"  void SparseSnapshotTree__ctor_m907600737 (SparseSnapshotTree_t504080338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SparseSnapshotTree::Remember(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void SparseSnapshotTree_Remember_m3466813648 (SparseSnapshotTree_t504080338 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SparseSnapshotTree::ForEachTree(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotTreeVisitor)
extern "C"  void SparseSnapshotTree_ForEachTree_m3073096360 (SparseSnapshotTree_t504080338 * __this, Path_t2568473163 * ___prefixPath0, Il2CppObject * ___visitor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SparseSnapshotTree::ForEachChild(Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotChildVisitor)
extern "C"  void SparseSnapshotTree_ForEachChild_m369537097 (SparseSnapshotTree_t504080338 * __this, Il2CppObject * ___visitor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
