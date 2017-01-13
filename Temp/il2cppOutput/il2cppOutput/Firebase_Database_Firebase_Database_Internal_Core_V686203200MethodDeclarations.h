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

// Firebase.Database.Internal.Core.View.CancelEvent
struct CancelEvent_t686203200;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Void Firebase.Database.Internal.Core.View.CancelEvent::.ctor(Firebase.Database.Internal.Core.EventRegistration,Firebase.Database.DatabaseError,Firebase.Database.Internal.Core.Path)
extern "C"  void CancelEvent__ctor_m53648353 (CancelEvent_t686203200 * __this, EventRegistration_t4222917807 * ___eventRegistration0, DatabaseError_t1067746743 * ___error1, Path_t2568473163 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.View.CancelEvent::GetPath()
extern "C"  Path_t2568473163 * CancelEvent_GetPath_m3011786089 (CancelEvent_t686203200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.CancelEvent::Fire()
extern "C"  void CancelEvent_Fire_m3956712916 (CancelEvent_t686203200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.View.CancelEvent::ToString()
extern "C"  String_t* CancelEvent_ToString_m3880548907 (CancelEvent_t686203200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
