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

// Firebase.Database.Internal.Core.Repo/RequestResultCallback168
struct RequestResultCallback168_t354392331;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.UserWriteRecord
struct UserWriteRecord_t388677579;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_U388677579.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.Repo/RequestResultCallback168::.ctor(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.UserWriteRecord)
extern "C"  void RequestResultCallback168__ctor_m840889625 (RequestResultCallback168_t354392331 * __this, Repo_t1244308462 * ___enclosing0, UserWriteRecord_t388677579 * ___write1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/RequestResultCallback168::OnRequestResult(System.String,System.String)
extern "C"  void RequestResultCallback168_OnRequestResult_m1648099881 (RequestResultCallback168_t354392331 * __this, String_t* ___optErrorCode0, String_t* ___optErrorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
