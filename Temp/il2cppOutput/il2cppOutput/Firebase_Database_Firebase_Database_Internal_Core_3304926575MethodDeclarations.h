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

// Firebase.Database.Internal.Core.View.EventGenerator
struct EventGenerator_t3304926575;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent>
struct IList_1_t3871132203;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>
struct IList_1_t1180527849;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration>
struct IList_1_t468891112;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.Internal.Core.View.DataEvent
struct DataEvent_t3330191602;
// Firebase.Database.Internal.Core.View.Change
struct Change_t639587248;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// System.Collections.Generic.IComparer`1<Firebase.Database.Internal.Core.View.Change>
struct IComparer_1_t2889017666;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1195404398.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V639587248.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"

// System.Void Firebase.Database.Internal.Core.View.EventGenerator::.ctor(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  void EventGenerator__ctor_m3525699101 (EventGenerator_t3304926575 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.EventGenerator::GenerateEventsForType(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent>,Firebase.Database.Internal.Core.View.Event/EventType,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration>,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  void EventGenerator_GenerateEventsForType_m1911988514 (EventGenerator_t3304926575 * __this, Il2CppObject* ___events0, int32_t ___type1, Il2CppObject* ___changes2, Il2CppObject* ___eventRegistrations3, IndexedNode_t376444473 * ___eventCache4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.DataEvent Firebase.Database.Internal.Core.View.EventGenerator::GenerateEvent(Firebase.Database.Internal.Core.View.Change,Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  DataEvent_t3330191602 * EventGenerator_GenerateEvent_m4188503634 (EventGenerator_t3304926575 * __this, Change_t639587248 * ___change0, EventRegistration_t4222917807 * ___registration1, IndexedNode_t376444473 * ___eventCache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.DataEvent> Firebase.Database.Internal.Core.View.EventGenerator::GenerateEventsForChanges(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>,Firebase.Database.Internal.Snapshot.IndexedNode,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration>)
extern "C"  Il2CppObject* EventGenerator_GenerateEventsForChanges_m4049174490 (EventGenerator_t3304926575 * __this, Il2CppObject* ___changes0, IndexedNode_t376444473 * ___eventCache1, Il2CppObject* ___eventRegistrations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IComparer`1<Firebase.Database.Internal.Core.View.Change> Firebase.Database.Internal.Core.View.EventGenerator::ChangeComparator()
extern "C"  Il2CppObject* EventGenerator_ChangeComparator_m141012999 (EventGenerator_t3304926575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
