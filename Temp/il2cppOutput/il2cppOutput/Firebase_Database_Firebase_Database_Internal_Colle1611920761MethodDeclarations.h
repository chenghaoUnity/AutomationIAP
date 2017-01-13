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

// Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>
struct BuilderAbc_3_t1611920761;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t280592844;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<System.Object,System.Object>
struct IKeyTranslator_t1428849306;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Collection.LlrbNode`2<System.Object,System.Object>
struct LlrbNode_2_t4262869811;
// Firebase.Database.Internal.Collection.RbTreeSortedMap`2<System.Object,System.Object>
struct RbTreeSortedMap_2_t791914602;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Colle1714721308.h"

// System.Void Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Collections.Generic.IList`1<TA>,System.Collections.Generic.IDictionary`2<TB,TC>,Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<TB,TC>)
extern "C"  void BuilderAbc_3__ctor_m2884185703_gshared (BuilderAbc_3_t1611920761 * __this, Il2CppObject* ___keys0, Il2CppObject* ___values1, Il2CppObject* ___translator2, const MethodInfo* method);
#define BuilderAbc_3__ctor_m2884185703(__this, ___keys0, ___values1, ___translator2, method) ((  void (*) (BuilderAbc_3_t1611920761 *, Il2CppObject*, Il2CppObject*, Il2CppObject*, const MethodInfo*))BuilderAbc_3__ctor_m2884185703_gshared)(__this, ___keys0, ___values1, ___translator2, method)
// TC Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>::GetValue(TA)
extern "C"  Il2CppObject * BuilderAbc_3_GetValue_m4036173926_gshared (BuilderAbc_3_t1611920761 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define BuilderAbc_3_GetValue_m4036173926(__this, ___key0, method) ((  Il2CppObject * (*) (BuilderAbc_3_t1611920761 *, Il2CppObject *, const MethodInfo*))BuilderAbc_3_GetValue_m4036173926_gshared)(__this, ___key0, method)
// Firebase.Database.Internal.Collection.LlrbNode`2<TA,TC> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>::BuildBalancedTree(System.Int32,System.Int32)
extern "C"  LlrbNode_2_t4262869811 * BuilderAbc_3_BuildBalancedTree_m3112072366_gshared (BuilderAbc_3_t1611920761 * __this, int32_t ___start0, int32_t ___size1, const MethodInfo* method);
#define BuilderAbc_3_BuildBalancedTree_m3112072366(__this, ___start0, ___size1, method) ((  LlrbNode_2_t4262869811 * (*) (BuilderAbc_3_t1611920761 *, int32_t, int32_t, const MethodInfo*))BuilderAbc_3_BuildBalancedTree_m3112072366_gshared)(__this, ___start0, ___size1, method)
// System.Void Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>::BuildPennant(Firebase.Database.Internal.Collection.LlrbNode`2/Color<TA,TC>,System.Int32,System.Int32)
extern "C"  void BuilderAbc_3_BuildPennant_m4132420023_gshared (BuilderAbc_3_t1611920761 * __this, int32_t ___color0, int32_t ___chunkSize1, int32_t ___start2, const MethodInfo* method);
#define BuilderAbc_3_BuildPennant_m4132420023(__this, ___color0, ___chunkSize1, ___start2, method) ((  void (*) (BuilderAbc_3_t1611920761 *, int32_t, int32_t, int32_t, const MethodInfo*))BuilderAbc_3_BuildPennant_m4132420023_gshared)(__this, ___color0, ___chunkSize1, ___start2, method)
// Firebase.Database.Internal.Collection.RbTreeSortedMap`2<TA,TC> Firebase.Database.Internal.Collection.RbTreeSortedMap`2/BuilderAbc`3<System.Object,System.Object,System.Object,System.Object,System.Object>::BuildFrom(System.Collections.Generic.IList`1<TA>,System.Collections.Generic.IDictionary`2<TB,TC>,Firebase.Database.Internal.Collection.ImmutableSortedMap`2/Builder/IKeyTranslator<TB,TC>,System.Collections.Generic.IComparer`1<TA>)
extern "C"  RbTreeSortedMap_2_t791914602 * BuilderAbc_3_BuildFrom_m3513364847_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___keys0, Il2CppObject* ___values1, Il2CppObject* ___translator2, Il2CppObject* ___comparator3, const MethodInfo* method);
#define BuilderAbc_3_BuildFrom_m3513364847(__this /* static, unused */, ___keys0, ___values1, ___translator2, ___comparator3, method) ((  RbTreeSortedMap_2_t791914602 * (*) (Il2CppObject * /* static, unused */, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, const MethodInfo*))BuilderAbc_3_BuildFrom_m3513364847_gshared)(__this /* static, unused */, ___keys0, ___values1, ___translator2, ___comparator3, method)
