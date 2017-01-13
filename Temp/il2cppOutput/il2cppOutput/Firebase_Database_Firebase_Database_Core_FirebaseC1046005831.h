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
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t2951825130;
// System.Func`2<Firebase.FirebaseApp,Firebase.Database.DotNet.DotNetPlatform>
struct Func_2_t3961743794;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Core.FirebaseConfigExtensions
struct  FirebaseConfigExtensions_t1046005831  : public Il2CppObject
{
public:

public:
};

struct FirebaseConfigExtensions_t1046005831_StaticFields
{
public:
	// System.String Firebase.Database.Core.FirebaseConfigExtensions::Default
	String_t* ___Default_0;
	// System.Object Firebase.Database.Core.FirebaseConfigExtensions::Sync
	Il2CppObject * ___Sync_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Database.Core.FirebaseConfigExtensions::SStringState
	Dictionary_2_t2951825130 * ___SStringState_2;
	// System.Func`2<Firebase.FirebaseApp,Firebase.Database.DotNet.DotNetPlatform> Firebase.Database.Core.FirebaseConfigExtensions::_platformFactory
	Func_2_t3961743794 * ____platformFactory_3;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(FirebaseConfigExtensions_t1046005831_StaticFields, ___Default_0)); }
	inline String_t* get_Default_0() const { return ___Default_0; }
	inline String_t** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(String_t* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}

	inline static int32_t get_offset_of_Sync_1() { return static_cast<int32_t>(offsetof(FirebaseConfigExtensions_t1046005831_StaticFields, ___Sync_1)); }
	inline Il2CppObject * get_Sync_1() const { return ___Sync_1; }
	inline Il2CppObject ** get_address_of_Sync_1() { return &___Sync_1; }
	inline void set_Sync_1(Il2CppObject * value)
	{
		___Sync_1 = value;
		Il2CppCodeGenWriteBarrier(&___Sync_1, value);
	}

	inline static int32_t get_offset_of_SStringState_2() { return static_cast<int32_t>(offsetof(FirebaseConfigExtensions_t1046005831_StaticFields, ___SStringState_2)); }
	inline Dictionary_2_t2951825130 * get_SStringState_2() const { return ___SStringState_2; }
	inline Dictionary_2_t2951825130 ** get_address_of_SStringState_2() { return &___SStringState_2; }
	inline void set_SStringState_2(Dictionary_2_t2951825130 * value)
	{
		___SStringState_2 = value;
		Il2CppCodeGenWriteBarrier(&___SStringState_2, value);
	}

	inline static int32_t get_offset_of__platformFactory_3() { return static_cast<int32_t>(offsetof(FirebaseConfigExtensions_t1046005831_StaticFields, ____platformFactory_3)); }
	inline Func_2_t3961743794 * get__platformFactory_3() const { return ____platformFactory_3; }
	inline Func_2_t3961743794 ** get_address_of__platformFactory_3() { return &____platformFactory_3; }
	inline void set__platformFactory_3(Func_2_t3961743794 * value)
	{
		____platformFactory_3 = value;
		Il2CppCodeGenWriteBarrier(&____platformFactory_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
