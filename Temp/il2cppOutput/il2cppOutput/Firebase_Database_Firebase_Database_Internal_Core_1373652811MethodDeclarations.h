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

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Utilities.IClock
struct IClock_t2325879361;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.SparseSnapshotTree
struct SparseSnapshotTree_t504080338;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S504080338.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Core.ServerValues::GenerateServerValues(Firebase.Database.Internal.Utilities.IClock)
extern "C"  Il2CppObject* ServerValues_GenerateServerValues_m4030311363 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___clock0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Core.ServerValues::ResolveDeferredValue(System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * ServerValues_ResolveDeferredValue_m998262705 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject* ___serverValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.SparseSnapshotTree Firebase.Database.Internal.Core.ServerValues::ResolveDeferredValueTree(Firebase.Database.Internal.Core.SparseSnapshotTree,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  SparseSnapshotTree_t504080338 * ServerValues_ResolveDeferredValueTree_m2032426391 (Il2CppObject * __this /* static, unused */, SparseSnapshotTree_t504080338 * ___tree0, Il2CppObject* ___serverValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.ServerValues::ResolveDeferredValueSnapshot(Firebase.Database.Internal.Snapshot.Node,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Node_t2640059010 * ServerValues_ResolveDeferredValueSnapshot_m3186508201 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___data0, Il2CppObject* ___serverValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.ServerValues::ResolveDeferredValueMerge(Firebase.Database.Internal.Core.CompoundWrite,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  CompoundWrite_t496419158 * ServerValues_ResolveDeferredValueMerge_m3273262185 (Il2CppObject * __this /* static, unused */, CompoundWrite_t496419158 * ___merge0, Il2CppObject* ___serverValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
