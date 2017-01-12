#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.UnityDownloadStream
struct UnityDownloadStream_t3205965147;
// Firebase.UnityHttpRequest
struct UnityHttpRequest_t967994112;

#include "UnityEngine_UnityEngine_Networking_DownloadHandler2120336905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.UnityHttpRequest/StreamingDownloadHandler
struct  StreamingDownloadHandler_t1548287308  : public DownloadHandlerScript_t2120336905
{
public:
	// Firebase.UnityDownloadStream Firebase.UnityHttpRequest/StreamingDownloadHandler::_stream
	UnityDownloadStream_t3205965147 * ____stream_1;
	// Firebase.UnityHttpRequest Firebase.UnityHttpRequest/StreamingDownloadHandler::_fbRq
	UnityHttpRequest_t967994112 * ____fbRq_2;
	// System.Int64 Firebase.UnityHttpRequest/StreamingDownloadHandler::_totalDownloaded
	int64_t ____totalDownloaded_3;
	// System.Int64 Firebase.UnityHttpRequest/StreamingDownloadHandler::_contentLength
	int64_t ____contentLength_4;

public:
	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(StreamingDownloadHandler_t1548287308, ____stream_1)); }
	inline UnityDownloadStream_t3205965147 * get__stream_1() const { return ____stream_1; }
	inline UnityDownloadStream_t3205965147 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(UnityDownloadStream_t3205965147 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier(&____stream_1, value);
	}

	inline static int32_t get_offset_of__fbRq_2() { return static_cast<int32_t>(offsetof(StreamingDownloadHandler_t1548287308, ____fbRq_2)); }
	inline UnityHttpRequest_t967994112 * get__fbRq_2() const { return ____fbRq_2; }
	inline UnityHttpRequest_t967994112 ** get_address_of__fbRq_2() { return &____fbRq_2; }
	inline void set__fbRq_2(UnityHttpRequest_t967994112 * value)
	{
		____fbRq_2 = value;
		Il2CppCodeGenWriteBarrier(&____fbRq_2, value);
	}

	inline static int32_t get_offset_of__totalDownloaded_3() { return static_cast<int32_t>(offsetof(StreamingDownloadHandler_t1548287308, ____totalDownloaded_3)); }
	inline int64_t get__totalDownloaded_3() const { return ____totalDownloaded_3; }
	inline int64_t* get_address_of__totalDownloaded_3() { return &____totalDownloaded_3; }
	inline void set__totalDownloaded_3(int64_t value)
	{
		____totalDownloaded_3 = value;
	}

	inline static int32_t get_offset_of__contentLength_4() { return static_cast<int32_t>(offsetof(StreamingDownloadHandler_t1548287308, ____contentLength_4)); }
	inline int64_t get__contentLength_4() const { return ____contentLength_4; }
	inline int64_t* get_address_of__contentLength_4() { return &____contentLength_4; }
	inline void set__contentLength_4(int64_t value)
	{
		____contentLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
