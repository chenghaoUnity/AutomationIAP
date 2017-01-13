#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_t2276122186;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1/<ContinueWith>c__AnonStorey1`1<System.Object,System.Object>
struct  U3CContinueWithU3Ec__AnonStorey1_1_t832219383  : public Il2CppObject
{
public:
	// System.Func`2<System.Threading.Tasks.Task`1<T>,TResult> System.Threading.Tasks.Task`1/<ContinueWith>c__AnonStorey1`1::continuation
	Func_2_t2276122186 * ___continuation_0;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey1_1_t832219383, ___continuation_0)); }
	inline Func_2_t2276122186 * get_continuation_0() const { return ___continuation_0; }
	inline Func_2_t2276122186 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Func_2_t2276122186 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier(&___continuation_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
