#ifndef UE4SS_SDK_BPI_ServerFilterRuleSetting_HPP
#define UE4SS_SDK_BPI_ServerFilterRuleSetting_HPP

class IBPI_ServerFilterRuleSetting_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void IsFilterEnabled(bool& bActive);
    void GetFilterRulePair(TSubclassOf<class UHDServerListFilterRule>& Rule, FHDFilterRuleParams& RuleParams);
}; // Size: 0x28

#endif
