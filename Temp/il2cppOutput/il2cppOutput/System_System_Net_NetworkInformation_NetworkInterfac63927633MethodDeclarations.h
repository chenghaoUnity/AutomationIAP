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

// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t63927633;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t4157644364;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Net.NetworkInformation.NetworkInterface::.ctor()
extern "C"  void NetworkInterface__ctor_m759220571 (NetworkInterface_t63927633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkInterface::.cctor()
extern "C"  void NetworkInterface__cctor_m1286606608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.NetworkInterface::uname(System.IntPtr)
extern "C"  int32_t NetworkInterface_uname_m3953961313 (Il2CppObject * __this /* static, unused */, IntPtr_t ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4157644364* NetworkInterface_GetAllNetworkInterfaces_m3928187668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
