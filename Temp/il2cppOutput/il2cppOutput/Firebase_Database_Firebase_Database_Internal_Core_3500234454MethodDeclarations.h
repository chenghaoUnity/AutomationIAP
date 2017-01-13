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

// Firebase.Database.Internal.Core.Repo/ListenProvider106
struct ListenProvider106_t3500234454;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.Internal.Core.Tag
struct Tag_t2439924210;
// Firebase.Database.Internal.Connection.IListenHashProvider
struct IListenHashProvider_t1509816543;
// Firebase.Database.Internal.Core.SyncTree/ICompletionListener
struct ICompletionListener_t1189386635;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V377558711.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2439924210.h"

// System.Void Firebase.Database.Internal.Core.Repo/ListenProvider106::.ctor(Firebase.Database.Internal.Core.Repo)
extern "C"  void ListenProvider106__ctor_m3444521405 (ListenProvider106_t3500234454 * __this, Repo_t1244308462 * ___enclosing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/ListenProvider106::StartListening(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.Tag,Firebase.Database.Internal.Connection.IListenHashProvider,Firebase.Database.Internal.Core.SyncTree/ICompletionListener)
extern "C"  void ListenProvider106_StartListening_m3785478301 (ListenProvider106_t3500234454 * __this, QuerySpec_t377558711 * ___query0, Tag_t2439924210 * ___tag1, Il2CppObject * ___hash2, Il2CppObject * ___onComplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/ListenProvider106::StopListening(Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.Tag)
extern "C"  void ListenProvider106_StopListening_m1635299528 (ListenProvider106_t3500234454 * __this, QuerySpec_t377558711 * ___query0, Tag_t2439924210 * ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
