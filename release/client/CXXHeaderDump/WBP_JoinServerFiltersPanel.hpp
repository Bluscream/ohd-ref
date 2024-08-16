#ifndef UE4SS_SDK_WBP_JoinServerFiltersPanel_HPP
#define UE4SS_SDK_WBP_JoinServerFiltersPanel_HPP

class UWBP_JoinServerFiltersPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ServerListModifierSettings_AdvancedFilters_C* AdvancedFilterSettings;  // 0x0238 (size: 0x8)
    class UWBP_ServerListModifierSettings_BasicFilters_C* BasicFilterSettings;        // 0x0240 (size: 0x8)
    class UVerticalBox* FiltersVBox;                                                  // 0x0248 (size: 0x8)
    FWBP_JoinServerFiltersPanel_COnServerFiltersChanged OnServerFiltersChanged;       // 0x0250 (size: 0x10)
    void OnServerFiltersChanged(TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ActiveFilters);

    void GetFilterRules(bool bActiveOnly, TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams>& FilterRules);
    void OnInitialized();
    void FilterSettingsChanged(TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ActiveFilters);
    void ExecuteUbergraph_WBP_JoinServerFiltersPanel(int32 EntryPoint);
    void OnServerFiltersChanged__DelegateSignature(TMap<class TSubclassOf<UHDServerListFilterRule>, class FHDFilterRuleParams> ActiveFilters);
}; // Size: 0x260

#endif
