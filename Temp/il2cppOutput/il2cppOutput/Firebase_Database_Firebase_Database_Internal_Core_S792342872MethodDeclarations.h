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

// Firebase.Database.Internal.Core.SyncTree/Callable378
struct Callable378_t792342872;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Tag
struct Tag_t2439924210;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>
struct IDictionary_2_t4243616403;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2439924210.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/Callable378::.ctor(Firebase.Database.Internal.Core.SyncTree,Firebase.Database.Internal.Core.Tag,Firebase.Database.Internal.Core.Path,System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>)
extern "C"  void Callable378__ctor_m2440237165 (Callable378_t792342872 * __this, SyncTree_t528142079 * ___enclosing0, Tag_t2439924210 * ___tag1, Path_t2568473163 * ___path2, Il2CppObject* ___changedChildren3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/Callable378::Call()
extern "C"  Il2CppObject* Callable378_Call_m4267435842 (Callable378_t792342872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
