#include "NativizedAssets.h"
#include "WindTurbine__pf918451800.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
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
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AWindTurbine_C__pf918451800::AWindTurbine_C__pf918451800(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Base__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	bpv__Pillar__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pillar"));
	bpv__Nacelle__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nacelle"));
	bpv__Rotor__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rotor"));
	bpv__Anemometer__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Anemometer"));
	bpv__logo__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("logo"));
	bpv__Audio__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	bpv__Offshore_base__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Offshore_base"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__DefaultSceneRoot__pf->Mobility = EComponentMobility::Type::Static;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Base__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Base__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Base__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Base__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Base__pf), true, 0));
	bpv__Pillar__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Pillar__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Pillar__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__3 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Pillar__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Pillar__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Pillar__pf), true, 0));
	bpv__Nacelle__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Nacelle__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Nacelle__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__4 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Nacelle__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Nacelle__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.000000, 0.000000, 10000.000000);
	bpv__Nacelle__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Nacelle__pf), true, 0));
	bpv__Rotor__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Rotor__pf->AttachToComponent(bpv__Nacelle__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Rotor__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__Rotor__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(0.000000, 500.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Rotor__pf), true, 0));
	bpv__Anemometer__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Anemometer__pf->AttachToComponent(bpv__Nacelle__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Anemometer__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__Anemometer__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(-16.483999, -1309.073975, 382.737305);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Anemometer__pf), true, 0));
	bpv__logo__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__logo__pf->AttachToComponent(bpv__Nacelle__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__10 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__logo__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__10 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__logo__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__logo__pf->OverrideMaterials.Reserve(1);
	bpv__logo__pf->OverrideMaterials.Add(nullptr);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__logo__pf), true, 0));
	bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Audio__pf->AttachToComponent(bpv__Nacelle__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Audio__pf->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Audio__pf->bOverrideAttenuation = true;
	bpv__Audio__pf->VolumeMultiplier = 0.704762f;
	bpv__Audio__pf->AttenuationOverrides.AttenuationShapeExtents = FVector(1000.000000, 0.000000, 0.000000);
	bpv__Audio__pf->AttenuationOverrides.FalloffDistance = 15000.000000f;
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__Audio__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(0.000000, 162.242874, 17.416992);
	bpv__Audio__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Audio__pf), false, 0));
	bpv__Offshore_base__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Offshore_base__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Offshore_base__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__12 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__Offshore_base__pf->SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Offshore_base__pf->Mobility = EComponentMobility::Type::Static;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Offshore_base__pf), true, 0));
	bpv__RPM__pf = 15.000000f;
	bpv__RPMxVariation__pfT = true;
	bpv__Dirtiness__pf = 0.000000f;
	bpv__Height__pf = 100;
	bpv__Logo_texture__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__random_speed_change__pf = 0.000000f;
	bpv__Rotorxdiameter__pfT = 80.000000f;
	bpv__OffshorexWindxTurbine__pfTT = false;
	bpv__Sound__pf = true;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__13 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__13 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AWindTurbine_C__pf918451800::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Base__pf)
	{
		bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Pillar__pf)
	{
		bpv__Pillar__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Nacelle__pf)
	{
		bpv__Nacelle__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Rotor__pf)
	{
		bpv__Rotor__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Anemometer__pf)
	{
		bpv__Anemometer__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__logo__pf)
	{
		bpv__logo__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Audio__pf)
	{
		bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Offshore_base__pf)
	{
		bpv__Offshore_base__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AWindTurbine_C__pf918451800::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void AWindTurbine_C__pf918451800::bpf__ExecuteUbergraph_WindTurbine__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_Event_DeltaSeconds__pf, bpv__RPM__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -6.000000);
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__RPMxVariation__pfT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__random_speed_change__pf, bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, 0.000000);
				if(::IsValid(bpv__Rotor__pf))
				{
					bpv__Rotor__pf->USceneComponent::K2_AddLocalRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf, false);
				}
			}
		case 3:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_Event_DeltaSeconds__pf, bpv__RPM__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -6.000000);
				bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_BoolToFloat(bpv__RPMxVariation__pfT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__random_speed_change__pf, bpfv__CallFunc_Conv_BoolToFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(5, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
				if(::IsValid(bpv__Anemometer__pf))
				{
					bpv__Anemometer__pf->USceneComponent::K2_AddLocalRotation(bpfv__CallFunc_MakeRotator_ReturnValue_1__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AWindTurbine_C__pf918451800::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_WindTurbine__pf_0(4);
}
void AWindTurbine_C__pf918451800::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_WindTurbine__pf_0(1);
}
void AWindTurbine_C__pf918451800::bpf__UserConstructionScript__pf()
{
	FHitResult bpfv__CallFunc_K2_AddWorldOffset_SweepHitResult__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FHitResult bpfv__CallFunc_K2_AddLocalOffset_SweepHitResult__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	FHitResult bpfv__CallFunc_K2_AddLocalOffset_SweepHitResult_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_AddLocalRotation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomFloatInRange(0.000000, 360.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_RandomFloatInRange_ReturnValue_1__pf, 0.000000);
				if(::IsValid(bpv__Rotor__pf))
				{
					bpv__Rotor__pf->USceneComponent::K2_AddLocalRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_AddLocalRotation_SweepHitResult__pf, false);
				}
			}
		case 2:
			{
				bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AWindTurbine_C__pf918451800::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed), FName(TEXT("None")));
			}
		case 3:
			{
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetMaterial(0, bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf);
				}
			}
		case 4:
			{
				if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetTextureParameterValue(FName(TEXT("logo")), bpv__Logo_texture__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__Height__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.060000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 105.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(1.000000, 1.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				if(::IsValid(bpv__Pillar__pf))
				{
					bpv__Pillar__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue_2__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__Height__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.060000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 105.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, -3.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, 30.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf);
				if(::IsValid(bpv__Pillar__pf))
				{
					bpv__Pillar__pf->USceneComponent::K2_AddLocalOffset(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, false, /*out*/ bpfv__CallFunc_K2_AddLocalOffset_SweepHitResult_1__pf, false);
				}
			}
		case 7:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__Height__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				if(::IsValid(bpv__Nacelle__pf))
				{
					bpv__Nacelle__pf->USceneComponent::K2_AddLocalOffset(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__Height__pf);
				if(::IsValid(bpv__Pillar__pf))
				{
					bpv__Pillar__pf->UMeshComponent::SetScalarParameterValueOnMaterials(FName(TEXT("uv_height")), bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Rotorxdiameter__pfT, 80.000000);
				bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf = UKismetMathLibrary::Conv_FloatToVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				if(::IsValid(bpv__Rotor__pf))
				{
					bpv__Rotor__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_Conv_FloatToVector_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__Anemometer__pf))
				{
					bpv__Anemometer__pf->UMeshComponent::SetScalarParameterValueOnMaterials(FName(TEXT("Dirtiness")), bpv__Dirtiness__pf);
				}
				if(::IsValid(bpv__Base__pf))
				{
					bpv__Base__pf->UMeshComponent::SetScalarParameterValueOnMaterials(FName(TEXT("Dirtiness")), bpv__Dirtiness__pf);
				}
				if(::IsValid(bpv__Pillar__pf))
				{
					bpv__Pillar__pf->UMeshComponent::SetScalarParameterValueOnMaterials(FName(TEXT("Dirtiness")), bpv__Dirtiness__pf);
				}
				if(::IsValid(bpv__Nacelle__pf))
				{
					bpv__Nacelle__pf->UMeshComponent::SetScalarParameterValueOnMaterials(FName(TEXT("Dirtiness")), bpv__Dirtiness__pf);
				}
				if(::IsValid(bpv__Rotor__pf))
				{
					bpv__Rotor__pf->UMeshComponent::SetScalarParameterValueOnMaterials(FName(TEXT("Dirtiness")), bpv__Dirtiness__pf);
				}
			}
		case 11:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(-0.300000, 0.300000);
				bpv__random_speed_change__pf = bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf;
			}
		case 12:
			{
				if (!bpv__OffshorexWindxTurbine__pfTT)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 13:
			{
				if(::IsValid(bpv__Base__pf))
				{
					bpv__Base__pf->USceneComponent::K2_AddWorldOffset(FVector(0.000000,0.000000,1650.000000), false, /*out*/ bpfv__CallFunc_K2_AddWorldOffset_SweepHitResult__pf, false);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__Audio__pf))
				{
					bpv__Audio__pf->SetAutoActivate(bpv__Sound__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				if(::IsValid(bpv__Offshore_base__pf))
				{
					bpv__Offshore_base__pf->UActorComponent::K2_DestroyComponent(this);
				}
				__CurrentState = 14;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void AWindTurbine_C__pf918451800::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_Base.SM_Base 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_Pillar.SM_Pillar 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_Nacelle.SM_Nacelle 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_Rotor.SM_Rotor 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_Anemometer.SM_Anemometer 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_logo.SM_logo 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Wind_Turbine/Sound/SC_Turbine.SC_Turbine 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Wind_Turbine/Meshes/SM_Offshore_base.SM_Offshore_base 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Wind_Turbine/Materials/wind_power_tec.wind_power_tec 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Wind_Turbine/Materials/M_Wind_Turbine_logo.M_Wind_Turbine_logo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AWindTurbine_C__pf918451800::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{190, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AWindTurbine_C__pf918451800
{
	FRegisterHelper__AWindTurbine_C__pf918451800()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Wind_Turbine/WindTurbine"), &AWindTurbine_C__pf918451800::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AWindTurbine_C__pf918451800 Instance;
};
FRegisterHelper__AWindTurbine_C__pf918451800 FRegisterHelper__AWindTurbine_C__pf918451800::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
