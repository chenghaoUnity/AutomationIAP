#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.String
struct String_t;

#include "Firebase_App_Firebase_FirebaseHttpRequest1911360314.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnityHttpRequest
struct  UnityHttpRequest_t967994112  : public FirebaseHttpRequest_t1911360314
{
public:
	// System.Collections.Specialized.NameValueCollection Firebase.UnityHttpRequest::_requestHeaders
	NameValueCollection_t3047564564 * ____requestHeaders_5;
	// System.IO.MemoryStream Firebase.UnityHttpRequest::_requestBody
	MemoryStream_t743994179 * ____requestBody_6;
	// System.Int64 Firebase.UnityHttpRequest::_responseCode
	int64_t ____responseCode_7;
	// System.Collections.Specialized.NameValueCollection Firebase.UnityHttpRequest::_responseHeaders
	NameValueCollection_t3047564564 * ____responseHeaders_8;
	// System.Threading.ManualResetEvent Firebase.UnityHttpRequest::_sync
	ManualResetEvent_t926074657 * ____sync_9;
	// System.String Firebase.UnityHttpRequest::_error
	String_t* ____error_10;

public:
	inline static int32_t get_offset_of__requestHeaders_5() { return static_cast<int32_t>(offsetof(UnityHttpRequest_t967994112, ____requestHeaders_5)); }
	inline NameValueCollection_t3047564564 * get__requestHeaders_5() const { return ____requestHeaders_5; }
	inline NameValueCollection_t3047564564 ** get_address_of__requestHeaders_5() { return &____requestHeaders_5; }
	inline void set__requestHeaders_5(NameValueCollection_t3047564564 * value)
	{
		____requestHeaders_5 = value;
		Il2CppCodeGenWriteBarrier(&____requestHeaders_5, value);
	}

	inline static int32_t get_offset_of__requestBody_6() { return static_cast<int32_t>(offsetof(UnityHttpRequest_t967994112, ____requestBody_6)); }
	inline MemoryStream_t743994179 * get__requestBody_6() const { return ____requestBody_6; }
	inline MemoryStream_t743994179 ** get_address_of__requestBody_6() { return &____requestBody_6; }
	inline void set__requestBody_6(MemoryStream_t743994179 * value)
	{
		____requestBody_6 = value;
		Il2CppCodeGenWriteBarrier(&____requestBody_6, value);
	}

	inline static int32_t get_offset_of__responseCode_7() { return static_cast<int32_t>(offsetof(UnityHttpRequest_t967994112, ____responseCode_7)); }
	inline int64_t get__responseCode_7() const { return ____responseCode_7; }
	inline int64_t* get_address_of__responseCode_7() { return &____responseCode_7; }
	inline void set__responseCode_7(int64_t value)
	{
		____responseCode_7 = value;
	}

	inline static int32_t get_offset_of__responseHeaders_8() { return static_cast<int32_t>(offsetof(UnityHttpRequest_t967994112, ____responseHeaders_8)); }
	inline NameValueCollection_t3047564564 * get__responseHeaders_8() const { return ____responseHeaders_8; }
	inline NameValueCollection_t3047564564 ** get_address_of__responseHeaders_8() { return &____responseHeaders_8; }
	inline void set__responseHeaders_8(NameValueCollection_t3047564564 * value)
	{
		____responseHeaders_8 = value;
		Il2CppCodeGenWriteBarrier(&____responseHeaders_8, value);
	}

	inline static int32_t get_offset_of__sync_9() { return static_cast<int32_t>(offsetof(UnityHttpRequest_t967994112, ____sync_9)); }
	inline ManualResetEvent_t926074657 * get__sync_9() const { return ____sync_9; }
	inline ManualResetEvent_t926074657 ** get_address_of__sync_9() { return &____sync_9; }
	inline void set__sync_9(ManualResetEvent_t926074657 * value)
	{
		____sync_9 = value;
		Il2CppCodeGenWriteBarrier(&____sync_9, value);
	}

	inline static int32_t get_offset_of__error_10() { return static_cast<int32_t>(offsetof(UnityHttpRequest_t967994112, ____error_10)); }
	inline String_t* get__error_10() const { return ____error_10; }
	inline String_t** get_address_of__error_10() { return &____error_10; }
	inline void set__error_10(String_t* value)
	{
		____error_10 = value;
		Il2CppCodeGenWriteBarrier(&____error_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
