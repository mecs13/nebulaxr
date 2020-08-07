#include "NativizedAssets.h"
#include "BP_Paticle_wind_settings__pf321031355.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
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
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Interface_Wind_Particle_True__pf3628915390.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/WindDirectionalSource.h"
#include "Runtime/Engine/Classes/Components/WindDirectionalSourceComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Paticle_wind_settings_C__pf321031355::ABP_Paticle_wind_settings_C__pf321031355(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Billboard__pf = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	bpv__Arrow__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	RootComponent = bpv__Billboard__pf;
	bpv__Billboard__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Billboard__pf->Sprite = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(ABP_Paticle_wind_settings_C__pf321031355::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__Billboard__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__0 = FVector(2.000000, 2.000000, 2.000000);
	static TWeakFieldPtr<FProperty> __Local__2{};
	const FProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Billboard__pf), false, 0));
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__Billboard__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->ArrowColor = FColor(0, 153, 255, 255);
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__Arrow__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__3 = FVector(2.000000, 2.000000, 2.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Arrow__pf), false, 0));
	bpv__Update__pf = true;
	bpv__Windxinxscene__pfTT = nullptr;
	bpv__IntansityxWindxMultiplay__pfTT = 0.000000f;
	bpv__speedxwind__pfT = 0.200000f;
	bpv__windxrotationxHorizontal__pfTT = 0.000000f;
	bpv__Gravity__pf = 0.000000f;
	bpv__CurrentxAceleratexPaticle__pfTT = FVector(0.000000, 0.000000, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__4 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Paticle_wind_settings_C__pf321031355::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Billboard__pf)
	{
		bpv__Billboard__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Paticle_wind_settings_C__pf321031355::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_UInterface_Wind_Particle_True_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInterface_Wind_Particle_True_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__5 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_REMOVED_39710BEB46ABF170DC28649260A606DB"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	static TWeakFieldPtr<FProperty> __Local__7{};
	const FProperty* __Local__6 = __Local__7.Get();
	if (nullptr == __Local__6)
	{
		__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__6);
		__Local__7 = __Local__6;
	}
	(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__5), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Paticle_wind_settings_C__pf321031355::bpf__UserConstructionScript__pf()
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_4__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_5__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_6__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_7__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_8__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_9__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_10__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_11__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_12__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_13__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_14__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_15__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue_16__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	TArray<AActor*> bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	TArray<UParticleSystemComponent*> bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UParticleSystemComponent* bpfv__CallFunc_Array_Get_Item_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_5__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_6__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_7__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_10__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_11__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_12__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_13__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_14__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_15__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_AddRelativeLocation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_AddRelativeLocation_SweepHitResult_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(22);
				__StateStack.Push(20);
				__StateStack.Push(19);
			}
		case 2:
			{
				bpv__Update__pf = true;
			}
		case 3:
			{
				(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsWithInterface(this, UInterface_Wind_Particle_True_C::StaticClass(), /*out*/ bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
			}
		case 4:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf = false;
			}
		case 5:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable_1__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable_1__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 9:
			{
				__StateStack.Push(24);
			}
		case 10:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 11:
			{
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = 0;
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, bpfv__CallFunc_Array_Length_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable_1__pf;
			}
		case 15:
			{
				__StateStack.Push(25);
			}
		case 16:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_15__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 0.000000, 11.250000, true, false);
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_16__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 348.750000, 360.000000, true, false);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_InRange_FloatFloat_ReturnValue_16__pf, bpfv__CallFunc_InRange_FloatFloat_ReturnValue_15__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_11__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 0.000000, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_11__pf);
				}
			}
		case 18:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_11__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 0.000000, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_11__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__Windxinxscene__pfTT) && ::IsValid((*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))))
				{
					(*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))->UWindDirectionalSourceComponent::SetSpeed(bpv__speedxwind__pfT);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__windxrotationxHorizontal__pfTT);
				if(::IsValid(bpv__Windxinxscene__pfTT) && ::IsValid((*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))))
				{
					(*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 21:
			{
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__windxrotationxHorizontal__pfTT);
				if(::IsValid(bpv__Arrow__pf))
				{
					bpv__Arrow__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				if(::IsValid(bpv__Windxinxscene__pfTT) && ::IsValid((*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))))
				{
					(*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))->USceneComponent::K2_AddRelativeLocation(FVector(0.000000,0.000000,50.000000), false, /*out*/ bpfv__CallFunc_K2_AddRelativeLocation_SweepHitResult_1__pf, false);
				}
			}
		case 23:
			{
				if(::IsValid(bpv__Windxinxscene__pfTT) && ::IsValid((*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))))
				{
					(*(AccessPrivateProperty<UWindDirectionalSourceComponent* >((bpv__Windxinxscene__pfTT), AWindDirectionalSource::__PPO__Component() )))->USceneComponent::K2_AddRelativeLocation(FVector(0.000000,0.000000,-50.000000), false, /*out*/ bpfv__CallFunc_K2_AddRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable_1__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 13;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_14__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 11.250000, 33.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_14__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_14__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_14__pf);
				}
			}
		case 28:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_14__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_14__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_13__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 33.750000, 56.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_13__pf)
				{
					__CurrentState = 32;
					break;
				}
			}
		case 30:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_10__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_10__pf);
				}
			}
		case 31:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_10__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_10__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_12__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 56.250000, 78.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_12__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 33:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_13__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_13__pf);
				}
			}
		case 34:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_13__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_13__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_11__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 78.750000, 101.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_11__pf)
				{
					__CurrentState = 38;
					break;
				}
			}
		case 36:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_9__pf = UKismetMathLibrary::MakeVector(0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_9__pf);
				}
			}
		case 37:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_9__pf = UKismetMathLibrary::MakeVector(0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_9__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_10__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 101.250000, 123.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_10__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 39:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_15__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_15__pf);
				}
			}
		case 40:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_15__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_15__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_9__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 123.750000, 146.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_9__pf)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 42:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_8__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_8__pf);
				}
			}
		case 43:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_8__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_8__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_8__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 146.250000, 168.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_8__pf)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 45:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_12__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_12__pf);
				}
			}
		case 46:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_12__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_12__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 168.750000, 191.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_7__pf)
				{
					__CurrentState = 50;
					break;
				}
			}
		case 48:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_7__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, 0.000000, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_7__pf);
				}
			}
		case 49:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_7__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, 0.000000, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_7__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 191.250000, 213.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_4__pf)
				{
					__CurrentState = 53;
					break;
				}
			}
		case 51:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_6__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_6__pf);
				}
			}
		case 52:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_6__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_6__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 213.750000, 236.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 54:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_3__pf);
				}
			}
		case 55:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_3__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 236.250000, 258.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 59;
					break;
				}
			}
		case 57:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_5__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_5__pf);
				}
			}
		case 58:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_5__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_5__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 258.750000, 281.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 62;
					break;
				}
			}
		case 60:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue__pf);
				}
			}
		case 61:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 281.250000, 303.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_6__pf)
				{
					__CurrentState = 65;
					break;
				}
			}
		case 63:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_2__pf);
				}
			}
		case 64:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 303.750000, 326.250000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue_5__pf)
				{
					__CurrentState = 68;
					break;
				}
			}
		case 66:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				}
			}
		case 67:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf = UKismetMathLibrary::InRange_FloatFloat(bpv__windxrotationxHorizontal__pfTT, 326.250000, 348.750000, true, false);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsWithInterface_OutActors__pf, bpfv__Temp_int_Array_Index_Variable_1__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_Array_Get_Item__pf->AActor::K2_GetComponentsByClass(UParticleSystemComponent::StaticClass())).Get<UParticleSystemComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_K2_GetComponentsByClass_ReturnValue__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_4__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->SetVectorParameter(FName(TEXT("Wind")), bpfv__CallFunc_MakeVector_ReturnValue_4__pf);
				}
			}
		case 70:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, -250.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__speedxwind__pfT, 250.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpv__IntansityxWindxMultiplay__pfTT);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_4__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf, bpv__Gravity__pf);
				bpv__CurrentxAceleratexPaticle__pfTT = bpfv__CallFunc_MakeVector_ReturnValue_4__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Paticle_wind_settings_C__pf321031355::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Particles_Wind_Control_System/Textures/T_particles.T_particles 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Paticle_wind_settings_C__pf321031355::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BillboardComponent 
		{71, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.WindDirectionalSource 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.WindDirectionalSourceComponent 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Particles_Wind_Control_System/Blueprints/Components/Interface_Wind_Particle_True.Interface_Wind_Particle_True_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Paticle_wind_settings_C__pf321031355
{
	FRegisterHelper__ABP_Paticle_wind_settings_C__pf321031355()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Particles_Wind_Control_System/Blueprints/BP_Paticle_wind_settings"), &ABP_Paticle_wind_settings_C__pf321031355::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Paticle_wind_settings_C__pf321031355 Instance;
};
FRegisterHelper__ABP_Paticle_wind_settings_C__pf321031355 FRegisterHelper__ABP_Paticle_wind_settings_C__pf321031355::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
