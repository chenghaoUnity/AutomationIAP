#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t3420419431;
// Firebase.UnitySynchronizationContext
struct UnitySynchronizationContext_t1051733884;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct  U3CSendCoroutineU3Ec__AnonStorey1_t3854140196  : public Il2CppObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> Firebase.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::coroutine
	Func_1_t3420419431 * ___coroutine_0;
	// Firebase.UnitySynchronizationContext Firebase.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::$this
	UnitySynchronizationContext_t1051733884 * ___U24this_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CSendCoroutineU3Ec__AnonStorey1_t3854140196, ___coroutine_0)); }
	inline Func_1_t3420419431 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_1_t3420419431 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_1_t3420419431 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSendCoroutineU3Ec__AnonStorey1_t3854140196, ___U24this_1)); }
	inline UnitySynchronizationContext_t1051733884 * get_U24this_1() const { return ___U24this_1; }
	inline UnitySynchronizationContext_t1051733884 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(UnitySynchronizationContext_t1051733884 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
