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

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3932792796;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SynchronizationContext3857790437.h"
#include "System_Core_System_Action3226471752.h"

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C"  void TaskScheduler__ctor_m640468479 (TaskScheduler_t3932792796 * __this, SynchronizationContext_t3857790437 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C"  void TaskScheduler_Post_m1683645920 (TaskScheduler_t3932792796 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
extern "C"  TaskScheduler_t3932792796 * TaskScheduler_FromCurrentSynchronizationContext_m3744134733 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern "C"  void TaskScheduler__cctor_m3602074458 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
