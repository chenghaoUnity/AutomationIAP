#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebCamTextureToCloudVision/FaceAnnotation>
struct List_1_t1430290805;
// System.Collections.Generic.List`1<WebCamTextureToCloudVision/EntityAnnotation>
struct List_1_t3097594623;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/AnnotateImageResponse
struct  AnnotateImageResponse_t1085119557  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/FaceAnnotation> WebCamTextureToCloudVision/AnnotateImageResponse::faceAnnotations
	List_1_t1430290805 * ___faceAnnotations_0;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/EntityAnnotation> WebCamTextureToCloudVision/AnnotateImageResponse::landmarkAnnotations
	List_1_t3097594623 * ___landmarkAnnotations_1;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/EntityAnnotation> WebCamTextureToCloudVision/AnnotateImageResponse::logoAnnotations
	List_1_t3097594623 * ___logoAnnotations_2;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/EntityAnnotation> WebCamTextureToCloudVision/AnnotateImageResponse::labelAnnotations
	List_1_t3097594623 * ___labelAnnotations_3;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/EntityAnnotation> WebCamTextureToCloudVision/AnnotateImageResponse::textAnnotations
	List_1_t3097594623 * ___textAnnotations_4;

public:
	inline static int32_t get_offset_of_faceAnnotations_0() { return static_cast<int32_t>(offsetof(AnnotateImageResponse_t1085119557, ___faceAnnotations_0)); }
	inline List_1_t1430290805 * get_faceAnnotations_0() const { return ___faceAnnotations_0; }
	inline List_1_t1430290805 ** get_address_of_faceAnnotations_0() { return &___faceAnnotations_0; }
	inline void set_faceAnnotations_0(List_1_t1430290805 * value)
	{
		___faceAnnotations_0 = value;
		Il2CppCodeGenWriteBarrier(&___faceAnnotations_0, value);
	}

	inline static int32_t get_offset_of_landmarkAnnotations_1() { return static_cast<int32_t>(offsetof(AnnotateImageResponse_t1085119557, ___landmarkAnnotations_1)); }
	inline List_1_t3097594623 * get_landmarkAnnotations_1() const { return ___landmarkAnnotations_1; }
	inline List_1_t3097594623 ** get_address_of_landmarkAnnotations_1() { return &___landmarkAnnotations_1; }
	inline void set_landmarkAnnotations_1(List_1_t3097594623 * value)
	{
		___landmarkAnnotations_1 = value;
		Il2CppCodeGenWriteBarrier(&___landmarkAnnotations_1, value);
	}

	inline static int32_t get_offset_of_logoAnnotations_2() { return static_cast<int32_t>(offsetof(AnnotateImageResponse_t1085119557, ___logoAnnotations_2)); }
	inline List_1_t3097594623 * get_logoAnnotations_2() const { return ___logoAnnotations_2; }
	inline List_1_t3097594623 ** get_address_of_logoAnnotations_2() { return &___logoAnnotations_2; }
	inline void set_logoAnnotations_2(List_1_t3097594623 * value)
	{
		___logoAnnotations_2 = value;
		Il2CppCodeGenWriteBarrier(&___logoAnnotations_2, value);
	}

	inline static int32_t get_offset_of_labelAnnotations_3() { return static_cast<int32_t>(offsetof(AnnotateImageResponse_t1085119557, ___labelAnnotations_3)); }
	inline List_1_t3097594623 * get_labelAnnotations_3() const { return ___labelAnnotations_3; }
	inline List_1_t3097594623 ** get_address_of_labelAnnotations_3() { return &___labelAnnotations_3; }
	inline void set_labelAnnotations_3(List_1_t3097594623 * value)
	{
		___labelAnnotations_3 = value;
		Il2CppCodeGenWriteBarrier(&___labelAnnotations_3, value);
	}

	inline static int32_t get_offset_of_textAnnotations_4() { return static_cast<int32_t>(offsetof(AnnotateImageResponse_t1085119557, ___textAnnotations_4)); }
	inline List_1_t3097594623 * get_textAnnotations_4() const { return ___textAnnotations_4; }
	inline List_1_t3097594623 ** get_address_of_textAnnotations_4() { return &___textAnnotations_4; }
	inline void set_textAnnotations_4(List_1_t3097594623 * value)
	{
		___textAnnotations_4 = value;
		Il2CppCodeGenWriteBarrier(&___textAnnotations_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
