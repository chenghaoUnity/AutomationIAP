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
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut
struct  OutstandingPut_t774816424  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::_action
	String_t* ____action_0;
	// Firebase.Database.Internal.Connection.IRequestResultCallback Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::OnComplete
	Il2CppObject * ___OnComplete_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::_request
	Il2CppObject* ____request_2;

public:
	inline static int32_t get_offset_of__action_0() { return static_cast<int32_t>(offsetof(OutstandingPut_t774816424, ____action_0)); }
	inline String_t* get__action_0() const { return ____action_0; }
	inline String_t** get_address_of__action_0() { return &____action_0; }
	inline void set__action_0(String_t* value)
	{
		____action_0 = value;
		Il2CppCodeGenWriteBarrier(&____action_0, value);
	}

	inline static int32_t get_offset_of_OnComplete_1() { return static_cast<int32_t>(offsetof(OutstandingPut_t774816424, ___OnComplete_1)); }
	inline Il2CppObject * get_OnComplete_1() const { return ___OnComplete_1; }
	inline Il2CppObject ** get_address_of_OnComplete_1() { return &___OnComplete_1; }
	inline void set_OnComplete_1(Il2CppObject * value)
	{
		___OnComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_1, value);
	}

	inline static int32_t get_offset_of__request_2() { return static_cast<int32_t>(offsetof(OutstandingPut_t774816424, ____request_2)); }
	inline Il2CppObject* get__request_2() const { return ____request_2; }
	inline Il2CppObject** get_address_of__request_2() { return &____request_2; }
	inline void set__request_2(Il2CppObject* value)
	{
		____request_2 = value;
		Il2CppCodeGenWriteBarrier(&____request_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
