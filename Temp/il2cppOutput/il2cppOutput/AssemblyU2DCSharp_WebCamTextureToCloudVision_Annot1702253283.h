#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebCamTextureToCloudVision/Image
struct Image_t618653592;
// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Feature>
struct List_1_t792402139;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/AnnotateImageRequest
struct  AnnotateImageRequest_t1702253283  : public Il2CppObject
{
public:
	// WebCamTextureToCloudVision/Image WebCamTextureToCloudVision/AnnotateImageRequest::image
	Image_t618653592 * ___image_0;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Feature> WebCamTextureToCloudVision/AnnotateImageRequest::features
	List_1_t792402139 * ___features_1;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AnnotateImageRequest_t1702253283, ___image_0)); }
	inline Image_t618653592 * get_image_0() const { return ___image_0; }
	inline Image_t618653592 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(Image_t618653592 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier(&___image_0, value);
	}

	inline static int32_t get_offset_of_features_1() { return static_cast<int32_t>(offsetof(AnnotateImageRequest_t1702253283, ___features_1)); }
	inline List_1_t792402139 * get_features_1() const { return ___features_1; }
	inline List_1_t792402139 ** get_address_of_features_1() { return &___features_1; }
	inline void set_features_1(List_1_t792402139 * value)
	{
		___features_1 = value;
		Il2CppCodeGenWriteBarrier(&___features_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
