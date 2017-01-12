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

// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;
// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V994563358.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"

// System.Void Firebase.Database.Internal.Core.View.ViewCache::.ctor(Firebase.Database.Internal.Core.View.CacheNode,Firebase.Database.Internal.Core.View.CacheNode)
extern "C"  void ViewCache__ctor_m1126395215 (ViewCache_t983378685 * __this, CacheNode_t994563358 * ___eventSnap0, CacheNode_t994563358 * ___serverSnap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewCache::UpdateEventSnap(Firebase.Database.Internal.Snapshot.IndexedNode,System.Boolean,System.Boolean)
extern "C"  ViewCache_t983378685 * ViewCache_UpdateEventSnap_m2433268091 (ViewCache_t983378685 * __this, IndexedNode_t376444473 * ___eventSnap0, bool ___complete1, bool ___filtered2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewCache::UpdateServerSnap(Firebase.Database.Internal.Snapshot.IndexedNode,System.Boolean,System.Boolean)
extern "C"  ViewCache_t983378685 * ViewCache_UpdateServerSnap_m681942510 (ViewCache_t983378685 * __this, IndexedNode_t376444473 * ___serverSnap0, bool ___complete1, bool ___filtered2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.CacheNode Firebase.Database.Internal.Core.View.ViewCache::GetEventCache()
extern "C"  CacheNode_t994563358 * ViewCache_GetEventCache_m4266190553 (ViewCache_t983378685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.ViewCache::GetCompleteEventSnap()
extern "C"  Node_t2640059010 * ViewCache_GetCompleteEventSnap_m549702972 (ViewCache_t983378685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.CacheNode Firebase.Database.Internal.Core.View.ViewCache::GetServerCache()
extern "C"  CacheNode_t994563358 * ViewCache_GetServerCache_m3973865930 (ViewCache_t983378685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.ViewCache::GetCompleteServerSnap()
extern "C"  Node_t2640059010 * ViewCache_GetCompleteServerSnap_m1795760269 (ViewCache_t983378685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
