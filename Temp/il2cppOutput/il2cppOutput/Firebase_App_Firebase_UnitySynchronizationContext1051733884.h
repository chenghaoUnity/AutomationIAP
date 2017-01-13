﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.UnitySynchronizationContext
struct UnitySynchronizationContext_t1051733884;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_t279829387;
// Firebase.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t692674473;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t4228867588;

#include "mscorlib_System_Threading_SynchronizationContext3857790437.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnitySynchronizationContext
struct  UnitySynchronizationContext_t1051733884  : public SynchronizationContext_t3857790437
{
public:
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.UnitySynchronizationContext::queue
	Queue_1_t279829387 * ___queue_2;
	// Firebase.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.UnitySynchronizationContext::behavior
	SynchronizationContextBehavoir_t692674473 * ___behavior_3;
	// System.Int32 Firebase.UnitySynchronizationContext::mainThreadId
	int32_t ___mainThreadId_4;

public:
	inline static int32_t get_offset_of_queue_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1051733884, ___queue_2)); }
	inline Queue_1_t279829387 * get_queue_2() const { return ___queue_2; }
	inline Queue_1_t279829387 ** get_address_of_queue_2() { return &___queue_2; }
	inline void set_queue_2(Queue_1_t279829387 * value)
	{
		___queue_2 = value;
		Il2CppCodeGenWriteBarrier(&___queue_2, value);
	}

	inline static int32_t get_offset_of_behavior_3() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1051733884, ___behavior_3)); }
	inline SynchronizationContextBehavoir_t692674473 * get_behavior_3() const { return ___behavior_3; }
	inline SynchronizationContextBehavoir_t692674473 ** get_address_of_behavior_3() { return &___behavior_3; }
	inline void set_behavior_3(SynchronizationContextBehavoir_t692674473 * value)
	{
		___behavior_3 = value;
		Il2CppCodeGenWriteBarrier(&___behavior_3, value);
	}

	inline static int32_t get_offset_of_mainThreadId_4() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1051733884, ___mainThreadId_4)); }
	inline int32_t get_mainThreadId_4() const { return ___mainThreadId_4; }
	inline int32_t* get_address_of_mainThreadId_4() { return &___mainThreadId_4; }
	inline void set_mainThreadId_4(int32_t value)
	{
		___mainThreadId_4 = value;
	}
};

struct UnitySynchronizationContext_t1051733884_StaticFields
{
public:
	// Firebase.UnitySynchronizationContext Firebase.UnitySynchronizationContext::_instance
	UnitySynchronizationContext_t1051733884 * ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent> Firebase.UnitySynchronizationContext::signalDictionary
	Dictionary_2_t4228867588 * ___signalDictionary_5;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1051733884_StaticFields, ____instance_1)); }
	inline UnitySynchronizationContext_t1051733884 * get__instance_1() const { return ____instance_1; }
	inline UnitySynchronizationContext_t1051733884 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(UnitySynchronizationContext_t1051733884 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}

	inline static int32_t get_offset_of_signalDictionary_5() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1051733884_StaticFields, ___signalDictionary_5)); }
	inline Dictionary_2_t4228867588 * get_signalDictionary_5() const { return ___signalDictionary_5; }
	inline Dictionary_2_t4228867588 ** get_address_of_signalDictionary_5() { return &___signalDictionary_5; }
	inline void set_signalDictionary_5(Dictionary_2_t4228867588 * value)
	{
		___signalDictionary_5 = value;
		Il2CppCodeGenWriteBarrier(&___signalDictionary_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
