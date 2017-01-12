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

// Firebase.Database.Internal.Snapshot.LeafNode
struct LeafNode_t3399591604;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Int64 Firebase.Database.Internal.Utilities.NodeSizeEstimator::EstimateLeafNodeSize(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int64_t NodeSizeEstimator_EstimateLeafNodeSize_m3833611616 (Il2CppObject * __this /* static, unused */, LeafNode_t3399591604 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Utilities.NodeSizeEstimator::EstimateSerializedNodeSize(Firebase.Database.Internal.Snapshot.Node)
extern "C"  int64_t NodeSizeEstimator_EstimateSerializedNodeSize_m139256090 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
