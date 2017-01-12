#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.UnityDownloadStream/BlockingCollection`1<System.Byte[]>
struct BlockingCollection_1_t1283191913;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnityDownloadStream
struct  UnityDownloadStream_t3205965147  : public Stream_t3255436806
{
public:
	// System.Byte[] Firebase.UnityDownloadStream::_currentPacket
	ByteU5BU5D_t3397334013* ____currentPacket_2;
	// System.Int32 Firebase.UnityDownloadStream::_currentPacketPosition
	int32_t ____currentPacketPosition_3;
	// Firebase.UnityDownloadStream/BlockingCollection`1<System.Byte[]> Firebase.UnityDownloadStream::_packetQueue
	BlockingCollection_1_t1283191913 * ____packetQueue_4;
	// System.Int64 Firebase.UnityDownloadStream::_size
	int64_t ____size_5;
	// System.Boolean Firebase.UnityDownloadStream::_isDisposed
	bool ____isDisposed_6;

public:
	inline static int32_t get_offset_of__currentPacket_2() { return static_cast<int32_t>(offsetof(UnityDownloadStream_t3205965147, ____currentPacket_2)); }
	inline ByteU5BU5D_t3397334013* get__currentPacket_2() const { return ____currentPacket_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__currentPacket_2() { return &____currentPacket_2; }
	inline void set__currentPacket_2(ByteU5BU5D_t3397334013* value)
	{
		____currentPacket_2 = value;
		Il2CppCodeGenWriteBarrier(&____currentPacket_2, value);
	}

	inline static int32_t get_offset_of__currentPacketPosition_3() { return static_cast<int32_t>(offsetof(UnityDownloadStream_t3205965147, ____currentPacketPosition_3)); }
	inline int32_t get__currentPacketPosition_3() const { return ____currentPacketPosition_3; }
	inline int32_t* get_address_of__currentPacketPosition_3() { return &____currentPacketPosition_3; }
	inline void set__currentPacketPosition_3(int32_t value)
	{
		____currentPacketPosition_3 = value;
	}

	inline static int32_t get_offset_of__packetQueue_4() { return static_cast<int32_t>(offsetof(UnityDownloadStream_t3205965147, ____packetQueue_4)); }
	inline BlockingCollection_1_t1283191913 * get__packetQueue_4() const { return ____packetQueue_4; }
	inline BlockingCollection_1_t1283191913 ** get_address_of__packetQueue_4() { return &____packetQueue_4; }
	inline void set__packetQueue_4(BlockingCollection_1_t1283191913 * value)
	{
		____packetQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&____packetQueue_4, value);
	}

	inline static int32_t get_offset_of__size_5() { return static_cast<int32_t>(offsetof(UnityDownloadStream_t3205965147, ____size_5)); }
	inline int64_t get__size_5() const { return ____size_5; }
	inline int64_t* get_address_of__size_5() { return &____size_5; }
	inline void set__size_5(int64_t value)
	{
		____size_5 = value;
	}

	inline static int32_t get_offset_of__isDisposed_6() { return static_cast<int32_t>(offsetof(UnityDownloadStream_t3205965147, ____isDisposed_6)); }
	inline bool get__isDisposed_6() const { return ____isDisposed_6; }
	inline bool* get_address_of__isDisposed_6() { return &____isDisposed_6; }
	inline void set__isDisposed_6(bool value)
	{
		____isDisposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
