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

// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// Firebase.Database.Internal.Core.SyncTree/IListenProvider
struct IListenProvider_t493868681;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Utilities.IClock
struct IClock_t2325879361;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>
struct IDictionary_2_t4243616403;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Snapshot.RangeMerge>
struct IList_1_t2975066842;
// Firebase.Database.Internal.Core.Tag
struct Tag_t2439924210;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent>
struct IList_1_t3871132203;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.View>
struct IList_1_t1339223264;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint>
struct ImmutableTree_1_t1000466367;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.QuerySpec>
struct IList_1_t918499312;
// Firebase.Database.Internal.Core.View.View
struct View_t798282663;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1450018638;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3486154757.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2439924210.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V798282663.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W351426802.h"

// System.Void Firebase.Database.Internal.Core.SyncTree::.ctor(Firebase.Database.Internal.Core.Context,Firebase.Database.Internal.Core.Persistence.IPersistenceManager,Firebase.Database.Internal.Core.SyncTree/IListenProvider)
extern "C"  void SyncTree__ctor_m1235861134 (SyncTree_t528142079 * __this, Context_t3486154757 * ___context0, Il2CppObject * ___persistenceManager1, Il2CppObject * ___listenProvider2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyUserOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Node,System.Int64,System.Boolean,System.Boolean)
extern "C"  Il2CppObject* SyncTree_ApplyUserOverwrite_m3292890962 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___newDataUnresolved1, Node_t2640059010 * ___newData2, int64_t ___writeId3, bool ___visible4, bool ___persist5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyUserMerge(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,Firebase.Database.Internal.Core.CompoundWrite,System.Int64,System.Boolean)
extern "C"  Il2CppObject* SyncTree_ApplyUserMerge_m3611795216 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___unresolvedChildren1, CompoundWrite_t496419158 * ___children2, int64_t ___writeId3, bool ___persist4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::AckUserWrite(System.Int64,System.Boolean,System.Boolean,Firebase.Database.Internal.Utilities.IClock)
extern "C"  Il2CppObject* SyncTree_AckUserWrite_m2262897522 (SyncTree_t528142079 * __this, int64_t ___writeId0, bool ___revert1, bool ___persist2, Il2CppObject * ___serverClock3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyServerOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Il2CppObject* SyncTree_ApplyServerOverwrite_m3457500615 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___newData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyServerMerge(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>)
extern "C"  Il2CppObject* SyncTree_ApplyServerMerge_m3840884567 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Il2CppObject* ___changedChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyServerRangeMerges(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IList`1<Firebase.Database.Internal.Snapshot.RangeMerge>)
extern "C"  Il2CppObject* SyncTree_ApplyServerRangeMerges_m2687620346 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Il2CppObject* ___rangeMerges1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyTaggedRangeMerges(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IList`1<Firebase.Database.Internal.Snapshot.RangeMerge>,Firebase.Database.Internal.Core.Tag)
extern "C"  Il2CppObject* SyncTree_ApplyTaggedRangeMerges_m3630750795 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Il2CppObject* ___rangeMerges1, Tag_t2439924210 * ___tag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyListenComplete(Firebase.Database.Internal.Core.Path)
extern "C"  Il2CppObject* SyncTree_ApplyListenComplete_m144085892 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyTaggedListenComplete(Firebase.Database.Internal.Core.Tag)
extern "C"  Il2CppObject* SyncTree_ApplyTaggedListenComplete_m401330253 (SyncTree_t528142079 * __this, Tag_t2439924210 * ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyTaggedOperation(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.Operation.Operation)
extern "C"  Il2CppObject* SyncTree_ApplyTaggedOperation_m735408264 (SyncTree_t528142079 * __this, QuerySpec_t377558711 * ___query0, Operation_t3598067969 * ___operation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyTaggedQueryOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.Tag)
extern "C"  Il2CppObject* SyncTree_ApplyTaggedQueryOverwrite_m14117278 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___snap1, Tag_t2439924210 * ___tag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyTaggedQueryMerge(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>,Firebase.Database.Internal.Core.Tag)
extern "C"  Il2CppObject* SyncTree_ApplyTaggedQueryMerge_m39901238 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Il2CppObject* ___changedChildren1, Tag_t2439924210 * ___tag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.SyncTree::AddEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  Il2CppObject* SyncTree_AddEventRegistration_m2216496406 (SyncTree_t528142079 * __this, EventRegistration_t4222917807 * ___eventRegistration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::RemoveEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  Il2CppObject* SyncTree_RemoveEventRegistration_m2420493041 (SyncTree_t528142079 * __this, EventRegistration_t4222917807 * ___eventRegistration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::RemoveAllEventRegistrations(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.DatabaseError)
extern "C"  Il2CppObject* SyncTree_RemoveAllEventRegistrations_m279778903 (SyncTree_t528142079 * __this, QuerySpec_t377558711 * ___query0, DatabaseError_t1067746743 * ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::RemoveEventRegistration(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.DatabaseError)
extern "C"  Il2CppObject* SyncTree_RemoveEventRegistration_m3814103124 (SyncTree_t528142079 * __this, QuerySpec_t377558711 * ___query0, EventRegistration_t4222917807 * ___eventRegistration1, DatabaseError_t1067746743 * ___cancelError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.View> Firebase.Database.Internal.Core.SyncTree::CollectDistinctViewsForSubTree(Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint>)
extern "C"  Il2CppObject* SyncTree_CollectDistinctViewsForSubTree_m1240187969 (SyncTree_t528142079 * __this, ImmutableTree_1_t1000466367 * ___subtree0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SyncTree::CollectDistinctViewsForSubTree(Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint>,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.View>)
extern "C"  void SyncTree_CollectDistinctViewsForSubTree_m585291894 (SyncTree_t528142079 * __this, ImmutableTree_1_t1000466367 * ___subtree0, Il2CppObject* ___accumulator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SyncTree::RemoveTags(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.QuerySpec>)
extern "C"  void SyncTree_RemoveTags_m2636126818 (SyncTree_t528142079 * __this, Il2CppObject* ___queries0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.SyncTree::QueryForListening(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  QuerySpec_t377558711 * SyncTree_QueryForListening_m1014793715 (SyncTree_t528142079 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.SyncTree::SetupListener(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.View.View)
extern "C"  void SyncTree_SetupListener_m4019969711 (SyncTree_t528142079 * __this, QuerySpec_t377558711 * ___query0, View_t798282663 * ___view1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.SyncTree::QueryForTag(Firebase.Database.Internal.Core.Tag)
extern "C"  QuerySpec_t377558711 * SyncTree_QueryForTag_m1833628658 (SyncTree_t528142079 * __this, Tag_t2439924210 * ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Tag Firebase.Database.Internal.Core.SyncTree::TagForQuery(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  Tag_t2439924210 * SyncTree_TagForQuery_m1302058290 (SyncTree_t528142079 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SyncTree::CalcCompleteEventCache(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IList`1<System.Int64>)
extern "C"  Node_t2640059010 * SyncTree_CalcCompleteEventCache_m1903446560 (SyncTree_t528142079 * __this, Path_t2568473163 * ___path0, Il2CppObject* ___writeIdsToExclude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Tag Firebase.Database.Internal.Core.SyncTree::GetNextQueryTag()
extern "C"  Tag_t2439924210 * SyncTree_GetNextQueryTag_m2131112200 (SyncTree_t528142079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyOperationToSyncPoints(Firebase.Database.Internal.Core.Operation.Operation)
extern "C"  Il2CppObject* SyncTree_ApplyOperationToSyncPoints_m1480707571 (SyncTree_t528142079 * __this, Operation_t3598067969 * ___operation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyOperationHelper(Firebase.Database.Internal.Core.Operation.Operation,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint>,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.WriteTreeRef)
extern "C"  Il2CppObject* SyncTree_ApplyOperationHelper_m2759904863 (SyncTree_t528142079 * __this, Operation_t3598067969 * ___operation0, ImmutableTree_1_t1000466367 * ___syncPointTree1, Node_t2640059010 * ___serverCache2, WriteTreeRef_t351426802 * ___writesCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree::ApplyOperationDescendantsHelper(Firebase.Database.Internal.Core.Operation.Operation,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint>,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.WriteTreeRef)
extern "C"  Il2CppObject* SyncTree_ApplyOperationDescendantsHelper_m2048614405 (SyncTree_t528142079 * __this, Operation_t3598067969 * ___operation0, ImmutableTree_1_t1000466367 * ___syncPointTree1, Node_t2640059010 * ___serverCache2, WriteTreeRef_t351426802 * ___writesCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
