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
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;

#include "Firebase_Database_Unity_Firebase_Database_Unity_Se2286218796.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Unity.ServiceAccountCredential
struct  ServiceAccountCredential_t3398163339  : public ServiceCredential_t2286218796
{
public:
	// System.String Firebase.Database.Unity.ServiceAccountCredential::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;
	// System.String Firebase.Database.Unity.ServiceAccountCredential::<User>k__BackingField
	String_t* ___U3CUserU3Ek__BackingField_3;
	// System.String[] Firebase.Database.Unity.ServiceAccountCredential::<Scopes>k__BackingField
	StringU5BU5D_t1642385972* ___U3CScopesU3Ek__BackingField_4;
	// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Database.Unity.ServiceAccountCredential::<Key>k__BackingField
	RSACryptoServiceProvider_t4229286967 * ___U3CKeyU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ServiceAccountCredential_t3398163339, ___U3CIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIdU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CUserU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ServiceAccountCredential_t3398163339, ___U3CUserU3Ek__BackingField_3)); }
	inline String_t* get_U3CUserU3Ek__BackingField_3() const { return ___U3CUserU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CUserU3Ek__BackingField_3() { return &___U3CUserU3Ek__BackingField_3; }
	inline void set_U3CUserU3Ek__BackingField_3(String_t* value)
	{
		___U3CUserU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CScopesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ServiceAccountCredential_t3398163339, ___U3CScopesU3Ek__BackingField_4)); }
	inline StringU5BU5D_t1642385972* get_U3CScopesU3Ek__BackingField_4() const { return ___U3CScopesU3Ek__BackingField_4; }
	inline StringU5BU5D_t1642385972** get_address_of_U3CScopesU3Ek__BackingField_4() { return &___U3CScopesU3Ek__BackingField_4; }
	inline void set_U3CScopesU3Ek__BackingField_4(StringU5BU5D_t1642385972* value)
	{
		___U3CScopesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CScopesU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CKeyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ServiceAccountCredential_t3398163339, ___U3CKeyU3Ek__BackingField_5)); }
	inline RSACryptoServiceProvider_t4229286967 * get_U3CKeyU3Ek__BackingField_5() const { return ___U3CKeyU3Ek__BackingField_5; }
	inline RSACryptoServiceProvider_t4229286967 ** get_address_of_U3CKeyU3Ek__BackingField_5() { return &___U3CKeyU3Ek__BackingField_5; }
	inline void set_U3CKeyU3Ek__BackingField_5(RSACryptoServiceProvider_t4229286967 * value)
	{
		___U3CKeyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CKeyU3Ek__BackingField_5, value);
	}
};

struct ServiceAccountCredential_t3398163339_StaticFields
{
public:
	// System.DateTime Firebase.Database.Unity.ServiceAccountCredential::UnixEpoch
	DateTime_t693205669  ___UnixEpoch_6;

public:
	inline static int32_t get_offset_of_UnixEpoch_6() { return static_cast<int32_t>(offsetof(ServiceAccountCredential_t3398163339_StaticFields, ___UnixEpoch_6)); }
	inline DateTime_t693205669  get_UnixEpoch_6() const { return ___UnixEpoch_6; }
	inline DateTime_t693205669 * get_address_of_UnixEpoch_6() { return &___UnixEpoch_6; }
	inline void set_UnixEpoch_6(DateTime_t693205669  value)
	{
		___UnixEpoch_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
