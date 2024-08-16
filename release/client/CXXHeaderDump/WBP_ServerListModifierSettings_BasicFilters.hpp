#ifndef UE4SS_SDK_WBP_ServerListModifierSettings_BasicFilters_HPP
#define UE4SS_SDK_WBP_ServerListModifierSettings_BasicFilters_HPP

class UWBP_ServerListModifierSettings_BasicFilters_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ServerListModifierSetting_FilterRule_C* ModdedFilter;                  // 0x0238 (size: 0x8)
    class UWBP_ServerListModifierSetting_FilterRule_Toggle_C* NoPasswordToggle;       // 0x0240 (size: 0x8)
    class UWBP_ServerListModifierSetting_FilterRule_Toggle_C* NotFullToggle;          // 0x0248 (size: 0x8)
    class UWBP_ServerListModifierSetting_FilterRule_Toggle_C* SameVersionToggle;      // 0x0250 (size: 0x8)
    class UWBP_GameModifierSettingsSection_C* SectionContainer;                       // 0x0258 (size: 0x8)
    class UVerticalBox* SettingsListVBox;                                             // 0x0260 (size: 0x8)
    class UWBP_ModifierSetting_ComboBox_C* SortByOrder;                               // 0x0268 (size: 0x8)
    class UWBP_ModifierSetting_ComboBox_C* SortByPreference;                          // 0x0270 (size: 0x8)
    class UWBP_ServerListModifierSetting_FilterRule_C* SupporterOnlyFilter;           // 0x0278 (size: 0x8)
    FWBP_ServerListModifierSettings_BasicFilters_COnFilterSettingsChanged OnFilterSettingsChanged; // 0x0280 (size: 0x10)
    void OnFilterSettingsChanged(TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ActiveFilters);
    FWBP_ServerListModifierSettings_BasicFilters_COnSortPreferenceChanged OnSortPreferenceChanged; // 0x0290 (size: 0x10)
    void OnSortPreferenceChanged(FFServerSortPreference SortPreference);

    void GetFilterRules(bool bActiveOnly, TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams>& FilterRules);
    void GetSelectedServerSortPreference(FFServerSortPreference& SortPreference);
    void BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__SectionContainer_K2Node_ComponentBoundEvent_1_OnActivated__DelegateSignature();
    void BndEvt__SectionContainer_K2Node_ComponentBoundEvent_2_OnDeactivated__DelegateSignature();
    void BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void OnInitialized();
    void FilterSettingChanged(TSubclassOf<class UHDServerListFilterRule> Rule, FHDFilterRuleParams RuleParams);
    void ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters(int32 EntryPoint);
    void OnFilterSettingsChanged__DelegateSignature(TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ActiveFilters);
    void OnSortPreferenceChanged__DelegateSignature(FFServerSortPreference SortPreference);
}; // Size: 0x2A0

#endif
