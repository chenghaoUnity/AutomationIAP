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
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_WebCamTextureToCloudVision_Featur927396839.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision
struct  WebCamTextureToCloudVision_t280254998  : public MonoBehaviour_t1158329972
{
public:
	// System.String WebCamTextureToCloudVision::url
	String_t* ___url_2;
	// System.String WebCamTextureToCloudVision::apiKey
	String_t* ___apiKey_3;
	// WebCamTextureToCloudVision/FeatureType WebCamTextureToCloudVision::featureType
	int32_t ___featureType_4;
	// UnityEngine.Events.UnityEvent WebCamTextureToCloudVision::onCompelete
	UnityEvent_t408735097 * ___onCompelete_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WebCamTextureToCloudVision::headers
	Dictionary_2_t3943999495 * ___headers_6;
	// System.String WebCamTextureToCloudVision::result
	String_t* ___result_7;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(WebCamTextureToCloudVision_t280254998, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_apiKey_3() { return static_cast<int32_t>(offsetof(WebCamTextureToCloudVision_t280254998, ___apiKey_3)); }
	inline String_t* get_apiKey_3() const { return ___apiKey_3; }
	inline String_t** get_address_of_apiKey_3() { return &___apiKey_3; }
	inline void set_apiKey_3(String_t* value)
	{
		___apiKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___apiKey_3, value);
	}

	inline static int32_t get_offset_of_featureType_4() { return static_cast<int32_t>(offsetof(WebCamTextureToCloudVision_t280254998, ___featureType_4)); }
	inline int32_t get_featureType_4() const { return ___featureType_4; }
	inline int32_t* get_address_of_featureType_4() { return &___featureType_4; }
	inline void set_featureType_4(int32_t value)
	{
		___featureType_4 = value;
	}

	inline static int32_t get_offset_of_onCompelete_5() { return static_cast<int32_t>(offsetof(WebCamTextureToCloudVision_t280254998, ___onCompelete_5)); }
	inline UnityEvent_t408735097 * get_onCompelete_5() const { return ___onCompelete_5; }
	inline UnityEvent_t408735097 ** get_address_of_onCompelete_5() { return &___onCompelete_5; }
	inline void set_onCompelete_5(UnityEvent_t408735097 * value)
	{
		___onCompelete_5 = value;
		Il2CppCodeGenWriteBarrier(&___onCompelete_5, value);
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(WebCamTextureToCloudVision_t280254998, ___headers_6)); }
	inline Dictionary_2_t3943999495 * get_headers_6() const { return ___headers_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(Dictionary_2_t3943999495 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier(&___headers_6, value);
	}

	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(WebCamTextureToCloudVision_t280254998, ___result_7)); }
	inline String_t* get_result_7() const { return ___result_7; }
	inline String_t** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(String_t* value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier(&___result_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
