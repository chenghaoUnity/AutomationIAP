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

#include "System_System_Net_NetworkInformation_UnixNetworkIn1000704527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t3864470295  : public UnixNetworkInterface_t1000704527
{
public:
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_7;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_8;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_9;

public:
	inline static int32_t get_offset_of_iface_path_7() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_path_7)); }
	inline String_t* get_iface_path_7() const { return ___iface_path_7; }
	inline String_t** get_address_of_iface_path_7() { return &___iface_path_7; }
	inline void set_iface_path_7(String_t* value)
	{
		___iface_path_7 = value;
		Il2CppCodeGenWriteBarrier(&___iface_path_7, value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_8() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_operstate_path_8)); }
	inline String_t* get_iface_operstate_path_8() const { return ___iface_operstate_path_8; }
	inline String_t** get_address_of_iface_operstate_path_8() { return &___iface_operstate_path_8; }
	inline void set_iface_operstate_path_8(String_t* value)
	{
		___iface_operstate_path_8 = value;
		Il2CppCodeGenWriteBarrier(&___iface_operstate_path_8, value);
	}

	inline static int32_t get_offset_of_iface_flags_path_9() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t3864470295, ___iface_flags_path_9)); }
	inline String_t* get_iface_flags_path_9() const { return ___iface_flags_path_9; }
	inline String_t** get_address_of_iface_flags_path_9() { return &___iface_flags_path_9; }
	inline void set_iface_flags_path_9(String_t* value)
	{
		___iface_flags_path_9 = value;
		Il2CppCodeGenWriteBarrier(&___iface_flags_path_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
