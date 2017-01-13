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

// Firebase.Database.Internal.Core.View.DataEvent
struct DataEvent_t3330191602;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// System.String
struct String_t;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1195404398.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_DataSnapshot1287895350.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.View.DataEvent::.ctor(Firebase.Database.Internal.Core.View.Event/EventType,Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.DataSnapshot,System.String)
extern "C"  void DataEvent__ctor_m1874068733 (DataEvent_t3330191602 * __this, int32_t ___eventType0, EventRegistration_t4222917807 * ___eventRegistration1, DataSnapshot_t1287895350 * ___snapshot2, String_t* ___prevName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.View.DataEvent::GetPath()
extern "C"  Path_t2568473163 * DataEvent_GetPath_m427500187 (DataEvent_t3330191602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DataSnapshot Firebase.Database.Internal.Core.View.DataEvent::GetSnapshot()
extern "C"  DataSnapshot_t1287895350 * DataEvent_GetSnapshot_m3423231919 (DataEvent_t3330191602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.DataEvent::Fire()
extern "C"  void DataEvent_Fire_m3027907430 (DataEvent_t3330191602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.View.DataEvent::ToString()
extern "C"  String_t* DataEvent_ToString_m185739417 (DataEvent_t3330191602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
