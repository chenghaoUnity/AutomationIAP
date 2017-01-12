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

// System.Net.NetworkInformation.Win32NetworkInterface2
struct Win32NetworkInterface2_t482839970;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t4157644364;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t2519466521;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPT680756680.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"
#include "System_System_Net_NetworkInformation_NetworkInterf2376191102.h"

// System.Void System.Net.NetworkInformation.Win32NetworkInterface2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES)
extern "C"  void Win32NetworkInterface2__ctor_m4218152688 (Win32NetworkInterface2_t482839970 * __this, Win32_IP_ADAPTER_ADDRESSES_t680756680 * ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses(System.UInt32,System.UInt32,System.IntPtr,System.Byte[],System.Int32&)
extern "C"  int32_t Win32NetworkInterface2_GetAdaptersAddresses_m3139700938 (Il2CppObject * __this /* static, unused */, uint32_t ___family0, uint32_t ___flags1, IntPtr_t ___reserved2, ByteU5BU5D_t3397334013* ___info3, int32_t* ___size4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetIfEntry(System.Net.NetworkInformation.Win32_MIB_IFROW&)
extern "C"  int32_t Win32NetworkInterface2_GetIfEntry_m3799443605 (Il2CppObject * __this /* static, unused */, Win32_MIB_IFROW_t4215928996 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.Win32NetworkInterface2::ImplGetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4157644364* Win32NetworkInterface2_ImplGetAllNetworkInterfaces_m536256451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses()
extern "C"  Win32_IP_ADAPTER_ADDRESSESU5BU5D_t2519466521* Win32NetworkInterface2_GetAdaptersAddresses_m1593221517 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::Supports(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern "C"  bool Win32NetworkInterface2_Supports_m2238241150 (Win32NetworkInterface2_t482839970 * __this, int32_t ___networkInterfaceComponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
