#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;
// Firebase.Database.Query
struct Query_t2792659010;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Query/<AddListenerForSingleValueEvent>c__AnonStorey1
struct  U3CAddListenerForSingleValueEventU3Ec__AnonStorey1_t3586663574  : public Il2CppObject
{
public:
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Query/<AddListenerForSingleValueEvent>c__AnonStorey1::wrapper
	EventHandler_1_t3816151702 * ___wrapper_0;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Query/<AddListenerForSingleValueEvent>c__AnonStorey1::handler
	EventHandler_1_t3816151702 * ___handler_1;
	// Firebase.Database.Query Firebase.Database.Query/<AddListenerForSingleValueEvent>c__AnonStorey1::$this
	Query_t2792659010 * ___U24this_2;

public:
	inline static int32_t get_offset_of_wrapper_0() { return static_cast<int32_t>(offsetof(U3CAddListenerForSingleValueEventU3Ec__AnonStorey1_t3586663574, ___wrapper_0)); }
	inline EventHandler_1_t3816151702 * get_wrapper_0() const { return ___wrapper_0; }
	inline EventHandler_1_t3816151702 ** get_address_of_wrapper_0() { return &___wrapper_0; }
	inline void set_wrapper_0(EventHandler_1_t3816151702 * value)
	{
		___wrapper_0 = value;
		Il2CppCodeGenWriteBarrier(&___wrapper_0, value);
	}

	inline static int32_t get_offset_of_handler_1() { return static_cast<int32_t>(offsetof(U3CAddListenerForSingleValueEventU3Ec__AnonStorey1_t3586663574, ___handler_1)); }
	inline EventHandler_1_t3816151702 * get_handler_1() const { return ___handler_1; }
	inline EventHandler_1_t3816151702 ** get_address_of_handler_1() { return &___handler_1; }
	inline void set_handler_1(EventHandler_1_t3816151702 * value)
	{
		___handler_1 = value;
		Il2CppCodeGenWriteBarrier(&___handler_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAddListenerForSingleValueEventU3Ec__AnonStorey1_t3586663574, ___U24this_2)); }
	inline Query_t2792659010 * get_U24this_2() const { return ___U24this_2; }
	inline Query_t2792659010 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Query_t2792659010 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
