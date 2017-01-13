#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UltimateJoystickExample.Spaceship.GameManager
struct GameManager_t1384765099;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UltimateJoystickExample.Spaceship.GameManager::.ctor()
extern "C"  void GameManager__ctor_m2454726927 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UltimateJoystickExample.Spaceship.GameManager UltimateJoystickExample.Spaceship.GameManager::get_Instance()
extern "C"  GameManager_t1384765099 * GameManager_get_Instance_m3744421938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::Awake()
extern "C"  void GameManager_Awake_m142906200 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::Start()
extern "C"  void GameManager_Start_m3153037187 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickExample.Spaceship.GameManager::SpawnTimer()
extern "C"  Il2CppObject * GameManager_SpawnTimer_m1249070265 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::SpawnAsteroid()
extern "C"  void GameManager_SpawnAsteroid_m114136703 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::SpawnDebris(UnityEngine.Vector3)
extern "C"  void GameManager_SpawnDebris_m4202620700 (GameManager_t1384765099 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::SpawnExplosion(UnityEngine.Vector3)
extern "C"  void GameManager_SpawnExplosion_m236003438 (GameManager_t1384765099 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::ShowDeathScreen()
extern "C"  void GameManager_ShowDeathScreen_m3690972874 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickExample.Spaceship.GameManager::FadeDeathScreen()
extern "C"  Il2CppObject * GameManager_FadeDeathScreen_m650112179 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::ModifyScore(System.Boolean)
extern "C"  void GameManager_ModifyScore_m1166534314 (GameManager_t1384765099 * __this, bool ___isDebris0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.GameManager::UpdateScoreText()
extern "C"  void GameManager_UpdateScoreText_m2565697603 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickExample.Spaceship.GameManager::ShakeCamera()
extern "C"  Il2CppObject * GameManager_ShakeCamera_m245153558 (GameManager_t1384765099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
