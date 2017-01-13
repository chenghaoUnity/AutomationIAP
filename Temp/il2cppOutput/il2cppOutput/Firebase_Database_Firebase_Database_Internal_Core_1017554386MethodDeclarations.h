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

// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;
// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1909004847.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V526937568.h"

// System.Void Firebase.Database.Internal.Core.Operation.OperationSource::.ctor(Firebase.Database.Internal.Core.Operation.OperationSource/Source,Firebase.Database.Internal.Core.View.QueryParams,System.Boolean)
extern "C"  void OperationSource__ctor_m3013172197 (OperationSource_t1017554386 * __this, int32_t ___source0, QueryParams_t526937568 * ___queryParams1, bool ___tagged2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.OperationSource Firebase.Database.Internal.Core.Operation.OperationSource::ForServerTaggedQuery(Firebase.Database.Internal.Core.View.QueryParams)
extern "C"  OperationSource_t1017554386 * OperationSource_ForServerTaggedQuery_m2494444891 (Il2CppObject * __this /* static, unused */, QueryParams_t526937568 * ___queryParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Operation.OperationSource::IsFromUser()
extern "C"  bool OperationSource_IsFromUser_m2724900791 (OperationSource_t1017554386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Operation.OperationSource::IsTagged()
extern "C"  bool OperationSource_IsTagged_m1502062372 (OperationSource_t1017554386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Operation.OperationSource::ToString()
extern "C"  String_t* OperationSource_ToString_m3307780841 (OperationSource_t1017554386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.Operation.OperationSource::GetQueryParams()
extern "C"  QueryParams_t526937568 * OperationSource_GetQueryParams_m731835754 (OperationSource_t1017554386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Operation.OperationSource::.cctor()
extern "C"  void OperationSource__cctor_m3616659933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
