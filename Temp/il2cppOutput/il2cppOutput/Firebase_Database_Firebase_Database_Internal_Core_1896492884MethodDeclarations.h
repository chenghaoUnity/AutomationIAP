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

// Firebase.Database.Internal.Core.Repo/SparseSnapshotTreeVisitor559
struct SparseSnapshotTreeVisitor559_t1896492884;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Core.Repo/SparseSnapshotTreeVisitor559::.ctor(Firebase.Database.Internal.Core.Repo,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>)
extern "C"  void SparseSnapshotTreeVisitor559__ctor_m4133583139 (SparseSnapshotTreeVisitor559_t1896492884 * __this, Repo_t1244308462 * ___enclosing0, Il2CppObject* ___events1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/SparseSnapshotTreeVisitor559::VisitTree(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void SparseSnapshotTreeVisitor559_VisitTree_m4240743894 (SparseSnapshotTreeVisitor559_t1896492884 * __this, Path_t2568473163 * ___prefixPath0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
