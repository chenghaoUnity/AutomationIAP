#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.FirebaseApp
struct FirebaseApp_t210707726;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Core.FirebaseConfigExtensions/<CreatePlatform>c__AnonStorey1
struct  U3CCreatePlatformU3Ec__AnonStorey1_t1927240834  : public Il2CppObject
{
public:
	// Firebase.FirebaseApp Firebase.Database.Core.FirebaseConfigExtensions/<CreatePlatform>c__AnonStorey1::app
	FirebaseApp_t210707726 * ___app_0;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(U3CCreatePlatformU3Ec__AnonStorey1_t1927240834, ___app_0)); }
	inline FirebaseApp_t210707726 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t210707726 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t210707726 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier(&___app_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
