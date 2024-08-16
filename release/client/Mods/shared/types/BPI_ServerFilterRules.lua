---@meta

---@class IBPI_ServerFilterRules_C : IInterface
IBPI_ServerFilterRules_C = {}

---@param bActiveOnly boolean
---@param FilterRules TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
function IBPI_ServerFilterRules_C:GetFilterRules(bActiveOnly, FilterRules) end


