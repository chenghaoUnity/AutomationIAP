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

// Firebase.Database.Internal.Core.ServerValues/ChildVisitor71
struct ChildVisitor71_t2343739264;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Core.SnapshotHolder
struct SnapshotHolder_t2504102480;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2504102480.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Core.ServerValues/ChildVisitor71::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Core.SnapshotHolder)
extern "C"  void ChildVisitor71__ctor_m293665893 (ChildVisitor71_t2343739264 * __this, Il2CppObject* ___serverValues0, SnapshotHolder_t2504102480 * ___holder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ServerValues/ChildVisitor71::VisitChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void ChildVisitor71_VisitChild_m1809735893 (ChildVisitor71_t2343739264 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___child1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
