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

// Firebase.Database.Internal.Core.SyncTree/TreeVisitor688
struct TreeVisitor688_t1363616158;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.SyncPoint
struct SyncPoint_t2720557329;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_S528142079.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2720557329.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.SyncTree/TreeVisitor688::.ctor(Firebase.Database.Internal.Core.SyncTree)
extern "C"  void TreeVisitor688__ctor_m1376054146 (TreeVisitor688_t1363616158 * __this, SyncTree_t528142079 * ___enclosing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Core.SyncTree/TreeVisitor688::OnNodeValue(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.SyncPoint,System.Object)
extern "C"  Il2CppObject * TreeVisitor688_OnNodeValue_m2540370422 (TreeVisitor688_t1363616158 * __this, Path_t2568473163 * ___relativePath0, SyncPoint_t2720557329 * ___maybeChildSyncPoint1, Il2CppObject * ___accum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
