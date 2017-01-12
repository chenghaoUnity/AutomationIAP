#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Water
struct  Water_t1787740867  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LineRenderer Water::Body
	LineRenderer_t849157671 * ___Body_2;
	// System.Single[] Water::xpositions
	SingleU5BU5D_t577127397* ___xpositions_3;
	// System.Single[] Water::ypositions
	SingleU5BU5D_t577127397* ___ypositions_4;
	// System.Single[] Water::velocities
	SingleU5BU5D_t577127397* ___velocities_5;
	// System.Single[] Water::accelerations
	SingleU5BU5D_t577127397* ___accelerations_6;
	// UnityEngine.GameObject[] Water::meshobjects
	GameObjectU5BU5D_t3057952154* ___meshobjects_7;
	// UnityEngine.GameObject[] Water::colliders
	GameObjectU5BU5D_t3057952154* ___colliders_8;
	// UnityEngine.Mesh[] Water::meshes
	MeshU5BU5D_t894826206* ___meshes_9;
	// UnityEngine.GameObject Water::splash
	GameObject_t1756533147 * ___splash_10;
	// UnityEngine.Material Water::mat
	Material_t193706927 * ___mat_11;
	// UnityEngine.GameObject Water::watermesh
	GameObject_t1756533147 * ___watermesh_12;
	// System.Single Water::baseheight
	float ___baseheight_17;
	// System.Single Water::left
	float ___left_18;
	// System.Single Water::bottom
	float ___bottom_19;

public:
	inline static int32_t get_offset_of_Body_2() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___Body_2)); }
	inline LineRenderer_t849157671 * get_Body_2() const { return ___Body_2; }
	inline LineRenderer_t849157671 ** get_address_of_Body_2() { return &___Body_2; }
	inline void set_Body_2(LineRenderer_t849157671 * value)
	{
		___Body_2 = value;
		Il2CppCodeGenWriteBarrier(&___Body_2, value);
	}

	inline static int32_t get_offset_of_xpositions_3() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___xpositions_3)); }
	inline SingleU5BU5D_t577127397* get_xpositions_3() const { return ___xpositions_3; }
	inline SingleU5BU5D_t577127397** get_address_of_xpositions_3() { return &___xpositions_3; }
	inline void set_xpositions_3(SingleU5BU5D_t577127397* value)
	{
		___xpositions_3 = value;
		Il2CppCodeGenWriteBarrier(&___xpositions_3, value);
	}

	inline static int32_t get_offset_of_ypositions_4() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___ypositions_4)); }
	inline SingleU5BU5D_t577127397* get_ypositions_4() const { return ___ypositions_4; }
	inline SingleU5BU5D_t577127397** get_address_of_ypositions_4() { return &___ypositions_4; }
	inline void set_ypositions_4(SingleU5BU5D_t577127397* value)
	{
		___ypositions_4 = value;
		Il2CppCodeGenWriteBarrier(&___ypositions_4, value);
	}

	inline static int32_t get_offset_of_velocities_5() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___velocities_5)); }
	inline SingleU5BU5D_t577127397* get_velocities_5() const { return ___velocities_5; }
	inline SingleU5BU5D_t577127397** get_address_of_velocities_5() { return &___velocities_5; }
	inline void set_velocities_5(SingleU5BU5D_t577127397* value)
	{
		___velocities_5 = value;
		Il2CppCodeGenWriteBarrier(&___velocities_5, value);
	}

	inline static int32_t get_offset_of_accelerations_6() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___accelerations_6)); }
	inline SingleU5BU5D_t577127397* get_accelerations_6() const { return ___accelerations_6; }
	inline SingleU5BU5D_t577127397** get_address_of_accelerations_6() { return &___accelerations_6; }
	inline void set_accelerations_6(SingleU5BU5D_t577127397* value)
	{
		___accelerations_6 = value;
		Il2CppCodeGenWriteBarrier(&___accelerations_6, value);
	}

	inline static int32_t get_offset_of_meshobjects_7() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___meshobjects_7)); }
	inline GameObjectU5BU5D_t3057952154* get_meshobjects_7() const { return ___meshobjects_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_meshobjects_7() { return &___meshobjects_7; }
	inline void set_meshobjects_7(GameObjectU5BU5D_t3057952154* value)
	{
		___meshobjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___meshobjects_7, value);
	}

	inline static int32_t get_offset_of_colliders_8() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___colliders_8)); }
	inline GameObjectU5BU5D_t3057952154* get_colliders_8() const { return ___colliders_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_colliders_8() { return &___colliders_8; }
	inline void set_colliders_8(GameObjectU5BU5D_t3057952154* value)
	{
		___colliders_8 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_8, value);
	}

	inline static int32_t get_offset_of_meshes_9() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___meshes_9)); }
	inline MeshU5BU5D_t894826206* get_meshes_9() const { return ___meshes_9; }
	inline MeshU5BU5D_t894826206** get_address_of_meshes_9() { return &___meshes_9; }
	inline void set_meshes_9(MeshU5BU5D_t894826206* value)
	{
		___meshes_9 = value;
		Il2CppCodeGenWriteBarrier(&___meshes_9, value);
	}

	inline static int32_t get_offset_of_splash_10() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___splash_10)); }
	inline GameObject_t1756533147 * get_splash_10() const { return ___splash_10; }
	inline GameObject_t1756533147 ** get_address_of_splash_10() { return &___splash_10; }
	inline void set_splash_10(GameObject_t1756533147 * value)
	{
		___splash_10 = value;
		Il2CppCodeGenWriteBarrier(&___splash_10, value);
	}

	inline static int32_t get_offset_of_mat_11() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___mat_11)); }
	inline Material_t193706927 * get_mat_11() const { return ___mat_11; }
	inline Material_t193706927 ** get_address_of_mat_11() { return &___mat_11; }
	inline void set_mat_11(Material_t193706927 * value)
	{
		___mat_11 = value;
		Il2CppCodeGenWriteBarrier(&___mat_11, value);
	}

	inline static int32_t get_offset_of_watermesh_12() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___watermesh_12)); }
	inline GameObject_t1756533147 * get_watermesh_12() const { return ___watermesh_12; }
	inline GameObject_t1756533147 ** get_address_of_watermesh_12() { return &___watermesh_12; }
	inline void set_watermesh_12(GameObject_t1756533147 * value)
	{
		___watermesh_12 = value;
		Il2CppCodeGenWriteBarrier(&___watermesh_12, value);
	}

	inline static int32_t get_offset_of_baseheight_17() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___baseheight_17)); }
	inline float get_baseheight_17() const { return ___baseheight_17; }
	inline float* get_address_of_baseheight_17() { return &___baseheight_17; }
	inline void set_baseheight_17(float value)
	{
		___baseheight_17 = value;
	}

	inline static int32_t get_offset_of_left_18() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___left_18)); }
	inline float get_left_18() const { return ___left_18; }
	inline float* get_address_of_left_18() { return &___left_18; }
	inline void set_left_18(float value)
	{
		___left_18 = value;
	}

	inline static int32_t get_offset_of_bottom_19() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___bottom_19)); }
	inline float get_bottom_19() const { return ___bottom_19; }
	inline float* get_address_of_bottom_19() { return &___bottom_19; }
	inline void set_bottom_19(float value)
	{
		___bottom_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
