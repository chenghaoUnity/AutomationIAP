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

// Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator
struct ChildChangeAccumulator_t1740384518;
// Firebase.Database.Internal.Core.View.Change
struct Change_t639587248;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>
struct IList_1_t1180527849;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V639587248.h"

// System.Void Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator::.ctor()
extern "C"  void ChildChangeAccumulator__ctor_m1721300112 (ChildChangeAccumulator_t1740384518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator::TrackChildChange(Firebase.Database.Internal.Core.View.Change)
extern "C"  void ChildChangeAccumulator_TrackChildChange_m1562776600 (ChildChangeAccumulator_t1740384518 * __this, Change_t639587248 * ___change0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change> Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator::GetChanges()
extern "C"  Il2CppObject* ChildChangeAccumulator_GetChanges_m1778149984 (ChildChangeAccumulator_t1740384518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
