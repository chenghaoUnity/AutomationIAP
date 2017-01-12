#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.Database.Unity.ServiceAccountCredential/OAuthRequest
struct OAuthRequest_t3497136277;
// Firebase.Database.Unity.ServiceAccountCredential
struct ServiceAccountCredential_t3398163339;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Unity.ServiceAccountCredential/<GetAccessTokenForRequestSync>c__AnonStorey1
struct  U3CGetAccessTokenForRequestSyncU3Ec__AnonStorey1_t3624071067  : public Il2CppObject
{
public:
	// Firebase.Database.Unity.ServiceAccountCredential/OAuthRequest Firebase.Database.Unity.ServiceAccountCredential/<GetAccessTokenForRequestSync>c__AnonStorey1::request
	OAuthRequest_t3497136277 * ___request_0;
	// Firebase.Database.Unity.ServiceAccountCredential Firebase.Database.Unity.ServiceAccountCredential/<GetAccessTokenForRequestSync>c__AnonStorey1::$this
	ServiceAccountCredential_t3398163339 * ___U24this_1;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CGetAccessTokenForRequestSyncU3Ec__AnonStorey1_t3624071067, ___request_0)); }
	inline OAuthRequest_t3497136277 * get_request_0() const { return ___request_0; }
	inline OAuthRequest_t3497136277 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(OAuthRequest_t3497136277 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetAccessTokenForRequestSyncU3Ec__AnonStorey1_t3624071067, ___U24this_1)); }
	inline ServiceAccountCredential_t3398163339 * get_U24this_1() const { return ___U24this_1; }
	inline ServiceAccountCredential_t3398163339 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ServiceAccountCredential_t3398163339 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
