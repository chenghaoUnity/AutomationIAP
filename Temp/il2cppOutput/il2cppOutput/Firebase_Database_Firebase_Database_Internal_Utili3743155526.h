#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t1044426839;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.PushIdGenerator
struct  PushIdGenerator_t3743155526  : public Il2CppObject
{
public:

public:
};

struct PushIdGenerator_t3743155526_StaticFields
{
public:
	// System.Random Firebase.Database.Internal.Utilities.PushIdGenerator::RandGen
	Random_t1044426839 * ___RandGen_0;
	// System.Int64 Firebase.Database.Internal.Utilities.PushIdGenerator::_lastPushTime
	int64_t ____lastPushTime_1;
	// System.Int32[] Firebase.Database.Internal.Utilities.PushIdGenerator::LastRandChars
	Int32U5BU5D_t3030399641* ___LastRandChars_2;
	// System.Object Firebase.Database.Internal.Utilities.PushIdGenerator::SSync
	Il2CppObject * ___SSync_3;

public:
	inline static int32_t get_offset_of_RandGen_0() { return static_cast<int32_t>(offsetof(PushIdGenerator_t3743155526_StaticFields, ___RandGen_0)); }
	inline Random_t1044426839 * get_RandGen_0() const { return ___RandGen_0; }
	inline Random_t1044426839 ** get_address_of_RandGen_0() { return &___RandGen_0; }
	inline void set_RandGen_0(Random_t1044426839 * value)
	{
		___RandGen_0 = value;
		Il2CppCodeGenWriteBarrier(&___RandGen_0, value);
	}

	inline static int32_t get_offset_of__lastPushTime_1() { return static_cast<int32_t>(offsetof(PushIdGenerator_t3743155526_StaticFields, ____lastPushTime_1)); }
	inline int64_t get__lastPushTime_1() const { return ____lastPushTime_1; }
	inline int64_t* get_address_of__lastPushTime_1() { return &____lastPushTime_1; }
	inline void set__lastPushTime_1(int64_t value)
	{
		____lastPushTime_1 = value;
	}

	inline static int32_t get_offset_of_LastRandChars_2() { return static_cast<int32_t>(offsetof(PushIdGenerator_t3743155526_StaticFields, ___LastRandChars_2)); }
	inline Int32U5BU5D_t3030399641* get_LastRandChars_2() const { return ___LastRandChars_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_LastRandChars_2() { return &___LastRandChars_2; }
	inline void set_LastRandChars_2(Int32U5BU5D_t3030399641* value)
	{
		___LastRandChars_2 = value;
		Il2CppCodeGenWriteBarrier(&___LastRandChars_2, value);
	}

	inline static int32_t get_offset_of_SSync_3() { return static_cast<int32_t>(offsetof(PushIdGenerator_t3743155526_StaticFields, ___SSync_3)); }
	inline Il2CppObject * get_SSync_3() const { return ___SSync_3; }
	inline Il2CppObject ** get_address_of_SSync_3() { return &___SSync_3; }
	inline void set_SSync_3(Il2CppObject * value)
	{
		___SSync_3 = value;
		Il2CppCodeGenWriteBarrier(&___SSync_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
