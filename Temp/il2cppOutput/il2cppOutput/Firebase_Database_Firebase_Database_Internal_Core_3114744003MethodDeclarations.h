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

// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>
struct Tree_1_t3114744003;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.Utilities.TreeNode`1<System.Object>
struct TreeNode_1_t3829898795;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<System.Object>
struct ITreeVisitor_t512772653;
// Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeFilter<System.Object>
struct ITreeFilter_t3174189785;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::.ctor(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.Utilities.Tree`1<T>,Firebase.Database.Internal.Core.Utilities.TreeNode`1<T>)
extern "C"  void Tree_1__ctor_m3666705606_gshared (Tree_1_t3114744003 * __this, ChildKey_t1197802383 * ___name0, Tree_1_t3114744003 * ___parent1, TreeNode_1_t3829898795 * ___node2, const MethodInfo* method);
#define Tree_1__ctor_m3666705606(__this, ___name0, ___parent1, ___node2, method) ((  void (*) (Tree_1_t3114744003 *, ChildKey_t1197802383 *, Tree_1_t3114744003 *, TreeNode_1_t3829898795 *, const MethodInfo*))Tree_1__ctor_m3666705606_gshared)(__this, ___name0, ___parent1, ___node2, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::.ctor()
extern "C"  void Tree_1__ctor_m2140393204_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1__ctor_m2140393204(__this, method) ((  void (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1__ctor_m2140393204_gshared)(__this, method)
// Firebase.Database.Internal.Core.Utilities.Tree`1<T> Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::SubTree(Firebase.Database.Internal.Core.Path)
extern "C"  Tree_1_t3114744003 * Tree_1_SubTree_m3478601559_gshared (Tree_1_t3114744003 * __this, Path_t2568473163 * ___path0, const MethodInfo* method);
#define Tree_1_SubTree_m3478601559(__this, ___path0, method) ((  Tree_1_t3114744003 * (*) (Tree_1_t3114744003 *, Path_t2568473163 *, const MethodInfo*))Tree_1_SubTree_m3478601559_gshared)(__this, ___path0, method)
// T Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::GetValue()
extern "C"  Il2CppObject * Tree_1_GetValue_m3153563740_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1_GetValue_m3153563740(__this, method) ((  Il2CppObject * (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1_GetValue_m3153563740_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::SetValue(T)
extern "C"  void Tree_1_SetValue_m3428075119_gshared (Tree_1_t3114744003 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Tree_1_SetValue_m3428075119(__this, ___value0, method) ((  void (*) (Tree_1_t3114744003 *, Il2CppObject *, const MethodInfo*))Tree_1_SetValue_m3428075119_gshared)(__this, ___value0, method)
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::GetPath()
extern "C"  Path_t2568473163 * Tree_1_GetPath_m2527014843_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1_GetPath_m2527014843(__this, method) ((  Path_t2568473163 * (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1_GetPath_m2527014843_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::HasChildren()
extern "C"  bool Tree_1_HasChildren_m2129150403_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1_HasChildren_m2129150403(__this, method) ((  bool (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1_HasChildren_m2129150403_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::IsEmpty()
extern "C"  bool Tree_1_IsEmpty_m3123790885_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1_IsEmpty_m3123790885(__this, method) ((  bool (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1_IsEmpty_m3123790885_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ForEachDescendant(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T>)
extern "C"  void Tree_1_ForEachDescendant_m2029243360_gshared (Tree_1_t3114744003 * __this, Il2CppObject* ___visitor0, const MethodInfo* method);
#define Tree_1_ForEachDescendant_m2029243360(__this, ___visitor0, method) ((  void (*) (Tree_1_t3114744003 *, Il2CppObject*, const MethodInfo*))Tree_1_ForEachDescendant_m2029243360_gshared)(__this, ___visitor0, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ForEachDescendant(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T>,System.Boolean,System.Boolean)
extern "C"  void Tree_1_ForEachDescendant_m897105138_gshared (Tree_1_t3114744003 * __this, Il2CppObject* ___visitor0, bool ___includeSelf1, bool ___childrenFirst2, const MethodInfo* method);
#define Tree_1_ForEachDescendant_m897105138(__this, ___visitor0, ___includeSelf1, ___childrenFirst2, method) ((  void (*) (Tree_1_t3114744003 *, Il2CppObject*, bool, bool, const MethodInfo*))Tree_1_ForEachDescendant_m897105138_gshared)(__this, ___visitor0, ___includeSelf1, ___childrenFirst2, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ForEachAncestor(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeFilter<T>)
extern "C"  bool Tree_1_ForEachAncestor_m3932405846_gshared (Tree_1_t3114744003 * __this, Il2CppObject* ___filter0, const MethodInfo* method);
#define Tree_1_ForEachAncestor_m3932405846(__this, ___filter0, method) ((  bool (*) (Tree_1_t3114744003 *, Il2CppObject*, const MethodInfo*))Tree_1_ForEachAncestor_m3932405846_gshared)(__this, ___filter0, method)
// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ForEachAncestor(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeFilter<T>,System.Boolean)
extern "C"  bool Tree_1_ForEachAncestor_m1658107771_gshared (Tree_1_t3114744003 * __this, Il2CppObject* ___filter0, bool ___includeSelf1, const MethodInfo* method);
#define Tree_1_ForEachAncestor_m1658107771(__this, ___filter0, ___includeSelf1, method) ((  bool (*) (Tree_1_t3114744003 *, Il2CppObject*, bool, const MethodInfo*))Tree_1_ForEachAncestor_m1658107771_gshared)(__this, ___filter0, ___includeSelf1, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ForEachChild(Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T>)
extern "C"  void Tree_1_ForEachChild_m1884352577_gshared (Tree_1_t3114744003 * __this, Il2CppObject* ___visitor0, const MethodInfo* method);
#define Tree_1_ForEachChild_m1884352577(__this, ___visitor0, method) ((  void (*) (Tree_1_t3114744003 *, Il2CppObject*, const MethodInfo*))Tree_1_ForEachChild_m1884352577_gshared)(__this, ___visitor0, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::UpdateParents()
extern "C"  void Tree_1_UpdateParents_m1697369238_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1_UpdateParents_m1697369238(__this, method) ((  void (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1_UpdateParents_m1697369238_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::UpdateChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.Utilities.Tree`1<T>)
extern "C"  void Tree_1_UpdateChild_m2370595022_gshared (Tree_1_t3114744003 * __this, ChildKey_t1197802383 * ___name0, Tree_1_t3114744003 * ___child1, const MethodInfo* method);
#define Tree_1_UpdateChild_m2370595022(__this, ___name0, ___child1, method) ((  void (*) (Tree_1_t3114744003 *, ChildKey_t1197802383 *, Tree_1_t3114744003 *, const MethodInfo*))Tree_1_UpdateChild_m2370595022_gshared)(__this, ___name0, ___child1, method)
// System.String Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ToString()
extern "C"  String_t* Tree_1_ToString_m2645147141_gshared (Tree_1_t3114744003 * __this, const MethodInfo* method);
#define Tree_1_ToString_m2645147141(__this, method) ((  String_t* (*) (Tree_1_t3114744003 *, const MethodInfo*))Tree_1_ToString_m2645147141_gshared)(__this, method)
// System.String Firebase.Database.Internal.Core.Utilities.Tree`1<System.Object>::ToStringExpr(System.String)
extern "C"  String_t* Tree_1_ToStringExpr_m2908131828_gshared (Tree_1_t3114744003 * __this, String_t* ___prefix0, const MethodInfo* method);
#define Tree_1_ToStringExpr_m2908131828(__this, ___prefix0, method) ((  String_t* (*) (Tree_1_t3114744003 *, String_t*, const MethodInfo*))Tree_1_ToStringExpr_m2908131828_gshared)(__this, ___prefix0, method)
