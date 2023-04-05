// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LyraGameTarget : TargetRules
{
    public LyraGameTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        
        ExtraModuleNames.AddRange(new [] { "LyraGame" });
        
        ApplySharedLyraTargetSettings(this);
    }

    internal static void ApplySharedLyraTargetSettings(TargetRules Target)
    {
        // Matt: Omitted most target configuration based on build environment.
        if (Target.BuildEnvironment == TargetBuildEnvironment.Unique)
        {
            Target.bUseLoggingInShipping = true;
        }
    }
}