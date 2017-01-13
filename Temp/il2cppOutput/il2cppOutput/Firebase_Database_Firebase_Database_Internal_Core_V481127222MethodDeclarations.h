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

// Firebase.Database.Internal.Core.ValidationPath
struct ValidationPath_t481127222;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.ValidationPath::.ctor(Firebase.Database.Internal.Core.Path)
extern "C"  void ValidationPath__ctor_m36764434 (ValidationPath_t481127222 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ValidationPath::ValidateWithObject(Firebase.Database.Internal.Core.Path,System.Object)
extern "C"  void ValidationPath_ValidateWithObject_m4213603889 (Il2CppObject * __this /* static, unused */, Path_t2568473163 * ___path0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ValidationPath::WithObject(System.Object)
extern "C"  void ValidationPath_WithObject_m3005319078 (ValidationPath_t481127222 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ValidationPath::Push(System.String)
extern "C"  void ValidationPath_Push_m2053782295 (ValidationPath_t481127222 * __this, String_t* ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.ValidationPath::Pop()
extern "C"  String_t* ValidationPath_Pop_m3724170285 (ValidationPath_t481127222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ValidationPath::CheckValid()
extern "C"  void ValidationPath_CheckValid_m99788967 (ValidationPath_t481127222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.ValidationPath::ToErrorString()
extern "C"  String_t* ValidationPath_ToErrorString_m4049394994 (ValidationPath_t481127222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.ValidationPath::JoinStringList(System.String,System.Collections.Generic.IList`1<System.String>)
extern "C"  String_t* ValidationPath_JoinStringList_m1546137388 (Il2CppObject * __this /* static, unused */, String_t* ___delimeter0, Il2CppObject* ___parts1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.ValidationPath::Utf8Bytes(System.String)
extern "C"  int32_t ValidationPath_Utf8Bytes_m1219628361 (Il2CppObject * __this /* static, unused */, String_t* ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
