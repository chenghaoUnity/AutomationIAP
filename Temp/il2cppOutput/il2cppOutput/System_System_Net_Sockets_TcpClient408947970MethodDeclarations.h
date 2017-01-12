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

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_IPEndPoint2615413766.h"

// System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient__ctor_m3884627174 (TcpClient_t408947970 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m129910969 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m2339200298 (TcpClient_t408947970 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C"  void TcpClient_Close_m4260227760 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPEndPoint)
extern "C"  void TcpClient_Connect_m1389318066 (TcpClient_t408947970 * __this, IPEndPoint_t2615413766 * ___remote_end_point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m2105752024 (TcpClient_t408947970 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m3794615336 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C"  NetworkStream_t581172200 * TcpClient_GetStream_m872175179 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m3605359959 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
