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
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester
struct  Character_GroundedTester_t1329240161  : public MonoBehaviour_t1158329972
{
public:
	// System.String UniArt.PixelScifiLandscape.Sample.Character_GroundedTester::groundLayerName
	String_t* ___groundLayerName_2;
	// System.Int32 UniArt.PixelScifiLandscape.Sample.Character_GroundedTester::groundLayerIndex
	int32_t ___groundLayerIndex_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UniArt.PixelScifiLandscape.Sample.Character_GroundedTester::groundedTesters
	List_1_t2644239190 * ___groundedTesters_4;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_GroundedTester::m_bGrounded
	bool ___m_bGrounded_5;

public:
	inline static int32_t get_offset_of_groundLayerName_2() { return static_cast<int32_t>(offsetof(Character_GroundedTester_t1329240161, ___groundLayerName_2)); }
	inline String_t* get_groundLayerName_2() const { return ___groundLayerName_2; }
	inline String_t** get_address_of_groundLayerName_2() { return &___groundLayerName_2; }
	inline void set_groundLayerName_2(String_t* value)
	{
		___groundLayerName_2 = value;
		Il2CppCodeGenWriteBarrier(&___groundLayerName_2, value);
	}

	inline static int32_t get_offset_of_groundLayerIndex_3() { return static_cast<int32_t>(offsetof(Character_GroundedTester_t1329240161, ___groundLayerIndex_3)); }
	inline int32_t get_groundLayerIndex_3() const { return ___groundLayerIndex_3; }
	inline int32_t* get_address_of_groundLayerIndex_3() { return &___groundLayerIndex_3; }
	inline void set_groundLayerIndex_3(int32_t value)
	{
		___groundLayerIndex_3 = value;
	}

	inline static int32_t get_offset_of_groundedTesters_4() { return static_cast<int32_t>(offsetof(Character_GroundedTester_t1329240161, ___groundedTesters_4)); }
	inline List_1_t2644239190 * get_groundedTesters_4() const { return ___groundedTesters_4; }
	inline List_1_t2644239190 ** get_address_of_groundedTesters_4() { return &___groundedTesters_4; }
	inline void set_groundedTesters_4(List_1_t2644239190 * value)
	{
		___groundedTesters_4 = value;
		Il2CppCodeGenWriteBarrier(&___groundedTesters_4, value);
	}

	inline static int32_t get_offset_of_m_bGrounded_5() { return static_cast<int32_t>(offsetof(Character_GroundedTester_t1329240161, ___m_bGrounded_5)); }
	inline bool get_m_bGrounded_5() const { return ___m_bGrounded_5; }
	inline bool* get_address_of_m_bGrounded_5() { return &___m_bGrounded_5; }
	inline void set_m_bGrounded_5(bool value)
	{
		___m_bGrounded_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
