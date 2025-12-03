// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShooterAnt : ModuleRules
{
	public ShooterAnt(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"Niagara"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ShooterAnt",
			"ShooterAnt/Variant_Platforming",
			"ShooterAnt/Variant_Platforming/Animation",
			"ShooterAnt/Variant_Combat",
			"ShooterAnt/Variant_Combat/AI",
			"ShooterAnt/Variant_Combat/Animation",
			"ShooterAnt/Variant_Combat/Gameplay",
			"ShooterAnt/Variant_Combat/Interfaces",
			"ShooterAnt/Variant_Combat/UI",
			"ShooterAnt/Variant_SideScrolling",
			"ShooterAnt/Variant_SideScrolling/AI",
			"ShooterAnt/Variant_SideScrolling/Gameplay",
			"ShooterAnt/Variant_SideScrolling/Interfaces",
			"ShooterAnt/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
