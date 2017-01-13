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

// Firebase.Database.Internal.Core.Repo/ListenProvider131/RequestResultCallback139
struct RequestResultCallback139_t325891947;
// Firebase.Database.Internal.Core.Repo/ListenProvider131
struct ListenProvider131_t1577920156;
// Firebase.Database.Internal.Core.SyncTree/ICompletionListener
struct ICompletionListener_t1189386635;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1577920156.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.Repo/ListenProvider131/RequestResultCallback139::.ctor(Firebase.Database.Internal.Core.Repo/ListenProvider131,Firebase.Database.Internal.Core.SyncTree/ICompletionListener)
extern "C"  void RequestResultCallback139__ctor_m1352826969 (RequestResultCallback139_t325891947 * __this, ListenProvider131_t1577920156 * ___enclosing0, Il2CppObject * ___onListenComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/ListenProvider131/RequestResultCallback139::OnRequestResult(System.String,System.String)
extern "C"  void RequestResultCallback139_OnRequestResult_m1640435705 (RequestResultCallback139_t325891947 * __this, String_t* ___optErrorCode0, String_t* ___optErrorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
