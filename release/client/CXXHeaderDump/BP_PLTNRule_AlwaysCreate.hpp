#ifndef UE4SS_SDK_BP_PLTNRule_AlwaysCreate_HPP
#define UE4SS_SDK_BP_PLTNRule_AlwaysCreate_HPP

class UBP_PLTNRule_AlwaysCreate_C : public UHDPlatoonCreationRuleBase
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    bool SatisfiesRule(const class UHDTeamDefinition* TeamDef);
}; // Size: 0x28

#endif
