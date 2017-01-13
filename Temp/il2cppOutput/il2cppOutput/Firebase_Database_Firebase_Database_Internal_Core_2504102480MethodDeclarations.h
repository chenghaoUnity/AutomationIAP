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

// Firebase.Database.Internal.Core.SnapshotHolder
struct SnapshotHolder_t2504102480;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Void Firebase.Database.Internal.Core.SnapshotHolder::.ctor()
extern "C"  void SnapshotHolder__ctor_m1249406741 (SnapshotHolder_t2504102480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SnapshotHolder::.ctor(Firebase.Database.Internal.Snapshot.Node)
extern "C"  void SnapshotHolder__ctor_m3635743370 (SnapshotHolder_t2504102480 * __this, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SnapshotHolder::GetRootNode()
extern "C"  Node_t2640059010 * SnapshotHolder_GetRootNode_m2510286933 (SnapshotHolder_t2504102480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SnapshotHolder::GetNode(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * SnapshotHolder_GetNode_m3000133358 (SnapshotHolder_t2504102480 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SnapshotHolder::Update(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void SnapshotHolder_Update_m2355938680 (SnapshotHolder_t2504102480 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
