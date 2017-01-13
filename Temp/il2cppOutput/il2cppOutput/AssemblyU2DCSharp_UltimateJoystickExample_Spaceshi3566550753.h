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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UltimateJoystickExample.Spaceship.PlayerController
struct  PlayerController_t3566550753  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UltimateJoystickExample.Spaceship.PlayerController::rotationSpeed
	float ___rotationSpeed_2;
	// System.Single UltimateJoystickExample.Spaceship.PlayerController::accelerationSpeed
	float ___accelerationSpeed_3;
	// System.Single UltimateJoystickExample.Spaceship.PlayerController::maxSpeed
	float ___maxSpeed_4;
	// System.Single UltimateJoystickExample.Spaceship.PlayerController::shootingCooldown
	float ___shootingCooldown_5;
	// UnityEngine.GameObject UltimateJoystickExample.Spaceship.PlayerController::bulletPrefab
	GameObject_t1756533147 * ___bulletPrefab_6;
	// UnityEngine.Rigidbody UltimateJoystickExample.Spaceship.PlayerController::myRigidbody
	Rigidbody_t4233889191 * ___myRigidbody_7;
	// UnityEngine.Transform UltimateJoystickExample.Spaceship.PlayerController::gunTrans
	Transform_t3275118058 * ___gunTrans_8;
	// UnityEngine.Transform UltimateJoystickExample.Spaceship.PlayerController::bulletSpawnPos
	Transform_t3275118058 * ___bulletSpawnPos_9;
	// UnityEngine.GameObject UltimateJoystickExample.Spaceship.PlayerController::playerVisuals
	GameObject_t1756533147 * ___playerVisuals_10;
	// System.Single UltimateJoystickExample.Spaceship.PlayerController::shootingTimer
	float ___shootingTimer_11;
	// System.Boolean UltimateJoystickExample.Spaceship.PlayerController::canControl
	bool ___canControl_12;
	// UnityEngine.Vector3 UltimateJoystickExample.Spaceship.PlayerController::movePosition
	Vector3_t2243707580  ___movePosition_13;
	// UnityEngine.Vector3 UltimateJoystickExample.Spaceship.PlayerController::shootPosition
	Vector3_t2243707580  ___shootPosition_14;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_accelerationSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___accelerationSpeed_3)); }
	inline float get_accelerationSpeed_3() const { return ___accelerationSpeed_3; }
	inline float* get_address_of_accelerationSpeed_3() { return &___accelerationSpeed_3; }
	inline void set_accelerationSpeed_3(float value)
	{
		___accelerationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___maxSpeed_4)); }
	inline float get_maxSpeed_4() const { return ___maxSpeed_4; }
	inline float* get_address_of_maxSpeed_4() { return &___maxSpeed_4; }
	inline void set_maxSpeed_4(float value)
	{
		___maxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_shootingCooldown_5() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___shootingCooldown_5)); }
	inline float get_shootingCooldown_5() const { return ___shootingCooldown_5; }
	inline float* get_address_of_shootingCooldown_5() { return &___shootingCooldown_5; }
	inline void set_shootingCooldown_5(float value)
	{
		___shootingCooldown_5 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_6() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___bulletPrefab_6)); }
	inline GameObject_t1756533147 * get_bulletPrefab_6() const { return ___bulletPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_bulletPrefab_6() { return &___bulletPrefab_6; }
	inline void set_bulletPrefab_6(GameObject_t1756533147 * value)
	{
		___bulletPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_6, value);
	}

	inline static int32_t get_offset_of_myRigidbody_7() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___myRigidbody_7)); }
	inline Rigidbody_t4233889191 * get_myRigidbody_7() const { return ___myRigidbody_7; }
	inline Rigidbody_t4233889191 ** get_address_of_myRigidbody_7() { return &___myRigidbody_7; }
	inline void set_myRigidbody_7(Rigidbody_t4233889191 * value)
	{
		___myRigidbody_7 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_7, value);
	}

	inline static int32_t get_offset_of_gunTrans_8() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___gunTrans_8)); }
	inline Transform_t3275118058 * get_gunTrans_8() const { return ___gunTrans_8; }
	inline Transform_t3275118058 ** get_address_of_gunTrans_8() { return &___gunTrans_8; }
	inline void set_gunTrans_8(Transform_t3275118058 * value)
	{
		___gunTrans_8 = value;
		Il2CppCodeGenWriteBarrier(&___gunTrans_8, value);
	}

	inline static int32_t get_offset_of_bulletSpawnPos_9() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___bulletSpawnPos_9)); }
	inline Transform_t3275118058 * get_bulletSpawnPos_9() const { return ___bulletSpawnPos_9; }
	inline Transform_t3275118058 ** get_address_of_bulletSpawnPos_9() { return &___bulletSpawnPos_9; }
	inline void set_bulletSpawnPos_9(Transform_t3275118058 * value)
	{
		___bulletSpawnPos_9 = value;
		Il2CppCodeGenWriteBarrier(&___bulletSpawnPos_9, value);
	}

	inline static int32_t get_offset_of_playerVisuals_10() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___playerVisuals_10)); }
	inline GameObject_t1756533147 * get_playerVisuals_10() const { return ___playerVisuals_10; }
	inline GameObject_t1756533147 ** get_address_of_playerVisuals_10() { return &___playerVisuals_10; }
	inline void set_playerVisuals_10(GameObject_t1756533147 * value)
	{
		___playerVisuals_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerVisuals_10, value);
	}

	inline static int32_t get_offset_of_shootingTimer_11() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___shootingTimer_11)); }
	inline float get_shootingTimer_11() const { return ___shootingTimer_11; }
	inline float* get_address_of_shootingTimer_11() { return &___shootingTimer_11; }
	inline void set_shootingTimer_11(float value)
	{
		___shootingTimer_11 = value;
	}

	inline static int32_t get_offset_of_canControl_12() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___canControl_12)); }
	inline bool get_canControl_12() const { return ___canControl_12; }
	inline bool* get_address_of_canControl_12() { return &___canControl_12; }
	inline void set_canControl_12(bool value)
	{
		___canControl_12 = value;
	}

	inline static int32_t get_offset_of_movePosition_13() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___movePosition_13)); }
	inline Vector3_t2243707580  get_movePosition_13() const { return ___movePosition_13; }
	inline Vector3_t2243707580 * get_address_of_movePosition_13() { return &___movePosition_13; }
	inline void set_movePosition_13(Vector3_t2243707580  value)
	{
		___movePosition_13 = value;
	}

	inline static int32_t get_offset_of_shootPosition_14() { return static_cast<int32_t>(offsetof(PlayerController_t3566550753, ___shootPosition_14)); }
	inline Vector3_t2243707580  get_shootPosition_14() const { return ___shootPosition_14; }
	inline Vector3_t2243707580 * get_address_of_shootPosition_14() { return &___shootPosition_14; }
	inline void set_shootPosition_14(Vector3_t2243707580  value)
	{
		___shootPosition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
