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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UltimateJoystickExample.Spaceship.GameManager
struct  GameManager_t1384765099  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UltimateJoystickExample.Spaceship.GameManager::astroidPrefab
	GameObject_t1756533147 * ___astroidPrefab_3;
	// UnityEngine.GameObject UltimateJoystickExample.Spaceship.GameManager::debrisPrefab
	GameObject_t1756533147 * ___debrisPrefab_4;
	// UnityEngine.GameObject UltimateJoystickExample.Spaceship.GameManager::explosionPrefab
	GameObject_t1756533147 * ___explosionPrefab_5;
	// UnityEngine.GameObject UltimateJoystickExample.Spaceship.GameManager::playerExplosionPrefab
	GameObject_t1756533147 * ___playerExplosionPrefab_6;
	// System.Boolean UltimateJoystickExample.Spaceship.GameManager::spawning
	bool ___spawning_7;
	// System.Single UltimateJoystickExample.Spaceship.GameManager::spawnTimeMin
	float ___spawnTimeMin_8;
	// System.Single UltimateJoystickExample.Spaceship.GameManager::spawnTimeMax
	float ___spawnTimeMax_9;
	// System.Int32 UltimateJoystickExample.Spaceship.GameManager::startingAsteroids
	int32_t ___startingAsteroids_10;
	// UnityEngine.UI.Text UltimateJoystickExample.Spaceship.GameManager::scoreText
	Text_t356221433 * ___scoreText_11;
	// System.Int32 UltimateJoystickExample.Spaceship.GameManager::score
	int32_t ___score_12;
	// System.Int32 UltimateJoystickExample.Spaceship.GameManager::asteroidPoints
	int32_t ___asteroidPoints_13;
	// System.Int32 UltimateJoystickExample.Spaceship.GameManager::debrisPoints
	int32_t ___debrisPoints_14;
	// UnityEngine.UI.Image UltimateJoystickExample.Spaceship.GameManager::gameOverScreen
	Image_t2042527209 * ___gameOverScreen_15;
	// UnityEngine.UI.Text UltimateJoystickExample.Spaceship.GameManager::gameOverText
	Text_t356221433 * ___gameOverText_16;

public:
	inline static int32_t get_offset_of_astroidPrefab_3() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___astroidPrefab_3)); }
	inline GameObject_t1756533147 * get_astroidPrefab_3() const { return ___astroidPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_astroidPrefab_3() { return &___astroidPrefab_3; }
	inline void set_astroidPrefab_3(GameObject_t1756533147 * value)
	{
		___astroidPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___astroidPrefab_3, value);
	}

	inline static int32_t get_offset_of_debrisPrefab_4() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___debrisPrefab_4)); }
	inline GameObject_t1756533147 * get_debrisPrefab_4() const { return ___debrisPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_debrisPrefab_4() { return &___debrisPrefab_4; }
	inline void set_debrisPrefab_4(GameObject_t1756533147 * value)
	{
		___debrisPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___debrisPrefab_4, value);
	}

	inline static int32_t get_offset_of_explosionPrefab_5() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___explosionPrefab_5)); }
	inline GameObject_t1756533147 * get_explosionPrefab_5() const { return ___explosionPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_explosionPrefab_5() { return &___explosionPrefab_5; }
	inline void set_explosionPrefab_5(GameObject_t1756533147 * value)
	{
		___explosionPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_5, value);
	}

	inline static int32_t get_offset_of_playerExplosionPrefab_6() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___playerExplosionPrefab_6)); }
	inline GameObject_t1756533147 * get_playerExplosionPrefab_6() const { return ___playerExplosionPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_playerExplosionPrefab_6() { return &___playerExplosionPrefab_6; }
	inline void set_playerExplosionPrefab_6(GameObject_t1756533147 * value)
	{
		___playerExplosionPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerExplosionPrefab_6, value);
	}

	inline static int32_t get_offset_of_spawning_7() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___spawning_7)); }
	inline bool get_spawning_7() const { return ___spawning_7; }
	inline bool* get_address_of_spawning_7() { return &___spawning_7; }
	inline void set_spawning_7(bool value)
	{
		___spawning_7 = value;
	}

	inline static int32_t get_offset_of_spawnTimeMin_8() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___spawnTimeMin_8)); }
	inline float get_spawnTimeMin_8() const { return ___spawnTimeMin_8; }
	inline float* get_address_of_spawnTimeMin_8() { return &___spawnTimeMin_8; }
	inline void set_spawnTimeMin_8(float value)
	{
		___spawnTimeMin_8 = value;
	}

	inline static int32_t get_offset_of_spawnTimeMax_9() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___spawnTimeMax_9)); }
	inline float get_spawnTimeMax_9() const { return ___spawnTimeMax_9; }
	inline float* get_address_of_spawnTimeMax_9() { return &___spawnTimeMax_9; }
	inline void set_spawnTimeMax_9(float value)
	{
		___spawnTimeMax_9 = value;
	}

	inline static int32_t get_offset_of_startingAsteroids_10() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___startingAsteroids_10)); }
	inline int32_t get_startingAsteroids_10() const { return ___startingAsteroids_10; }
	inline int32_t* get_address_of_startingAsteroids_10() { return &___startingAsteroids_10; }
	inline void set_startingAsteroids_10(int32_t value)
	{
		___startingAsteroids_10 = value;
	}

	inline static int32_t get_offset_of_scoreText_11() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___scoreText_11)); }
	inline Text_t356221433 * get_scoreText_11() const { return ___scoreText_11; }
	inline Text_t356221433 ** get_address_of_scoreText_11() { return &___scoreText_11; }
	inline void set_scoreText_11(Text_t356221433 * value)
	{
		___scoreText_11 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_11, value);
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___score_12)); }
	inline int32_t get_score_12() const { return ___score_12; }
	inline int32_t* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(int32_t value)
	{
		___score_12 = value;
	}

	inline static int32_t get_offset_of_asteroidPoints_13() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___asteroidPoints_13)); }
	inline int32_t get_asteroidPoints_13() const { return ___asteroidPoints_13; }
	inline int32_t* get_address_of_asteroidPoints_13() { return &___asteroidPoints_13; }
	inline void set_asteroidPoints_13(int32_t value)
	{
		___asteroidPoints_13 = value;
	}

	inline static int32_t get_offset_of_debrisPoints_14() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___debrisPoints_14)); }
	inline int32_t get_debrisPoints_14() const { return ___debrisPoints_14; }
	inline int32_t* get_address_of_debrisPoints_14() { return &___debrisPoints_14; }
	inline void set_debrisPoints_14(int32_t value)
	{
		___debrisPoints_14 = value;
	}

	inline static int32_t get_offset_of_gameOverScreen_15() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___gameOverScreen_15)); }
	inline Image_t2042527209 * get_gameOverScreen_15() const { return ___gameOverScreen_15; }
	inline Image_t2042527209 ** get_address_of_gameOverScreen_15() { return &___gameOverScreen_15; }
	inline void set_gameOverScreen_15(Image_t2042527209 * value)
	{
		___gameOverScreen_15 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_15, value);
	}

	inline static int32_t get_offset_of_gameOverText_16() { return static_cast<int32_t>(offsetof(GameManager_t1384765099, ___gameOverText_16)); }
	inline Text_t356221433 * get_gameOverText_16() const { return ___gameOverText_16; }
	inline Text_t356221433 ** get_address_of_gameOverText_16() { return &___gameOverText_16; }
	inline void set_gameOverText_16(Text_t356221433 * value)
	{
		___gameOverText_16 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_16, value);
	}
};

struct GameManager_t1384765099_StaticFields
{
public:
	// UltimateJoystickExample.Spaceship.GameManager UltimateJoystickExample.Spaceship.GameManager::instance
	GameManager_t1384765099 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManager_t1384765099_StaticFields, ___instance_2)); }
	inline GameManager_t1384765099 * get_instance_2() const { return ___instance_2; }
	inline GameManager_t1384765099 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManager_t1384765099 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
