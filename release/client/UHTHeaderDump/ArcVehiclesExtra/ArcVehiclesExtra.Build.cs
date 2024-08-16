using UnrealBuildTool;

public class ArcVehiclesExtra : ModuleRules {
    public ArcVehiclesExtra(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ArcVehicles",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
