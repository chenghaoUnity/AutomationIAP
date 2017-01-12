#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Firebase_Database_Firebase_Database_Logger225270238.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Unity.UnityPlatform/UnityLogger
struct  UnityLogger_t2258131283  : public Logger_t225270238
{
public:
	// Firebase.Database.Logger/Level Firebase.Database.Unity.UnityPlatform/UnityLogger::_loglevel
	int32_t ____loglevel_0;

public:
	inline static int32_t get_offset_of__loglevel_0() { return static_cast<int32_t>(offsetof(UnityLogger_t2258131283, ____loglevel_0)); }
	inline int32_t get__loglevel_0() const { return ____loglevel_0; }
	inline int32_t* get_address_of__loglevel_0() { return &____loglevel_0; }
	inline void set__loglevel_0(int32_t value)
	{
		____loglevel_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
