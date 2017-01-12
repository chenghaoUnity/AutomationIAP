#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Vertex>
struct List_1_t2083208611;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/BoundingPoly
struct  BoundingPoly_t202383367  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebCamTextureToCloudVision/Vertex> WebCamTextureToCloudVision/BoundingPoly::vertices
	List_1_t2083208611 * ___vertices_0;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(BoundingPoly_t202383367, ___vertices_0)); }
	inline List_1_t2083208611 * get_vertices_0() const { return ___vertices_0; }
	inline List_1_t2083208611 ** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(List_1_t2083208611 * value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
