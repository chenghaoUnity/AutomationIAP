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

// Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>
struct LlrbValueNode_2_t1296857666;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<System.Object,System.Object>
struct NodeVisitor_t2944196615;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Colle1714721308.h"

// System.Void Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::.ctor(TK,TV,Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>,Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>)
extern "C"  void LlrbValueNode_2__ctor_m3789885180_gshared (LlrbValueNode_2_t1296857666 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, LlrbNode_2_t4262869811 * ___left2, LlrbNode_2_t4262869811 * ___right3, const MethodInfo* method);
#define LlrbValueNode_2__ctor_m3789885180(__this, ___key0, ___value1, ___left2, ___right3, method) ((  void (*) (LlrbValueNode_2_t1296857666 *, Il2CppObject *, Il2CppObject *, LlrbNode_2_t4262869811 *, LlrbNode_2_t4262869811 *, const MethodInfo*))LlrbValueNode_2__ctor_m3789885180_gshared)(__this, ___key0, ___value1, ___left2, ___right3, method)
// Firebase.Database.Internal.Collection.LlrbNode`2/Color<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::OppositeColor(Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>)
extern "C"  int32_t LlrbValueNode_2_OppositeColor_m356183322_gshared (Il2CppObject * __this /* static, unused */, LlrbNode_2_t4262869811 * ___node0, const MethodInfo* method);
#define LlrbValueNode_2_OppositeColor_m356183322(__this /* static, unused */, ___node0, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, LlrbNode_2_t4262869811 *, const MethodInfo*))LlrbValueNode_2_OppositeColor_m356183322_gshared)(__this /* static, unused */, ___node0, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::GetLeft()
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_GetLeft_m3193603093_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_GetLeft_m3193603093(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_GetLeft_m3193603093_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::GetRight()
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_GetRight_m1105278098_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_GetRight_m1105278098(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_GetRight_m1105278098_gshared)(__this, method)
// TK Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::GetKey()
extern "C"  Il2CppObject * LlrbValueNode_2_GetKey_m2081196488_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_GetKey_m2081196488(__this, method) ((  Il2CppObject * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_GetKey_m2081196488_gshared)(__this, method)
// TV Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::GetValue()
extern "C"  Il2CppObject * LlrbValueNode_2_GetValue_m252497311_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_GetValue_m252497311(__this, method) ((  Il2CppObject * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_GetValue_m252497311_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::Copy(TK,TV,Firebase.Database.Internal.Collection.LlrbNode`2/Color<TK,TV>,Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>,Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>)
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_Copy_m160077796_gshared (LlrbValueNode_2_t1296857666 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, int32_t ___color2, LlrbNode_2_t4262869811 * ___left3, LlrbNode_2_t4262869811 * ___right4, const MethodInfo* method);
#define LlrbValueNode_2_Copy_m160077796(__this, ___key0, ___value1, ___color2, ___left3, ___right4, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, Il2CppObject *, Il2CppObject *, int32_t, LlrbNode_2_t4262869811 *, LlrbNode_2_t4262869811 *, const MethodInfo*))LlrbValueNode_2_Copy_m160077796_gshared)(__this, ___key0, ___value1, ___color2, ___left3, ___right4, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::Insert(TK,TV,System.Collections.Generic.IComparer`1<TK>)
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_Insert_m781426253_gshared (LlrbValueNode_2_t1296857666 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, Il2CppObject* ___comparator2, const MethodInfo* method);
#define LlrbValueNode_2_Insert_m781426253(__this, ___key0, ___value1, ___comparator2, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, Il2CppObject *, Il2CppObject *, Il2CppObject*, const MethodInfo*))LlrbValueNode_2_Insert_m781426253_gshared)(__this, ___key0, ___value1, ___comparator2, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::Remove(TK,System.Collections.Generic.IComparer`1<TK>)
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_Remove_m3581654292_gshared (LlrbValueNode_2_t1296857666 * __this, Il2CppObject * ___key0, Il2CppObject* ___comparator1, const MethodInfo* method);
#define LlrbValueNode_2_Remove_m3581654292(__this, ___key0, ___comparator1, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, Il2CppObject *, Il2CppObject*, const MethodInfo*))LlrbValueNode_2_Remove_m3581654292_gshared)(__this, ___key0, ___comparator1, method)
// System.Boolean Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::IsEmpty()
extern "C"  bool LlrbValueNode_2_IsEmpty_m1001034316_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_IsEmpty_m1001034316(__this, method) ((  bool (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_IsEmpty_m1001034316_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::GetMin()
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_GetMin_m2394736484_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_GetMin_m2394736484(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_GetMin_m2394736484_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::GetMax()
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_GetMax_m640694454_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_GetMax_m640694454(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_GetMax_m640694454_gshared)(__this, method)
// System.Int32 Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::Count()
extern "C"  int32_t LlrbValueNode_2_Count_m3245830974_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_Count_m3245830974(__this, method) ((  int32_t (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_Count_m3245830974_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::InOrderTraversal(Firebase.Database.Internal.Collection.LlrbNode`2/NodeVisitor<TK,TV>)
extern "C"  void LlrbValueNode_2_InOrderTraversal_m1563838317_gshared (LlrbValueNode_2_t1296857666 * __this, NodeVisitor_t2944196615 * ___visitor0, const MethodInfo* method);
#define LlrbValueNode_2_InOrderTraversal_m1563838317(__this, ___visitor0, method) ((  void (*) (LlrbValueNode_2_t1296857666 *, NodeVisitor_t2944196615 *, const MethodInfo*))LlrbValueNode_2_InOrderTraversal_m1563838317_gshared)(__this, ___visitor0, method)
// System.Void Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::SetLeft(Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV>)
extern "C"  void LlrbValueNode_2_SetLeft_m3306826474_gshared (LlrbValueNode_2_t1296857666 * __this, LlrbNode_2_t4262869811 * ___left0, const MethodInfo* method);
#define LlrbValueNode_2_SetLeft_m3306826474(__this, ___left0, method) ((  void (*) (LlrbValueNode_2_t1296857666 *, LlrbNode_2_t4262869811 *, const MethodInfo*))LlrbValueNode_2_SetLeft_m3306826474_gshared)(__this, ___left0, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::RemoveMin()
extern "C"  LlrbNode_2_t4262869811 * LlrbValueNode_2_RemoveMin_m1694062810_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_RemoveMin_m1694062810(__this, method) ((  LlrbNode_2_t4262869811 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_RemoveMin_m1694062810_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::MoveRedLeft()
extern "C"  LlrbValueNode_2_t1296857666 * LlrbValueNode_2_MoveRedLeft_m2581967588_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_MoveRedLeft_m2581967588(__this, method) ((  LlrbValueNode_2_t1296857666 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_MoveRedLeft_m2581967588_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::MoveRedRight()
extern "C"  LlrbValueNode_2_t1296857666 * LlrbValueNode_2_MoveRedRight_m1531981241_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_MoveRedRight_m1531981241(__this, method) ((  LlrbValueNode_2_t1296857666 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_MoveRedRight_m1531981241_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::FixUp()
extern "C"  LlrbValueNode_2_t1296857666 * LlrbValueNode_2_FixUp_m2907309153_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_FixUp_m2907309153(__this, method) ((  LlrbValueNode_2_t1296857666 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_FixUp_m2907309153_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::RotateLeft()
extern "C"  LlrbValueNode_2_t1296857666 * LlrbValueNode_2_RotateLeft_m4139860009_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_RotateLeft_m4139860009(__this, method) ((  LlrbValueNode_2_t1296857666 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_RotateLeft_m4139860009_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::RotateRight()
extern "C"  LlrbValueNode_2_t1296857666 * LlrbValueNode_2_RotateRight_m2134806614_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_RotateRight_m2134806614(__this, method) ((  LlrbValueNode_2_t1296857666 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_RotateRight_m2134806614_gshared)(__this, method)
// Firebase.Database.Internal.Collection.LlrbValueNode`2<TK,TV> Firebase.Database.Internal.Collection.LlrbValueNode`2<System.Object,System.Object>::ColorFlip()
extern "C"  LlrbValueNode_2_t1296857666 * LlrbValueNode_2_ColorFlip_m164232373_gshared (LlrbValueNode_2_t1296857666 * __this, const MethodInfo* method);
#define LlrbValueNode_2_ColorFlip_m164232373(__this, method) ((  LlrbValueNode_2_t1296857666 * (*) (LlrbValueNode_2_t1296857666 *, const MethodInfo*))LlrbValueNode_2_ColorFlip_m164232373_gshared)(__this, method)
