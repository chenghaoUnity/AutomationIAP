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

// Firebase.Database.Internal.Snapshot.RangeMerge
struct RangeMerge_t2434126241;
// Firebase.Database.Internal.Connection.RangeMerge
struct RangeMerge_t98025219;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Connect98025219.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Void Firebase.Database.Internal.Snapshot.RangeMerge::.ctor(Firebase.Database.Internal.Connection.RangeMerge)
extern "C"  void RangeMerge__ctor_m142249759 (RangeMerge_t2434126241 * __this, RangeMerge_t98025219 * ___rangeMerge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.RangeMerge::ApplyTo(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * RangeMerge_ApplyTo_m2852603865 (RangeMerge_t2434126241 * __this, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.RangeMerge::UpdateRangeInNode(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * RangeMerge_UpdateRangeInNode_m2582800577 (RangeMerge_t2434126241 * __this, Path_t2568473163 * ___currentPath0, Node_t2640059010 * ___node1, Node_t2640059010 * ___updateNode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.RangeMerge::ToString()
extern "C"  String_t* RangeMerge_ToString_m3682229918 (RangeMerge_t2434126241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
