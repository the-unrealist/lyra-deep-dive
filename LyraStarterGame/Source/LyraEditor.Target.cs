// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LyraEditorTarget : TargetRules
{
	public LyraEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		ExtraModuleNames.AddRange(new[] { "LyraGame", "LyraEditor" });
		
		LyraGameTarget.ApplySharedLyraTargetSettings(this);
		
		// This is used for touch screen development along with the "Unreal Remote 2" app
		// Matt: https://docs.unrealengine.com/5.1/en-US/using-the-remote-session-plugin-for-ios-development-in-unreal-engine/
		EnablePlugins.Add("RemoteSession");
	}
}