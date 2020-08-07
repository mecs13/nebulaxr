#include "NativizedAssets.h"
#include "ItemStructure__pf1634840482.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Item__pf2130893442.h"
FItemStructure__pf1634840482::FItemStructure__pf1634840482()
{
	bpv__Name_2_4B8FD9214036DB134EB00482AF219862__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4241AD864A90A4C04FAC8C95AF6B0FD1]\", \"BCA28B834489C9A832545A9684F66E44\", \"None\")")	);
	bpv__isStackable_5_BE43225446C8F93DA0EA27A1B68FED87__pf = true;
	bpv__Thumbnail_8_22A527D2432BDD304913679CB31F9860__pf = nullptr;
	bpv__MaxStack_11_D8FCCA5C41E4D747A885C2A041DAEDF9__pf = 10;
	bpv__isConsumable_14_3961646C477A8890E90654BF579718FB__pf = true;
	bpv__Class_19_97A2145C46455AAAB992E3B2B3B641B7__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FItemStructure__pf1634840482::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{17, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture2D 
		{18, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{19, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SphereComponent 
		{20, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{21, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PointLightComponent 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SceneComponent 
		{13, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{22, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SaveGame 
		{9, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{23, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{10, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{24, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CameraComponent 
		{25, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{26, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{27, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{28, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{29, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{30, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{31, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{32, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{33, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/CableComponent.CableComponent 
		{34, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{35, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{36, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{37, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{38, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{39, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{40, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Character 
		{41, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetInteractionComponent 
		{42, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{43, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{44, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{45, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.Vector_NetQuantize 
		{46, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.Vector_NetQuantizeNormal 
		{8, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{47, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Pawn 
		{48, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{49, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{50, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIController 
		{51, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.AnimInstance 
		{52, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{53, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{54, FBlueprintDependencyType(false, true, false, false)},  //  BlendSpace1D /Game/Meshes/SyntyBow/Bow_ChargedBlend.Bow_ChargedBlend 
		{55, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{56, FBlueprintDependencyType(false, true, false, false)},  //  ParticleSystem /Game/TS_Fireworks/Particles/PS_TS_Fireworks_Burst_Palm.PS_TS_Fireworks_Burst_Palm 
		{57, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{58, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/Meshes/SyntyBow/Rigged_Bow_Testing.Rigged_Bow_Testing 
		{59, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{60, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CurveFloat 
		{61, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.MovementComponent 
		{62, FBlueprintDependencyType(false, true, false, false)},  //  CurveFloat /Game/Blueprints/Bow/FC_BowStrengthCurve.FC_BowStrengthCurve 
		{63, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Engine/EditorMeshes/ArcadeEditorSphere.ArcadeEditorSphere 
		{64, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/StylizedRoom/Materials/MI_White.MI_White 
		{65, FBlueprintDependencyType(false, true, false, false)},  //  Skeleton /Game/Meshes/SyntyBow/Rigged_Bow_Testing_Skeleton.Rigged_Bow_Testing_Skeleton 
		{66, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{67, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Meshes/SyntyBow/SM_Arrow_01.SM_Arrow_01 
		{68, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{69, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{70, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{71, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{72, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SplineComponent 
		{73, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /DatasmithContent/Meshes/cylinder.cylinder 
		{74, FBlueprintDependencyType(false, true, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly 
		{75, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{76, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{77, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{78, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{79, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{80, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{81, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{82, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{83, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{84, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerController 
		{85, FBlueprintDependencyType(false, true, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{86, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{87, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ActorComponent 
		{89, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{90, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{91, FBlueprintDependencyType(false, true, false, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{92, FBlueprintDependencyType(false, true, false, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{93, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Engine/EngineResources/Black.Black 
		{94, FBlueprintDependencyType(false, true, false, false)},  //  Font /Engine/EngineFonts/RobotoTiny.RobotoTiny 
		{95, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Engine/EngineVolumetrics/Fogsheet/Materials/T_EV_BlankWhite_01.T_EV_BlankWhite_01 
		{96, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UserWidget 
		{97, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Button 
		{98, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Score/Icons/jump.jump 
		{99, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Score/Icons/arrow.arrow 
		{100, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Score/Icons/money.money 
		{101, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{102, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Image 
		{103, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.TextBlock 
		{104, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/SoftInventory/Items/Item.Item_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FItemStructure__pf1634840482
{
	FRegisterHelper__FItemStructure__pf1634840482()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SoftInventory/ItemStructure"), &FItemStructure__pf1634840482::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FItemStructure__pf1634840482 Instance;
};
FRegisterHelper__FItemStructure__pf1634840482 FRegisterHelper__FItemStructure__pf1634840482::Instance;
