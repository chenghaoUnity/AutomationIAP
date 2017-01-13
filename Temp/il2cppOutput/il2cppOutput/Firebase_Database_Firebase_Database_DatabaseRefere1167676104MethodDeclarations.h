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

// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1843236107;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1809478302;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_DatabaseReferenc93014473.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.Path)
extern "C"  void DatabaseReference__ctor_m1782337854 (DatabaseReference_t1167676104 * __this, Repo_t1244308462 * ___repo0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::get_Parent()
extern "C"  DatabaseReference_t1167676104 * DatabaseReference_get_Parent_m2189263175 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
extern "C"  DatabaseReference_t1167676104 * DatabaseReference_Child_m662767510 (DatabaseReference_t1167676104 * __this, String_t* ___pathString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Push()
extern "C"  DatabaseReference_t1167676104 * DatabaseReference_Push_m3325164844 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::UpdateChildrenAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Task_t1843236107 * DatabaseReference_UpdateChildrenAsync_m440977882 (DatabaseReference_t1167676104 * __this, Il2CppObject* ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Object> Firebase.Database.DatabaseReference::UpdateChildrenInternal(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.DatabaseReference/CompletionListener)
extern "C"  Task_1_t1809478302 * DatabaseReference_UpdateChildrenInternal_m3028189235 (DatabaseReference_t1167676104 * __this, Il2CppObject* ___update0, CompletionListener_t93014473 * ___optListener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DatabaseReference::ToString()
extern "C"  String_t* DatabaseReference_ToString_m1339719728 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DatabaseReference::get_Key()
extern "C"  String_t* DatabaseReference_get_Key_m1001384938 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
extern "C"  bool DatabaseReference_Equals_m677073912 (DatabaseReference_t1167676104 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
extern "C"  int32_t DatabaseReference_GetHashCode_m1237532192 (DatabaseReference_t1167676104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseReference::.cctor()
extern "C"  void DatabaseReference__cctor_m3488023230 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
