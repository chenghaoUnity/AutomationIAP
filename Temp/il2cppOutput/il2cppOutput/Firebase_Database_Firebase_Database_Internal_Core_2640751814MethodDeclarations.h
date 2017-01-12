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

// Firebase.Database.Internal.Core.SyncTree/Callable149
struct Callable149_t2640751814;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/Callable149::.ctor(Firebase.Database.Internal.Core.SyncTree,System.Boolean,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,System.Int64,Firebase.Database.Internal.Snapshot.Node,System.Boolean)
extern "C"  void Callable149__ctor_m2403242337 (Callable149_t2640751814 * __this, SyncTree_t528142079 * ___enclosing0, bool ___persist1, Path_t2568473163 * ___path2, Node_t2640059010 * ___newDataUnresolved3, int64_t ___writeId4, Node_t2640059010 * ___newData5, bool ___visible6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/Callable149::Call()
extern "C"  Il2CppObject* Callable149_Call_m4136679968 (Callable149_t2640751814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
