---@meta

---@class IBPI_ServerFilterRuleSetting_C : IInterface
IBPI_ServerFilterRuleSetting_C = {}

---@param bActive boolean
function IBPI_ServerFilterRuleSetting_C:IsFilterEnabled(bActive) end
---@param Rule TSubclassOf<UHDServerListFilterRule>
---@param RuleParams FHDFilterRuleParams
function IBPI_ServerFilterRuleSetting_C:GetFilterRulePair(Rule, RuleParams) end


