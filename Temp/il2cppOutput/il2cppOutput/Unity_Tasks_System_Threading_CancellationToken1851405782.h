﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1795361321;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t1851405782 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::source
	CancellationTokenSource_t1795361321 * ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t1851405782, ___source_0)); }
	inline CancellationTokenSource_t1795361321 * get_source_0() const { return ___source_0; }
	inline CancellationTokenSource_t1795361321 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(CancellationTokenSource_t1795361321 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t1851405782_marshaled_pinvoke
{
	CancellationTokenSource_t1795361321 * ___source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t1851405782_marshaled_com
{
	CancellationTokenSource_t1795361321 * ___source_0;
};
