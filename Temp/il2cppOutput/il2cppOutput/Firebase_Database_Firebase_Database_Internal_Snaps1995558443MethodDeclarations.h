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

// Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder
struct CompoundHashBuilder_t1995558443;
// Firebase.Database.Internal.Snapshot.CompoundHash/ISplitStrategy
struct ISplitStrategy_t3197954337;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.LeafNode
struct LeafNode_t3399591604;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"

// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::.ctor(Firebase.Database.Internal.Snapshot.CompoundHash/ISplitStrategy)
extern "C"  void CompoundHashBuilder__ctor_m1659908387 (CompoundHashBuilder_t1995558443 * __this, Il2CppObject * ___strategy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::BuildingRange()
extern "C"  bool CompoundHashBuilder_BuildingRange_m2771105437 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentHashLength()
extern "C"  int32_t CompoundHashBuilder_CurrentHashLength_m3854209649 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentPath()
extern "C"  Path_t2568473163 * CompoundHashBuilder_CurrentPath_m354568818 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentPath(System.Int32)
extern "C"  Path_t2568473163 * CompoundHashBuilder_CurrentPath_m2477088955 (CompoundHashBuilder_t1995558443 * __this, int32_t ___depth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::EnsureRange()
extern "C"  void CompoundHashBuilder_EnsureRange_m4061484149 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::AppendKey(System.Text.StringBuilder,Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  void CompoundHashBuilder_AppendKey_m3817504279 (CompoundHashBuilder_t1995558443 * __this, StringBuilder_t1221177846 * ___builder0, ChildKey_t1197802383 * ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::ProcessLeaf(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  void CompoundHashBuilder_ProcessLeaf_m2559183712 (CompoundHashBuilder_t1995558443 * __this, LeafNode_t3399591604 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::StartChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  void CompoundHashBuilder_StartChild_m1002622054 (CompoundHashBuilder_t1995558443 * __this, ChildKey_t1197802383 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::EndChild()
extern "C"  void CompoundHashBuilder_EndChild_m3863438889 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::FinishHashing()
extern "C"  void CompoundHashBuilder_FinishHashing_m553645745 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::EndRange()
extern "C"  void CompoundHashBuilder_EndRange_m734687884 (CompoundHashBuilder_t1995558443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
