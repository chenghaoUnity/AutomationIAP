#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<User>
struct List_1_t89046591;
// DatabaseConnection
struct DatabaseConnection_t1952395893;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DatabaseConnection/<loadTopTen>c__AnonStorey0
struct  U3CloadTopTenU3Ec__AnonStorey0_t3784747189  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<User> DatabaseConnection/<loadTopTen>c__AnonStorey0::lists
	List_1_t89046591 * ___lists_0;
	// DatabaseConnection DatabaseConnection/<loadTopTen>c__AnonStorey0::$this
	DatabaseConnection_t1952395893 * ___U24this_1;

public:
	inline static int32_t get_offset_of_lists_0() { return static_cast<int32_t>(offsetof(U3CloadTopTenU3Ec__AnonStorey0_t3784747189, ___lists_0)); }
	inline List_1_t89046591 * get_lists_0() const { return ___lists_0; }
	inline List_1_t89046591 ** get_address_of_lists_0() { return &___lists_0; }
	inline void set_lists_0(List_1_t89046591 * value)
	{
		___lists_0 = value;
		Il2CppCodeGenWriteBarrier(&___lists_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CloadTopTenU3Ec__AnonStorey0_t3784747189, ___U24this_1)); }
	inline DatabaseConnection_t1952395893 * get_U24this_1() const { return ___U24this_1; }
	inline DatabaseConnection_t1952395893 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DatabaseConnection_t1952395893 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
