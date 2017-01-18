template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_VR();
	RegisterModule_VR();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class Terrain; 
class WindZone; template <> void RegisterClass<WindZone>();
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; 
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 88 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. MeshFilter
	RegisterClass<MeshFilter>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. LineRenderer
	RegisterClass<LineRenderer>();
	//11. GUILayer
	RegisterClass<GUILayer>();
	//12. Light
	RegisterClass<Light>();
	//13. Mesh
	RegisterClass<Mesh>();
	//14. NamedObject
	RegisterClass<NamedObject>();
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//16. NetworkView
	RegisterClass<NetworkView>();
	//17. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//18. Transform
	RegisterClass<Transform>();
	//19. Shader
	RegisterClass<Shader>();
	//20. Material
	RegisterClass<Material>();
	//21. Sprite
	RegisterClass<Sprite>();
	//22. TextAsset
	RegisterClass<TextAsset>();
	//23. Texture
	RegisterClass<Texture>();
	//24. Texture2D
	RegisterClass<Texture2D>();
	//25. RenderTexture
	RegisterClass<RenderTexture>();
	//26. WindZone
	RegisterClass<WindZone>();
	//27. ParticleSystem
	RegisterClass<ParticleSystem>();
	//28. Rigidbody
	RegisterClass<Rigidbody>();
	//29. Unity::Joint
	RegisterClass<Unity::Joint>();
	//30. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//31. Collider
	RegisterClass<Collider>();
	//32. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//33. CharacterController
	RegisterClass<CharacterController>();
	//34. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//35. Collider2D
	RegisterClass<Collider2D>();
	//36. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//37. AudioClip
	RegisterClass<AudioClip>();
	//38. SampleClip
	RegisterClass<SampleClip>();
	//39. AudioSource
	RegisterClass<AudioSource>();
	//40. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//41. Animation
	RegisterClass<Animation>();
	//42. Animator
	RegisterClass<Animator>();
	//43. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//44. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//45. GUIElement
	RegisterClass<GUIElement>();
	//46. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//47. UI::Canvas
	RegisterClass<UI::Canvas>();
	//48. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//49. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//50. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//51. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//52. PreloadData
	RegisterClass<PreloadData>();
	//53. Cubemap
	RegisterClass<Cubemap>();
	//54. Texture3D
	RegisterClass<Texture3D>();
	//55. Texture2DArray
	RegisterClass<Texture2DArray>();
	//56. TimeManager
	RegisterClass<TimeManager>();
	//57. AudioManager
	RegisterClass<AudioManager>();
	//58. InputManager
	RegisterClass<InputManager>();
	//59. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//60. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//61. PhysicsManager
	RegisterClass<PhysicsManager>();
	//62. TagManager
	RegisterClass<TagManager>();
	//63. ScriptMapper
	RegisterClass<ScriptMapper>();
	//64. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//65. MonoScript
	RegisterClass<MonoScript>();
	//66. MonoManager
	RegisterClass<MonoManager>();
	//67. PlayerSettings
	RegisterClass<PlayerSettings>();
	//68. BuildSettings
	RegisterClass<BuildSettings>();
	//69. ResourceManager
	RegisterClass<ResourceManager>();
	//70. NetworkManager
	RegisterClass<NetworkManager>();
	//71. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//72. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//73. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//74. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//75. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//76. LevelGameManager
	RegisterClass<LevelGameManager>();
	//77. AudioListener
	RegisterClass<AudioListener>();
	//78. RenderSettings
	RegisterClass<RenderSettings>();
	//79. FlareLayer
	RegisterClass<FlareLayer>();
	//80. LightmapSettings
	RegisterClass<LightmapSettings>();
	//81. LightProbes
	RegisterClass<LightProbes>();
	//82. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//83. AnimationClip
	RegisterClass<AnimationClip>();
	//84. Motion
	RegisterClass<Motion>();
	//85. AnimatorController
	RegisterClass<AnimatorController>();
	//86. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//87. MeshRenderer
	RegisterClass<MeshRenderer>();

}
