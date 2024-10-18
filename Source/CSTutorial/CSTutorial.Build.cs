// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CSTutorial : ModuleRules
{
	public CSTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
		PrivateIncludePaths.AddRange(new string[] { "CSTutorial/Private" });
		PublicIncludePaths.AddRange(new string[] { "CSTutorial/Public" });
		PublicIncludePaths.AddRange(new string[] { "CSTutorial/Public/Data" });
    }
}
