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

// Firebase.Database.Internal.Core.WriteTree/Predicate203
struct Predicate203_t1802089450;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1450018638;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.UserWriteRecord
struct UserWriteRecord_t388677579;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_U388677579.h"

// System.Void Firebase.Database.Internal.Core.WriteTree/Predicate203::.ctor(System.Boolean,System.Collections.Generic.IList`1<System.Int64>,Firebase.Database.Internal.Core.Path)
extern "C"  void Predicate203__ctor_m1379941602 (Predicate203_t1802089450 * __this, bool ___includeHiddenWrites0, Il2CppObject* ___writeIdsToExclude1, Path_t2568473163 * ___treePath2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.WriteTree/Predicate203::Evaluate(Firebase.Database.Internal.Core.UserWriteRecord)
extern "C"  bool Predicate203_Evaluate_m2454006135 (Predicate203_t1802089450 * __this, UserWriteRecord_t388677579 * ___write0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
