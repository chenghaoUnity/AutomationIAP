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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/Feature
struct  Feature_t1423281007  : public Il2CppObject
{
public:
	// System.String WebCamTextureToCloudVision/Feature::type
	String_t* ___type_0;
	// System.Int32 WebCamTextureToCloudVision/Feature::maxResults
	int32_t ___maxResults_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Feature_t1423281007, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_maxResults_1() { return static_cast<int32_t>(offsetof(Feature_t1423281007, ___maxResults_1)); }
	inline int32_t get_maxResults_1() const { return ___maxResults_1; }
	inline int32_t* get_address_of_maxResults_1() { return &___maxResults_1; }
	inline void set_maxResults_1(int32_t value)
	{
		___maxResults_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
