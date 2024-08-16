#ifndef UE4SS_SDK_BPI_ServerFilterRules_HPP
#define UE4SS_SDK_BPI_ServerFilterRules_HPP

class IBPI_ServerFilterRules_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void GetFilterRules(bool bActiveOnly, TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams>& FilterRules);
}; // Size: 0x28

#endif
