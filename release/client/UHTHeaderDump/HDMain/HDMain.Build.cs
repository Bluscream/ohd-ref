using UnrealBuildTool;

public class HDMain : ModuleRules {
    public HDMain(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ArcVehicles",
            "Core",
            "CoreUObject",
            "DonkehFramework",
            "DonkehFrameworkAnim",
            "DonkehFrameworkComms",
            "DonkehFrameworkUI",
            "Engine",
            "GOAPNPC",
            "HDCoreUGC",
            "NavigationSystem",
            "SlateCore",
            "Tinkerbox",
            "UMG",
        });
    }
}
