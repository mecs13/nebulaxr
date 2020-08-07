#include "NativizedAssets.h"
#include "MotionControllerPawn__pf563933975.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "ScoreHUD__pf2597647882.h"
#include "Teleport__pf643803050.h"
#include "../Plugins/Runtime/CableComponent/Source/CableComponent/Classes/CableComponent.h"
#include "PlayerSaveGameInfo__pf205484891.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "PS_TS_Fireworks_Burst_Palm__pf2132744816.h"
#include "BP_BaseBow__pf4190551111.h"
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
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Components/WidgetInteractionComponent.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AMotionControllerPawn_C__pf563933975::AMotionControllerPawn_C__pf563933975(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		static TWeakFieldPtr<FProperty> __Local__4{};
		const FProperty* __Local__3 = __Local__4.Get();
		if (nullptr == __Local__3)
		{
			__Local__3 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__3);
			__Local__4 = __Local__3;
		}
		(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		static TWeakFieldPtr<FProperty> __Local__6{};
		const FProperty* __Local__5 = __Local__6.Get();
		if (nullptr == __Local__5)
		{
			__Local__5 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__5);
			__Local__6 = __Local__5;
		}
		(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__8{};
		const FProperty* __Local__7 = __Local__8.Get();
		if (nullptr == __Local__7)
		{
			__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__7);
			__Local__8 = __Local__7;
		}
		(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		auto& __Local__9 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__9 = __Local__0;
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__VROrigin__pf = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__ScoreHUD__pf = CreateDefaultSubobject<UWidgetComponent>(TEXT("ScoreHUD"));
	bpv__TeleportMenu__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("TeleportMenu"));
	bpv__Grapple__pf = CreateDefaultSubobject<UCableComponent>(TEXT("Grapple"));
	bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	static TWeakFieldPtr<FProperty> __Local__13{};
	const FProperty* __Local__12 = __Local__13.Get();
	if (nullptr == __Local__12)
	{
		__Local__12 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__12);
		__Local__13 = __Local__12;
	}
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__VROrigin__pf), false, 0));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__Camera__pf), false, 0));
	bpv__ScoreHUD__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ScoreHUD__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<UUserWidget>  >((bpv__ScoreHUD__pf), UWidgetComponent::__PPO__WidgetClass() )));
	__Local__14 = UScoreHUD_C__pf2597647882::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<FIntPoint >((bpv__ScoreHUD__pf), UWidgetComponent::__PPO__DrawSize() )));
	__Local__15.X = 1920;
	__Local__15.Y = 1080;
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__ScoreHUD__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(200.000000, 0.000048, 140.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__ScoreHUD__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(0.000000, 180.000000, 0.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__ScoreHUD__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__18 = FVector(1.000000, 0.500000, 0.500000);
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__ScoreHUD__pf), true, 0));
	bpv__TeleportMenu__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TeleportMenu__pf->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__TeleportMenu__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__19 = ATeleport_C__pf643803050::StaticClass();
	auto& __Local__20 = (*(AccessPrivateProperty<AActor* >((bpv__TeleportMenu__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__20 = CastChecked<AActor>(CastChecked<UDynamicClass>(AMotionControllerPawn_C__pf563933975::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__TeleportMenu__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(140.000000, 0.000033, 0.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<FRotator >((bpv__TeleportMenu__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__22 = FRotator(0.000000, 180.000000, 0.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<FVector >((bpv__TeleportMenu__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__23 = FVector(1.000000, 0.250000, 0.250000);
	static TWeakFieldPtr<FProperty> __Local__25{};
	const FProperty* __Local__24 = __Local__25.Get();
	if (nullptr == __Local__24)
	{
		__Local__24 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
		check(__Local__24);
		__Local__25 = __Local__24;
	}
	(((FBoolProperty*)__Local__24)->SetPropertyValue_InContainer((bpv__TeleportMenu__pf), false, 0));
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__TeleportMenu__pf), false, 0));
	bpv__Grapple__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Grapple__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__Grapple__pf), true, 0));
	bpv__bShowChaperone__pf = false;
	bpv__LeftController__pf = nullptr;
	bpv__RightController__pf = nullptr;
	bpv__FadeOutDuration__pf = 0.100000f;
	bpv__FadeInDuration__pf = 0.200000f;
	bpv__IsTeleporting__pf = false;
	bpv__TeleportFadeColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__ThumbDeadzone__pf = 0.700000f;
	bpv__RightStickDown__pf = false;
	bpv__LeftStickDown__pf = false;
	bpv__DefaultPlayerHeight__pf = 180.000000f;
	bpv__UseControllerRollToRotate__pf = false;
	bpv__RotationSpeed__pf = 2.000000f;
	bpv__MovementSpeed__pf = 10.000000f;
	bpv__JumpCount__pf = 5;
	bpv__AmmoCount__pf = 10;
	bpv__Jumps__pf = 0;
	bpv__Score__pf = 0;
	bpv__GameCurrency__pf = 0;
	bpv__HookLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__HookAttached__pf = false;
	bpv__HookMoveFinished__pf = false;
	bpv__OutlineRange__pf = 0.000000f;
	bpv__SaverSubClass__pf = nullptr;
	bpv__Purchased__pf = false;
	auto& __Local__26 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__26 = __Local__2;
	auto& __Local__27 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__27 = __Local__1;
	auto& __Local__28 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__28 = __Local__0;
	bUseControllerRotationYaw = false;
	auto& __Local__29 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__29 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__VROrigin__pf)
	{
		bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ScoreHUD__pf)
	{
		bpv__ScoreHUD__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TeleportMenu__pf)
	{
		bpv__TeleportMenu__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Grapple__pf)
	{
		bpv__Grapple__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UScoreHUD_C__pf2597647882::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ATeleport_C__pf643803050::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPlayerSaveGameInfo_C__pf205484891::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MotionController_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APS_TS_Fireworks_Burst_Palm_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_BaseBow_C__pf4190551111::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ATeleport_C__pf643803050::StaticClass()->GetDefaultObject();
	auto __Local__30 = NewObject<ATeleport_C__pf643803050>(InDynamicClass, ATeleport_C__pf643803050::StaticClass(), TEXT("TeleportMenu_GEN_VARIABLE_Teleport_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__30);
	auto& __Local__31 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__30), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__31 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto __Local__32 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__32);
	auto __Local__33 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__33);
	auto __Local__34 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__34);
	auto __Local__35 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__35);
	static TWeakFieldPtr<FProperty> __Local__37{};
	const FProperty* __Local__36 = __Local__37.Get();
	if (nullptr == __Local__36)
	{
		__Local__36 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__36);
		__Local__37 = __Local__36;
	}
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__32), false, 0));
	__Local__33->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__33->InputActionDelegateBindings.AddUninitialized(7);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__33->InputActionDelegateBindings.GetData(), 7);
	auto& __Local__38 = __Local__33->InputActionDelegateBindings[0];
	__Local__38.InputActionName = FName(TEXT("GrabLeft"));
	__Local__38.InputKeyEvent = EInputEvent::IE_Released;
	__Local__38.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_6"));
	auto& __Local__39 = __Local__33->InputActionDelegateBindings[1];
	__Local__39.InputActionName = FName(TEXT("GrabLeft"));
	__Local__39.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_5"));
	auto& __Local__40 = __Local__33->InputActionDelegateBindings[2];
	__Local__40.InputActionName = FName(TEXT("Jump"));
	__Local__40.InputKeyEvent = EInputEvent::IE_Released;
	__Local__40.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_2"));
	__Local__40.bOverrideParentBinding = false;
	auto& __Local__41 = __Local__33->InputActionDelegateBindings[3];
	__Local__41.InputActionName = FName(TEXT("Jump"));
	__Local__41.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_1"));
	__Local__41.bOverrideParentBinding = false;
	auto& __Local__42 = __Local__33->InputActionDelegateBindings[4];
	__Local__42.InputActionName = FName(TEXT("GrabRight"));
	__Local__42.InputKeyEvent = EInputEvent::IE_Released;
	__Local__42.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_4"));
	auto& __Local__43 = __Local__33->InputActionDelegateBindings[5];
	__Local__43.InputActionName = FName(TEXT("GrabRight"));
	__Local__43.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_3"));
	auto& __Local__44 = __Local__33->InputActionDelegateBindings[6];
	__Local__44.InputActionName = FName(TEXT("Menu"));
	__Local__44.FunctionNameToBind = FName(TEXT("InpActEvt_Menu_K2Node_InputActionEvent_0"));
	__Local__34->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__34->InputKeyDelegateBindings.AddUninitialized(2);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__34->InputKeyDelegateBindings.GetData(), 2);
	auto& __Local__45 = __Local__34->InputKeyDelegateBindings[0];
	__Local__45.InputChord.Key = FKey(TEXT("E"));
	__Local__45.FunctionNameToBind = FName(TEXT("InpActEvt_E_K2Node_InputKeyEvent_1"));
	auto& __Local__46 = __Local__34->InputKeyDelegateBindings[1];
	__Local__46.InputChord.Key = FKey(TEXT("Z"));
	__Local__46.FunctionNameToBind = FName(TEXT("InpActEvt_Z_K2Node_InputKeyEvent_0"));
	__Local__35->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__35->InputAxisDelegateBindings.AddUninitialized(7);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__35->InputAxisDelegateBindings.GetData(), 7);
	auto& __Local__47 = __Local__35->InputAxisDelegateBindings[0];
	__Local__47.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__47.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3"));
	auto& __Local__48 = __Local__35->InputAxisDelegateBindings[1];
	__Local__48.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__48.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2"));
	auto& __Local__49 = __Local__35->InputAxisDelegateBindings[2];
	__Local__49.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__49.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1"));
	auto& __Local__50 = __Local__35->InputAxisDelegateBindings[3];
	__Local__50.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__50.bOverrideParentBinding = false;
	auto& __Local__51 = __Local__35->InputAxisDelegateBindings[4];
	__Local__51.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__51.bOverrideParentBinding = false;
	auto& __Local__52 = __Local__35->InputAxisDelegateBindings[5];
	__Local__52.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__52.bOverrideParentBinding = false;
	auto& __Local__53 = __Local__35->InputAxisDelegateBindings[6];
	__Local__53.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__53.bOverrideParentBinding = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FName bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	UPlayerSaveGameInfo_C__pf205484891* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_2__pf{};
	uint8 bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	ABP_BaseBow_C__pf4190551111* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 37:
			{
				__CurrentState = 38;
				break;
			}
		case 38:
			{
				__StateStack.Push(73);
				__StateStack.Push(50);
				__StateStack.Push(40);
			}
		case 39:
			{
				bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("OculusHMD")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 75;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("SteamVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 75;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("PSVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 76;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				__StateStack.Push(45);
			}
		case 41:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 42:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 43:
			{
				bpv__LeftController__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 44:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 46:
			{
				bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralByte(1);
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, FName(TEXT("Hand")), bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf);
			}
		case 47:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 48:
			{
				bpv__RightController__pf = b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
			}
		case 49:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 51:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->CableLength = 0.000000;
				}
			}
		case 52:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->CableWidth = 6.000000;
				}
			}
		case 53:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->EndLocation = FVector(0.000000,0.000000,0.000000);
				}
			}
		case 54:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("test")), 0);
			}
		case 55:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 56:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("test")), 0);
			}
		case 57:
			{
				bpv__SaverSubClass__pf = bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf;
			}
		case 58:
			{
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(bpv__SaverSubClass__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 59:
			{
				int32  __Local__54 = 0;
				bpv__GameCurrency__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf->bpv__GameCurrency__pf) : (__Local__54));
			}
		case 60:
			{
				int32  __Local__55 = 0;
				bpv__Score__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf->bpv__Score__pf) : (__Local__55));
			}
		case 61:
			{
				int32  __Local__56 = 0;
				bpv__JumpCount__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf->bpv__JumpCount__pf) : (__Local__56));
			}
		case 62:
			{
				int32  __Local__57 = 0;
				bpv__AmmoCount__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_2__pf->bpv__AmmoCount__pf) : (__Local__57));
			}
		case 63:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Loaded Information")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UPlayerSaveGameInfo_C__pf205484891>(UGameplayStatics::CreateSaveGameObject(UPlayerSaveGameInfo_C__pf205484891::StaticClass()), ECastCheckedType::NullAllowed);
			}
		case 65:
			{
				bpv__SaverSubClass__pf = bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf;
			}
		case 66:
			{
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(bpv__SaverSubClass__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 67:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf->bpv__GameCurrency__pf = 0;
				}
			}
		case 68:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf->bpv__Score__pf = 0;
				}
			}
		case 69:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf->bpv__JumpCount__pf = 0;
				}
			}
		case 70:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_1__pf->bpv__AmmoCount__pf = 0;
				}
			}
		case 71:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_2__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverSubClass__pf, FString(TEXT("test")), 0);
			}
		case 72:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Created & Saved Information")), bpfv__CallFunc_SaveGameToSlot_ReturnValue_2__pf, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 73:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_X__pf, 100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, b0l__CallFunc_BreakVector_Y__pf, b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_BaseBow_C__pf4190551111::StaticClass(), bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 74:
			{
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_X__pf, 100.000000);
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, b0l__CallFunc_BreakVector_Y__pf, b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToTransform(bpfv__CallFunc_MakeVector_ReturnValue_1__pf);
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<ABP_BaseBow_C__pf4190551111>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_Conv_VectorToTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 75:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 76:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
			}
		case 77:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__DefaultPlayerHeight__pf);
				if(::IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddLocalOffset(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
			}
		case 78:
			{
				bpv__UseControllerRollToRotate__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 170:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__JumpCount__pf, 1);
				bpv__JumpCount__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 171:
			{
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(bpv__SaverSubClass__pf);
				b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 172:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_5__pf->bpv__JumpCount__pf = bpv__JumpCount__pf;
				}
			}
		case 173:
			{
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_3__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverSubClass__pf, FString(TEXT("test")), 0);
				__CurrentState = -1;
				break;
			}
		case 174:
			{
				__CurrentState = 170;
				break;
			}
		case 175:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__AmmoCount__pf, 1);
				bpv__AmmoCount__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
			}
		case 176:
			{
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(bpv__SaverSubClass__pf);
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 177:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_4__pf->bpv__AmmoCount__pf = bpv__AmmoCount__pf;
				}
				__CurrentState = 173;
				break;
			}
		case 178:
			{
				__CurrentState = 175;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 14:
			{
				if (!b0l__Temp_bool_Variable__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpv__ScoreHUD__pf))
				{
					bpv__ScoreHUD__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__TeleportMenu__pf))
				{
					bpv__TeleportMenu__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 17:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WidgetInteraction__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WidgetInteraction__pf->bShowDebug = true;
				}
			}
		case 18:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__Pointer__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__Pointer__pf->USceneComponent::SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__ScoreHUD__pf))
				{
					bpv__ScoreHUD__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 20:
			{
				if(::IsValid(bpv__TeleportMenu__pf))
				{
					bpv__TeleportMenu__pf->USceneComponent::SetVisibility(false, false);
				}
			}
		case 21:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WidgetInteraction__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__WidgetInteraction__pf->bShowDebug = false;
				}
			}
		case 22:
			{
				if(::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf) && ::IsValid(b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__Pointer__pf))
				{
					b0l__CallFunc_FinishSpawningActor_ReturnValue_1__pf->bpv__Pointer__pf->USceneComponent::SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
	if(::IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputActionEvent_Key_4__pf;
	if(::IsValid(bpv__RightController__pf))
	{
		bpv__RightController__pf->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 169);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(-6251.548828,45316.550781,75685.421875), FRotator(0.000000,-20.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_2__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 168);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(FVector(-129.925110,42259.343750,75115.156250), FRotator(0.000000,-20.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue_1__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult_1__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_3__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 167);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue_3__pf = UKismetMathLibrary::MakeTransform(FVector(922.192200,49553.785156,74500.070313), FRotator(0.000000,-20.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue_2__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_3__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult_2__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_4__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 166);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue_4__pf = UKismetMathLibrary::MakeTransform(FVector(6684.085938,46771.273438,74069.015625), FRotator(0.000000,-20.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue_3__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_4__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult_3__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_6__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue_5__pf{};
	check(bpp__EntryPoint__pf == 165);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue_6__pf = UKismetMathLibrary::MakeTransform(FVector(8908.241211,39153.359375,74348.000000), FRotator(0.000000,-20.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue_5__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_6__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult_5__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_5__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 164);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue_5__pf = UKismetMathLibrary::MakeTransform(FVector(3951.307617,42136.667969,75307.296875), FRotator(0.000000,-20.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue_4__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_5__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult_4__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 163);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(FVector(-294.562195,40118.820313,75790.773438), false, /*out*/ b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_7__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue_6__pf{};
	check(bpp__EntryPoint__pf == 162);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeTransform_ReturnValue_7__pf = UKismetMathLibrary::MakeTransform(FVector(3226.779785,37123.804688,74503.046875), FRotator(0.000000,-70.000000,0.000000), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue_6__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_MakeTransform_ReturnValue_7__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult_6__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_13(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsFalling_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_IsFalling_ReturnValue_1__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 121:
			{
				__CurrentState = 122;
				break;
			}
		case 122:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_1__pf;
			}
		case 123:
			{
				__StateStack.Push(136);
			}
		case 124:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__JumpCount__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 125:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					bpfv__CallFunc_IsFalling_ReturnValue_1__pf = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->IsFalling();
				}
				if (!bpfv__CallFunc_IsFalling_ReturnValue_1__pf)
				{
					__CurrentState = 126;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 126:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = Cast<AMotionControllerPawn_C__pf563933975>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 127:
			{
				USaveGame*  __Local__58 = ((USaveGame*)nullptr);
				b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__SaverSubClass__pf) : (__Local__58)));
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 128:
			{
				int32  __Local__59 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf->bpv__JumpCount__pf) : (__Local__59)), 1);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue_1__pf;
			}
		case 129:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info_3__pf->bpv__JumpCount__pf = b0l__Temp_int_Variable_1__pf;
				}
			}
		case 130:
			{
				int32  __Local__60 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__JumpCount__pf) : (__Local__60)), 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 131:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf))
				{
					b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__JumpCount__pf = b0l__Temp_int_Variable__pf;
				}
			}
		case 132:
			{
				USaveGame*  __Local__61 = ((USaveGame*)nullptr);
				bpfv__CallFunc_SaveGameToSlot_ReturnValue_1__pf = UGameplayStatics::SaveGameToSlot(((::IsValid(b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf)) ? (b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf->bpv__SaverSubClass__pf) : (__Local__61)), FString(TEXT("test")), 0);
			}
		case 133:
			{
				Jump();
			}
		case 134:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					bpfv__CallFunc_IsFalling_ReturnValue__pf = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->IsFalling();
				}
				if (!bpfv__CallFunc_IsFalling_ReturnValue__pf)
				{
					__CurrentState = 135;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 135:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Jumps__pf, 1);
				bpv__Jumps__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 136:
			{
				if (!bpv__HookAttached__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 137:
			{
				LaunchCharacter(FVector(0.000000,0.000000,750.000000), false, false);
			}
		case 138:
			{
				bpf__StopGrapple__pf();
				__CurrentState = 133;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_14(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 142:
			{
				bpv__HookAttached__pf = true;
			}
		case 143:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				bpv__HookLocation__pf = b0l__CallFunc_BreakHitResult_Location_2__pf;
				__CurrentState = -1;
				break;
			}
		case 148:
			{
				if (!bpv__Purchased__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 149:
			{
				b0l__K2Node_MakeArray_Array_1__pf.SetNum(2, true);
				b0l__K2Node_MakeArray_Array_1__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
				b0l__K2Node_MakeArray_Array_1__pf[1] = EObjectTypeQuery::ObjectTypeQuery2;
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
				}
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf, 5000.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, b0l__K2Node_MakeArray_Array_1__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 150:
			{
				if (!bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf)
				{
					__CurrentState = 151;
					break;
				}
				__CurrentState = 142;
				break;
			}
		case 151:
			{
				bpf__StopGrapple__pf();
				__CurrentState = -1;
				break;
			}
		case 155:
			{
				__CurrentState = 148;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_15(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf{};
	FRotator bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf{};
	FRotator bpfv__CallFunc_GetRotationFromInput_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	FVector bpfv__CallFunc_VInterpTo_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 30:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 31;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 32:
			{
				bpf__TraceStop__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 35:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 90:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 33;
				break;
			}
		case 95:
			{
				__CurrentState = 96;
				break;
			}
		case 96:
			{
				__StateStack.Push(99);
				__StateStack.Push(105);
				__StateStack.Push(113);
			}
		case 97:
			{
				bool  __Local__62 = false;
				if (!((::IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__62)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 98:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_X")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_Y")));
				bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf = bpf__GetRotationFromInput__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__LeftController__pf);
				if(::IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpv__TeleportRotation__pf = bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 99:
			{
				if (!bpv__HookAttached__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 100:
			{
				if (!bpv__HookMoveFinished__pf)
				{
					__CurrentState = 103;
					break;
				}
			}
		case 101:
			{
				bpf__MoveGrappledPlayer__pf();
			}
		case 102:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__Grapple__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_VInterpTo_ReturnValue__pf = UKismetMathLibrary::VInterpTo(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpv__HookLocation__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, 250.000000);
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_VInterpTo_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 103:
			{
				bpf__MoveRope__pf(/*out*/ b0l__CallFunc_MoveRope_ReachedLocation__pf);
			}
		case 104:
			{
				bpv__HookMoveFinished__pf = b0l__CallFunc_MoveRope_ReachedLocation__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 105:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery2;
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, bpv__OutlineRange__pf);
				if(::IsValid(bpv__Camera__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf);
				bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue_1__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable_1__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 106:
			{
				if (!bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue_1__pf)
				{
					__CurrentState = 110;
					break;
				}
			}
		case 107:
			{
				UGameplayStatics::BreakHitResult(bpv__WorldDynamic__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b0l__CallFunc_BreakHitResult_HitActor__pf, b0l__CallFunc_BreakHitResult_HitActor_1__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 109;
					break;
				}
			}
		case 108:
			{
				bpv__WorldDynamic__pf = b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf;
				__CurrentState = 34;
				break;
			}
		case 109:
			{
				UGameplayStatics::BreakHitResult(bpv__WorldDynamic__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				bpf__TraceStart__pf(b0l__CallFunc_BreakHitResult_HitActor_1__pf, b0l__CallFunc_BreakHitResult_HitActor__pf);
				__CurrentState = 108;
				break;
			}
		case 110:
			{
				__StateStack.Push(30);
			}
		case 111:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 112;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 112:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = 90;
				break;
			}
		case 113:
			{
				bool  __Local__63 = false;
				if (!((::IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__63)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 114:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_Y")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_X")));
				bpfv__CallFunc_GetRotationFromInput_ReturnValue_1__pf = bpf__GetRotationFromInput__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue_2__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue_3__pf, bpv__RightController__pf);
				if(::IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpv__TeleportRotation__pf = bpfv__CallFunc_GetRotationFromInput_ReturnValue_1__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_16(int32 bpp__EntryPoint__pf)
{
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	APS_TS_Fireworks_Burst_Palm_C__pf2132744816* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 156);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, APS_TS_Fireworks_Burst_Palm_C__pf2132744816::StaticClass(), b0l__K2Node_CustomEvent_SpawnTransform__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<APS_TS_Fireworks_Burst_Palm_C__pf2132744816>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, b0l__K2Node_CustomEvent_SpawnTransform__pf), ECastCheckedType::NullAllowed);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 159);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_6__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 139);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_2__pf;
	StopJumping();
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 153);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_5__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__LeftController__pf))
	{
		bpv__LeftController__pf->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 152);
	// optimized KCST_UnconditionalGoto
	bpv__HookAttached__pf = false;
	bpv__HookMoveFinished__pf = false;
	if(::IsValid(bpv__Grapple__pf))
	{
		bpv__Grapple__pf->USceneComponent::SetVisibility(false, false);
	}
	if(::IsValid(bpv__Grapple__pf))
	{
		bpv__Grapple__pf->USceneComponent::K2_SetWorldLocation(FVector(0.000000,0.000000,0.000000), false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult_1__pf, false);
	}
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_21(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 119);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue_1__pf = UKismetMathLibrary::ProjectVectorOnToPlane(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, FVector(0.000000,0.000000,1.000000));
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, bpv__MovementSpeed__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue_1__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
	AActor::K2_AddActorWorldOffset(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf, true, /*out*/ b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult_1__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_22(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 117);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__Camera__pf->USceneComponent::GetRightVector();
	}
	bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue__pf = UKismetMathLibrary::ProjectVectorOnToPlane(bpfv__CallFunc_GetRightVector_ReturnValue__pf, FVector(0.000000,0.000000,1.000000));
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue_1__pf, bpv__MovementSpeed__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
	AActor::K2_AddActorWorldOffset(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, true, /*out*/ b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_23(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 115);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue_2__pf, bpv__RotationSpeed__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	AActor::K2_AddActorWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf, false);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_24(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_TeleportTo_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf{};
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
				if(::IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
			}
		case 3:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__GetTeleportDestination__pf(/*out*/ b0l__CallFunc_GetTeleportDestination_Location__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_Rotation__pf);
				}
				bpfv__CallFunc_K2_TeleportTo_ReturnValue__pf = AActor::K2_TeleportTo(b0l__CallFunc_GetTeleportDestination_Location__pf, b0l__CallFunc_GetTeleportDestination_Rotation__pf);
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetPlayerCameraManager_ReturnValue_1__pf->StartCameraFade(1.000000, 0.000000, bpv__FadeInDuration__pf, bpv__TeleportFadeColor__pf, false, false);
				}
			}
		case 5:
			{
				bpv__IsTeleporting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 79:
			{
				__CurrentState = 80;
				break;
			}
		case 80:
			{
				if (!bpv__IsTeleporting__pf)
				{
					__CurrentState = 81;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 81:
			{
				bool  __Local__64 = false;
				if (!((::IsValid(b0l__K2Node_CustomEvent_MotionController__pf)) ? (b0l__K2Node_CustomEvent_MotionController__pf->bpv__IsValidTeleportDestination__pf) : (__Local__64)))
				{
					__CurrentState = 85;
					break;
				}
			}
		case 82:
			{
				bpv__IsTeleporting__pf = true;
			}
		case 83:
			{
				bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->StartCameraFade(0.000000, 1.000000, bpv__FadeOutDuration__pf, bpv__TeleportFadeColor__pf, false, true);
				}
			}
		case 84:
			{
				UKismetSystemLibrary::Delay(this, bpv__FadeOutDuration__pf, FLatentActionInfo(1, 916982736, TEXT("ExecuteUbergraph_MotionControllerPawn_24"), this));
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_25(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf = Cast<UPlayerSaveGameInfo_C__pf205484891>(bpv__SaverSubClass__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf))
	{
		b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf->bpv__AmmoCount__pf = 10;
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf))
	{
		b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf->bpv__JumpCount__pf = 10;
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf))
	{
		b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf->bpv__Score__pf = 0;
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf))
	{
		b0l__K2Node_DynamicCast_AsPlayer_Save_Game_Info__pf->bpv__GameCurrency__pf = 0;
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverSubClass__pf, FString(TEXT("test")), 0);
	return; //KCST_EndOfThread
}
void AMotionControllerPawn_C__pf563933975::bpf__AddAmmo__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(178);
}
void AMotionControllerPawn_C__pf563933975::bpf__AddJump__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(174);
}
void AMotionControllerPawn_C__pf563933975::bpf__HomeTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(169);
}
void AMotionControllerPawn_C__pf563933975::bpf__TropicalTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(168);
}
void AMotionControllerPawn_C__pf563933975::bpf__SpringTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(167);
}
void AMotionControllerPawn_C__pf563933975::bpf__OrientTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(166);
}
void AMotionControllerPawn_C__pf563933975::bpf__PavilionTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(165);
}
void AMotionControllerPawn_C__pf563933975::bpf__SnowTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(164);
}
void AMotionControllerPawn_C__pf563933975::bpf__LoungeTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(163);
}
void AMotionControllerPawn_C__pf563933975::bpf__DesertTP__pf_Implementation()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(162);
}
void AMotionControllerPawn_C__pf563933975::bpf__Firework__pf_Implementation(FTransform bpp__SpawnTransform__pf)
{
	b0l__K2Node_CustomEvent_SpawnTransform__pf = bpp__SpawnTransform__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_16(156);
}
void AMotionControllerPawn_C__pf563933975::bpf__StopGrapple__pf()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_20(152);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_21(119);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_22(117);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_23(115);
}
void AMotionControllerPawn_C__pf563933975::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_15(95);
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf563933975* bpp__MotionController__pf)
{
	b0l__K2Node_CustomEvent_MotionController__pf = bpp__MotionController__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_24(79);
}
void AMotionControllerPawn_C__pf563933975::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(37);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_Z_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_25(23);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_Menu_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(12);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_Jump_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_13(121);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_18(139);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_E_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_14(155);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(24);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(27);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_19(153);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_17(159);
}
FRotator  AMotionControllerPawn_C__pf563933975::bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf563933975* bpp__Controller__pf)
{
	FRotator bpp__ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakRotator_Roll_1__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch_1__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_BreakRotator_Roll_2__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch_2__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw_2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue_1__pf(EForceInit::ForceInit);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	FRotator  __Local__66 = FRotator(0.000000,0.000000,0.000000);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), ((::IsValid(bpp__Controller__pf)) ? (bpp__Controller__pf->bpv__InitialControllerRotation__pf) : (__Local__66)), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpp__RightAxis__pf);
	if(::IsValid(bpp__Controller__pf) && ::IsValid(bpp__Controller__pf->bpv__MotionController__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__Controller__pf->bpv__MotionController__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__UpAxis__pf, bpp__RightAxis__pf, 0.000000);
	bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf = UKismetMathLibrary::ConvertTransformToRelative(bpfv__CallFunc_MakeTransform_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_MakeVector_ReturnValue__pf, 0.000100);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpp__UpAxis__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw_1__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, bpfv__CallFunc_Abs_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakRotator_Roll_1__pf, 3.000000);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll_2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch_2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw_2__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue_1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw_2__pf);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Normal_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue_1__pf);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue_2__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpv__ThumbDeadzone__pf);
	bpfv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, bpfv__CallFunc_K2_GetActorRotation_ReturnValue_2__pf, bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_SelectRotator_ReturnValue_1__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_MakeRotator_ReturnValue__pf, bpfv__CallFunc_SelectRotator_ReturnValue__pf, bpv__UseControllerRollToRotate__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_SelectRotator_ReturnValue_1__pf;
	return bpp__ReturnValue__pf;
}
void AMotionControllerPawn_C__pf563933975::bpf__MoveRope__pf(/*out*/ bool& bpp__ReachedLocation__pf)
{
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_VInterpTo_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->USceneComponent::SetVisibility(true, false);
				}
			}
		case 2:
			{
				if(::IsValid(bpv__Grapple__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Grapple__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__HookLocation__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 100.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpp__ReachedLocation__pf = true;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				if(::IsValid(bpv__Grapple__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Grapple__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_VInterpTo_ReturnValue__pf = UKismetMathLibrary::VInterpTo(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpv__HookLocation__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, 30.000000);
				if(::IsValid(bpv__Grapple__pf))
				{
					bpv__Grapple__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_VInterpTo_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
			}
		case 5:
			{
				bpp__ReachedLocation__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__MoveGrappledPlayer__pf()
{
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf = UGameplayStatics::GetPlayerPawn(this, 0);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, 250.000000);
	if(::IsValid(bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_GetPlayerPawn_ReturnValue__pf->AActor::K2_GetActorLocation();
	}
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpv__HookLocation__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	LaunchCharacter(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, true, true);
}
void AMotionControllerPawn_C__pf563933975::bpf__TraceStart__pf(AActor* bpp__NewActor__pf, AActor* bpp__OldActor__pf)
{
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue_1__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item_1__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpp__NewActor__pf))
				{
					bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpp__NewActor__pf->AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("line")))).Get<UPrimitiveComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::SetRenderCustomDepth(true);
				}
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpp__OldActor__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpp__OldActor__pf))
				{
					bpfv__CallFunc_GetComponentsByTag_ReturnValue_1__pf = TArrayCaster<UActorComponent*>(bpp__OldActor__pf->AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("line")))).Get<UPrimitiveComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue_1__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->UPrimitiveComponent::SetRenderCustomDepth(false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__TraceStop__pf()
{
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	float bpfv__CallFunc_BreakHitResult_Distance__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	TArray<UPrimitiveComponent*> bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(3);
			}
		case 2:
			{
				UGameplayStatics::BreakHitResult(bpv__WorldDynamic__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_BreakHitResult_HitActor__pf, ((UObject*)nullptr));
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				auto __Local__67 = FHitResult{};
				bpv__WorldDynamic__pf = __Local__67;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				UGameplayStatics::BreakHitResult(bpv__WorldDynamic__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Distance__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(::IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf))
				{
					bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf = TArrayCaster<UActorComponent*>(bpfv__CallFunc_BreakHitResult_HitActor__pf->AActor::GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName(TEXT("line")))).Get<UPrimitiveComponent*>();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetComponentsByTag_ReturnValue__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::SetRenderCustomDepth(false);
				}
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
void AMotionControllerPawn_C__pf563933975::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AMotionControllerPawn_C__pf563933975::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{32, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/CableComponent.CableComponent 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/InputCore.Key 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SaveGame 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetInteractionComponent 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.Vector_NetQuantize 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.Vector_NetQuantizeNormal 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Pawn 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{14, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{57, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Meshes/SyntyBow/Rigged_Bow_Testing.Rigged_Bow_Testing 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CurveFloat 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MovementComponent 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  CurveFloat /Game/Blueprints/Bow/FC_BowStrengthCurve.FC_BowStrengthCurve 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/SyntyBow/SM_Arrow_01.SM_Arrow_01 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ParticleSystem /Game/TS_Fireworks/Particles/PS_TS_Fireworks_Burst_Palm.PS_TS_Fireworks_Burst_Palm 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Score/Icons/jump.jump 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Score/Icons/arrow.arrow 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/Score/Icons/money.money 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /DatasmithContent/Meshes/cylinder.cylinder 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/InputCore.EControllerHand 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Engine/EngineResources/Black.Black 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/RobotoTiny.RobotoTiny 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Engine/EngineVolumetrics/Fogsheet/Materials/T_EV_BlankWhite_01.T_EV_BlankWhite_01 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/EditorMeshes/ArcadeEditorSphere.ArcadeEditorSphere 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/StylizedRoom/Materials/MI_White.MI_White 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Meshes/SyntyBow/Rigged_Bow_Testing_Skeleton.Rigged_Bow_Testing_Skeleton 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlendSpace1D /Game/Meshes/SyntyBow/Bow_ChargedBlend.Bow_ChargedBlend 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Score/ScoreHUD.ScoreHUD_C 
		{107, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/MapData/Teleport.Teleport_C 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/PlayerSaveGameInfo.PlayerSaveGameInfo_C 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/PS_TS_Fireworks_Burst_Palm.PS_TS_Fireworks_Burst_Palm_C 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Bow/BP_BaseBow.BP_BaseBow_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AMotionControllerPawn_C__pf563933975
{
	FRegisterHelper__AMotionControllerPawn_C__pf563933975()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), &AMotionControllerPawn_C__pf563933975::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMotionControllerPawn_C__pf563933975 Instance;
};
FRegisterHelper__AMotionControllerPawn_C__pf563933975 FRegisterHelper__AMotionControllerPawn_C__pf563933975::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
