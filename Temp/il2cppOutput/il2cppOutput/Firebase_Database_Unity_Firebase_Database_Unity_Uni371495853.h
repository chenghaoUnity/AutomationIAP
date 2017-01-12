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

#include "Firebase_Database_Firebase_Database_Core_AuthToken3681374264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Unity.UnityAuthTokenProvider
struct  UnityAuthTokenProvider_t371495853  : public AuthTokenProvider_t3681374264
{
public:
	// Firebase.FirebaseApp Firebase.Database.Unity.UnityAuthTokenProvider::_firebaseApp
	FirebaseApp_t210707726 * ____firebaseApp_0;

public:
	inline static int32_t get_offset_of__firebaseApp_0() { return static_cast<int32_t>(offsetof(UnityAuthTokenProvider_t371495853, ____firebaseApp_0)); }
	inline FirebaseApp_t210707726 * get__firebaseApp_0() const { return ____firebaseApp_0; }
	inline FirebaseApp_t210707726 ** get_address_of__firebaseApp_0() { return &____firebaseApp_0; }
	inline void set__firebaseApp_0(FirebaseApp_t210707726 * value)
	{
		____firebaseApp_0 = value;
		Il2CppCodeGenWriteBarrier(&____firebaseApp_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
