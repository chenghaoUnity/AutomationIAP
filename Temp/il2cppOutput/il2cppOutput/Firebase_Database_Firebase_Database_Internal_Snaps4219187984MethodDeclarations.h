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

// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.NodeUtilities::NodeFromJson(System.Object)
extern "C"  Node_t2640059010 * NodeUtilities_NodeFromJson_m1362701318 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.NodeUtilities::NodeFromJson(System.Object,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * NodeUtilities_NodeFromJson_m551417199 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.NodeUtilities::NameAndPriorityCompare(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  int32_t NodeUtilities_NameAndPriorityCompare_m3471980871 (Il2CppObject * __this /* static, unused */, ChildKey_t1197802383 * ___aKey0, Node_t2640059010 * ___aPriority1, ChildKey_t1197802383 * ___bKey2, Node_t2640059010 * ___bPriority3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
