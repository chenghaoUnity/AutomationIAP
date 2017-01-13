#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestCase
struct  TestCase_t820417420  : public Il2CppObject
{
public:
	// System.String TestCase::ID
	String_t* ___ID_0;
	// System.Boolean TestCase::result
	bool ___result_1;
	// System.String TestCase::descitpion
	String_t* ___descitpion_2;
	// System.DateTime TestCase::date
	DateTime_t693205669  ___date_3;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(TestCase_t820417420, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier(&___ID_0, value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(TestCase_t820417420, ___result_1)); }
	inline bool get_result_1() const { return ___result_1; }
	inline bool* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(bool value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_descitpion_2() { return static_cast<int32_t>(offsetof(TestCase_t820417420, ___descitpion_2)); }
	inline String_t* get_descitpion_2() const { return ___descitpion_2; }
	inline String_t** get_address_of_descitpion_2() { return &___descitpion_2; }
	inline void set_descitpion_2(String_t* value)
	{
		___descitpion_2 = value;
		Il2CppCodeGenWriteBarrier(&___descitpion_2, value);
	}

	inline static int32_t get_offset_of_date_3() { return static_cast<int32_t>(offsetof(TestCase_t820417420, ___date_3)); }
	inline DateTime_t693205669  get_date_3() const { return ___date_3; }
	inline DateTime_t693205669 * get_address_of_date_3() { return &___date_3; }
	inline void set_date_3(DateTime_t693205669  value)
	{
		___date_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
