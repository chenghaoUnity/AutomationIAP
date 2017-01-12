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

// Firebase.Database.Internal.Core.Repo/RequestResultCallback817
struct RequestResultCallback817_t3889844450;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>
struct IList_1_t2684453066;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.Repo/RequestResultCallback817::.ctor(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.Path,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>,Firebase.Database.Internal.Core.Repo)
extern "C"  void RequestResultCallback817__ctor_m636594056 (RequestResultCallback817_t3889844450 * __this, Repo_t1244308462 * ___enclosing0, Path_t2568473163 * ___path1, Il2CppObject* ___queue2, Repo_t1244308462 * ___repo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/RequestResultCallback817::OnRequestResult(System.String,System.String)
extern "C"  void RequestResultCallback817_OnRequestResult_m2704826272 (RequestResultCallback817_t3889844450 * __this, String_t* ___optErrorCode0, String_t* ___optErrorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
