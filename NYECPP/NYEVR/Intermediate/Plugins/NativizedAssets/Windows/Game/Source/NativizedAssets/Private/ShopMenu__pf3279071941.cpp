#include "NativizedAssets.h"
#include "ShopMenu__pf3279071941.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
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
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
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
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "MotionControllerPawn__pf563933975.h"
#include "PlayerSaveGameInfo__pf205484891.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UShopMenu_C__pf3279071941::UShopMenu_C__pf3279071941(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__ArrowPurchase__pf = nullptr;
	bpv__HookPurchase__pf = nullptr;
	bpv__Image_136__pf = nullptr;
	bpv__Image_300__pf = nullptr;
	bpv__Image_301__pf = nullptr;
	bpv__Image_302__pf = nullptr;
	bpv__JumpPurchase__pf = nullptr;
	bpv__Jumps__pf = nullptr;
	bpv__Money__pf = nullptr;
	bpv__Shots__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UShopMenu_C__pf3279071941::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UShopMenu_C__pf3279071941::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(AMotionControllerPawn_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerSaveGameInfo_C__pf205484891::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000009);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("HookPurchase"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Button_446_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("ArrowPurchase"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("JumpPurchase"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__5 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(12);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_49"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Offsets.Left = -160.710709f;
	__Local__7->LayoutData.Offsets.Top = -250.000000f;
	__Local__7->LayoutData.Offsets.Right = 365.794373f;
	__Local__7->LayoutData.Offsets.Bottom = 658.558594f;
	__Local__7->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__7->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<UBorder>(__Local__1, TEXT("Border_67"), (EObjectFlags)0x00280008);
	__Local__8->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__8->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = 888.000000f;
	__Local__9->LayoutData.Offsets.Top = 576.000000f;
	__Local__9->LayoutData.Offsets.Right = 200.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__9->Parent = __Local__5;
	auto __Local__10 = NewObject<UButton>(__Local__1, TEXT("JumpPurchase"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<UObject* >(&(__Local__10->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__11 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__12 = TArray<UPanelSlot*> ();
	__Local__12.Reserve(1);
	auto __Local__13 = NewObject<UButtonSlot>(__Local__10, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__13->Parent = __Local__10;
	auto __Local__14 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_129"), (EObjectFlags)0x00280008);
	__Local__14->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D207E0AD433EF270E704CCBAF4AA954E]\", \"BD52513448E7414830CCE9AABE9B94F3\", \"Purchase Jumps\")")	);
	__Local__14->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__14->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__14->Font.Size = 12;
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__12.Add(__Local__13);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__6.Add(__Local__9);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_48"), (EObjectFlags)0x00280008);
	__Local__15->LayoutData.Offsets.Left = 888.000000f;
	__Local__15->LayoutData.Offsets.Top = 724.000000f;
	__Local__15->LayoutData.Offsets.Right = 200.000000f;
	__Local__15->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__15->Parent = __Local__5;
	auto __Local__16 = NewObject<UButton>(__Local__1, TEXT("ArrowPurchase"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__18 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__18 = TArray<UPanelSlot*> ();
	__Local__18.Reserve(1);
	auto __Local__19 = NewObject<UButtonSlot>(__Local__16, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__19->Parent = __Local__16;
	auto __Local__20 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__20->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D207E0AD433EF270E704CCBAF4AA954E]\", \"A64E6C6A474529B8684EA3866D154502\", \"Purchase Arrows\")")	);
	__Local__20->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__20->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__20->Font.Size = 12;
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__18.Add(__Local__19);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__6.Add(__Local__15);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_58"), (EObjectFlags)0x00280008);
	__Local__21->LayoutData.Offsets.Left = 888.000000f;
	__Local__21->LayoutData.Offsets.Top = 872.000000f;
	__Local__21->LayoutData.Offsets.Right = 200.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__21->Parent = __Local__5;
	auto __Local__22 = NewObject<UButton>(__Local__1, TEXT("HookPurchase"), (EObjectFlags)0x00280008);
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(1);
	auto __Local__25 = NewObject<UButtonSlot>(__Local__22, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__25->Parent = __Local__22;
	auto __Local__26 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__26->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D207E0AD433EF270E704CCBAF4AA954E]\", \"23918C254BBAD8DF869C408219C6FC31\", \"Purchase Grappling Hook\")")	);
	__Local__26->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__26->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__26->Font.Size = 12;
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__24.Add(__Local__25);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__6.Add(__Local__21);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_57"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = 892.000000f;
	__Local__27->LayoutData.Offsets.Top = 768.000000f;
	__Local__27->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__27->Parent = __Local__5;
	auto __Local__28 = NewObject<UImage>(__Local__1, TEXT("Image_136"), (EObjectFlags)0x00280008);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__6.Add(__Local__27);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_47"), (EObjectFlags)0x00280008);
	__Local__30->LayoutData.Offsets.Left = 892.000000f;
	__Local__30->LayoutData.Offsets.Top = 620.000000f;
	__Local__30->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__30->Parent = __Local__5;
	auto __Local__31 = NewObject<UImage>(__Local__1, TEXT("Image_300"), (EObjectFlags)0x00280008);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__6.Add(__Local__30);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_41"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Left = 892.000000f;
	__Local__33->LayoutData.Offsets.Top = 472.000000f;
	__Local__33->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__33->Parent = __Local__5;
	auto __Local__34 = NewObject<UImage>(__Local__1, TEXT("Image_301"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__6.Add(__Local__33);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_55"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Left = 892.000000f;
	__Local__36->LayoutData.Offsets.Top = 364.000000f;
	__Local__36->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__36->Parent = __Local__5;
	auto __Local__37 = NewObject<UImage>(__Local__1, TEXT("Image_302"), (EObjectFlags)0x00280008);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__6.Add(__Local__36);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_46"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Left = 1012.000000f;
	__Local__39->LayoutData.Offsets.Top = 652.000000f;
	__Local__39->LayoutData.Offsets.Right = 151.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__39->Parent = __Local__5;
	auto __Local__40 = NewObject<UTextBlock>(__Local__1, TEXT("Shots"), (EObjectFlags)0x00280008);
	__Local__40->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__40->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__40->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__40->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__40->Font.Size = 40;
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__6.Add(__Local__39);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_42"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Left = 1008.000000f;
	__Local__42->LayoutData.Offsets.Top = 496.000000f;
	__Local__42->LayoutData.Offsets.Right = 151.000000f;
	__Local__42->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__42->Parent = __Local__5;
	auto __Local__43 = NewObject<UTextBlock>(__Local__1, TEXT("Jumps"), (EObjectFlags)0x00280008);
	__Local__43->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__43->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__43->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__43->Font.Size = 40;
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__6.Add(__Local__42);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_56"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = 1008.000000f;
	__Local__45->LayoutData.Offsets.Top = 388.000000f;
	__Local__45->LayoutData.Offsets.Right = 151.000000f;
	__Local__45->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__45->Parent = __Local__5;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, TEXT("Money"), (EObjectFlags)0x00280008);
	__Local__46->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__46->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__46->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__46->Font.Size = 40;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__6.Add(__Local__45);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_50"), (EObjectFlags)0x00280008);
	__Local__48->LayoutData.Offsets.Left = 916.000000f;
	__Local__48->LayoutData.Offsets.Top = 296.000000f;
	__Local__48->LayoutData.Offsets.Right = 131.531525f;
	__Local__48->LayoutData.Offsets.Bottom = 72.042038f;
	__Local__48->Parent = __Local__5;
	auto __Local__49 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_660"), (EObjectFlags)0x00280008);
	__Local__49->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[D207E0AD433EF270E704CCBAF4AA954E]\", \"20A7181E402E3416CE37E39AF0D504FA\", \"Shop\")")	);
	auto& __Local__50 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__50 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__49->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__49->Font.TypefaceFontName = FName(TEXT("Light"));
	__Local__49->Font.Size = 40;
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__6.Add(__Local__48);
	__Local__1->RootWidget = __Local__5;
}
PRAGMA_ENABLE_OPTIMIZATION
void UShopMenu_C__pf3279071941::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__51;
	SlotNames.Append(__Local__51);
}
void UShopMenu_C__pf3279071941::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__52;
	TArray<FDelegateRuntimeBinding>  __Local__53;
	__Local__53.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__53.GetData(), 3);
	auto& __Local__54 = __Local__53[0];
	__Local__54.ObjectName = FString(TEXT("Shots"));
	__Local__54.PropertyName = FName(TEXT("Text"));
	__Local__54.FunctionName = FName(TEXT("Get_Shots_Text_0"));
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__54.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__55 = TArray<FPropertyPathSegment> ();
	__Local__55.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__55.GetData(), 1);
	auto& __Local__56 = __Local__55[0];
	__Local__56.Name = FName(TEXT("Get_Shots_Text_0"));
	auto& __Local__57 = __Local__53[1];
	__Local__57.ObjectName = FString(TEXT("Jumps"));
	__Local__57.PropertyName = FName(TEXT("Text"));
	__Local__57.FunctionName = FName(TEXT("Get_Jumps_Text_0"));
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__57.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__58 = TArray<FPropertyPathSegment> ();
	__Local__58.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__58.GetData(), 1);
	auto& __Local__59 = __Local__58[0];
	__Local__59.Name = FName(TEXT("Get_Jumps_Text_0"));
	auto& __Local__60 = __Local__53[2];
	__Local__60.ObjectName = FString(TEXT("Money"));
	__Local__60.PropertyName = FName(TEXT("Text"));
	__Local__60.FunctionName = FName(TEXT("Get_Money_Text_0"));
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__60.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__61 = TArray<FPropertyPathSegment> ();
	__Local__61.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__61.GetData(), 1);
	auto& __Local__62 = __Local__61[0];
	__Local__62.Name = FName(TEXT("Get_Money_Text_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, true, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UShopMenu_C__pf3279071941::StaticClass())->MiscConvertedSubobjects[0]), __Local__52, __Local__53);
}
void UShopMenu_C__pf3279071941::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UShopMenu_C__pf3279071941::bpf__ExecuteUbergraph_ShopMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Not enough coins")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				int32  __Local__63 = 0;
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::GreaterEqual_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf->bpv__GameCurrency__pf) : (__Local__63)), 1);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 5:
			{
				USaveGame*  __Local__64 = ((USaveGame*)nullptr);
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf->bpv__SaverSubClass__pf) : (__Local__64)));
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				int32  __Local__65 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf->bpv__GameCurrency__pf) : (__Local__65)), 1);
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf->bpv__GameCurrency__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_5__pf;
				}
			}
		case 7:
			{
				int32  __Local__66 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf->bpv__GameCurrency__pf) : (__Local__66)), 1);
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf->bpv__GameCurrency__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_4__pf;
				}
			}
		case 8:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf->bpf__AddJump__pf();
				}
			}
		case 9:
			{
				USaveGame*  __Local__67 = ((USaveGame*)nullptr);
				bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_2__pf->bpv__SaverSubClass__pf) : (__Local__67)), FString(TEXT("test")), 0);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Not enough coins")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				int32  __Local__68 = 0;
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf->bpv__GameCurrency__pf) : (__Local__68)), 1);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 14:
			{
				USaveGame*  __Local__69 = ((USaveGame*)nullptr);
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf->bpv__SaverSubClass__pf) : (__Local__69)));
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 15:
			{
				int32  __Local__70 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf->bpv__GameCurrency__pf) : (__Local__70)), 1);
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf->bpv__GameCurrency__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf;
				}
			}
		case 16:
			{
				int32  __Local__71 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf->bpv__GameCurrency__pf) : (__Local__71)), 1);
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf->bpv__GameCurrency__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				}
			}
		case 17:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn_1__pf->bpf__AddAmmo__pf();
				}
				__CurrentState = 9;
				break;
			}
		case 18:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Not enough coins")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 21:
			{
				int32  __Local__72 = 0;
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__GameCurrency__pf) : (__Local__72)), 20);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 1;
					break;
				}
			}
		case 22:
			{
				USaveGame*  __Local__73 = ((USaveGame*)nullptr);
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__SaverSubClass__pf) : (__Local__73)));
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 23:
			{
				int32  __Local__74 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf->bpv__GameCurrency__pf) : (__Local__74)), 20);
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf->bpv__GameCurrency__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_3__pf;
				}
			}
		case 24:
			{
				int32  __Local__75 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__GameCurrency__pf) : (__Local__75)), 20);
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__GameCurrency__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_2__pf;
				}
			}
		case 25:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__Purchased__pf = false;
				}
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UShopMenu_C__pf3279071941::bpf__BndEvt__Button_446_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ShopMenu__pf_0(19);
}
void UShopMenu_C__pf3279071941::bpf__BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ShopMenu__pf_0(11);
}
void UShopMenu_C__pf3279071941::bpf__BndEvt__Button_107_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ShopMenu__pf_0(2);
}
FText  UShopMenu_C__pf3279071941::bpf__Get_Shots_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMotionControllerPawn_C__pf563933975* bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__76 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__AmmoCount__pf) : (__Local__76)), false, true, 2, 324);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UShopMenu_C__pf3279071941::bpf__Get_Jumps_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMotionControllerPawn_C__pf563933975* bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__77 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__JumpCount__pf) : (__Local__77)), false, true, 2, 324);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UShopMenu_C__pf3279071941::bpf__Get_Money_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMotionControllerPawn_C__pf563933975* bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				int32  __Local__78 = 0;
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(((::IsValid(bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (bpfv__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__GameCurrency__pf) : (__Local__78)), false, true, 2, 324);
				bpp__ReturnValue__pf = bpfv__CallFunc_Conv_IntToText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UShopMenu_C__pf3279071941::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Engine/EngineResources/Black.Black 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoTiny.RobotoTiny 
		{311, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Score/Icons/steel.steel 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Score/Icons/arrow.arrow 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Score/Icons/jump.jump 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Score/Icons/money.money 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UShopMenu_C__pf3279071941::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{96, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{97, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{102, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{103, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/CableComponent.CableComponent 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetInteractionComponent 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.Vector_NetQuantize 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.Vector_NetQuantizeNormal 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Meshes/SyntyBow/Rigged_Bow_Testing.Rigged_Bow_Testing 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveFloat 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MovementComponent 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Blueprints/Bow/FC_BowStrengthCurve.FC_BowStrengthCurve 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Meshes/SyntyBow/Rigged_Bow_Testing_Skeleton.Rigged_Bow_Testing_Skeleton 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Meshes/SyntyBow/Bow_ChargedBlend.Bow_ChargedBlend 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/TS_Fireworks/Particles/PS_TS_Fireworks_Burst_Palm.PS_TS_Fireworks_Burst_Palm 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/SyntyBow/SM_Arrow_01.SM_Arrow_01 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EditorMeshes/ArcadeEditorSphere.ArcadeEditorSphere 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/StylizedRoom/Materials/MI_White.MI_White 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /DatasmithContent/Meshes/cylinder.cylinder 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Engine/EngineVolumetrics/Fogsheet/Materials/T_EV_BlankWhite_01.T_EV_BlankWhite_01 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/PlayerSaveGameInfo.PlayerSaveGameInfo_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UShopMenu_C__pf3279071941
{
	FRegisterHelper__UShopMenu_C__pf3279071941()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Score/Shop/ShopMenu"), &UShopMenu_C__pf3279071941::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UShopMenu_C__pf3279071941 Instance;
};
FRegisterHelper__UShopMenu_C__pf3279071941 FRegisterHelper__UShopMenu_C__pf3279071941::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
