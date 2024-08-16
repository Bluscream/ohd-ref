using UnrealBuildTool;

public class DonkehFrameworkAnim : ModuleRules {
    public DonkehFrameworkAnim(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DonkehFramework",
            "Engine",
        });
    }
}
