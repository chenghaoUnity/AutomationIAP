#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Uri,Firebase.FirebaseHttpRequest>
struct Func_2_t1644515999;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseHttpRequest
struct  FirebaseHttpRequest_t1911360314  : public Il2CppObject
{
public:
	// System.Uri Firebase.FirebaseHttpRequest::_url
	Uri_t19570940 * ____url_1;

public:
	inline static int32_t get_offset_of__url_1() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t1911360314, ____url_1)); }
	inline Uri_t19570940 * get__url_1() const { return ____url_1; }
	inline Uri_t19570940 ** get_address_of__url_1() { return &____url_1; }
	inline void set__url_1(Uri_t19570940 * value)
	{
		____url_1 = value;
		Il2CppCodeGenWriteBarrier(&____url_1, value);
	}
};

struct FirebaseHttpRequest_t1911360314_StaticFields
{
public:
	// System.Func`2<System.Uri,Firebase.FirebaseHttpRequest> Firebase.FirebaseHttpRequest::_factory
	Func_2_t1644515999 * ____factory_0;
	// System.String Firebase.FirebaseHttpRequest::ContentLength
	String_t* ___ContentLength_2;
	// System.Int32 Firebase.FirebaseHttpRequest::Timeout
	int32_t ___Timeout_3;
	// System.Int32 Firebase.FirebaseHttpRequest::NetworkUnavailable
	int32_t ___NetworkUnavailable_4;

public:
	inline static int32_t get_offset_of__factory_0() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t1911360314_StaticFields, ____factory_0)); }
	inline Func_2_t1644515999 * get__factory_0() const { return ____factory_0; }
	inline Func_2_t1644515999 ** get_address_of__factory_0() { return &____factory_0; }
	inline void set__factory_0(Func_2_t1644515999 * value)
	{
		____factory_0 = value;
		Il2CppCodeGenWriteBarrier(&____factory_0, value);
	}

	inline static int32_t get_offset_of_ContentLength_2() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t1911360314_StaticFields, ___ContentLength_2)); }
	inline String_t* get_ContentLength_2() const { return ___ContentLength_2; }
	inline String_t** get_address_of_ContentLength_2() { return &___ContentLength_2; }
	inline void set_ContentLength_2(String_t* value)
	{
		___ContentLength_2 = value;
		Il2CppCodeGenWriteBarrier(&___ContentLength_2, value);
	}

	inline static int32_t get_offset_of_Timeout_3() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t1911360314_StaticFields, ___Timeout_3)); }
	inline int32_t get_Timeout_3() const { return ___Timeout_3; }
	inline int32_t* get_address_of_Timeout_3() { return &___Timeout_3; }
	inline void set_Timeout_3(int32_t value)
	{
		___Timeout_3 = value;
	}

	inline static int32_t get_offset_of_NetworkUnavailable_4() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t1911360314_StaticFields, ___NetworkUnavailable_4)); }
	inline int32_t get_NetworkUnavailable_4() const { return ___NetworkUnavailable_4; }
	inline int32_t* get_address_of_NetworkUnavailable_4() { return &___NetworkUnavailable_4; }
	inline void set_NetworkUnavailable_4(int32_t value)
	{
		___NetworkUnavailable_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
