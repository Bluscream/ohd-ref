---@meta

---@class UWBP_JoinServerFiltersPanel_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AdvancedFilterSettings UWBP_ServerListModifierSettings_AdvancedFilters_C
---@field BasicFilterSettings UWBP_ServerListModifierSettings_BasicFilters_C
---@field FiltersVBox UVerticalBox
---@field OnServerFiltersChanged FWBP_JoinServerFiltersPanel_COnServerFiltersChanged
UWBP_JoinServerFiltersPanel_C = {}

---@param bActiveOnly boolean
---@param FilterRules TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
function UWBP_JoinServerFiltersPanel_C:GetFilterRules(bActiveOnly, FilterRules) end
function UWBP_JoinServerFiltersPanel_C:OnInitialized() end
---@param ActiveFilters TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
function UWBP_JoinServerFiltersPanel_C:FilterSettingsChanged(ActiveFilters) end
---@param EntryPoint int32
function UWBP_JoinServerFiltersPanel_C:ExecuteUbergraph_WBP_JoinServerFiltersPanel(EntryPoint) end
---@param ActiveFilters TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
function UWBP_JoinServerFiltersPanel_C:OnServerFiltersChanged__DelegateSignature(ActiveFilters) end


