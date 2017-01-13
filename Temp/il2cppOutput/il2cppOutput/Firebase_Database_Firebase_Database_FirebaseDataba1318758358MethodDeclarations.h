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

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1318758358;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;
// Firebase.Database.Internal.Core.DatabaseConfig
struct DatabaseConfig_t3004044241;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4079583710.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3004044241.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.Internal.Core.DatabaseConfig)
extern "C"  void FirebaseDatabase__ctor_m3809580815 (FirebaseDatabase_t1318758358 * __this, FirebaseApp_t210707726 * ___app0, RepoInfo_t4079583710 * ___repoInfo1, DatabaseConfig_t3004044241 * ___config2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
extern "C"  void FirebaseDatabase_set_App_m4026262500 (FirebaseDatabase_t1318758358 * __this, FirebaseApp_t210707726 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
extern "C"  FirebaseDatabase_t1318758358 * FirebaseDatabase_get_DefaultInstance_m2521248777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
extern "C"  FirebaseDatabase_t1318758358 * FirebaseDatabase_GetInstance_m3194296368 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
extern "C"  DatabaseReference_t1167676104 * FirebaseDatabase_get_RootReference_m3750281036 (FirebaseDatabase_t1318758358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
extern "C"  DatabaseReference_t1167676104 * FirebaseDatabase_GetReference_m1440353143 (FirebaseDatabase_t1318758358 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.FirebaseDatabase::get_SdkVersion()
extern "C"  String_t* FirebaseDatabase_get_SdkVersion_m2867755807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.FirebaseDatabase::EnsureRepo()
extern "C"  void FirebaseDatabase_EnsureRepo_m3559883943 (FirebaseDatabase_t1318758358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
extern "C"  void FirebaseDatabase__cctor_m3794382968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
