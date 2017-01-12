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

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1571883375;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1809478302;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m2139207987_gshared (TaskCompletionSource_1_t1571883375 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m2139207987(__this, method) ((  void (*) (TaskCompletionSource_1_t1571883375 *, const MethodInfo*))TaskCompletionSource_1__ctor_m2139207987_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C"  Task_1_t1809478302 * TaskCompletionSource_1_get_Task_m1340136548_gshared (TaskCompletionSource_1_t1571883375 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m1340136548(__this, method) ((  Task_1_t1809478302 * (*) (TaskCompletionSource_1_t1571883375 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m1340136548_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C"  void TaskCompletionSource_1_set_Task_m1591719211_gshared (TaskCompletionSource_1_t1571883375 * __this, Task_1_t1809478302 * ___value0, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m1591719211(__this, ___value0, method) ((  void (*) (TaskCompletionSource_1_t1571883375 *, Task_1_t1809478302 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m1591719211_gshared)(__this, ___value0, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C"  bool TaskCompletionSource_1_TrySetResult_m2533661502_gshared (TaskCompletionSource_1_t1571883375 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m2533661502(__this, ___result0, method) ((  bool (*) (TaskCompletionSource_1_t1571883375 *, Il2CppObject *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m2533661502_gshared)(__this, ___result0, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C"  bool TaskCompletionSource_1_TrySetException_m909130698_gshared (TaskCompletionSource_1_t1571883375 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m909130698(__this, ___exception0, method) ((  bool (*) (TaskCompletionSource_1_t1571883375 *, Exception_t1927440687 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m909130698_gshared)(__this, ___exception0, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C"  bool TaskCompletionSource_1_TrySetCanceled_m2096289934_gshared (TaskCompletionSource_1_t1571883375 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m2096289934(__this, method) ((  bool (*) (TaskCompletionSource_1_t1571883375 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m2096289934_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C"  void TaskCompletionSource_1_SetResult_m1977579665_gshared (TaskCompletionSource_1_t1571883375 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m1977579665(__this, ___result0, method) ((  void (*) (TaskCompletionSource_1_t1571883375 *, Il2CppObject *, const MethodInfo*))TaskCompletionSource_1_SetResult_m1977579665_gshared)(__this, ___result0, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m3931824926_gshared (TaskCompletionSource_1_t1571883375 * __this, Exception_t1927440687 * ___exception0, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m3931824926(__this, ___exception0, method) ((  void (*) (TaskCompletionSource_1_t1571883375 *, Exception_t1927440687 *, const MethodInfo*))TaskCompletionSource_1_SetException_m3931824926_gshared)(__this, ___exception0, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m2805990535_gshared (TaskCompletionSource_1_t1571883375 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m2805990535(__this, method) ((  void (*) (TaskCompletionSource_1_t1571883375 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m2805990535_gshared)(__this, method)
