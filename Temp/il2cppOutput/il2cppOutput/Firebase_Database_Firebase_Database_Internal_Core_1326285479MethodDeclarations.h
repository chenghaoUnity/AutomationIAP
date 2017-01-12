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

// Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor88
struct TreeVisitor88_t1326285479;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"

// System.Void Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor88::.ctor(Firebase.Database.Internal.Core.Path)
extern "C"  void TreeVisitor88__ctor_m3726104361 (TreeVisitor88_t1326285479 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor88::OnNodeValue(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  CompoundWrite_t496419158 * TreeVisitor88_OnNodeValue_m2129333351 (TreeVisitor88_t1326285479 * __this, Path_t2568473163 * ___relativePath0, Node_t2640059010 * ___value1, CompoundWrite_t496419158 * ___accum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
