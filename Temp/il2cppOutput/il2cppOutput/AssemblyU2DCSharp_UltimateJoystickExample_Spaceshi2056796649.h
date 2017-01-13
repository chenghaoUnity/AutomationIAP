#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UltimateJoystickExample.Spaceship.GameManager
struct GameManager_t1384765099;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UltimateJoystickExample.Spaceship.AsteroidController
struct  AsteroidController_t2056796649  : public MonoBehaviour_t1158329972
{
public:
	// UltimateJoystickExample.Spaceship.GameManager UltimateJoystickExample.Spaceship.AsteroidController::asteroidManager
	GameManager_t1384765099 * ___asteroidManager_2;
	// UnityEngine.Rigidbody UltimateJoystickExample.Spaceship.AsteroidController::myRigidbody
	Rigidbody_t4233889191 * ___myRigidbody_3;
	// System.Boolean UltimateJoystickExample.Spaceship.AsteroidController::canDestroy
	bool ___canDestroy_4;
	// System.Boolean UltimateJoystickExample.Spaceship.AsteroidController::isDestroyed
	bool ___isDestroyed_5;
	// System.Boolean UltimateJoystickExample.Spaceship.AsteroidController::isDebris
	bool ___isDebris_6;

public:
	inline static int32_t get_offset_of_asteroidManager_2() { return static_cast<int32_t>(offsetof(AsteroidController_t2056796649, ___asteroidManager_2)); }
	inline GameManager_t1384765099 * get_asteroidManager_2() const { return ___asteroidManager_2; }
	inline GameManager_t1384765099 ** get_address_of_asteroidManager_2() { return &___asteroidManager_2; }
	inline void set_asteroidManager_2(GameManager_t1384765099 * value)
	{
		___asteroidManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___asteroidManager_2, value);
	}

	inline static int32_t get_offset_of_myRigidbody_3() { return static_cast<int32_t>(offsetof(AsteroidController_t2056796649, ___myRigidbody_3)); }
	inline Rigidbody_t4233889191 * get_myRigidbody_3() const { return ___myRigidbody_3; }
	inline Rigidbody_t4233889191 ** get_address_of_myRigidbody_3() { return &___myRigidbody_3; }
	inline void set_myRigidbody_3(Rigidbody_t4233889191 * value)
	{
		___myRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_3, value);
	}

	inline static int32_t get_offset_of_canDestroy_4() { return static_cast<int32_t>(offsetof(AsteroidController_t2056796649, ___canDestroy_4)); }
	inline bool get_canDestroy_4() const { return ___canDestroy_4; }
	inline bool* get_address_of_canDestroy_4() { return &___canDestroy_4; }
	inline void set_canDestroy_4(bool value)
	{
		___canDestroy_4 = value;
	}

	inline static int32_t get_offset_of_isDestroyed_5() { return static_cast<int32_t>(offsetof(AsteroidController_t2056796649, ___isDestroyed_5)); }
	inline bool get_isDestroyed_5() const { return ___isDestroyed_5; }
	inline bool* get_address_of_isDestroyed_5() { return &___isDestroyed_5; }
	inline void set_isDestroyed_5(bool value)
	{
		___isDestroyed_5 = value;
	}

	inline static int32_t get_offset_of_isDebris_6() { return static_cast<int32_t>(offsetof(AsteroidController_t2056796649, ___isDebris_6)); }
	inline bool get_isDebris_6() const { return ___isDebris_6; }
	inline bool* get_address_of_isDebris_6() { return &___isDebris_6; }
	inline void set_isDebris_6(bool value)
	{
		___isDebris_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
