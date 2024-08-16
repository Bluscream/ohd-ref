---@meta

---@class UWBP_ServerListModifierSetting_FilterRule_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FilterSetting UWBP_ModifierSetting_ComboBox_C
---@field Text FText
---@field RuleParams FHDFilterRuleParams
---@field Rule TSubclassOf<UHDServerListFilterRule>
---@field OnDropdownSettingChanged FWBP_ServerListModifierSetting_FilterRule_COnDropdownSettingChanged
UWBP_ServerListModifierSetting_FilterRule_C = {}

---@param bActive boolean
function UWBP_ServerListModifierSetting_FilterRule_C:IsFilterEnabled(bActive) end
---@param Rule TSubclassOf<UHDServerListFilterRule>
---@param RuleParams FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_C:GetFilterRulePair(Rule, RuleParams) end
---@param Params FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_C:GetRuleParams(Params) end
---@param NewParams FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_C:SetRuleParams(NewParams) end
---@param IsDesignTime boolean
function UWBP_ServerListModifierSetting_FilterRule_C:PreConstruct(IsDesignTime) end
---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UWBP_ServerListModifierSetting_FilterRule_C:BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(SelectedItem, SelectionType) end
---@param EntryPoint int32
function UWBP_ServerListModifierSetting_FilterRule_C:ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule(EntryPoint) end
---@param Rule TSubclassOf<UHDServerListFilterRule>
---@param RuleParams FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_C:OnDropdownSettingChanged__DelegateSignature(Rule, RuleParams) end


