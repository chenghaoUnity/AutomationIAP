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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>
struct IDictionary_2_t4243616403;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"

// System.Boolean Firebase.Database.Internal.Utilities.Validation::IsValidPathString(System.String)
extern "C"  bool Validation_IsValidPathString_m1647668873 (Il2CppObject * __this /* static, unused */, String_t* ___pathString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Validation::ValidatePathString(System.String)
extern "C"  void Validation_ValidatePathString_m4264824683 (Il2CppObject * __this /* static, unused */, String_t* ___pathString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Validation::ValidateRootPathString(System.String)
extern "C"  void Validation_ValidateRootPathString_m787648789 (Il2CppObject * __this /* static, unused */, String_t* ___pathString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Utilities.Validation::IsWritableKey(System.String)
extern "C"  bool Validation_IsWritableKey_m12442694 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Validation::ValidateWritableObject(System.Object)
extern "C"  void Validation_ValidateWritableObject_m1841047968 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___object0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Validation::ValidateWritableKey(System.String)
extern "C"  void Validation_ValidateWritableKey_m3513842218 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node> Firebase.Database.Internal.Utilities.Validation::ParseAndValidateUpdate(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* Validation_ParseAndValidateUpdate_m2551993204 (Il2CppObject * __this /* static, unused */, Path_t2568473163 * ___path0, Il2CppObject* ___update1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Validation::.cctor()
extern "C"  void Validation__cctor_m3920911572 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
