﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t3420419431;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct  U3CSignaledCoroutineU3Ec__Iterator0_t3693910080  : public Il2CppObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> Firebase.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::coroutine
	Func_1_t3420419431 * ___coroutine_0;
	// System.Threading.ManualResetEvent Firebase.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::newSignal
	ManualResetEvent_t926074657 * ___newSignal_1;
	// System.Object Firebase.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean Firebase.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Firebase.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t3693910080, ___coroutine_0)); }
	inline Func_1_t3420419431 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_1_t3420419431 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_1_t3420419431 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_0, value);
	}

	inline static int32_t get_offset_of_newSignal_1() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t3693910080, ___newSignal_1)); }
	inline ManualResetEvent_t926074657 * get_newSignal_1() const { return ___newSignal_1; }
	inline ManualResetEvent_t926074657 ** get_address_of_newSignal_1() { return &___newSignal_1; }
	inline void set_newSignal_1(ManualResetEvent_t926074657 * value)
	{
		___newSignal_1 = value;
		Il2CppCodeGenWriteBarrier(&___newSignal_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t3693910080, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t3693910080, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t3693910080, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
