﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t769092855;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "System_System_Net_NetworkInformation_NetworkInterfac63927633.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t1000704527  : public NetworkInterface_t63927633
{
public:
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_2;
	// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::index
	int32_t ___index_3;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t769092855 * ___addresses_4;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t3397334013* ___macAddress_5;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_6;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_addresses_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___addresses_4)); }
	inline List_1_t769092855 * get_addresses_4() const { return ___addresses_4; }
	inline List_1_t769092855 ** get_address_of_addresses_4() { return &___addresses_4; }
	inline void set_addresses_4(List_1_t769092855 * value)
	{
		___addresses_4 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_4, value);
	}

	inline static int32_t get_offset_of_macAddress_5() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___macAddress_5)); }
	inline ByteU5BU5D_t3397334013* get_macAddress_5() const { return ___macAddress_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_macAddress_5() { return &___macAddress_5; }
	inline void set_macAddress_5(ByteU5BU5D_t3397334013* value)
	{
		___macAddress_5 = value;
		Il2CppCodeGenWriteBarrier(&___macAddress_5, value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
