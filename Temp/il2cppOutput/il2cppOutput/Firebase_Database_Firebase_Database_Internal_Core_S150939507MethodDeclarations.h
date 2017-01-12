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

// Firebase.Database.Internal.Core.SparseSnapshotTree/SparseSnapshotChildVisitor107
struct SparseSnapshotChildVisitor107_t150939507;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotTreeVisitor
struct ISparseSnapshotTreeVisitor_t690780912;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.SparseSnapshotTree
struct SparseSnapshotTree_t504080338;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S504080338.h"

// System.Void Firebase.Database.Internal.Core.SparseSnapshotTree/SparseSnapshotChildVisitor107::.ctor(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.SparseSnapshotTree/ISparseSnapshotTreeVisitor)
extern "C"  void SparseSnapshotChildVisitor107__ctor_m4259873303 (SparseSnapshotChildVisitor107_t150939507 * __this, Path_t2568473163 * ___prefixPath0, Il2CppObject * ___visitor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SparseSnapshotTree/SparseSnapshotChildVisitor107::VisitChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.SparseSnapshotTree)
extern "C"  void SparseSnapshotChildVisitor107_VisitChild_m1489549025 (SparseSnapshotChildVisitor107_t150939507 * __this, ChildKey_t1197802383 * ___key0, SparseSnapshotTree_t504080338 * ___tree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
