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

// Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>
struct LlrbEmptyNode_2_t3030218886;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<System.Object,System.Object>
struct NodeVisitor_t2944196615;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Colle1714721308.h"

// System.Void Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::.ctor()
extern "C"  void LlrbEmptyNode_2__ctor_m1454818453_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2__ctor_m1454818453(__this, method) ((  void (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2__ctor_m1454818453_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbEmptyNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetInstance()
extern "C"  LlrbEmptyNode_2_t3030218886 * LlrbEmptyNode_2_GetInstance_m1228740834_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define LlrbEmptyNode_2_GetInstance_m1228740834(__this /* static, unused */, method) ((  LlrbEmptyNode_2_t3030218886 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))LlrbEmptyNode_2_GetInstance_m1228740834_gshared)(__this /* static, unused */, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::Copy(TK,TV,Firebase.Database.Internal.Collection.LlrbNode`2/Color<TK,TV>,Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>,Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>)
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_Copy_m400410332_gshared (LlrbEmptyNode_2_t3030218886 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, int32_t ___color2, LlrbNode_2_t4262869811 * ___left3, LlrbNode_2_t4262869811 * ___right4, const MethodInfo* method);
#define LlrbEmptyNode_2_Copy_m400410332(__this, ___key0, ___value1, ___color2, ___left3, ___right4, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, Il2CppObject *, Il2CppObject *, int32_t, LlrbNode_2_t4262869811 *, LlrbNode_2_t4262869811 *, const MethodInfo*))LlrbEmptyNode_2_Copy_m400410332_gshared)(__this, ___key0, ___value1, ___color2, ___left3, ___right4, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::Insert(TK,TV,System.Collections.Generic.IComparer`1<TK>)
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_Insert_m2992281951_gshared (LlrbEmptyNode_2_t3030218886 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, Il2CppObject* ___comparator2, const MethodInfo* method);
#define LlrbEmptyNode_2_Insert_m2992281951(__this, ___key0, ___value1, ___comparator2, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, Il2CppObject *, Il2CppObject *, Il2CppObject*, const MethodInfo*))LlrbEmptyNode_2_Insert_m2992281951_gshared)(__this, ___key0, ___value1, ___comparator2, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::Remove(TK,System.Collections.Generic.IComparer`1<TK>)
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_Remove_m3398061600_gshared (LlrbEmptyNode_2_t3030218886 * __this, Il2CppObject * ___key0, Il2CppObject* ___comparator1, const MethodInfo* method);
#define LlrbEmptyNode_2_Remove_m3398061600(__this, ___key0, ___comparator1, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, Il2CppObject *, Il2CppObject*, const MethodInfo*))LlrbEmptyNode_2_Remove_m3398061600_gshared)(__this, ___key0, ___comparator1, method)
// System.Boolean Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::IsEmpty()
extern "C"  bool LlrbEmptyNode_2_IsEmpty_m2232198176_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_IsEmpty_m2232198176(__this, method) ((  bool (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_IsEmpty_m2232198176_gshared)(__this, method)
// System.Boolean Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::IsRed()
extern "C"  bool LlrbEmptyNode_2_IsRed_m4049998314_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_IsRed_m4049998314(__this, method) ((  bool (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_IsRed_m4049998314_gshared)(__this, method)
// TK Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetKey()
extern "C"  Il2CppObject * LlrbEmptyNode_2_GetKey_m3180626044_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_GetKey_m3180626044(__this, method) ((  Il2CppObject * (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_GetKey_m3180626044_gshared)(__this, method)
// TV Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetValue()
extern "C"  Il2CppObject * LlrbEmptyNode_2_GetValue_m503547629_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_GetValue_m503547629(__this, method) ((  Il2CppObject * (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_GetValue_m503547629_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetLeft()
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_GetLeft_m1071281139_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_GetLeft_m1071281139(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_GetLeft_m1071281139_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetRight()
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_GetRight_m2591289026_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_GetRight_m2591289026(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_GetRight_m2591289026_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetMin()
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_GetMin_m4225977428_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_GetMin_m4225977428(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_GetMin_m4225977428_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::GetMax()
extern "C"  LlrbNode_2_t4262869811 * LlrbEmptyNode_2_GetMax_m1342635390_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_GetMax_m1342635390(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_GetMax_m1342635390_gshared)(__this, method)
// System.Int32 Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::Count()
extern "C"  int32_t LlrbEmptyNode_2_Count_m2193555718_gshared (LlrbEmptyNode_2_t3030218886 * __this, const MethodInfo* method);
#define LlrbEmptyNode_2_Count_m2193555718(__this, method) ((  int32_t (*) (LlrbEmptyNode_2_t3030218886 *, const MethodInfo*))LlrbEmptyNode_2_Count_m2193555718_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::InOrderTraversal(Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<TK,TV>)
extern "C"  void LlrbEmptyNode_2_InOrderTraversal_m486308083_gshared (LlrbEmptyNode_2_t3030218886 * __this, NodeVisitor_t2944196615 * ___visitor0, const MethodInfo* method);
#define LlrbEmptyNode_2_InOrderTraversal_m486308083(__this, ___visitor0, method) ((  void (*) (LlrbEmptyNode_2_t3030218886 *, NodeVisitor_t2944196615 *, const MethodInfo*))LlrbEmptyNode_2_InOrderTraversal_m486308083_gshared)(__this, ___visitor0, method)
// System.Void Firebase.Database.Internal.Collection.LlrbEmptyNode`2<System.Object,System.Object>::.cctor()
extern "C"  void LlrbEmptyNode_2__cctor_m2089748082_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define LlrbEmptyNode_2__cctor_m2089748082(__this /* static, unused */, method) ((  void (*) (Il2CppObject * /* static, unused */, const MethodInfo*))LlrbEmptyNode_2__cctor_m2089748082_gshared)(__this /* static, unused */, method)
