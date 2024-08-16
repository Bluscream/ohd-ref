#ifndef UE4SS_SDK_BP_HDRuleset_ControlPoint_HPP
#define UE4SS_SDK_BP_HDRuleset_ControlPoint_HPP

class UBP_HDRuleset_ControlPoint_C : public UHDRuleset_ControlPoint
{
    char padding_0[0xA0];                                                             // 0x0000 (size: 0x0)

    void GetCPSettingsForTeam(EHDTeam CPTeam, FControlPointRulesetSettings& CPSettings);
}; // Size: 0xA0

#endif
