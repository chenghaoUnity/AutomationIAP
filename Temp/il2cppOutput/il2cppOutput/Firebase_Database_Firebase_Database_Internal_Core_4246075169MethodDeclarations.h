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

// Firebase.Database.Internal.Core.Repo/RequestResultCallback397
struct RequestResultCallback397_t4246075169;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_DatabaseReferenc93014473.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.Repo/RequestResultCallback397::.ctor(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.Path,System.Int64,Firebase.Database.DatabaseReference/CompletionListener)
extern "C"  void RequestResultCallback397__ctor_m1439864300 (RequestResultCallback397_t4246075169 * __this, Repo_t1244308462 * ___enclosing0, Path_t2568473163 * ___path1, int64_t ___writeId2, CompletionListener_t93014473 * ___onComplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/RequestResultCallback397::OnRequestResult(System.String,System.String)
extern "C"  void RequestResultCallback397_OnRequestResult_m2904439311 (RequestResultCallback397_t4246075169 * __this, String_t* ___optErrorCode0, String_t* ___optErrorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
