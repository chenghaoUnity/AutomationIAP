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

// System.AggregateException
struct AggregateException_t420812976;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t2219567732;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2113226379;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern "C"  void AggregateException__ctor_m4148771672 (AggregateException_t420812976 * __this, Il2CppObject* ___innerExceptions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C"  ReadOnlyCollection_1_t2113226379 * AggregateException_get_InnerExceptions_m3725853830 (AggregateException_t420812976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C"  void AggregateException_set_InnerExceptions_m727748261 (AggregateException_t420812976 * __this, ReadOnlyCollection_1_t2113226379 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.AggregateException::Flatten()
extern "C"  AggregateException_t420812976 * AggregateException_Flatten_m3101989851 (AggregateException_t420812976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AggregateException::ToString()
extern "C"  String_t* AggregateException_ToString_m3600102524 (AggregateException_t420812976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
