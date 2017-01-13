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

// Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource
struct WriteTreeCompleteChildSource_t4238726192;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W351426802.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V983378685.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"

// System.Void Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource::.ctor(Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void WriteTreeCompleteChildSource__ctor_m21808272 (WriteTreeCompleteChildSource_t4238726192 * __this, WriteTreeRef_t351426802 * ___writes0, ViewCache_t983378685 * ___viewCache1, Node_t2640059010 * ___optCompleteServerCache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource::GetCompleteChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Node_t2640059010 * WriteTreeCompleteChildSource_GetCompleteChild_m3904385272 (WriteTreeCompleteChildSource_t4238726192 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.ViewProcessor/WriteTreeCompleteChildSource::GetChildAfterChild(Firebase.Database.Internal.Snapshot.Index,Firebase.Database.Internal.Snapshot.NamedNode,System.Boolean)
extern "C"  NamedNode_t787885785 * WriteTreeCompleteChildSource_GetChildAfterChild_m2385812186 (WriteTreeCompleteChildSource_t4238726192 * __this, Index_t2425062456 * ___index0, NamedNode_t787885785 * ___child1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
