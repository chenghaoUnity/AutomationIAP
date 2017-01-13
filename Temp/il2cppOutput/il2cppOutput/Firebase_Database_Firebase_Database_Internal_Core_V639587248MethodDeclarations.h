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

// Firebase.Database.Internal.Core.View.Change
struct Change_t639587248;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1195404398.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Core.View.Change::.ctor(Firebase.Database.Internal.Core.View.Event/EventType,Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  void Change__ctor_m2160842940 (Change_t639587248 * __this, int32_t ___eventType0, IndexedNode_t376444473 * ___indexedNode1, ChildKey_t1197802383 * ___childKey2, ChildKey_t1197802383 * ___prevName3, IndexedNode_t376444473 * ___oldIndexedNode4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ValueChange(Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  Change_t639587248 * Change_ValueChange_m4215390663 (Il2CppObject * __this /* static, unused */, IndexedNode_t376444473 * ___snapshot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildAddedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Change_t639587248 * Change_ChildAddedChange_m1737589611 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, Node_t2640059010 * ___snapshot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildAddedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  Change_t639587248 * Change_ChildAddedChange_m1419500986 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, IndexedNode_t376444473 * ___snapshot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildRemovedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Change_t639587248 * Change_ChildRemovedChange_m2851331249 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, Node_t2640059010 * ___snapshot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildRemovedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  Change_t639587248 * Change_ChildRemovedChange_m1739909384 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, IndexedNode_t376444473 * ___snapshot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildChangedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Change_t639587248 * Change_ChildChangedChange_m3177821802 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, Node_t2640059010 * ___newSnapshot1, Node_t2640059010 * ___oldSnapshot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildChangedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  Change_t639587248 * Change_ChildChangedChange_m2918546224 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, IndexedNode_t376444473 * ___newSnapshot1, IndexedNode_t376444473 * ___oldSnapshot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChildMovedChange(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  Change_t639587248 * Change_ChildMovedChange_m1888057221 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___childKey0, IndexedNode_t376444473 * ___snapshot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Change Firebase.Database.Internal.Core.View.Change::ChangeWithPrevName(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Change_t639587248 * Change_ChangeWithPrevName_m2910479276 (Change_t639587248 * __this, ChildKey_t1197802383 * ___prevName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.Change::GetChildKey()
extern "C"  ChildKey_t1197802383 * Change_GetChildKey_m1417999166 (Change_t639587248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Event/EventType Firebase.Database.Internal.Core.View.Change::GetEventType()
extern "C"  int32_t Change_GetEventType_m979469673 (Change_t639587248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Change::GetIndexedNode()
extern "C"  IndexedNode_t376444473 * Change_GetIndexedNode_m1687940294 (Change_t639587248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Change::GetOldIndexedNode()
extern "C"  IndexedNode_t376444473 * Change_GetOldIndexedNode_m1019387957 (Change_t639587248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.View.Change::ToString()
extern "C"  String_t* Change_ToString_m3151938623 (Change_t639587248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
