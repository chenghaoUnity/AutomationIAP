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

// Firebase.Database.Internal.Core.ValueEventRegistration
struct ValueEventRegistration_t34821328;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.View.DataEvent
struct DataEvent_t3330191602;
// Firebase.Database.Internal.Core.View.Change
struct Change_t639587248;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1195404398.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V639587248.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3330191602.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"

// System.Void Firebase.Database.Internal.Core.ValueEventRegistration::.ctor(Firebase.Database.Internal.Core.Repo,System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>,Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  void ValueEventRegistration__ctor_m3046342053 (ValueEventRegistration_t34821328 * __this, Repo_t1244308462 * ___repo0, EventHandler_1_t3816151702 * ___eventHandler1, QuerySpec_t377558711 * ___spec2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.ValueEventRegistration::RespondsTo(Firebase.Database.Internal.Core.View.Event/EventType)
extern "C"  bool ValueEventRegistration_RespondsTo_m3984574332 (ValueEventRegistration_t34821328 * __this, int32_t ___eventType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.ValueEventRegistration::Equals(System.Object)
extern "C"  bool ValueEventRegistration_Equals_m2009841196 (ValueEventRegistration_t34821328 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.ValueEventRegistration::GetHashCode()
extern "C"  int32_t ValueEventRegistration_GetHashCode_m1822706816 (ValueEventRegistration_t34821328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.DataEvent Firebase.Database.Internal.Core.ValueEventRegistration::CreateEvent(Firebase.Database.Internal.Core.View.Change,Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  DataEvent_t3330191602 * ValueEventRegistration_CreateEvent_m3864540662 (ValueEventRegistration_t34821328 * __this, Change_t639587248 * ___change0, QuerySpec_t377558711 * ___query1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ValueEventRegistration::FireEvent(Firebase.Database.Internal.Core.View.DataEvent)
extern "C"  void ValueEventRegistration_FireEvent_m2584068568 (ValueEventRegistration_t34821328 * __this, DataEvent_t3330191602 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ValueEventRegistration::FireCancelEvent(Firebase.Database.DatabaseError)
extern "C"  void ValueEventRegistration_FireCancelEvent_m250019180 (ValueEventRegistration_t34821328 * __this, DatabaseError_t1067746743 * ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.EventRegistration Firebase.Database.Internal.Core.ValueEventRegistration::Clone(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  EventRegistration_t4222917807 * ValueEventRegistration_Clone_m4267971248 (ValueEventRegistration_t34821328 * __this, QuerySpec_t377558711 * ___newQuery0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.ValueEventRegistration::IsSameListener(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  bool ValueEventRegistration_IsSameListener_m7416146 (ValueEventRegistration_t34821328 * __this, EventRegistration_t4222917807 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.ValueEventRegistration::GetQuerySpec()
extern "C"  QuerySpec_t377558711 * ValueEventRegistration_GetQuerySpec_m46569981 (ValueEventRegistration_t34821328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.ValueEventRegistration::ToString()
extern "C"  String_t* ValueEventRegistration_ToString_m3178404042 (ValueEventRegistration_t34821328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
