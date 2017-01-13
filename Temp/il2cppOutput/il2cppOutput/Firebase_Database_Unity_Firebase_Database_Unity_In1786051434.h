#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Unity.InstallRootCerts
struct  InstallRootCerts_t1786051434  : public Il2CppObject
{
public:

public:
};

struct InstallRootCerts_t1786051434_StaticFields
{
public:
	// System.Object Firebase.Database.Unity.InstallRootCerts::Sync
	Il2CppObject * ___Sync_0;
	// System.Boolean Firebase.Database.Unity.InstallRootCerts::_installedRoots
	bool ____installedRoots_1;

public:
	inline static int32_t get_offset_of_Sync_0() { return static_cast<int32_t>(offsetof(InstallRootCerts_t1786051434_StaticFields, ___Sync_0)); }
	inline Il2CppObject * get_Sync_0() const { return ___Sync_0; }
	inline Il2CppObject ** get_address_of_Sync_0() { return &___Sync_0; }
	inline void set_Sync_0(Il2CppObject * value)
	{
		___Sync_0 = value;
		Il2CppCodeGenWriteBarrier(&___Sync_0, value);
	}

	inline static int32_t get_offset_of__installedRoots_1() { return static_cast<int32_t>(offsetof(InstallRootCerts_t1786051434_StaticFields, ____installedRoots_1)); }
	inline bool get__installedRoots_1() const { return ____installedRoots_1; }
	inline bool* get_address_of__installedRoots_1() { return &____installedRoots_1; }
	inline void set__installedRoots_1(bool value)
	{
		____installedRoots_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
