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

// Firebase.Database.Internal.Core.SyncTree/Callable188
struct Callable188_t1074667861;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Utilities.IClock
struct IClock_t2325879361;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/Callable188::.ctor(Firebase.Database.Internal.Core.SyncTree,System.Boolean,System.Int64,System.Boolean,Firebase.Database.Internal.Utilities.IClock)
extern "C"  void Callable188__ctor_m742265533 (Callable188_t1074667861 * __this, SyncTree_t528142079 * ___enclosing0, bool ___persist1, int64_t ___writeId2, bool ___revert3, Il2CppObject * ___serverClock4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/Callable188::Call()
extern "C"  Il2CppObject* Callable188_Call_m529870003 (Callable188_t1074667861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
