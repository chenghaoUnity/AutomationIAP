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

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.ConnectionUtils::StringToPath(System.String)
extern "C"  Il2CppObject* ConnectionUtils_StringToPath_m830055510 (Il2CppObject * __this /* static, unused */, String_t* ___string0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.ConnectionUtils::PathToString(System.Collections.Generic.IList`1<System.String>)
extern "C"  String_t* ConnectionUtils_PathToString_m1282114166 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___segments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> Firebase.Database.Internal.Connection.ConnectionUtils::LongFromObject(System.Object)
extern "C"  Nullable_1_t3467111648  ConnectionUtils_LongFromObject_m3746081540 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.ConnectionUtils::HardAssert(System.Boolean)
extern "C"  void ConnectionUtils_HardAssert_m1920457295 (Il2CppObject * __this /* static, unused */, bool ___condition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.ConnectionUtils::HardAssert(System.Boolean,System.String,System.Object[])
extern "C"  void ConnectionUtils_HardAssert_m3052369501 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___message1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
