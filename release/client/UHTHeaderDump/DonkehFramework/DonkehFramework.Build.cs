using UnrealBuildTool;

public class DonkehFramework : ModuleRules {
    public DonkehFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AssetRegistry",
            "Core",
            "CoreUObject",
            "DonkehFrameworkUI",
            "Engine",
            "NavigationSystem",
            "OnlineSubsystemUtils",
            "UMG",
        });
    }
}
