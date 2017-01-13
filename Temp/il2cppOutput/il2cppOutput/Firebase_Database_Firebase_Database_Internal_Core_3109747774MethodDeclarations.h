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


#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3114744003MethodDeclarations.h"

// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::.ctor(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.Utilities.Tree`1<T>,Firebase.Database.Internal.Core.Utilities.TreeNode`1<T>)
#define Tree_1__ctor_m4196876588(__this, ___name0, ___parent1, ___node2, method) ((  void (*) (Tree_1_t3109747774 *, ChildKey_t1197802383 *, Tree_1_t3109747774 *, TreeNode_1_t3824902566 *, const MethodInfo*))Tree_1__ctor_m3666705606_gshared)(__this, ___name0, ___parent1, ___node2, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::.ctor()
#define Tree_1__ctor_m2336658886(__this, method) ((  void (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1__ctor_m2140393204_gshared)(__this, method)
// Firebase.Database.Internal.Core.Utilities.Tree`1<T> Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::SubTree(Firebase.Database.Internal.Core.Path)
#define Tree_1_SubTree_m507164873(__this, ___path0, method) ((  Tree_1_t3109747774 * (*) (Tree_1_t3109747774 *, Path_t2568473163 *, const MethodInfo*))Tree_1_SubTree_m3478601559_gshared)(__this, ___path0, method)
// T Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::GetValue()
#define Tree_1_GetValue_m561381032(__this, method) ((  Il2CppObject* (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1_GetValue_m3153563740_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::SetValue(T)
#define Tree_1_SetValue_m1315885545(__this, ___value0, method) ((  void (*) (Tree_1_t3109747774 *, Il2CppObject*, const MethodInfo*))Tree_1_SetValue_m3428075119_gshared)(__this, ___value0, method)
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::GetPath()
#define Tree_1_GetPath_m2815551033(__this, method) ((  Path_t2568473163 * (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1_GetPath_m2527014843_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::HasChildren()
#define Tree_1_HasChildren_m58911133(__this, method) ((  bool (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1_HasChildren_m2129150403_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::IsEmpty()
#define Tree_1_IsEmpty_m1498638495(__this, method) ((  bool (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1_IsEmpty_m3123790885_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ForEachDescendant(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T>)
#define Tree_1_ForEachDescendant_m2960664758(__this, ___visitor0, method) ((  void (*) (Tree_1_t3109747774 *, Il2CppObject*, const MethodInfo*))Tree_1_ForEachDescendant_m2029243360_gshared)(__this, ___visitor0, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ForEachDescendant(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T>,System.Boolean,System.Boolean)
#define Tree_1_ForEachDescendant_m137766724(__this, ___visitor0, ___includeSelf1, ___childrenFirst2, method) ((  void (*) (Tree_1_t3109747774 *, Il2CppObject*, bool, bool, const MethodInfo*))Tree_1_ForEachDescendant_m897105138_gshared)(__this, ___visitor0, ___includeSelf1, ___childrenFirst2, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ForEachAncestor(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeFilter<T>)
#define Tree_1_ForEachAncestor_m1551383108(__this, ___filter0, method) ((  bool (*) (Tree_1_t3109747774 *, Il2CppObject*, const MethodInfo*))Tree_1_ForEachAncestor_m3932405846_gshared)(__this, ___filter0, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ForEachAncestor(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeFilter<T>,System.Boolean)
#define Tree_1_ForEachAncestor_m4105077441(__this, ___filter0, ___includeSelf1, method) ((  bool (*) (Tree_1_t3109747774 *, Il2CppObject*, bool, const MethodInfo*))Tree_1_ForEachAncestor_m1658107771_gshared)(__this, ___filter0, ___includeSelf1, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ForEachChild(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T>)
#define Tree_1_ForEachChild_m2476088367(__this, ___visitor0, method) ((  void (*) (Tree_1_t3109747774 *, Il2CppObject*, const MethodInfo*))Tree_1_ForEachChild_m1884352577_gshared)(__this, ___visitor0, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::UpdateParents()
#define Tree_1_UpdateParents_m674511904(__this, method) ((  void (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1_UpdateParents_m1697369238_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::UpdateChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.Utilities.Tree`1<T>)
#define Tree_1_UpdateChild_m2759090008(__this, ___name0, ___child1, method) ((  void (*) (Tree_1_t3109747774 *, ChildKey_t1197802383 *, Tree_1_t3109747774 *, const MethodInfo*))Tree_1_UpdateChild_m2370595022_gshared)(__this, ___name0, ___child1, method)
// System.String Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ToString()
#define Tree_1_ToString_m816203471(__this, method) ((  String_t* (*) (Tree_1_t3109747774 *, const MethodInfo*))Tree_1_ToString_m2645147141_gshared)(__this, method)
// System.String Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>::ToStringExpr(System.String)
#define Tree_1_ToStringExpr_m2569206904(__this, ___prefix0, method) ((  String_t* (*) (Tree_1_t3109747774 *, String_t*, const MethodInfo*))Tree_1_ToStringExpr_m2908131828_gshared)(__this, ___prefix0, method)
