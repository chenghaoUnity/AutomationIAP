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

// Firebase.Database.Internal.Core.RepoManager
struct RepoManager_t2704469169;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1318758358;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3486154757.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4079583710.h"
#include "Firebase_Database_Firebase_Database_FirebaseDataba1318758358.h"

// System.Void Firebase.Database.Internal.Core.RepoManager::.cctor()
extern "C"  void RepoManager__cctor_m510699877 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.RepoManager::.ctor()
extern "C"  void RepoManager__ctor_m3859113060 (RepoManager_t2704469169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.RepoManager::CreateRepo(Firebase.Database.Internal.Core.Context,Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.FirebaseDatabase)
extern "C"  Repo_t1244308462 * RepoManager_CreateRepo_m1481853238 (Il2CppObject * __this /* static, unused */, Context_t3486154757 * ___ctx0, RepoInfo_t4079583710 * ___info1, FirebaseDatabase_t1318758358 * ___firebaseDatabase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.RepoManager::CreateLocalRepo(Firebase.Database.Internal.Core.Context,Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.FirebaseDatabase)
extern "C"  Repo_t1244308462 * RepoManager_CreateLocalRepo_m1054909109 (RepoManager_t2704469169 * __this, Context_t3486154757 * ___ctx0, RepoInfo_t4079583710 * ___info1, FirebaseDatabase_t1318758358 * ___firebaseDatabase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
