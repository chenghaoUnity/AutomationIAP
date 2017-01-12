#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebCamTextureToCloudVision/BoundingPoly
struct BoundingPoly_t202383367;
// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Landmark>
struct List_1_t2488853905;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/FaceAnnotation
struct  FaceAnnotation_t2061169673  : public Il2CppObject
{
public:
	// WebCamTextureToCloudVision/BoundingPoly WebCamTextureToCloudVision/FaceAnnotation::boundingPoly
	BoundingPoly_t202383367 * ___boundingPoly_0;
	// WebCamTextureToCloudVision/BoundingPoly WebCamTextureToCloudVision/FaceAnnotation::fdBoundingPoly
	BoundingPoly_t202383367 * ___fdBoundingPoly_1;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Landmark> WebCamTextureToCloudVision/FaceAnnotation::landmarks
	List_1_t2488853905 * ___landmarks_2;
	// System.Single WebCamTextureToCloudVision/FaceAnnotation::rollAngle
	float ___rollAngle_3;
	// System.Single WebCamTextureToCloudVision/FaceAnnotation::panAngle
	float ___panAngle_4;
	// System.Single WebCamTextureToCloudVision/FaceAnnotation::tiltAngle
	float ___tiltAngle_5;
	// System.Single WebCamTextureToCloudVision/FaceAnnotation::detectionConfidence
	float ___detectionConfidence_6;
	// System.Single WebCamTextureToCloudVision/FaceAnnotation::landmarkingConfidence
	float ___landmarkingConfidence_7;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::joyLikelihood
	String_t* ___joyLikelihood_8;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::sorrowLikelihood
	String_t* ___sorrowLikelihood_9;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::angerLikelihood
	String_t* ___angerLikelihood_10;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::surpriseLikelihood
	String_t* ___surpriseLikelihood_11;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::underExposedLikelihood
	String_t* ___underExposedLikelihood_12;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::blurredLikelihood
	String_t* ___blurredLikelihood_13;
	// System.String WebCamTextureToCloudVision/FaceAnnotation::headwearLikelihood
	String_t* ___headwearLikelihood_14;

public:
	inline static int32_t get_offset_of_boundingPoly_0() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___boundingPoly_0)); }
	inline BoundingPoly_t202383367 * get_boundingPoly_0() const { return ___boundingPoly_0; }
	inline BoundingPoly_t202383367 ** get_address_of_boundingPoly_0() { return &___boundingPoly_0; }
	inline void set_boundingPoly_0(BoundingPoly_t202383367 * value)
	{
		___boundingPoly_0 = value;
		Il2CppCodeGenWriteBarrier(&___boundingPoly_0, value);
	}

	inline static int32_t get_offset_of_fdBoundingPoly_1() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___fdBoundingPoly_1)); }
	inline BoundingPoly_t202383367 * get_fdBoundingPoly_1() const { return ___fdBoundingPoly_1; }
	inline BoundingPoly_t202383367 ** get_address_of_fdBoundingPoly_1() { return &___fdBoundingPoly_1; }
	inline void set_fdBoundingPoly_1(BoundingPoly_t202383367 * value)
	{
		___fdBoundingPoly_1 = value;
		Il2CppCodeGenWriteBarrier(&___fdBoundingPoly_1, value);
	}

	inline static int32_t get_offset_of_landmarks_2() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___landmarks_2)); }
	inline List_1_t2488853905 * get_landmarks_2() const { return ___landmarks_2; }
	inline List_1_t2488853905 ** get_address_of_landmarks_2() { return &___landmarks_2; }
	inline void set_landmarks_2(List_1_t2488853905 * value)
	{
		___landmarks_2 = value;
		Il2CppCodeGenWriteBarrier(&___landmarks_2, value);
	}

	inline static int32_t get_offset_of_rollAngle_3() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___rollAngle_3)); }
	inline float get_rollAngle_3() const { return ___rollAngle_3; }
	inline float* get_address_of_rollAngle_3() { return &___rollAngle_3; }
	inline void set_rollAngle_3(float value)
	{
		___rollAngle_3 = value;
	}

	inline static int32_t get_offset_of_panAngle_4() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___panAngle_4)); }
	inline float get_panAngle_4() const { return ___panAngle_4; }
	inline float* get_address_of_panAngle_4() { return &___panAngle_4; }
	inline void set_panAngle_4(float value)
	{
		___panAngle_4 = value;
	}

	inline static int32_t get_offset_of_tiltAngle_5() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___tiltAngle_5)); }
	inline float get_tiltAngle_5() const { return ___tiltAngle_5; }
	inline float* get_address_of_tiltAngle_5() { return &___tiltAngle_5; }
	inline void set_tiltAngle_5(float value)
	{
		___tiltAngle_5 = value;
	}

	inline static int32_t get_offset_of_detectionConfidence_6() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___detectionConfidence_6)); }
	inline float get_detectionConfidence_6() const { return ___detectionConfidence_6; }
	inline float* get_address_of_detectionConfidence_6() { return &___detectionConfidence_6; }
	inline void set_detectionConfidence_6(float value)
	{
		___detectionConfidence_6 = value;
	}

	inline static int32_t get_offset_of_landmarkingConfidence_7() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___landmarkingConfidence_7)); }
	inline float get_landmarkingConfidence_7() const { return ___landmarkingConfidence_7; }
	inline float* get_address_of_landmarkingConfidence_7() { return &___landmarkingConfidence_7; }
	inline void set_landmarkingConfidence_7(float value)
	{
		___landmarkingConfidence_7 = value;
	}

	inline static int32_t get_offset_of_joyLikelihood_8() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___joyLikelihood_8)); }
	inline String_t* get_joyLikelihood_8() const { return ___joyLikelihood_8; }
	inline String_t** get_address_of_joyLikelihood_8() { return &___joyLikelihood_8; }
	inline void set_joyLikelihood_8(String_t* value)
	{
		___joyLikelihood_8 = value;
		Il2CppCodeGenWriteBarrier(&___joyLikelihood_8, value);
	}

	inline static int32_t get_offset_of_sorrowLikelihood_9() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___sorrowLikelihood_9)); }
	inline String_t* get_sorrowLikelihood_9() const { return ___sorrowLikelihood_9; }
	inline String_t** get_address_of_sorrowLikelihood_9() { return &___sorrowLikelihood_9; }
	inline void set_sorrowLikelihood_9(String_t* value)
	{
		___sorrowLikelihood_9 = value;
		Il2CppCodeGenWriteBarrier(&___sorrowLikelihood_9, value);
	}

	inline static int32_t get_offset_of_angerLikelihood_10() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___angerLikelihood_10)); }
	inline String_t* get_angerLikelihood_10() const { return ___angerLikelihood_10; }
	inline String_t** get_address_of_angerLikelihood_10() { return &___angerLikelihood_10; }
	inline void set_angerLikelihood_10(String_t* value)
	{
		___angerLikelihood_10 = value;
		Il2CppCodeGenWriteBarrier(&___angerLikelihood_10, value);
	}

	inline static int32_t get_offset_of_surpriseLikelihood_11() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___surpriseLikelihood_11)); }
	inline String_t* get_surpriseLikelihood_11() const { return ___surpriseLikelihood_11; }
	inline String_t** get_address_of_surpriseLikelihood_11() { return &___surpriseLikelihood_11; }
	inline void set_surpriseLikelihood_11(String_t* value)
	{
		___surpriseLikelihood_11 = value;
		Il2CppCodeGenWriteBarrier(&___surpriseLikelihood_11, value);
	}

	inline static int32_t get_offset_of_underExposedLikelihood_12() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___underExposedLikelihood_12)); }
	inline String_t* get_underExposedLikelihood_12() const { return ___underExposedLikelihood_12; }
	inline String_t** get_address_of_underExposedLikelihood_12() { return &___underExposedLikelihood_12; }
	inline void set_underExposedLikelihood_12(String_t* value)
	{
		___underExposedLikelihood_12 = value;
		Il2CppCodeGenWriteBarrier(&___underExposedLikelihood_12, value);
	}

	inline static int32_t get_offset_of_blurredLikelihood_13() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___blurredLikelihood_13)); }
	inline String_t* get_blurredLikelihood_13() const { return ___blurredLikelihood_13; }
	inline String_t** get_address_of_blurredLikelihood_13() { return &___blurredLikelihood_13; }
	inline void set_blurredLikelihood_13(String_t* value)
	{
		___blurredLikelihood_13 = value;
		Il2CppCodeGenWriteBarrier(&___blurredLikelihood_13, value);
	}

	inline static int32_t get_offset_of_headwearLikelihood_14() { return static_cast<int32_t>(offsetof(FaceAnnotation_t2061169673, ___headwearLikelihood_14)); }
	inline String_t* get_headwearLikelihood_14() const { return ___headwearLikelihood_14; }
	inline String_t** get_address_of_headwearLikelihood_14() { return &___headwearLikelihood_14; }
	inline void set_headwearLikelihood_14(String_t* value)
	{
		___headwearLikelihood_14 = value;
		Il2CppCodeGenWriteBarrier(&___headwearLikelihood_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
