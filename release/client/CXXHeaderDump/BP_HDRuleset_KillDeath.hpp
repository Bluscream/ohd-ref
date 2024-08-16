#ifndef UE4SS_SDK_BP_HDRuleset_KillDeath_HPP
#define UE4SS_SDK_BP_HDRuleset_KillDeath_HPP

class UBP_HDRuleset_KillDeath_C : public UHDRuleset_KillDeath
{
    char padding_0[0xB0];                                                             // 0x0000 (size: 0x0)

    void GetKDSettingsForTeam(EHDTeam CPTeam, FKillDeathRulesetSettings& CPSettings);
}; // Size: 0xB0

#endif
