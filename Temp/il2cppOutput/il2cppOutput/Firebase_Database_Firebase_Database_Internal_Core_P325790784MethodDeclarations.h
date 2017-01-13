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

// Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager
struct NoopPersistenceManager_t325790784;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.UserWriteRecord>
struct IList_1_t929618180;
// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Snapshot.ChildKey>
struct ICollection_1_t2149877688;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"

// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::.ctor()
extern "C"  void NoopPersistenceManager__ctor_m3917659094 (NoopPersistenceManager_t325790784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::SaveUserOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,System.Int64)
extern "C"  void NoopPersistenceManager_SaveUserOverwrite_m502884001 (NoopPersistenceManager_t325790784 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___node1, int64_t ___writeId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::SaveUserMerge(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,System.Int64)
extern "C"  void NoopPersistenceManager_SaveUserMerge_m1353836893 (NoopPersistenceManager_t325790784 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___children1, int64_t ___writeId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::RemoveUserWrite(System.Int64)
extern "C"  void NoopPersistenceManager_RemoveUserWrite_m626189112 (NoopPersistenceManager_t325790784 * __this, int64_t ___writeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::ApplyUserWriteToServerCache(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void NoopPersistenceManager_ApplyUserWriteToServerCache_m3512241158 (NoopPersistenceManager_t325790784 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::ApplyUserWriteToServerCache(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  void NoopPersistenceManager_ApplyUserWriteToServerCache_m2466791869 (NoopPersistenceManager_t325790784 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___merge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.UserWriteRecord> Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::LoadUserWrites()
extern "C"  Il2CppObject* NoopPersistenceManager_LoadUserWrites_m2678769854 (NoopPersistenceManager_t325790784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.CacheNode Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::ServerCache(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  CacheNode_t994563358 * NoopPersistenceManager_ServerCache_m2616956091 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::UpdateServerCache(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void NoopPersistenceManager_UpdateServerCache_m3682616809 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::UpdateServerCache(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  void NoopPersistenceManager_UpdateServerCache_m130418459 (NoopPersistenceManager_t325790784 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___children1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::SetQueryActive(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  void NoopPersistenceManager_SetQueryActive_m1443653180 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::SetQueryInactive(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  void NoopPersistenceManager_SetQueryInactive_m2923821089 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::SetQueryComplete(Firebase.Database.Internal.Core.View.QuerySpec)
extern "C"  void NoopPersistenceManager_SetQueryComplete_m3709971391 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::SetTrackedQueryKeys(Firebase.Database.Internal.Core.View.QuerySpec,System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Snapshot.ChildKey>)
extern "C"  void NoopPersistenceManager_SetTrackedQueryKeys_m3393729809 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, Il2CppObject* ___keys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::UpdateTrackedQueryKeys(Firebase.Database.Internal.Core.View.QuerySpec,System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Snapshot.ChildKey>,System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Snapshot.ChildKey>)
extern "C"  void NoopPersistenceManager_UpdateTrackedQueryKeys_m820289443 (NoopPersistenceManager_t325790784 * __this, QuerySpec_t377558711 * ___query0, Il2CppObject* ___added1, Il2CppObject* ___removed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::VerifyInsideTransaction()
extern "C"  void NoopPersistenceManager_VerifyInsideTransaction_m1700758069 (NoopPersistenceManager_t325790784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
