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

// Firebase.Database.Internal.Core.ZombieEventManager
struct ZombieEventManager_t3773541119;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"

// System.Void Firebase.Database.Internal.Core.ZombieEventManager::.ctor()
extern "C"  void ZombieEventManager__ctor_m962117590 (ZombieEventManager_t3773541119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ZombieEventManager::OnZombied(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void ZombieEventManager_OnZombied_m2296532402 (ZombieEventManager_t3773541119 * __this, EventRegistration_t4222917807 * ___zombiedInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.ZombieEventManager Firebase.Database.Internal.Core.ZombieEventManager::GetInstance()
extern "C"  ZombieEventManager_t3773541119 * ZombieEventManager_GetInstance_m3853761569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ZombieEventManager::RecordEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void ZombieEventManager_RecordEventRegistration_m270053669 (ZombieEventManager_t3773541119 * __this, EventRegistration_t4222917807 * ___registration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ZombieEventManager::UnRecordEventRegistration(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void ZombieEventManager_UnRecordEventRegistration_m1631860544 (ZombieEventManager_t3773541119 * __this, EventRegistration_t4222917807 * ___zombiedRegistration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ZombieEventManager::ZombifyForRemove(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void ZombieEventManager_ZombifyForRemove_m3343902208 (ZombieEventManager_t3773541119 * __this, EventRegistration_t4222917807 * ___registration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.ZombieEventManager::.cctor()
extern "C"  void ZombieEventManager__cctor_m1861169763 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
