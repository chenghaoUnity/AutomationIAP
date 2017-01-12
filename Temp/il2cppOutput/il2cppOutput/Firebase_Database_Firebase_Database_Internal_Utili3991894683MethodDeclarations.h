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

// Firebase.Database.Internal.Utilities.OffsetClock
struct OffsetClock_t3991894683;
// Firebase.Database.Internal.Utilities.IClock
struct IClock_t2325879361;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.Utilities.OffsetClock::.ctor(Firebase.Database.Internal.Utilities.IClock,System.Int64)
extern "C"  void OffsetClock__ctor_m1224031995 (OffsetClock_t3991894683 * __this, Il2CppObject * ___baseClock0, int64_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Utilities.OffsetClock::Millis()
extern "C"  int64_t OffsetClock_Millis_m4110402322 (OffsetClock_t3991894683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.OffsetClock::SetOffset(System.Int64)
extern "C"  void OffsetClock_SetOffset_m1558307120 (OffsetClock_t3991894683 * __this, int64_t ___offset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
