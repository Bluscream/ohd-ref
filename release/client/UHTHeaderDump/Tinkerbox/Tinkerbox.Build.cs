using UnrealBuildTool;

public class Tinkerbox : ModuleRules {
    public Tinkerbox(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DonkehFramework",
            "DonkehFrameworkUI",
            "Engine",
            "InputCore",
            "RCON",
            "Slate",
            "UMG",
        });
    }
}
