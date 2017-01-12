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

// System.Threading.Tasks.Task
struct Task_t1843236107;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t4228908881;
// System.AggregateException
struct AggregateException_t420812976;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1645035489;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "Unity_Tasks_System_Threading_CancellationToken1851405782.h"
#include "System_Core_System_Action3226471752.h"

// System.Void System.Threading.Tasks.Task::.ctor()
extern "C"  void Task__ctor_m2013980006 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C"  TaskFactory_t4228908881 * Task_get_Factory_m747778426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C"  AggregateException_t420812976 * Task_get_Exception_m4089864830 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C"  bool Task_get_IsCompleted_m415821692 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C"  bool Task_get_IsFaulted_m848651168 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
extern "C"  void Task_Wait_m1700353793 (Task_t1843236107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C"  Task_t1843236107 * Task_ContinueWith_m3415340768 (Task_t1843236107 * __this, Action_1_t1645035489 * ___continuation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C"  Task_t1843236107 * Task_ContinueWith_m3859541519 (Task_t1843236107 * __this, Action_1_t1645035489 * ___continuation0, CancellationToken_t1851405782  ___cancellationToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
extern "C"  void Task__cctor_m2508926693 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Tasks.Task::<executionDepth>m__0()
extern "C"  int32_t Task_U3CexecutionDepthU3Em__0_m2293394756 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::<immediateExecutor>m__1(System.Action)
extern "C"  void Task_U3CimmediateExecutorU3Em__1_m1106856387 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
