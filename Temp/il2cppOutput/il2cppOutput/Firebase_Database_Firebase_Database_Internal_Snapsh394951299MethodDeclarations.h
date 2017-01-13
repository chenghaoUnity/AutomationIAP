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

// Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor
struct ChildVisitor_t394951299;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor::.ctor()
extern "C"  void ChildVisitor__ctor_m1270338720 (ChildVisitor_t394951299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor::VisitEntry(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void ChildVisitor_VisitEntry_m2170389212 (ChildVisitor_t394951299 * __this, ChildKey_t1197802383 * ___key0, Node_t2640059010 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
