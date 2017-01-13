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

// Firebase.Database.Internal.Core.View.View
struct View_t798282663;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Core.View.View/OperationResult
struct OperationResult_t335720575;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent>
struct IList_1_t3871132203;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>
struct IList_1_t1180527849;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V983378685.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W351426802.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"

// System.Void Firebase.Database.Internal.Core.View.View::.ctor(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.View.ViewCache)
extern "C"  void View__ctor_m165636185 (View_t798282663 * __this, QuerySpec_t377558711 * ___query0, ViewCache_t983378685 * ___initialViewCache1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.View.View::GetQuery()
extern "C"  QuerySpec_t377558711 * View_GetQuery_m254983522 (View_t798282663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.View::GetServerCache()
extern "C"  Node_t2640059010 * View_GetServerCache_m1563006052 (View_t798282663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.View::GetEventCache()
extern "C"  Node_t2640059010 * View_GetEventCache_m3886100097 (View_t798282663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.View::GetCompleteServerCache(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * View_GetCompleteServerCache_m1398244182 (View_t798282663 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.View::IsEmpty()
extern "C"  bool View_IsEmpty_m2588414670 (View_t798282663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.View::AddEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void View_AddEventRegistration_m245783056 (View_t798282663 * __this, EventRegistration_t4222917807 * ___registration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.View.View::RemoveEventRegistration(Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.DatabaseError)
extern "C"  Il2CppObject* View_RemoveEventRegistration_m1541317731 (View_t798282663 * __this, EventRegistration_t4222917807 * ___registration0, DatabaseError_t1067746743 * ___cancelError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.View/OperationResult Firebase.Database.Internal.Core.View.View::ApplyOperation(Firebase.Database.Internal.Core.Operation.Operation,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node)
extern "C"  OperationResult_t335720575 * View_ApplyOperation_m467977919 (View_t798282663 * __this, Operation_t3598067969 * ___operation0, WriteTreeRef_t351426802 * ___writesCache1, Node_t2640059010 * ___optCompleteServerCache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.View.View::GetInitialEvents(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  Il2CppObject* View_GetInitialEvents_m3881104026 (View_t798282663 * __this, EventRegistration_t4222917807 * ___registration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.View.View::GenerateEventsForChanges(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>,Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Core.EventRegistration)
extern "C"  Il2CppObject* View_GenerateEventsForChanges_m2244491073 (View_t798282663 * __this, Il2CppObject* ___changes0, IndexedNode_t376444473 * ___eventCache1, EventRegistration_t4222917807 * ___registration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
