// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GlitchyFPExample : ModuleRules
{
	public GlitchyFPExample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
