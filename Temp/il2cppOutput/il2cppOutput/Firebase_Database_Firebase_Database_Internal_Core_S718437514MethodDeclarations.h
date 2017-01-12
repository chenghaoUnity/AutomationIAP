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

// Firebase.Database.Internal.Core.SyncTree/Callable170
struct Callable170_t718437514;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/Callable170::.ctor(Firebase.Database.Internal.Core.SyncTree,System.Boolean,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,System.Int64,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  void Callable170__ctor_m2612834040 (Callable170_t718437514 * __this, SyncTree_t528142079 * ___enclosing0, bool ___persist1, Path_t2568473163 * ___path2, CompoundWrite_t496419158 * ___unresolvedChildren3, int64_t ___writeId4, CompoundWrite_t496419158 * ___children5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/Callable170::Call()
extern "C"  Il2CppObject* Callable170_Call_m4180535308 (Callable170_t718437514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
