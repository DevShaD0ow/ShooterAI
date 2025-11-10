// Fichier: TP3ShootTarget.cs (À modifier)

using UnrealBuildTool;
using System.Collections.Generic;

public class TP3ShootTarget : TargetRules
{
	public TP3ShootTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("TP3Shoot");
	}
}