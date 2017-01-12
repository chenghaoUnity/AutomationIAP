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

// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;
// System.Object
struct Il2CppObject;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_DatabaseRefere1167676104.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Firebase.Database.DatabaseReference/CompletionListener::.ctor(System.Object,System.IntPtr)
extern "C"  void CompletionListener__ctor_m309936486 (CompletionListener_t93014473 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseReference/CompletionListener::Invoke(Firebase.Database.DatabaseError,Firebase.Database.DatabaseReference)
extern "C"  void CompletionListener_Invoke_m3424168805 (CompletionListener_t93014473 * __this, DatabaseError_t1067746743 * ___error0, DatabaseReference_t1167676104 * ___ref1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Firebase.Database.DatabaseReference/CompletionListener::BeginInvoke(Firebase.Database.DatabaseError,Firebase.Database.DatabaseReference,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompletionListener_BeginInvoke_m3183769868 (CompletionListener_t93014473 * __this, DatabaseError_t1067746743 * ___error0, DatabaseReference_t1167676104 * ___ref1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseReference/CompletionListener::EndInvoke(System.IAsyncResult)
extern "C"  void CompletionListener_EndInvoke_m745518668 (CompletionListener_t93014473 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
