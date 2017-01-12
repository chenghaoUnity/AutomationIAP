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
// WebCamTextureToCloudVision/BoundingPoly
struct BoundingPoly_t202383367;
// System.Collections.Generic.List`1<WebCamTextureToCloudVision/LocationInfo>
struct List_1_t1942864640;
// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Property>
struct List_1_t3428542658;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/EntityAnnotation
struct  EntityAnnotation_t3728473491  : public Il2CppObject
{
public:
	// System.String WebCamTextureToCloudVision/EntityAnnotation::mid
	String_t* ___mid_0;
	// System.String WebCamTextureToCloudVision/EntityAnnotation::locale
	String_t* ___locale_1;
	// System.String WebCamTextureToCloudVision/EntityAnnotation::description
	String_t* ___description_2;
	// System.Single WebCamTextureToCloudVision/EntityAnnotation::score
	float ___score_3;
	// System.Single WebCamTextureToCloudVision/EntityAnnotation::confidence
	float ___confidence_4;
	// System.Single WebCamTextureToCloudVision/EntityAnnotation::topicality
	float ___topicality_5;
	// WebCamTextureToCloudVision/BoundingPoly WebCamTextureToCloudVision/EntityAnnotation::boundingPoly
	BoundingPoly_t202383367 * ___boundingPoly_6;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/LocationInfo> WebCamTextureToCloudVision/EntityAnnotation::locations
	List_1_t1942864640 * ___locations_7;
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Property> WebCamTextureToCloudVision/EntityAnnotation::properties
	List_1_t3428542658 * ___properties_8;

public:
	inline static int32_t get_offset_of_mid_0() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___mid_0)); }
	inline String_t* get_mid_0() const { return ___mid_0; }
	inline String_t** get_address_of_mid_0() { return &___mid_0; }
	inline void set_mid_0(String_t* value)
	{
		___mid_0 = value;
		Il2CppCodeGenWriteBarrier(&___mid_0, value);
	}

	inline static int32_t get_offset_of_locale_1() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___locale_1)); }
	inline String_t* get_locale_1() const { return ___locale_1; }
	inline String_t** get_address_of_locale_1() { return &___locale_1; }
	inline void set_locale_1(String_t* value)
	{
		___locale_1 = value;
		Il2CppCodeGenWriteBarrier(&___locale_1, value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___score_3)); }
	inline float get_score_3() const { return ___score_3; }
	inline float* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(float value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_confidence_4() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___confidence_4)); }
	inline float get_confidence_4() const { return ___confidence_4; }
	inline float* get_address_of_confidence_4() { return &___confidence_4; }
	inline void set_confidence_4(float value)
	{
		___confidence_4 = value;
	}

	inline static int32_t get_offset_of_topicality_5() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___topicality_5)); }
	inline float get_topicality_5() const { return ___topicality_5; }
	inline float* get_address_of_topicality_5() { return &___topicality_5; }
	inline void set_topicality_5(float value)
	{
		___topicality_5 = value;
	}

	inline static int32_t get_offset_of_boundingPoly_6() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___boundingPoly_6)); }
	inline BoundingPoly_t202383367 * get_boundingPoly_6() const { return ___boundingPoly_6; }
	inline BoundingPoly_t202383367 ** get_address_of_boundingPoly_6() { return &___boundingPoly_6; }
	inline void set_boundingPoly_6(BoundingPoly_t202383367 * value)
	{
		___boundingPoly_6 = value;
		Il2CppCodeGenWriteBarrier(&___boundingPoly_6, value);
	}

	inline static int32_t get_offset_of_locations_7() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___locations_7)); }
	inline List_1_t1942864640 * get_locations_7() const { return ___locations_7; }
	inline List_1_t1942864640 ** get_address_of_locations_7() { return &___locations_7; }
	inline void set_locations_7(List_1_t1942864640 * value)
	{
		___locations_7 = value;
		Il2CppCodeGenWriteBarrier(&___locations_7, value);
	}

	inline static int32_t get_offset_of_properties_8() { return static_cast<int32_t>(offsetof(EntityAnnotation_t3728473491, ___properties_8)); }
	inline List_1_t3428542658 * get_properties_8() const { return ___properties_8; }
	inline List_1_t3428542658 ** get_address_of_properties_8() { return &___properties_8; }
	inline void set_properties_8(List_1_t3428542658 * value)
	{
		___properties_8 = value;
		Il2CppCodeGenWriteBarrier(&___properties_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
