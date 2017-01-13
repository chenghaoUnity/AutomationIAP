#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate
struct LogMessageDelegate_t1988210674;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp/FirebaseHandler
struct  FirebaseHandler_t2907300047  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct FirebaseHandler_t2907300047_StaticFields
{
public:
	// UnityEngine.GameObject Firebase.FirebaseApp/FirebaseHandler::firebaseHandler
	GameObject_t1756533147 * ___firebaseHandler_2;
	// Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate Firebase.FirebaseApp/FirebaseHandler::<>f__mg$cache0
	LogMessageDelegate_t1988210674 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of_firebaseHandler_2() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047_StaticFields, ___firebaseHandler_2)); }
	inline GameObject_t1756533147 * get_firebaseHandler_2() const { return ___firebaseHandler_2; }
	inline GameObject_t1756533147 ** get_address_of_firebaseHandler_2() { return &___firebaseHandler_2; }
	inline void set_firebaseHandler_2(GameObject_t1756533147 * value)
	{
		___firebaseHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___firebaseHandler_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline LogMessageDelegate_t1988210674 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline LogMessageDelegate_t1988210674 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(LogMessageDelegate_t1988210674 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
