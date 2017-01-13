#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Security.AppleTangle
struct  AppleTangle_t53875121  : public Il2CppObject
{
public:

public:
};

struct AppleTangle_t53875121_StaticFields
{
public:
	// System.Byte[] UnityEngine.Purchasing.Security.AppleTangle::data
	ByteU5BU5D_t3397334013* ___data_0;
	// System.Int32[] UnityEngine.Purchasing.Security.AppleTangle::order
	Int32U5BU5D_t3030399641* ___order_1;
	// System.Int32 UnityEngine.Purchasing.Security.AppleTangle::key
	int32_t ___key_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(AppleTangle_t53875121_StaticFields, ___data_0)); }
	inline ByteU5BU5D_t3397334013* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t3397334013* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(AppleTangle_t53875121_StaticFields, ___order_1)); }
	inline Int32U5BU5D_t3030399641* get_order_1() const { return ___order_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(Int32U5BU5D_t3030399641* value)
	{
		___order_1 = value;
		Il2CppCodeGenWriteBarrier(&___order_1, value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(AppleTangle_t53875121_StaticFields, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
