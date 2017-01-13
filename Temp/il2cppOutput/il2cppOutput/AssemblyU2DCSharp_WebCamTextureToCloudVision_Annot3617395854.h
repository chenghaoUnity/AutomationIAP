#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebCamTextureToCloudVision/AnnotateImageRequest>
struct List_1_t1071374415;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/AnnotateImageRequests
struct  AnnotateImageRequests_t3617395854  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/AnnotateImageRequest> WebCamTextureToCloudVision/AnnotateImageRequests::requests
	List_1_t1071374415 * ___requests_0;

public:
	inline static int32_t get_offset_of_requests_0() { return static_cast<int32_t>(offsetof(AnnotateImageRequests_t3617395854, ___requests_0)); }
	inline List_1_t1071374415 * get_requests_0() const { return ___requests_0; }
	inline List_1_t1071374415 ** get_address_of_requests_0() { return &___requests_0; }
	inline void set_requests_0(List_1_t1071374415 * value)
	{
		___requests_0 = value;
		Il2CppCodeGenWriteBarrier(&___requests_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
