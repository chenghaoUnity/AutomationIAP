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

// Firebase.Database.Internal.Snapshot.CompoundHash/SimpleSizeSplitStrategy
struct SimpleSizeSplitStrategy_t202416347;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder
struct CompoundHashBuilder_t1995558443;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1995558443.h"

// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/SimpleSizeSplitStrategy::.ctor(Firebase.Database.Internal.Snapshot.Node)
extern "C"  void SimpleSizeSplitStrategy__ctor_m2215929031 (SimpleSizeSplitStrategy_t202416347 * __this, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.CompoundHash/SimpleSizeSplitStrategy::ShouldSplit(Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder)
extern "C"  bool SimpleSizeSplitStrategy_ShouldSplit_m2353096100 (SimpleSizeSplitStrategy_t202416347 * __this, CompoundHashBuilder_t1995558443 * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
