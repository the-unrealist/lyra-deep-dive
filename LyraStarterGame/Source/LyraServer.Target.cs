// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class LyraServerTarget : TargetRules
{
	public LyraServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		ExtraModuleNames.AddRange(new[] { "LyraGame" });

		LyraGameTarget.ApplySharedLyraTargetSettings(this);
		
		// Matt: This turns on asserts in test and shipping builds.
		bUseChecksInShipping = true;
	}
}