﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t254341728  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2 = value;
	}
};

struct UnityWebRequest_t254341728_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.Networking.UnityWebRequest::domainRegex
	Regex_t1803876613 * ___domainRegex_3;
	// System.String[] UnityEngine.Networking.UnityWebRequest::forbiddenHeaderKeys
	StringU5BU5D_t1642385972* ___forbiddenHeaderKeys_4;

public:
	inline static int32_t get_offset_of_domainRegex_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728_StaticFields, ___domainRegex_3)); }
	inline Regex_t1803876613 * get_domainRegex_3() const { return ___domainRegex_3; }
	inline Regex_t1803876613 ** get_address_of_domainRegex_3() { return &___domainRegex_3; }
	inline void set_domainRegex_3(Regex_t1803876613 * value)
	{
		___domainRegex_3 = value;
		Il2CppCodeGenWriteBarrier(&___domainRegex_3, value);
	}

	inline static int32_t get_offset_of_forbiddenHeaderKeys_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t254341728_StaticFields, ___forbiddenHeaderKeys_4)); }
	inline StringU5BU5D_t1642385972* get_forbiddenHeaderKeys_4() const { return ___forbiddenHeaderKeys_4; }
	inline StringU5BU5D_t1642385972** get_address_of_forbiddenHeaderKeys_4() { return &___forbiddenHeaderKeys_4; }
	inline void set_forbiddenHeaderKeys_4(StringU5BU5D_t1642385972* value)
	{
		___forbiddenHeaderKeys_4 = value;
		Il2CppCodeGenWriteBarrier(&___forbiddenHeaderKeys_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_1;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_2;
};
