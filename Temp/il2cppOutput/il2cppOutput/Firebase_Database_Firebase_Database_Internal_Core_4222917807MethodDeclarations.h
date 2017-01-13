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

// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.Internal.Core.IEventRegistrationZombieListener
struct IEventRegistrationZombieListener_t2054389000;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.Core.EventRegistration::.ctor()
extern "C"  void EventRegistration__ctor_m553379346 (EventRegistration_t4222917807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.EventRegistration::Zombify()
extern "C"  void EventRegistration_Zombify_m1000981152 (EventRegistration_t4222917807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.EventRegistration::IsZombied()
extern "C"  bool EventRegistration_IsZombied_m1965475458 (EventRegistration_t4222917807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.EventRegistration::SetOnZombied(Firebase.Database.Internal.Core.IEventRegistrationZombieListener)
extern "C"  void EventRegistration_SetOnZombied_m2154628513 (EventRegistration_t4222917807 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.EventRegistration::SetIsUserInitiated(System.Boolean)
extern "C"  void EventRegistration_SetIsUserInitiated_m2061698469 (EventRegistration_t4222917807 * __this, bool ___isUserInitiated0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
