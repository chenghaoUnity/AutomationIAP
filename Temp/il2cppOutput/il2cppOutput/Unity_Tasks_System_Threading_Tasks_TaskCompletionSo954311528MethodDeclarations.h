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

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t954311528;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1191906455;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m3976064165_gshared (TaskCompletionSource_1_t954311528 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m3976064165(__this, method) ((  void (*) (TaskCompletionSource_1_t954311528 *, const MethodInfo*))TaskCompletionSource_1__ctor_m3976064165_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C"  Task_1_t1191906455 * TaskCompletionSource_1_get_Task_m2358712231_gshared (TaskCompletionSource_1_t954311528 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m2358712231(__this, method) ((  Task_1_t1191906455 * (*) (TaskCompletionSource_1_t954311528 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m2358712231_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m346137732_gshared (TaskCompletionSource_1_t954311528 * __this, Task_1_t1191906455 * ___value0, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m346137732(__this, ___value0, method) ((  void (*) (TaskCompletionSource_1_t954311528 *, Task_1_t1191906455 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m346137732_gshared)(__this, ___value0, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m1501254249_gshared (TaskCompletionSource_1_t954311528 * __this, int32_t ___result0, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m1501254249(__this, ___result0, method) ((  bool (*) (TaskCompletionSource_1_t954311528 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m1501254249_gshared)(__this, ___result0, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m147990055_gshared (TaskCompletionSource_1_t954311528 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m147990055(__this, ___exception0, method) ((  bool (*) (TaskCompletionSource_1_t954311528 *, Exception_t1927440687 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m147990055_gshared)(__this, ___exception0, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2427142691_gshared (TaskCompletionSource_1_t954311528 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2427142691(__this, method) ((  bool (*) (TaskCompletionSource_1_t954311528 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2427142691_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m3623300004_gshared (TaskCompletionSource_1_t954311528 * __this, int32_t ___result0, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m3623300004(__this, ___result0, method) ((  void (*) (TaskCompletionSource_1_t954311528 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m3623300004_gshared)(__this, ___result0, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m1538263116_gshared (TaskCompletionSource_1_t954311528 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m1538263116(__this, ___exception0, method) ((  void (*) (TaskCompletionSource_1_t954311528 *, Exception_t1927440687 *, const MethodInfo*))TaskCompletionSource_1_SetException_m1538263116_gshared)(__this, ___exception0, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m305834544_gshared (TaskCompletionSource_1_t954311528 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m305834544(__this, method) ((  void (*) (TaskCompletionSource_1_t954311528 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m305834544_gshared)(__this, method)
