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

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t4228908881;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3932792796;

#include "codegen/il2cpp-codegen.h"
#include "Unity_Tasks_System_Threading_Tasks_TaskScheduler3932792796.h"
#include "Unity_Tasks_System_Threading_CancellationToken1851405782.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C"  void TaskFactory__ctor_m2665363712 (TaskFactory_t4228908881 * __this, TaskScheduler_t3932792796 * ___scheduler0, CancellationToken_t1851405782  ___cancellationToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C"  void TaskFactory__ctor_m3707133650 (TaskFactory_t4228908881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C"  TaskScheduler_t3932792796 * TaskFactory_get_Scheduler_m1378451492 (TaskFactory_t4228908881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
