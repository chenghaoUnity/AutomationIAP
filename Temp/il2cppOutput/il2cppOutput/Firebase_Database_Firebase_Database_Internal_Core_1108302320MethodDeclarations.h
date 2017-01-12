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

// Firebase.Database.Internal.Core.SyncTree/ListenContainer
struct ListenContainer_t1108302320;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.View.View
struct View_t798282663;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Connection.CompoundHash
struct CompoundHash_t1429582413;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V798282663.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/ListenContainer::.ctor(Firebase.Database.Internal.Core.SyncTree,Firebase.Database.Internal.Core.View.View)
extern "C"  void ListenContainer__ctor_m2761384078 (ListenContainer_t1108302320 * __this, SyncTree_t528142079 * ___enclosing0, View_t798282663 * ___view1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/ListenContainer::OnListenComplete(Firebase.Database.DatabaseError)
extern "C"  Il2CppObject* ListenContainer_OnListenComplete_m3381713918 (ListenContainer_t1108302320 * __this, DatabaseError_t1067746743 * ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.CompoundHash Firebase.Database.Internal.Core.SyncTree/ListenContainer::GetCompoundHash()
extern "C"  CompoundHash_t1429582413 * ListenContainer_GetCompoundHash_m2948991977 (ListenContainer_t1108302320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.SyncTree/ListenContainer::GetSimpleHash()
extern "C"  String_t* ListenContainer_GetSimpleHash_m4149794930 (ListenContainer_t1108302320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.SyncTree/ListenContainer::ShouldIncludeCompoundHash()
extern "C"  bool ListenContainer_ShouldIncludeCompoundHash_m3463039867 (ListenContainer_t1108302320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
