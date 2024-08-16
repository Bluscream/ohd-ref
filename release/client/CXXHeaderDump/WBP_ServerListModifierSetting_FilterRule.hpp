#ifndef UE4SS_SDK_WBP_ServerListModifierSetting_FilterRule_HPP
#define UE4SS_SDK_WBP_ServerListModifierSetting_FilterRule_HPP

class UWBP_ServerListModifierSetting_FilterRule_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ModifierSetting_ComboBox_C* FilterSetting;                             // 0x0238 (size: 0x8)
    FText Text;                                                                       // 0x0240 (size: 0x18)
    FHDFilterRuleParams RuleParams;                                                   // 0x0258 (size: 0x2)
    char padding_0[0x6];                                                              // 0x025A (size: 0x6)
    TSubclassOf<class UHDServerListFilterRule> Rule;                                  // 0x0260 (size: 0x8)
    FWBP_ServerListModifierSetting_FilterRule_COnDropdownSettingChanged OnDropdownSettingChanged; // 0x0268 (size: 0x10)
    void OnDropdownSettingChanged(TSubclassOf<class UHDServerListFilterRule> Rule, FHDFilterRuleParams RuleParams);

    void IsFilterEnabled(bool& bActive);
    void GetFilterRulePair(TSubclassOf<class UHDServerListFilterRule>& Rule, FHDFilterRuleParams& RuleParams);
    void GetRuleParams(FHDFilterRuleParams& Params);
    void SetRuleParams(FHDFilterRuleParams NewParams);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule(int32 EntryPoint);
    void OnDropdownSettingChanged__DelegateSignature(TSubclassOf<class UHDServerListFilterRule> Rule, FHDFilterRuleParams RuleParams);
}; // Size: 0x278

#endif
