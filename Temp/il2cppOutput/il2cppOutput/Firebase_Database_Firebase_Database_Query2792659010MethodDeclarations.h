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

// Firebase.Database.Query
struct Query_t2792659010;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t407924357;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// System.String
struct String_t;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V526937568.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.View.QueryParams,System.Boolean)
extern "C"  void Query__ctor_m3600920578 (Query_t2792659010 * __this, Repo_t1244308462 * ___repo0, Path_t2568473163 * ___path1, QueryParams_t526937568 * ___queryParams2, bool ___orderByCalled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.Path)
extern "C"  void Query__ctor_m1215339448 (Query_t2792659010 * __this, Repo_t1244308462 * ___repo0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::ValidateNoOrderByCall()
extern "C"  void Query_ValidateNoOrderByCall_m1687194831 (Query_t2792659010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::add_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
extern "C"  void Query_add_ValueChanged_m1934804924 (Query_t2792659010 * __this, EventHandler_1_t3816151702 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::remove_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
extern "C"  void Query_remove_ValueChanged_m1346344837 (Query_t2792659010 * __this, EventHandler_1_t3816151702 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
extern "C"  Task_1_t407924357 * Query_GetValueAsync_m2545609208 (Query_t2792659010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::AddListenerForSingleValueEvent(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
extern "C"  void Query_AddListenerForSingleValueEvent_m1453254066 (Query_t2792659010 * __this, EventHandler_1_t3816151702 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::RemoveEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void Query_RemoveEventRegistration_m2151754013 (Query_t2792659010 * __this, EventRegistration_t4222917807 * ___registration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::AddEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void Query_AddEventRegistration_m2686056672 (Query_t2792659010 * __this, EventRegistration_t4222917807 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Query Firebase.Database.Query::LimitToLast(System.Int32)
extern "C"  Query_t2792659010 * Query_LimitToLast_m573658715 (Query_t2792659010 * __this, int32_t ___limit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Query Firebase.Database.Query::OrderByChild(System.String)
extern "C"  Query_t2792659010 * Query_OrderByChild_m1948123447 (Query_t2792659010 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Query::GetPath()
extern "C"  Path_t2568473163 * Query_GetPath_m1641816866 (Query_t2792659010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Query::GetSpec()
extern "C"  QuerySpec_t377558711 * Query_GetSpec_m4217046183 (Query_t2792659010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
