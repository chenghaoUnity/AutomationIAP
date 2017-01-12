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

// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_O860860098.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1017554386.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Void Firebase.Database.Internal.Core.Operation.Operation::.ctor(Firebase.Database.Internal.Core.Operation.Operation/OperationType,Firebase.Database.Internal.Core.Operation.OperationSource,Firebase.Database.Internal.Core.Path)
extern "C"  void Operation__ctor_m3596365061 (Operation_t3598067969 * __this, int32_t ___type0, OperationSource_t1017554386 * ___source1, Path_t2568473163 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Operation.Operation::GetPath()
extern "C"  Path_t2568473163 * Operation_GetPath_m490533232 (Operation_t3598067969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.OperationSource Firebase.Database.Internal.Core.Operation.Operation::GetSource()
extern "C"  OperationSource_t1017554386 * Operation_GetSource_m858013572 (Operation_t3598067969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.Operation/OperationType Firebase.Database.Internal.Core.Operation.Operation::GetOperationType()
extern "C"  int32_t Operation_GetOperationType_m3414985615 (Operation_t3598067969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
