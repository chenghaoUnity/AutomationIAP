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

// Google.Sharpen.Scheduler
struct Scheduler_t2347715885;
// Google.Sharpen.IScheduledITask
struct IScheduledITask_t3129349074;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Google.Sharpen.Scheduler::.ctor()
extern "C"  void Scheduler__ctor_m3857481422 (Scheduler_t2347715885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Scheduler::AddTask(Google.Sharpen.IScheduledITask)
extern "C"  void Scheduler_AddTask_m816957868 (Scheduler_t2347715885 * __this, Il2CppObject * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.Scheduler::HasTasks(System.Object)
extern "C"  bool Scheduler_HasTasks_m1626410628 (Scheduler_t2347715885 * __this, Il2CppObject * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Scheduler::SchedulerThread()
extern "C"  void Scheduler_SchedulerThread_m2963958259 (Scheduler_t2347715885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Scheduler::.cctor()
extern "C"  void Scheduler__cctor_m3487217465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
