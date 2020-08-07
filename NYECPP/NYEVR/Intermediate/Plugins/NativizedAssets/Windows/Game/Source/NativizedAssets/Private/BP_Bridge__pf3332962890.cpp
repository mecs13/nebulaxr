#include "NativizedAssets.h"
#include "BP_Bridge__pf3332962890.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTextureStreamingProxy.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureBuildSettings.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "BP_FuncLib__pf3332962890.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Bridge_C__pf3332962890::ABP_Bridge_C__pf3332962890(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Spline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Spline__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Spline__pf), false, 0));
	bpv__End__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__PlankDist__pf = 56.000000f;
	bpv__SegmentDist__pf = 256.000000f;
	bpv__Gravity__pf = 0.150000f;
	bpv__Width__pf = 80.000000f;
	bpv__Planks__pf = TArray<FS_MeshRScale__pf3332962890> ();
	bpv__PlanksGlobalScale__pf = FVector(1.000000, 1.000000, 1.000000);
	bpv__PlanksRandomRotation__pf = FRotator(4.000000, 4.000000, 0.000000);
	bpv__Poles__pf = TArray<FS_MeshRScale__pf3332962890> ();
	bpv__PolesRandomRotation__pf = FRotator(4.000000, 180.000000, 4.000000);
	bpv__MissingPlankChance__pf = 0.000000f;
	bpv__PaddingStart__pf = 2;
	bpv__PaddingEnd__pf = 2;
	bpv__Seed__pf = FRandomStream(0);
	bpv__RopesHeight__pf = 100.000000f;
	bpv__RopeWidth__pf = 0.500000f;
	bpv__RopesCollision__pf = ECollisionEnabled::Type::NoCollision;
	bReplicates = true;
	auto& __Local__2 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__2 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Bridge_C__pf3332962890::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Spline__pf)
	{
		bpv__Spline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Bridge_C__pf3332962890::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UBP_FuncLib_C__pf3332962890::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FS_MeshRScale__pf3332962890());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<UInstancedStaticMeshComponent>(InDynamicClass, UInstancedStaticMeshComponent::StaticClass(), TEXT("NODE_AddInstancedStaticMeshComponent-0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-2"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-4"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	static TWeakFieldPtr<FProperty> __Local__7{};
	const FProperty* __Local__6 = __Local__7.Get();
	if (nullptr == __Local__6)
	{
		__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__6);
		__Local__7 = __Local__6;
	}
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__3), true, 0));
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((__Local__4), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Bridge_C__pf3332962890::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__4->OverrideMaterials.Reserve(1);
	__Local__4->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Bridge_C__pf3332962890::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__9 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__9 = ECollisionChannel::ECC_WorldDynamic;
	auto& __Local__10 = (*(AccessPrivateProperty<FName >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__10 = FName(TEXT("Custom"));
	auto& __Local__11 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__11), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__12 = TArray<FResponseChannel> ();
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__4), true, 0));
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__5), true, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Bridge_C__pf3332962890::bpf__UserConstructionScript__pf()
{
	int32 bpfv__PlankId__pf{};
	TArray<UInstancedStaticMeshComponent*> bpfv__PlankInstances__pf{};
	int32 bpfv__Id__pf{};
	FVector bpfv__Dir__pf(EForceInit::ForceInit);
	float bpfv__Value__pf{};
	float bpfv__Percent__pf{};
	float bpfv__Exponent__pf{};
	float bpfv__DistZ__pf{};
	float bpfv__DistXY__pf{};
	int32 bpfv__PlankCount__pf{};
	FVector bpfv__Point__pf(EForceInit::ForceInit);
	TArray<FVector> bpfv__Array__pf{};
	float bpfv__Segment__pf{};
	float bpfv__Distance__pf{};
	int32 bpfv__Num__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatFromStream_ReturnValue__pf{};
	FRotator bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf{};
	FVector bpfv__CallFunc_RandomVectorSeeded_Out__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RandomRotSeeded_Out__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerFromStream_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FS_MeshRScale__pf3332962890 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_3__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__K2Node_Select_Default__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Variable_2__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	FTransform bpfv__Temp_struct_Variable__pf{};
	UInstancedStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_RotateAngleAxis_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetSplineLength_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_FCeil_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf{};
	FVector bpfv__CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_GetSplineLength_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_FCeil_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf{};
	UInstancedStaticMeshComponent* bpfv__CallFunc_Array_Get_Item_1__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_AddInstance_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_VSizeXY_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__PlankCount__pf = 0;
			}
		case 2:
			{
				bpfv__DistXY__pf = 0.000000;
			}
		case 3:
			{
				bpfv__DistZ__pf = 0.000000;
			}
		case 4:
			{
				bpfv__Exponent__pf = 0.000000;
			}
		case 5:
			{
				bpfv__Percent__pf = 0.000000;
			}
		case 6:
			{
				bpfv__Value__pf = 0.000000;
			}
		case 7:
			{
				bpfv__Dir__pf = FVector(0.000000,0.000000,0.000000);
			}
		case 8:
			{
				bpfv__PlankId__pf = 0;
			}
		case 9:
			{
				__StateStack.Push(18);
			}
		case 10:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 12:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__Planks__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 14:
			{
				__StateStack.Push(53);
			}
		case 15:
			{
				bpfv__Temp_struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UInstancedStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddInstancedStaticMeshComponent-0")), false, bpfv__Temp_struct_Variable__pf, this), ECastCheckedType::NullAllowed);
			}
		case 16:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__PlankInstances__pf, bpfv__CallFunc_AddComponent_ReturnValue__pf);
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpv__Planks__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__CallFunc_Array_Get_Item__pf.bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorVector(bpv__End__pf, FVector(1.000000,1.000000,0.000000));
				bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_Multiply_VectorVector_ReturnValue_1__pf, 0.000100);
				bpfv__Dir__pf = bpfv__CallFunc_Normal_ReturnValue__pf;
			}
		case 19:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__End__pf);
				bpfv__Distance__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
			}
		case 20:
			{
				bpfv__CallFunc_VSizeXY_ReturnValue__pf = UKismetMathLibrary::VSizeXY(bpv__End__pf);
				bpfv__DistXY__pf = bpfv__CallFunc_VSizeXY_ReturnValue__pf;
			}
		case 21:
			{
				UKismetMathLibrary::BreakVector(bpv__End__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__DistZ__pf = bpfv__CallFunc_Abs_ReturnValue__pf;
			}
		case 22:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__DistZ__pf, bpfv__DistXY__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 0.000000, 1.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(1.000000, bpfv__CallFunc_FClamp_ReturnValue__pf);
				bpfv__Exponent__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf;
			}
		case 23:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__Distance__pf, bpv__SegmentDist__pf);
				bpfv__CallFunc_FCeil_ReturnValue__pf = UKismetMathLibrary::FCeil(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpfv__Num__pf = bpfv__CallFunc_FCeil_ReturnValue__pf;
			}
		case 24:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_4__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Num__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__Distance__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue_4__pf);
				bpfv__Segment__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf;
			}
		case 25:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::ClearSplinePoints(false);
				}
			}
		case 26:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 27:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__Num__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 28:
			{
				__StateStack.Push(54);
			}
		case 29:
			{
				bpfv__Id__pf = bpfv__Temp_int_Variable__pf;
			}
		case 30:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Temp_int_Variable__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_3__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Num__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue_3__pf);
				bpfv__Percent__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf;
			}
		case 31:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__Percent__pf, 2.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 1.000000);
				bpfv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::MultiplyMultiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__Exponent__pf, bpfv__CallFunc_MultiplyMultiply_FloatFloat_ReturnValue__pf);
				bpfv__Value__pf = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf;
			}
		case 32:
			{
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__End__pf, bpfv__Percent__pf);
				bpfv__Point__pf = bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf;
			}
		case 33:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__Value__pf, bpfv__Exponent__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__DistXY__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__Point__pf, bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::AddSplinePointAtIndex(bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, bpfv__Id__pf, ESplineCoordinateSpace::Local, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::UpdateSpline();
				}
			}
		case 35:
			{
				bpfv__CallFunc_RotateAngleAxis_ReturnValue_3__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue_3__pf, bpv__Width__pf);
				bpf__PlaceRopeWithOffset__pf(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
			}
		case 36:
			{
				bpfv__CallFunc_RotateAngleAxis_ReturnValue_2__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue_2__pf, bpv__Width__pf);
				bpf__PlaceRopeWithOffset__pf(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
			}
		case 37:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__RopesHeight__pf);
				bpfv__CallFunc_RotateAngleAxis_ReturnValue_3__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue_3__pf, bpv__Width__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpf__PlaceRopeWithOffset__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_4__pf);
			}
		case 38:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__RopesHeight__pf);
				bpfv__CallFunc_RotateAngleAxis_ReturnValue_2__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue_2__pf, bpv__Width__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpf__PlaceRopeWithOffset__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf);
			}
		case 39:
			{
				__StateStack.Push(44);
			}
		case 40:
			{
				bpfv__CallFunc_RotateAngleAxis_ReturnValue_1__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue_1__pf, bpv__Width__pf);
				bpf__PlacePoleWithOffset__pf(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
			}
		case 41:
			{
				bpfv__CallFunc_RotateAngleAxis_ReturnValue_1__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, 90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue_1__pf, bpv__Width__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf, bpv__End__pf);
				bpf__PlacePoleWithOffset__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf);
			}
		case 42:
			{
				bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf, bpv__Width__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__End__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpf__PlacePoleWithOffset__pf(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf);
			}
		case 43:
			{
				bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf = UKismetMathLibrary::RotateAngleAxis(bpfv__Dir__pf, -90.000000, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_RotateAngleAxis_ReturnValue__pf, bpv__Width__pf);
				bpf__PlacePoleWithOffset__pf(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetSplineLength_ReturnValue_1__pf = bpv__Spline__pf->USplineComponent::GetSplineLength();
				}
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_GetSplineLength_ReturnValue_1__pf, bpv__PlankDist__pf);
				bpfv__CallFunc_FCeil_ReturnValue_1__pf = UKismetMathLibrary::FCeil(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf);
				bpfv__PlankCount__pf = bpfv__CallFunc_FCeil_ReturnValue_1__pf;
			}
		case 45:
			{
				bpfv__Temp_int_Variable_2__pf = bpv__PaddingStart__pf;
			}
		case 46:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__PlankCount__pf, bpv__PaddingEnd__pf);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable_2__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 47:
			{
				__StateStack.Push(52);
			}
		case 48:
			{
				bpfv__Id__pf = bpfv__Temp_int_Variable_2__pf;
			}
		case 49:
			{
				bpfv__CallFunc_RandomFloatFromStream_ReturnValue__pf = UKismetMathLibrary::RandomFloatFromStream(bpv__Seed__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_RandomFloatFromStream_ReturnValue__pf, bpv__MissingPlankChance__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__PlankInstances__pf);
				bpfv__CallFunc_RandomIntegerFromStream_ReturnValue_1__pf = UKismetMathLibrary::RandomIntegerFromStream(bpfv__CallFunc_Array_Length_ReturnValue__pf, bpv__Seed__pf);
				bpfv__PlankId__pf = bpfv__CallFunc_RandomIntegerFromStream_ReturnValue_1__pf;
			}
		case 51:
			{
				bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_RotatorFloat(bpv__PlanksRandomRotation__pf, -1.000000);
				bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf = UKismetMathLibrary::RandomIntegerFromStream(2, bpv__Seed__pf);
				UBP_FuncLib_C__pf3332962890::bpf__RandomVectorSeeded__pf(bpv__Planks__pf[bpfv__PlankId__pf].bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf, bpv__Planks__pf[bpfv__PlankId__pf].bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf, bpv__Seed__pf, this, /*out*/ bpfv__CallFunc_RandomVectorSeeded_Out__pf);
				bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorVector(bpfv__CallFunc_RandomVectorSeeded_Out__pf, bpv__PlanksGlobalScale__pf);
				UBP_FuncLib_C__pf3332962890::bpf__RandomRotSeeded__pf(bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf, bpv__PlanksRandomRotation__pf, /*out*/ bpv__Seed__pf, this, /*out*/ bpfv__CallFunc_RandomRotSeeded_Out__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__Id__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, 180.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, 0.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue_2__pf = UKismetMathLibrary::MakeRotator(0.000000, 180.000000, 180.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue_3__pf = UKismetMathLibrary::MakeRotator(0.000000, 180.000000, 0.000000);
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Id__pf, bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf);
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf, 4);
				bpfv__Temp_int_Variable_1__pf = bpfv__CallFunc_Percent_IntInt_ReturnValue__pf;
				bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(TSwitchValue<int32 , FRotator >(bpfv__Temp_int_Variable_1__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FRotator >(0, bpfv__CallFunc_MakeRotator_ReturnValue_3__pf), TSwitchPair<int32 , FRotator >(1, bpfv__CallFunc_MakeRotator_ReturnValue_2__pf), TSwitchPair<int32 , FRotator >(2, bpfv__CallFunc_MakeRotator_ReturnValue_1__pf), TSwitchPair<int32 , FRotator >(3, bpfv__CallFunc_MakeRotator_ReturnValue__pf)), bpfv__CallFunc_RandomRotSeeded_Out__pf);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetSplineLength_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetSplineLength();
				}
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_2__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__PlankCount__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_GetSplineLength_ReturnValue__pf);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetTangentAtDistanceAlongSpline(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf, ESplineCoordinateSpace::Local);
				}
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetLocationAtDistanceAlongSpline(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_4__pf, ESplineCoordinateSpace::Local);
				}
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue__pf);
				bpfv__CallFunc_ComposeRotators_ReturnValue_1__pf = UKismetMathLibrary::ComposeRotators(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue__pf, bpfv__CallFunc_ComposeRotators_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorVector_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpfv__PlankInstances__pf, bpfv__PlankId__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_AddInstance_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item_1__pf->AddInstance(bpfv__CallFunc_MakeTransform_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable_2__pf, 1);
				bpfv__Temp_int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 46;
				break;
			}
		case 53:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
				__CurrentState = 12;
				break;
			}
		case 54:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 27;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Bridge_C__pf3332962890::bpf__PlaceRopeWithOffset__pf(FVector bpp__Offset__pf)
{
	FVector bpfv__RotatedOffset__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetUpVectorAtSplinePoint_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__Temp_struct_Variable__pf{};
	int32 bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpp__Offset__pf, bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf);
				bpfv__RotatedOffset__pf = bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = 1;
			}
		case 3:
			{
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetNumberOfSplinePoints();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				__StateStack.Push(11);
			}
		case 5:
			{
				bpfv__Temp_struct_Variable__pf = FTransform( FQuat(0.000000,-0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-2")), true, bpfv__Temp_struct_Variable__pf, this), ECastCheckedType::NullAllowed);
			}
		case 6:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__Temp_int_Variable__pf, 1);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetUpVectorAtSplinePoint_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetUpVectorAtSplinePoint(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, ESplineCoordinateSpace::Local);
				}
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetSplineUpDir(bpfv__CallFunc_GetUpVectorAtSplinePoint_ReturnValue__pf, false);
				}
			}
		case 7:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(bpv__RopeWidth__pf, bpv__RopeWidth__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetStartScale(bpfv__CallFunc_MakeVector2D_ReturnValue__pf, false);
				}
			}
		case 8:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(bpv__RopeWidth__pf, bpv__RopeWidth__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetEndScale(bpfv__CallFunc_MakeVector2D_ReturnValue__pf, false);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__Temp_int_Variable__pf, 1);
				if(::IsValid(bpv__Spline__pf))
				{
					bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf = bpv__Spline__pf->USplineComponent::GetNumberOfSplinePoints();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf, 1);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf);
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::GetLocationAndTangentAtSplinePoint(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf, ESplineCoordinateSpace::World);
				}
				if(::IsValid(bpv__Spline__pf))
				{
					bpv__Spline__pf->USplineComponent::GetLocationAndTangentAtSplinePoint(bpfv__Temp_int_Variable__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf, /*out*/ bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf, ESplineCoordinateSpace::World);
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location__pf, bpfv__RotatedOffset__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__RotatedOffset__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Location_1__pf);
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetStartAndEnd(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, bpfv__CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->SetCollisionEnabled(bpv__RopesCollision__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Bridge_C__pf3332962890::bpf__PlacePoleWithOffset__pf(FVector bpp__Location__pf)
{
	FRotator bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_RandomRotSeeded_Out__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf{};
	FS_MeshRScale__pf3332962890 bpfv__CallFunc_Array_Get_Item__pf{};
	FVector bpfv__CallFunc_RandomVectorSeeded_Out__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_SetStaticMesh_ReturnValue__pf{};
	bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_RotatorFloat(bpv__PolesRandomRotation__pf, -1.000000);
	UBP_FuncLib_C__pf3332962890::bpf__RandomRotSeeded__pf(bpfv__CallFunc_Multiply_RotatorFloat_ReturnValue__pf, bpv__PolesRandomRotation__pf, /*out*/ bpv__Seed__pf, this, /*out*/ bpfv__CallFunc_RandomRotSeeded_Out__pf);
	bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Poles__pf);
	bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf = UKismetMathLibrary::RandomIntegerFromStream(bpfv__CallFunc_Array_Length_ReturnValue__pf, bpv__Seed__pf);
	FCustomThunkTemplates::Array_Get(bpv__Poles__pf, bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
	UBP_FuncLib_C__pf3332962890::bpf__RandomVectorSeeded__pf(bpfv__CallFunc_Array_Get_Item__pf.bpv__MinScale_6_BD40D252462E38105718A9BC5CE3D0F2__pf, bpfv__CallFunc_Array_Get_Item__pf.bpv__MaxScale_8_A830D4EB473AA064C574B982435043DB__pf, bpv__Seed__pf, this, /*out*/ bpfv__CallFunc_RandomVectorSeeded_Out__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpp__Location__pf, bpfv__CallFunc_RandomRotSeeded_Out__pf, bpfv__CallFunc_RandomVectorSeeded_Out__pf);
	bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-4")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
	bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Poles__pf);
	bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf = UKismetMathLibrary::RandomIntegerFromStream(bpfv__CallFunc_Array_Length_ReturnValue__pf, bpv__Seed__pf);
	FCustomThunkTemplates::Array_Get(bpv__Poles__pf, bpfv__CallFunc_RandomIntegerFromStream_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
	if(::IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
	{
		bpfv__CallFunc_SetStaticMesh_ReturnValue__pf = bpfv__CallFunc_AddComponent_ReturnValue__pf->SetStaticMesh(bpfv__CallFunc_Array_Get_Item__pf.bpv__Mesh_2_B211811B40E65E5BAC21D2A96FA53F31__pf);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Bridge_C__pf3332962890::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{321, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/SuspensionBridge/Meshes/SM_Rope.SM_Rope 
		{322, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/SuspensionBridge/Materials/M_Rope.M_Rope 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Bridge_C__pf3332962890::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMesh 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{87, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{323, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionEnabled 
		{324, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.InstancedStaticMeshComponent 
		{325, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{326, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/SuspensionBridge/Blueprints/BP_FuncLib.BP_FuncLib_C 
		{327, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/SuspensionBridge/Blueprints/S_MeshRScale.S_MeshRScale 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Bridge_C__pf3332962890
{
	FRegisterHelper__ABP_Bridge_C__pf3332962890()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SuspensionBridge/Blueprints/BP_Bridge"), &ABP_Bridge_C__pf3332962890::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Bridge_C__pf3332962890 Instance;
};
FRegisterHelper__ABP_Bridge_C__pf3332962890 FRegisterHelper__ABP_Bridge_C__pf3332962890::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
