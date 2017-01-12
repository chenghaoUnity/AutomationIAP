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

// Firebase.Database.Internal.Core.SyncTree/Callable506
struct Callable506_t476518459;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/Callable506::.ctor(Firebase.Database.Internal.Core.SyncTree,Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.DatabaseError)
extern "C"  void Callable506__ctor_m1467267689 (Callable506_t476518459 * __this, SyncTree_t528142079 * ___enclosing0, QuerySpec_t377558711 * ___query1, EventRegistration_t4222917807 * ___eventRegistration2, DatabaseError_t1067746743 * ___cancelError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/Callable506::Call()
extern "C"  Il2CppObject* Callable506_Call_m1260323089 (Callable506_t476518459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
