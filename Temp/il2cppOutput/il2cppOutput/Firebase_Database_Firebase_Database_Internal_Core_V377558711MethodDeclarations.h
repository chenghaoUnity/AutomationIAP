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

// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V526937568.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.View.QuerySpec::.ctor(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.View.QueryParams)
extern "C"  void QuerySpec__ctor_m3227348837 (QuerySpec_t377558711 * __this, Path_t2568473163 * ___path0, QueryParams_t526937568 * ___params1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.View.QuerySpec::DefaultQueryAtPath(Firebase.Database.Internal.Core.Path)
extern "C"  QuerySpec_t377558711 * QuerySpec_DefaultQueryAtPath_m2620037562 (Il2CppObject * __this /* static, unused */, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.View.QuerySpec::GetPath()
extern "C"  Path_t2568473163 * QuerySpec_GetPath_m376717742 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QuerySpec::GetParams()
extern "C"  QueryParams_t526937568 * QuerySpec_GetParams_m4212476541 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.QuerySpec::GetIndex()
extern "C"  Index_t2425062456 * QuerySpec_GetIndex_m1541498039 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QuerySpec::IsDefault()
extern "C"  bool QuerySpec_IsDefault_m311030870 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QuerySpec::LoadsAllData()
extern "C"  bool QuerySpec_LoadsAllData_m1455185749 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.View.QuerySpec::ToString()
extern "C"  String_t* QuerySpec_ToString_m2493548032 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QuerySpec::Equals(System.Object)
extern "C"  bool QuerySpec_Equals_m2680779990 (QuerySpec_t377558711 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.View.QuerySpec::GetHashCode()
extern "C"  int32_t QuerySpec_GetHashCode_m199864082 (QuerySpec_t377558711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
