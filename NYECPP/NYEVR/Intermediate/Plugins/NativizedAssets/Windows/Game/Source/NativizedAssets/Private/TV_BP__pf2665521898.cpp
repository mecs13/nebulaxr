#include "NativizedAssets.h"
#include "TV_BP__pf2665521898.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTextureStreamingProxy.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureBuildSettings.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/MediaAssets/Public/MediaSoundComponent.h"
#include "Runtime/AudioMixer/Public/Components/SynthComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveProcedural.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/MediaAssets/Public/MediaPlayer.h"
#include "Runtime/MediaAssets/Public/MediaSource.h"
#include "Runtime/MediaUtils/Public/MediaPlayerOptions.h"
#include "Runtime/MediaAssets/Public/MediaPlaylist.h"
#include "Runtime/MediaAssets/Public/MediaTexture.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "GlobalMediaBroadcast__pf2665521898.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ATV_BP_C__pf2665521898::ATV_BP_C__pf2665521898(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__TV_Mesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TV_Mesh"));
	bpv__Text__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	bpv__Trigger__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	bpv__Sound__pf = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("Sound"));
	RootComponent = bpv__TV_Mesh__pf;
	bpv__TV_Mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TV_Mesh__pf), true, 0));
	bpv__Text__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Text__pf->AttachToComponent(bpv__TV_Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Text__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DD3447904B52E3C5DD9E26B195BC9089]\", \"41AAF9094A095F8ECE018982557F2032\", \"INTERACT\")")	);
	bpv__Text__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__Text__pf->VerticalAlignment = EVerticalTextAligment::EVRTA_TextCenter;
	bpv__Text__pf->TextRenderColor = FColor(127, 137, 200, 255);
	bpv__Text__pf->XScale = 0.700000f;
	bpv__Text__pf->WorldSize = 3.110042f;
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__Text__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(-27.980000, 15.379302, 5.634798);
	auto& __Local__3 = (*(AccessPrivateProperty<FRotator >((bpv__Text__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__3 = FRotator(0.000000, 90.000237, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__Text__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__4 = FVector(5.750000, 3.500000, 1.750000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Text__pf), false, 0));
	bpv__Trigger__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Trigger__pf->AttachToComponent(bpv__TV_Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Trigger__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	bpv__Trigger__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__5 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Trigger__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__5), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__6 = TArray<FResponseChannel> ();
	__Local__6.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__6.GetData(), 8);
	auto& __Local__7 = __Local__6[0];
	__Local__7.Channel = FName(TEXT("WorldStatic"));
	__Local__7.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__8 = __Local__6[1];
	__Local__8.Channel = FName(TEXT("WorldDynamic"));
	__Local__8.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__9 = __Local__6[2];
	__Local__9.Channel = FName(TEXT("Pawn"));
	__Local__9.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__10 = __Local__6[3];
	__Local__10.Channel = FName(TEXT("Visibility"));
	__Local__10.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__11 = __Local__6[4];
	__Local__11.Channel = FName(TEXT("Camera"));
	__Local__11.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__12 = __Local__6[5];
	__Local__12.Channel = FName(TEXT("PhysicsBody"));
	__Local__12.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__13 = __Local__6[6];
	__Local__13.Channel = FName(TEXT("Vehicle"));
	__Local__13.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__14 = __Local__6[7];
	__Local__14.Channel = FName(TEXT("Destructible"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	bpv__Trigger__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__Trigger__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(-0.000006, 90.000023, 60.000004);
	auto& __Local__16 = (*(AccessPrivateProperty<FRotator >((bpv__Trigger__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__16 = FRotator(0.000000, -0.000003, 0.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__Trigger__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__17 = FVector(5.750000, 3.500000, 1.750000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Trigger__pf), true, 0));
	bpv__Sound__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sound__pf->AttachToComponent(bpv__TV_Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sound__pf->bAllowSpatialization = true;
	bpv__Sound__pf->bOverrideAttenuation = true;
	bpv__Sound__pf->AttenuationOverrides.AttenuationShapeExtents = FVector(250.000000, 0.000000, 0.000000);
	bpv__Sound__pf->AttenuationOverrides.FalloffDistance = 200.000000f;
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__Sound__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__18 = FVector(0.000000, 0.000008, 0.000011);
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__Sound__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__19 = FVector(1.000000, 1.000000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Sound__pf), false, 0));
	bpv__DynamicScreenMaterial__pf = nullptr;
	bpv__OnxOff__pfE = true;
	bpv__ScreenTextureParameter__pf = FName(TEXT("ScreenTexture"));
	bpv__MaxGlobalChannel__pf = 0;
	bpv__NoSourceTexture__pf = CastChecked<UTexture>(CastChecked<UDynamicClass>(ATV_BP_C__pf2665521898::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__InputSources__pf = TArray<FVideoInputSource__pf2665521898> ();
	bpv__InputScource__pf = 0;
	bpv__GlobalChannel__pf = 0;
	auto& __Local__20 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__20 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ATV_BP_C__pf2665521898::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__TV_Mesh__pf)
	{
		bpv__TV_Mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Text__pf)
	{
		bpv__Text__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Trigger__pf)
	{
		bpv__Trigger__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sound__pf)
	{
		bpv__Sound__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ATV_BP_C__pf2665521898::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType.VideoInputSourceType")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AGlobalMediaBroadcast_C__pf2665521898::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FVideoParams__pf2665521898();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FVideoParams__pf2665521898());
	extern UScriptStruct* Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FVideoInputSource__pf2665521898());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__21 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__21);
	auto __Local__22 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__22);
	auto __Local__23 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__23);
	static TWeakFieldPtr<FProperty> __Local__25{};
	const FProperty* __Local__24 = __Local__25.Get();
	if (nullptr == __Local__24)
	{
		__Local__24 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__24);
		__Local__25 = __Local__24;
	}
	(((FBoolProperty*)__Local__24)->SetPropertyValue_InContainer((__Local__21), false, 0));
	__Local__22->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__22->InputKeyDelegateBindings.AddUninitialized(3);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__22->InputKeyDelegateBindings.GetData(), 3);
	auto& __Local__26 = __Local__22->InputKeyDelegateBindings[0];
	__Local__26.InputChord.Key = FKey(TEXT("LeftMouseButton"));
	__Local__26.FunctionNameToBind = FName(TEXT("InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"));
	auto& __Local__27 = __Local__22->InputKeyDelegateBindings[1];
	__Local__27.InputChord.Key = FKey(TEXT("E"));
	__Local__27.FunctionNameToBind = FName(TEXT("InpActEvt_E_K2Node_InputKeyEvent_1"));
	auto& __Local__28 = __Local__22->InputKeyDelegateBindings[2];
	__Local__28.InputChord.Key = FKey(TEXT("Q"));
	__Local__28.FunctionNameToBind = FName(TEXT("InpActEvt_Q_K2Node_InputKeyEvent_0"));
	__Local__23->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__23->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__23->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__29 = __Local__23->ComponentDelegateBindings[0];
	__Local__29.ComponentPropertyName = FName(TEXT("Trigger"));
	__Local__29.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__29.FunctionNameToBind = FName(TEXT("BndEvt__TV4box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__30 = __Local__23->ComponentDelegateBindings[1];
	__Local__30.ComponentPropertyName = FName(TEXT("Trigger"));
	__Local__30.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__30.FunctionNameToBind = FName(TEXT("BndEvt__TV4box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 30:
			{
				bpf__UpdateVideo__pf();
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				if(::IsValid(bpv__DynamicScreenMaterial__pf))
				{
					bpv__DynamicScreenMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(bpv__ScreenTextureParameter__pf, CastChecked<UTexture>(CastChecked<UDynamicClass>(ATV_BP_C__pf2665521898::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
				}
			}
		case 47:
			{
				bpf__CloseAllLocalVideos__pf();
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				__CurrentState = 50;
				break;
			}
		case 50:
			{
				bpv__OnxOff__pfE = b0l__K2Node_CustomEvent_On_Off__pf;
			}
		case 51:
			{
				if (!bpv__OnxOff__pfE)
				{
					__CurrentState = 52;
					break;
				}
				__CurrentState = 30;
				break;
			}
		case 52:
			{
				if(::IsValid(bpv__Sound__pf))
				{
					bpv__Sound__pf->UMediaSoundComponent::SetMediaPlayer(((UMediaPlayer*)nullptr));
				}
			}
		case 53:
			{
				if(::IsValid(bpv__Sound__pf))
				{
					bpv__Sound__pf->SetActive(false, false);
				}
				__CurrentState = 46;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	UMediaPlayer* bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf{};
	bool bpfv__CallFunc_OpenPlaylist_ReturnValue__pf{};
	bool bpfv__CallFunc_OpenSource_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 16:
			{
				bpf__GetCurrentInputSourceData__pf(/*out*/ b0l__CallFunc_GetCurrentInputSourceData_IsValidSource__pf, /*out*/ b0l__CallFunc_GetCurrentInputSourceData_SourceType__pf, /*out*/ b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf);
			}
		case 17:
			{
				if (!b0l__CallFunc_GetCurrentInputSourceData_IsValidSource__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 18:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_GetCurrentInputSourceData_SourceType__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_GetCurrentInputSourceData_SourceType__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpf__SetAudioxVideo__pfE(false, ((UMediaTexture*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 21:
			{
				if(::IsValid(b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf))
				{
					bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf = b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf->UMediaTexture::GetMediaPlayer();
				}
				if(::IsValid(bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_OpenSource_ReturnValue__pf = bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf->UMediaPlayer::OpenSource(b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf);
				}
			}
		case 22:
			{
				bpf__SetAudioxVideo__pfE(bpfv__CallFunc_OpenSource_ReturnValue__pf, b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf);
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 24:
			{
				if(::IsValid(b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf))
				{
					bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf = b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf->UMediaTexture::GetMediaPlayer();
				}
				if(::IsValid(bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_OpenPlaylist_ReturnValue__pf = bpfv__CallFunc_GetMediaPlayer_ReturnValue__pf->UMediaPlayer::OpenPlaylist(b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf);
				}
			}
		case 25:
			{
				bpf__SetAudioxVideo__pfE(bpfv__CallFunc_OpenPlaylist_ReturnValue__pf, b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf);
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpf__SetAudioxVideo__pfE(true, b0l__CallFunc_GetCurrentInputSourceData_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf);
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				__CurrentState = 32;
				break;
			}
		case 32:
			{
				bpf__CloseAllLocalVideos__pf();
				__CurrentState = 16;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	UMediaPlayer* bpfv__CallFunc_GetMediaPlayer_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 57:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 58:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__InputSources__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 60:
			{
				__StateStack.Push(66);
			}
		case 61:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Array_Get_Item_1__pf.bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 62:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(b0l__CallFunc_Array_Get_Item_1__pf.bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 63:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(b0l__CallFunc_Array_Get_Item_1__pf.bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf.DataTable), b0l__CallFunc_Array_Get_Item_1__pf.bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf.RowName, /*out*/ b0l__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 64:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 65:
			{
				if(::IsValid(b0l__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf))
				{
					bpfv__CallFunc_GetMediaPlayer_ReturnValue_2__pf = b0l__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf->UMediaTexture::GetMediaPlayer();
				}
				if(::IsValid(bpfv__CallFunc_GetMediaPlayer_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetMediaPlayer_ReturnValue_2__pf->UMediaPlayer::Close();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
				__CurrentState = 58;
				break;
			}
		case 67:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 57;
				break;
			}
		case 70:
			{
				__CurrentState = 67;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 69);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__OnxOff__pfE);
	bpf__Power__pf(bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
	return; //KCST_EndOfThread
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	if (!bpv__OnxOff__pfE)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__CycleInputSources__pf();
	return; //KCST_EndOfThread
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_5(int32 bpp__EntryPoint__pf)
{
	UMediaPlayer* bpfv__CallFunc_GetMediaPlayer_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 38:
			{
				__CurrentState = 39;
				break;
			}
		case 39:
			{
				if (!b0l__K2Node_CustomEvent_IsValidSource__pf)
				{
					__CurrentState = 43;
					break;
				}
			}
		case 40:
			{
				if(::IsValid(bpv__DynamicScreenMaterial__pf))
				{
					bpv__DynamicScreenMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(bpv__ScreenTextureParameter__pf, b0l__K2Node_CustomEvent_MediaTexture__pf);
				}
			}
		case 41:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_MediaTexture__pf))
				{
					bpfv__CallFunc_GetMediaPlayer_ReturnValue_1__pf = b0l__K2Node_CustomEvent_MediaTexture__pf->UMediaTexture::GetMediaPlayer();
				}
				if(::IsValid(bpv__Sound__pf))
				{
					bpv__Sound__pf->UMediaSoundComponent::SetMediaPlayer(bpfv__CallFunc_GetMediaPlayer_ReturnValue_1__pf);
				}
			}
		case 42:
			{
				if(::IsValid(bpv__Sound__pf))
				{
					bpv__Sound__pf->SetActive(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				if(::IsValid(bpv__DynamicScreenMaterial__pf))
				{
					bpv__DynamicScreenMaterial__pf->UMaterialInstanceDynamic::SetTextureParameterValue(bpv__ScreenTextureParameter__pf, bpv__NoSourceTexture__pf);
				}
			}
		case 44:
			{
				if(::IsValid(bpv__Sound__pf))
				{
					bpv__Sound__pf->UMediaSoundComponent::SetMediaPlayer(((UMediaPlayer*)nullptr));
				}
			}
		case 45:
			{
				if(::IsValid(bpv__Sound__pf))
				{
					bpv__Sound__pf->SetActive(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_6(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	EnableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	if(::IsValid(bpv__Text__pf))
	{
		bpv__Text__pf->USceneComponent::SetVisibility(true, false);
	}
	return; //KCST_EndOfThread
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_7(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	if(::IsValid(bpv__Text__pf))
	{
		bpv__Text__pf->USceneComponent::SetVisibility(false, false);
	}
	return; //KCST_EndOfThread
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				bpv__InputScource__pf = 0;
			}
		case 3:
			{
				bpf__UpdateVideo__pf();
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if (!bpv__OnxOff__pfE)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpv__InputSources__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__InputScource__pf, bpfv__CallFunc_Array_LastIndex_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = 2;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__InputScource__pf, 1);
				bpv__InputScource__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 3;
				break;
			}
		case 29:
			{
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	if (!bpv__OnxOff__pfE)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__CycleGlobalChannel__pf();
	return; //KCST_EndOfThread
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				if (!bpv__OnxOff__pfE)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__GlobalChannel__pf, bpv__MaxGlobalChannel__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 11:
			{
				bpv__GlobalChannel__pf = 0;
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b0l__CallFunc_Array_Get_Item__pf.bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator0));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				bpf__UpdateVideo__pf();
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__GlobalChannel__pf, 1);
				bpv__GlobalChannel__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__ExecuteUbergraph_TV_BP__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	bpf__SetMaxGlobalChannel__pf();
	return; //KCST_EndOfThread
}
void ATV_BP_C__pf2665521898::bpf__CloseAllLocalVideos__pf()
{
	bpf__ExecuteUbergraph_TV_BP__pf_2(70);
}
void ATV_BP_C__pf2665521898::bpf__SetAudioxVideo__pfE(bool bpp__IsValidSource__pf, UMediaTexture* bpp__MediaTexture__pf)
{
	b0l__K2Node_CustomEvent_IsValidSource__pf = bpp__IsValidSource__pf;
	b0l__K2Node_CustomEvent_MediaTexture__pf = bpp__MediaTexture__pf;
	bpf__ExecuteUbergraph_TV_BP__pf_5(38);
}
void ATV_BP_C__pf2665521898::bpf__CycleGlobalChannel__pf()
{
	bpf__ExecuteUbergraph_TV_BP__pf_10(8);
}
void ATV_BP_C__pf2665521898::bpf__CycleInputSources__pf()
{
	bpf__ExecuteUbergraph_TV_BP__pf_8(29);
}
void ATV_BP_C__pf2665521898::bpf__UpdateVideo__pf()
{
	bpf__ExecuteUbergraph_TV_BP__pf_1(31);
}
void ATV_BP_C__pf2665521898::bpf__BndEvt__TV4box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__31;
	T__Local__31& bpp__SweepResult__pf = *const_cast<T__Local__31 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_TV_BP__pf_6(33);
}
void ATV_BP_C__pf2665521898::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_TV_BP__pf_11(36);
}
void ATV_BP_C__pf2665521898::bpf__Power__pf(bool bpp__OnxOff__pfE)
{
	b0l__K2Node_CustomEvent_On_Off__pf = bpp__OnxOff__pfE;
	bpf__ExecuteUbergraph_TV_BP__pf_0(49);
}
void ATV_BP_C__pf2665521898::bpf__BndEvt__TV4box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_TV_BP__pf_7(54);
}
void ATV_BP_C__pf2665521898::bpf__InpActEvt_Q_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TV_BP__pf_9(27);
}
void ATV_BP_C__pf2665521898::bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TV_BP__pf_4(68);
}
void ATV_BP_C__pf2665521898::bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_TV_BP__pf_3(69);
}
void ATV_BP_C__pf2665521898::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ATV_BP_C__pf2665521898::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), FName(TEXT("None")));
	bpv__DynamicScreenMaterial__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	if(::IsValid(bpv__TV_Mesh__pf))
	{
		bpv__TV_Mesh__pf->SetMaterial(0, bpv__DynamicScreenMaterial__pf);
	}
}
void ATV_BP_C__pf2665521898::bpf__GetCurrentInputSourceData__pf(/*out*/ bool& bpp__IsValidSource__pf, /*out*/ E__VideoInputSourceType__pf& bpp__SourceType__pf, /*out*/ FVideoParams__pf2665521898& bpp__VideoParams__pf)
{
	FVideoInputSource__pf2665521898 bpfv__CallFunc_Array_Get_Item__pf{};
	FVideoInputSource__pf2665521898 bpfv__CallFunc_Array_Get_Item_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FVideoParams__pf2665521898 bpfv__K2Node_MakeStruct_VideoParams__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FVideoInputSource__pf2665521898 bpfv__CallFunc_Array_Get_Item_2__pf{};
	FVideoParams__pf2665521898 bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf{};
	FDataTableRowHandle bpfv__CallFunc_Array_Get_Item_3__pf{};
	FVideoParams__pf2665521898 bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf{};
	bool bpfv__CallFunc_GetDataTableRowFromName_ReturnValue_1__pf{};
	FVideoParams__pf2665521898 bpfv__K2Node_MakeStruct_VideoParams_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	FVideoParams__pf2665521898 bpfv__K2Node_MakeStruct_VideoParams_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_5__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_6__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_7__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_8__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_9__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_10__pf{};
	FVideoInputSource__pf2665521898 bpfv__CallFunc_Array_Get_Item_4__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_4__pf);
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Array_Get_Item_4__pf.bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Array_Get_Item_4__pf.bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_IsValid_ReturnValue_10__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpfv__CallFunc_Array_Get_Item_2__pf.bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue_10__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpfv__CallFunc_Array_Get_Item_2__pf.bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf.DataTable), bpfv__CallFunc_Array_Get_Item_2__pf.bpv__LocalSourceData_11_0DB05B8E46DB144F99FD5E8432A7018F__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf);
			}
		case 4:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf);
				bpfv__CallFunc_IsValid_ReturnValue_7__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue_1__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_IsValid_ReturnValue_7__pf, bpfv__CallFunc_IsValid_ReturnValue_3__pf);
				bpfv__CallFunc_IsValid_ReturnValue_8__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_8__pf, bpfv__CallFunc_BooleanOR_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 6:
			{
				bpfv__K2Node_MakeStruct_VideoParams_1__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf;
				bpfv__K2Node_MakeStruct_VideoParams_1__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf;
				bpfv__K2Node_MakeStruct_VideoParams_1__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf;
				bpp__IsValidSource__pf = true;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator1;
				bpp__VideoParams__pf = bpfv__K2Node_MakeStruct_VideoParams_1__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpp__IsValidSource__pf = false;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator1;
				auto __Local__32 = FVideoParams__pf2665521898{};
				bpp__VideoParams__pf = __Local__32;
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				TArray<FDataTableRowHandle>  __Local__33 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf)) ? (bpfv__CallFunc_Array_Get_Item_1__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf->bpv__GlobalChannels__pf) : (__Local__33)), bpv__GlobalChannel__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_IsValid_ReturnValue_9__pf = UKismetSystemLibrary::IsValid(const_cast<UDataTable*>(bpfv__CallFunc_Array_Get_Item_3__pf.DataTable));
				if (!bpfv__CallFunc_IsValid_ReturnValue_9__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				TArray<FDataTableRowHandle>  __Local__34 = {};
				FCustomThunkTemplates::Array_Get(((::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf)) ? (bpfv__CallFunc_Array_Get_Item_1__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf->bpv__GlobalChannels__pf) : (__Local__34)), bpv__GlobalChannel__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				bpfv__CallFunc_GetDataTableRowFromName_ReturnValue_1__pf = FCustomThunkTemplates::GetDataTableRowFromName(const_cast<UDataTable*>(bpfv__CallFunc_Array_Get_Item_3__pf.DataTable), bpfv__CallFunc_Array_Get_Item_3__pf.RowName, /*out*/ bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf);
			}
		case 11:
			{
				if (!bpfv__CallFunc_GetDataTableRowFromName_ReturnValue_1__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 12:
			{
				bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf);
				bpfv__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf);
				bpfv__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_IsValid_ReturnValue_5__pf, bpfv__CallFunc_IsValid_ReturnValue_4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_6__pf, bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				bpfv__K2Node_MakeStruct_VideoParams_2__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf;
				bpfv__K2Node_MakeStruct_VideoParams_2__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf;
				bpfv__K2Node_MakeStruct_VideoParams_2__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf = bpfv__CallFunc_GetDataTableRowFromName_OutRow_1__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf;
				bpp__IsValidSource__pf = true;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator0;
				bpp__VideoParams__pf = bpfv__K2Node_MakeStruct_VideoParams_2__pf;
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UMediaSource*  __Local__35 = ((UMediaSource*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf->bpv__NoSignalVideo__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf) : (__Local__35)));
				UMediaTexture*  __Local__36 = ((UMediaTexture*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf->bpv__NoSignalVideo__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf) : (__Local__36)));
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_IsValid_ReturnValue_2__pf, bpfv__CallFunc_IsValid_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpv__InputScource__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UMediaTexture*  __Local__37 = ((UMediaTexture*)nullptr);
				bpfv__K2Node_MakeStruct_VideoParams__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf = ((::IsValid(bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf->bpv__NoSignalVideo__pf.bpv__MediaTexture_11_1AC4C349465E5CEBE7B5769B43FC5ABB__pf) : (__Local__37));
				UMediaSource*  __Local__38 = ((UMediaSource*)nullptr);
				bpfv__K2Node_MakeStruct_VideoParams__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf = ((::IsValid(bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf->bpv__NoSignalVideo__pf.bpv__Source_12_9D51B0EB49F6F1CE1BD653A0635FA36D__pf) : (__Local__38));
				bpfv__K2Node_MakeStruct_VideoParams__pf.bpv__Playlist_13_E92566024A2A2B40DE37AD8CD6CEA0E2__pf = ((UMediaPlaylist*)nullptr);
				bpp__IsValidSource__pf = true;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator0;
				bpp__VideoParams__pf = bpfv__K2Node_MakeStruct_VideoParams__pf;
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpp__IsValidSource__pf = false;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator0;
				auto __Local__39 = FVideoParams__pf2665521898{};
				bpp__VideoParams__pf = __Local__39;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpp__IsValidSource__pf = false;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator0;
				auto __Local__40 = FVideoParams__pf2665521898{};
				bpp__VideoParams__pf = __Local__40;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpp__IsValidSource__pf = false;
				bpp__SourceType__pf = E__VideoInputSourceType__pf::NewEnumerator1;
				auto __Local__41 = FVideoParams__pf2665521898{};
				bpp__VideoParams__pf = __Local__41;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ATV_BP_C__pf2665521898::bpf__SetMaxGlobalChannel__pf()
{
	TArray<AGlobalMediaBroadcast_C__pf2665521898*> bpfv__AllGlobalBroadcasts__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	AGlobalMediaBroadcast_C__pf2665521898* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf{};
	FVideoInputSource__pf2665521898 bpfv__CallFunc_Array_Get_Item_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_2__pf = FCustomThunkTemplates::Array_Length(bpv__InputSources__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue_2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(16);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_Array_Get_Item_1__pf.bpv__SourceTypeToUse_5_CB5126614671EE5DF90ABAA1FFD8B467__pf), static_cast<uint8>(E__VideoInputSourceType__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__AllGlobalBroadcasts__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 9:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__AllGlobalBroadcasts__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 12:
			{
				__StateStack.Push(18);
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpfv__AllGlobalBroadcasts__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				TArray<FDataTableRowHandle>  __Local__42 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__GlobalChannels__pf) : (__Local__42)));
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, bpv__MaxGlobalChannel__pf);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpfv__AllGlobalBroadcasts__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				TArray<FDataTableRowHandle>  __Local__43 = {};
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(((::IsValid(bpfv__CallFunc_Array_Get_Item__pf)) ? (bpfv__CallFunc_Array_Get_Item__pf->bpv__GlobalChannels__pf) : (__Local__43)));
				bpv__MaxGlobalChannel__pf = bpfv__CallFunc_Array_LastIndex_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpv__MaxGlobalChannel__pf = 0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpv__InputSources__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpfv__AllGlobalBroadcasts__pf, bpfv__CallFunc_Array_Get_Item_1__pf.bpv__GlobalMediaBroadcast_20_07D934C24E0187CB8BCCF5A880D6F436__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 10;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ATV_BP_C__pf2665521898::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MediaTexture /Game/ACOptimizedTV/ACOptimizedTV_Media/MT_NoSource.MT_NoSource 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MediaTexture /Game/ACOptimizedTV/ACOptimizedTV_Media/MT_BlankScreen.MT_BlankScreen 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/ACOptimizedTV/ACOptimizedTV_Materials/M_TV_Screen.M_TV_Screen 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ATV_BP_C__pf2665521898::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{145, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{148, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{149, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaSoundComponent 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Engine/EngineSounds/Master.Master 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaTexture 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaSource 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaPlaylist 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaPlayer 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTable 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DataTableFunctionLibrary 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BillboardComponent 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ACOptimizedTV/ACOptimizedTV_Textures/T_BroadcastIcon_D.T_BroadcastIcon_D 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/ACOptimizedTV/ACOptimizedTV_Blueprints/GlobalMediaBroadcast.GlobalMediaBroadcast_C 
		{152, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoParams.VideoParams 
		{153, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSource.VideoInputSource 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ACOptimizedTV/ACOptimizedTV_Blueprints/VideoInputSourceType.VideoInputSourceType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ATV_BP_C__pf2665521898
{
	FRegisterHelper__ATV_BP_C__pf2665521898()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ACOptimizedTV/ACOptimizedTV_Blueprints/TV_BP"), &ATV_BP_C__pf2665521898::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ATV_BP_C__pf2665521898 Instance;
};
FRegisterHelper__ATV_BP_C__pf2665521898 FRegisterHelper__ATV_BP_C__pf2665521898::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
