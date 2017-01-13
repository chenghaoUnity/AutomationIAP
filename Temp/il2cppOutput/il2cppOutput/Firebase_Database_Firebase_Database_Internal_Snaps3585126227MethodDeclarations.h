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

// Firebase.Database.Internal.Snapshot.CompoundHash
struct CompoundHash_t3585126227;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path>
struct IList_1_t3109413764;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.CompoundHash/ISplitStrategy
struct ISplitStrategy_t3197954337;
// Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder
struct CompoundHashBuilder_t1995558443;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1995558443.h"

// System.Void Firebase.Database.Internal.Snapshot.CompoundHash::.ctor(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path>,System.Collections.Generic.IList`1<System.String>)
extern "C"  void CompoundHash__ctor_m1948046818 (CompoundHash_t3585126227 * __this, Il2CppObject* ___posts0, Il2CppObject* ___hashes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path> Firebase.Database.Internal.Snapshot.CompoundHash::GetPosts()
extern "C"  Il2CppObject* CompoundHash_GetPosts_m2170568333 (CompoundHash_t3585126227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Snapshot.CompoundHash::GetHashes()
extern "C"  Il2CppObject* CompoundHash_GetHashes_m201910481 (CompoundHash_t3585126227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.CompoundHash Firebase.Database.Internal.Snapshot.CompoundHash::FromNode(Firebase.Database.Internal.Snapshot.Node)
extern "C"  CompoundHash_t3585126227 * CompoundHash_FromNode_m721814039 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.CompoundHash Firebase.Database.Internal.Snapshot.CompoundHash::FromNode(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.CompoundHash/ISplitStrategy)
extern "C"  CompoundHash_t3585126227 * CompoundHash_FromNode_m1186561364 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, Il2CppObject * ___strategy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.CompoundHash::ProcessNode(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder)
extern "C"  void CompoundHash_ProcessNode_m2810928602 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, CompoundHashBuilder_t1995558443 * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
