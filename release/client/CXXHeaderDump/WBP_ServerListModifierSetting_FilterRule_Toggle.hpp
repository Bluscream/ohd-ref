#ifndef UE4SS_SDK_WBP_ServerListModifierSetting_FilterRule_Toggle_HPP
#define UE4SS_SDK_WBP_ServerListModifierSetting_FilterRule_Toggle_HPP

class UWBP_ServerListModifierSetting_FilterRule_Toggle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ModifierSetting_CheckBox_C* FilterSetting;                             // 0x0238 (size: 0x8)
    FText Text;                                                                       // 0x0240 (size: 0x18)
    bool bDefaultIsCheckedOverride;                                                   // 0x0258 (size: 0x1)
    FHDFilterRuleParams CheckedRuleParams;                                            // 0x0259 (size: 0x2)
    char padding_0[0x5];                                                              // 0x025B (size: 0x5)
    TSubclassOf<class UHDServerListFilterRule> Rule;                                  // 0x0260 (size: 0x8)
    FWBP_ServerListModifierSetting_FilterRule_Toggle_COnBoolSettingChanged OnBoolSettingChanged; // 0x0268 (size: 0x10)
    void OnBoolSettingChanged(TSubclassOf<class UHDServerListFilterRule> Rule, FHDFilterRuleParams RuleParams);

    void IsFilterEnabled(bool& bActive);
    void GetFilterRulePair(TSubclassOf<class UHDServerListFilterRule>& Rule, FHDFilterRuleParams& RuleParams);
    void GetCheckedRuleParams(FHDFilterRuleParams& Params);
    void SetCheckedRuleParams(FHDFilterRuleParams NewParams);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle(int32 EntryPoint);
    void OnBoolSettingChanged__DelegateSignature(TSubclassOf<class UHDServerListFilterRule> Rule, FHDFilterRuleParams RuleParams);
}; // Size: 0x278

#endif
