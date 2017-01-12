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

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.PriorityUtilities::NullPriority()
extern "C"  Node_t2640059010 * PriorityUtilities_NullPriority_m1938425483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.PriorityUtilities::IsValidPriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  bool PriorityUtilities_IsValidPriority_m3557466023 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.PriorityUtilities::ParsePriority(System.Object)
extern "C"  Node_t2640059010 * PriorityUtilities_ParsePriority_m2602057439 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
