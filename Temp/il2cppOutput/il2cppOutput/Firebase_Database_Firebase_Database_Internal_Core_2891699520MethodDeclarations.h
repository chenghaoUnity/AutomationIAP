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

// Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor234
struct TreeVisitor234_t2891699520;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor234::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void TreeVisitor234__ctor_m203456576 (TreeVisitor234_t2891699520 * __this, Il2CppObject* ___writes0, bool ___exportFormat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor234::OnNodeValue(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,System.Object)
extern "C"  Il2CppObject * TreeVisitor234_OnNodeValue_m788270464 (TreeVisitor234_t2891699520 * __this, Path_t2568473163 * ___relativePath0, Node_t2640059010 * ___value1, Il2CppObject * ___accum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
