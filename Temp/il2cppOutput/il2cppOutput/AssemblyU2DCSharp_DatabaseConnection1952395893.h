#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DatabaseConnection
struct  DatabaseConnection_t1952395893  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Events.UnityEvent DatabaseConnection::onCompelete
	UnityEvent_t408735097 * ___onCompelete_2;
	// Firebase.Database.DatabaseReference DatabaseConnection::reference
	DatabaseReference_t1167676104 * ___reference_3;

public:
	inline static int32_t get_offset_of_onCompelete_2() { return static_cast<int32_t>(offsetof(DatabaseConnection_t1952395893, ___onCompelete_2)); }
	inline UnityEvent_t408735097 * get_onCompelete_2() const { return ___onCompelete_2; }
	inline UnityEvent_t408735097 ** get_address_of_onCompelete_2() { return &___onCompelete_2; }
	inline void set_onCompelete_2(UnityEvent_t408735097 * value)
	{
		___onCompelete_2 = value;
		Il2CppCodeGenWriteBarrier(&___onCompelete_2, value);
	}

	inline static int32_t get_offset_of_reference_3() { return static_cast<int32_t>(offsetof(DatabaseConnection_t1952395893, ___reference_3)); }
	inline DatabaseReference_t1167676104 * get_reference_3() const { return ___reference_3; }
	inline DatabaseReference_t1167676104 ** get_address_of_reference_3() { return &___reference_3; }
	inline void set_reference_3(DatabaseReference_t1167676104 * value)
	{
		___reference_3 = value;
		Il2CppCodeGenWriteBarrier(&___reference_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
