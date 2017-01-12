#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;

#include "Firebase_Database_Firebase_Database_Logger225270238.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Logging.DefaultLogger
struct  DefaultLogger_t2060490269  : public Logger_t225270238
{
public:
	// System.Collections.Generic.ICollection`1<System.String> Firebase.Database.Internal.Logging.DefaultLogger::_enabledComponents
	Il2CppObject* ____enabledComponents_0;
	// Firebase.Database.Logger/Level Firebase.Database.Internal.Logging.DefaultLogger::_minLevel
	int32_t ____minLevel_1;

public:
	inline static int32_t get_offset_of__enabledComponents_0() { return static_cast<int32_t>(offsetof(DefaultLogger_t2060490269, ____enabledComponents_0)); }
	inline Il2CppObject* get__enabledComponents_0() const { return ____enabledComponents_0; }
	inline Il2CppObject** get_address_of__enabledComponents_0() { return &____enabledComponents_0; }
	inline void set__enabledComponents_0(Il2CppObject* value)
	{
		____enabledComponents_0 = value;
		Il2CppCodeGenWriteBarrier(&____enabledComponents_0, value);
	}

	inline static int32_t get_offset_of__minLevel_1() { return static_cast<int32_t>(offsetof(DefaultLogger_t2060490269, ____minLevel_1)); }
	inline int32_t get__minLevel_1() const { return ____minLevel_1; }
	inline int32_t* get_address_of__minLevel_1() { return &____minLevel_1; }
	inline void set__minLevel_1(int32_t value)
	{
		____minLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
