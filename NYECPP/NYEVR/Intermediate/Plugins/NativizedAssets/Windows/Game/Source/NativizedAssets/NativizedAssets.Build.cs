// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivatePCHHeaderFile = "Private/NativizedAssets.h";
		bLegacyPublicIncludePaths = Target.bLegacyPublicIncludePaths;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine", "NYEVR" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "MediaAssets", "CableComponent", "ClothingSystemRuntimeNv", "HeadMountedDisplay", "InputCore", "NavigationSystem", "UMG", "AnimGraphRuntime", "SteamVR", "MediaUtils", "SlateCore", "Landscape", "StaticMeshDescription", "MeshDescription", "AudioPlatformConfiguration", "AudioExtensions", "AIModule", "GameplayTasks", "GameplayTags", "ClothingSystemRuntimeInterface", "PropertyPath", "MovieScene", "Slate", "AudioMixer" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
