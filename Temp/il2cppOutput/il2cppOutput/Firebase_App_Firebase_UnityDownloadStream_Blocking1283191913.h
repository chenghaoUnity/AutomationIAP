#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Semaphore
struct Semaphore_t159839144;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3216990848;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnityDownloadStream/BlockingCollection`1<System.Byte[]>
struct  BlockingCollection_1_t1283191913  : public Il2CppObject
{
public:
	// System.Threading.Semaphore Firebase.UnityDownloadStream/BlockingCollection`1::_count
	Semaphore_t159839144 * ____count_0;
	// System.Collections.Generic.Queue`1<T> Firebase.UnityDownloadStream/BlockingCollection`1::_underlyingQueue
	Queue_1_t3216990848 * ____underlyingQueue_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1283191913, ____count_0)); }
	inline Semaphore_t159839144 * get__count_0() const { return ____count_0; }
	inline Semaphore_t159839144 ** get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(Semaphore_t159839144 * value)
	{
		____count_0 = value;
		Il2CppCodeGenWriteBarrier(&____count_0, value);
	}

	inline static int32_t get_offset_of__underlyingQueue_1() { return static_cast<int32_t>(offsetof(BlockingCollection_1_t1283191913, ____underlyingQueue_1)); }
	inline Queue_1_t3216990848 * get__underlyingQueue_1() const { return ____underlyingQueue_1; }
	inline Queue_1_t3216990848 ** get_address_of__underlyingQueue_1() { return &____underlyingQueue_1; }
	inline void set__underlyingQueue_1(Queue_1_t3216990848 * value)
	{
		____underlyingQueue_1 = value;
		Il2CppCodeGenWriteBarrier(&____underlyingQueue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
