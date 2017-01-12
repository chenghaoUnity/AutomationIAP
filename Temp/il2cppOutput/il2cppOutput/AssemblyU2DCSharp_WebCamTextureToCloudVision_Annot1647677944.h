#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebCamTextureToCloudVision/AnnotateImageResponse>
struct List_1_t454240689;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/AnnotateImageResponses
struct  AnnotateImageResponses_t1647677944  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/AnnotateImageResponse> WebCamTextureToCloudVision/AnnotateImageResponses::responses
	List_1_t454240689 * ___responses_0;

public:
	inline static int32_t get_offset_of_responses_0() { return static_cast<int32_t>(offsetof(AnnotateImageResponses_t1647677944, ___responses_0)); }
	inline List_1_t454240689 * get_responses_0() const { return ___responses_0; }
	inline List_1_t454240689 ** get_address_of_responses_0() { return &___responses_0; }
	inline void set_responses_0(List_1_t454240689 * value)
	{
		___responses_0 = value;
		Il2CppCodeGenWriteBarrier(&___responses_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
