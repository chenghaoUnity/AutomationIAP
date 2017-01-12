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

// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/TreeVisitor278<System.Nullable`1<System.Boolean>>
struct TreeVisitor278_t934374925;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,System.Nullable`1<System.Boolean>>>
struct IList_1_t3991400828;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/TreeVisitor278<System.Nullable`1<System.Boolean>>::.ctor(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,T>>)
extern "C"  void TreeVisitor278__ctor_m12229935_gshared (TreeVisitor278_t934374925 * __this, Il2CppObject* ___list0, const MethodInfo* method);
#define TreeVisitor278__ctor_m12229935(__this, ___list0, method) ((  void (*) (TreeVisitor278_t934374925 *, Il2CppObject*, const MethodInfo*))TreeVisitor278__ctor_m12229935_gshared)(__this, ___list0, method)
// System.Object Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/TreeVisitor278<System.Nullable`1<System.Boolean>>::OnNodeValue(Firebase.Database.Internal.Core.Path,T,System.Object)
extern "C"  Il2CppObject * TreeVisitor278_OnNodeValue_m2796073726_gshared (TreeVisitor278_t934374925 * __this, Path_t2568473163 * ___relativePath0, Nullable_1_t2088641033  ___value1, Il2CppObject * ___accum2, const MethodInfo* method);
#define TreeVisitor278_OnNodeValue_m2796073726(__this, ___relativePath0, ___value1, ___accum2, method) ((  Il2CppObject * (*) (TreeVisitor278_t934374925 *, Path_t2568473163 *, Nullable_1_t2088641033 , Il2CppObject *, const MethodInfo*))TreeVisitor278_OnNodeValue_m2796073726_gshared)(__this, ___relativePath0, ___value1, ___accum2, method)
