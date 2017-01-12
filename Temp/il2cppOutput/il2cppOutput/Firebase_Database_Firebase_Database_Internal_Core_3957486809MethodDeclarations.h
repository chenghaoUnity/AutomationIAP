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

// Firebase.Database.Internal.Core.View.ViewProcessor/CompleteChildSource431
struct CompleteChildSource431_t3957486809;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"

// System.Void Firebase.Database.Internal.Core.View.ViewProcessor/CompleteChildSource431::.ctor()
extern "C"  void CompleteChildSource431__ctor_m2438513704 (CompleteChildSource431_t3957486809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.ViewProcessor/CompleteChildSource431::GetCompleteChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Node_t2640059010 * CompleteChildSource431_GetCompleteChild_m3995155069 (CompleteChildSource431_t3957486809 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.ViewProcessor/CompleteChildSource431::GetChildAfterChild(Firebase.Database.Internal.Snapshot.Index,Firebase.Database.Internal.Snapshot.NamedNode,System.Boolean)
extern "C"  NamedNode_t787885785 * CompleteChildSource431_GetChildAfterChild_m261463961 (CompleteChildSource431_t3957486809 * __this, Index_t2425062456 * ___index0, NamedNode_t787885785 * ___child1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
