---@meta

---@class UWBP_ServerListModifierSetting_FilterRule_Toggle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FilterSetting UWBP_ModifierSetting_CheckBox_C
---@field Text FText
---@field bDefaultIsCheckedOverride boolean
---@field CheckedRuleParams FHDFilterRuleParams
---@field Rule TSubclassOf<UHDServerListFilterRule>
---@field OnBoolSettingChanged FWBP_ServerListModifierSetting_FilterRule_Toggle_COnBoolSettingChanged
UWBP_ServerListModifierSetting_FilterRule_Toggle_C = {}

---@param bActive boolean
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:IsFilterEnabled(bActive) end
---@param Rule TSubclassOf<UHDServerListFilterRule>
---@param RuleParams FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:GetFilterRulePair(Rule, RuleParams) end
---@param Params FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:GetCheckedRuleParams(Params) end
---@param NewParams FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:SetCheckedRuleParams(NewParams) end
---@param IsDesignTime boolean
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:PreConstruct(IsDesignTime) end
---@param bIsChecked boolean
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bIsChecked) end
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule_Toggle(EntryPoint) end
---@param Rule TSubclassOf<UHDServerListFilterRule>
---@param RuleParams FHDFilterRuleParams
function UWBP_ServerListModifierSetting_FilterRule_Toggle_C:OnBoolSettingChanged__DelegateSignature(Rule, RuleParams) end


