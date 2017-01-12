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

// Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory
struct FirebaseThreadFactory_t699088793;
// Firebase.Database.Internal.Utilities.DefaultRunLoop
struct DefaultRunLoop_t1056641960;
// Google.Sharpen.Thread
struct Thread_t1322377586;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Utili1056641960.h"

// System.Void Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory::.ctor(Firebase.Database.Internal.Utilities.DefaultRunLoop)
extern "C"  void FirebaseThreadFactory__ctor_m1493988157 (FirebaseThreadFactory_t699088793 * __this, DefaultRunLoop_t1056641960 * ___enclosing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Thread Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory::NewThread(Google.Sharpen.Runnable)
extern "C"  Thread_t1322377586 * FirebaseThreadFactory_NewThread_m780822382 (FirebaseThreadFactory_t699088793 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
