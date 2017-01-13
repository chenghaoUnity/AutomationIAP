#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.Database.Core.AuthTokenProvider/ITokenChangeListener
struct ITokenChangeListener_t4180538330;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Unity.UnityAuthTokenProvider/<AddTokenChangeListener>c__AnonStorey1
struct  U3CAddTokenChangeListenerU3Ec__AnonStorey1_t3054348951  : public Il2CppObject
{
public:
	// Firebase.Database.Core.AuthTokenProvider/ITokenChangeListener Firebase.Database.Unity.UnityAuthTokenProvider/<AddTokenChangeListener>c__AnonStorey1::listener
	Il2CppObject * ___listener_0;

public:
	inline static int32_t get_offset_of_listener_0() { return static_cast<int32_t>(offsetof(U3CAddTokenChangeListenerU3Ec__AnonStorey1_t3054348951, ___listener_0)); }
	inline Il2CppObject * get_listener_0() const { return ___listener_0; }
	inline Il2CppObject ** get_address_of_listener_0() { return &___listener_0; }
	inline void set_listener_0(Il2CppObject * value)
	{
		___listener_0 = value;
		Il2CppCodeGenWriteBarrier(&___listener_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
