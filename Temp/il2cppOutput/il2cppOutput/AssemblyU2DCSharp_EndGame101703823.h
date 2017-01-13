#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndGame
struct  EndGame_t101703823  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EndGame::UI
	GameObject_t1756533147 * ___UI_2;
	// System.Boolean EndGame::canSend
	bool ___canSend_3;

public:
	inline static int32_t get_offset_of_UI_2() { return static_cast<int32_t>(offsetof(EndGame_t101703823, ___UI_2)); }
	inline GameObject_t1756533147 * get_UI_2() const { return ___UI_2; }
	inline GameObject_t1756533147 ** get_address_of_UI_2() { return &___UI_2; }
	inline void set_UI_2(GameObject_t1756533147 * value)
	{
		___UI_2 = value;
		Il2CppCodeGenWriteBarrier(&___UI_2, value);
	}

	inline static int32_t get_offset_of_canSend_3() { return static_cast<int32_t>(offsetof(EndGame_t101703823, ___canSend_3)); }
	inline bool get_canSend_3() const { return ___canSend_3; }
	inline bool* get_address_of_canSend_3() { return &___canSend_3; }
	inline void set_canSend_3(bool value)
	{
		___canSend_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
