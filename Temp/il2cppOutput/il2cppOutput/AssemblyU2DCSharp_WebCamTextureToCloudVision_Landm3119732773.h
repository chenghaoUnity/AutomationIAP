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
// WebCamTextureToCloudVision/Position
struct Position_t381495948;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/Landmark
struct  Landmark_t3119732773  : public Il2CppObject
{
public:
	// System.String WebCamTextureToCloudVision/Landmark::type
	String_t* ___type_0;
	// WebCamTextureToCloudVision/Position WebCamTextureToCloudVision/Landmark::position
	Position_t381495948 * ___position_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Landmark_t3119732773, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Landmark_t3119732773, ___position_1)); }
	inline Position_t381495948 * get_position_1() const { return ___position_1; }
	inline Position_t381495948 ** get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Position_t381495948 * value)
	{
		___position_1 = value;
		Il2CppCodeGenWriteBarrier(&___position_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
