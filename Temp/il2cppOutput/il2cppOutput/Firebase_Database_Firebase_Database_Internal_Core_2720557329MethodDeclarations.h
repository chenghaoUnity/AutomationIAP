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

// Firebase.Database.Internal.Core.SyncPoint
struct SyncPoint_t2720557329;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent>
struct IList_1_t3871132203;
// Firebase.Database.Internal.Core.View.View
struct View_t798282663;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;
// Firebase.Database.Internal.Utilities.Pair`2<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.QuerySpec>,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>>
struct Pair_2_t25474928;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.View>
struct IList_1_t1339223264;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V798282663.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W351426802.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V994563358.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Void Firebase.Database.Internal.Core.SyncPoint::.ctor(Firebase.Database.Internal.Core.Persistence.IPersistenceManager)
extern "C"  void SyncPoint__ctor_m1436313748 (SyncPoint_t2720557329 * __this, Il2CppObject * ___persistenceManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.SyncPoint::IsEmpty()
extern "C"  bool SyncPoint_IsEmpty_m3570720185 (SyncPoint_t2720557329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.SyncPoint::ApplyOperationToView(Firebase.Database.Internal.Core.View.View,Firebase.Database.Internal.Core.Operation.Operation,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Il2CppObject* SyncPoint_ApplyOperationToView_m399680667 (SyncPoint_t2720557329 * __this, View_t798282663 * ___view0, Operation_t3598067969 * ___operation1, WriteTreeRef_t351426802 * ___writes2, Node_t2640059010 * ___optCompleteServerCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.SyncPoint::ApplyOperation(Firebase.Database.Internal.Core.Operation.Operation,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Il2CppObject* SyncPoint_ApplyOperation_m980276175 (SyncPoint_t2720557329 * __this, Operation_t3598067969 * ___operation0, WriteTreeRef_t351426802 * ___writesCache1, Node_t2640059010 * ___optCompleteServerCache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.SyncPoint::AddEventRegistration(Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Core.View.CacheNode)
extern "C"  Il2CppObject* SyncPoint_AddEventRegistration_m129108229 (SyncPoint_t2720557329 * __this, EventRegistration_t4222917807 * ___eventRegistration0, WriteTreeRef_t351426802 * ___writesCache1, CacheNode_t994563358 * ___serverCache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Utilities.Pair`2<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.QuerySpec>,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>> Firebase.Database.Internal.Core.SyncPoint::RemoveEventRegistration(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.DatabaseError)
extern "C"  Pair_2_t25474928 * SyncPoint_RemoveEventRegistration_m1533071230 (SyncPoint_t2720557329 * __this, QuerySpec_t377558711 * ___query0, EventRegistration_t4222917807 * ___eventRegistration1, DatabaseError_t1067746743 * ___cancelError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.View> Firebase.Database.Internal.Core.SyncPoint::GetQueryViews()
extern "C"  Il2CppObject* SyncPoint_GetQueryViews_m719491632 (SyncPoint_t2720557329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SyncPoint::GetCompleteServerCache(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * SyncPoint_GetCompleteServerCache_m3709510113 (SyncPoint_t2720557329 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.View Firebase.Database.Internal.Core.SyncPoint::ViewForQuery(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  View_t798282663 * SyncPoint_ViewForQuery_m2185585515 (SyncPoint_t2720557329 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.SyncPoint::ViewExistsForQuery(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  bool SyncPoint_ViewExistsForQuery_m196743206 (SyncPoint_t2720557329 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.SyncPoint::HasCompleteView()
extern "C"  bool SyncPoint_HasCompleteView_m3755582284 (SyncPoint_t2720557329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.View Firebase.Database.Internal.Core.SyncPoint::GetCompleteView()
extern "C"  View_t798282663 * SyncPoint_GetCompleteView_m1238689985 (SyncPoint_t2720557329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
