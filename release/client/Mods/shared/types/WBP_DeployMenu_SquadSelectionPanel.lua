---@meta

---@class UWBP_DeployMenu_SquadSelectionPanel_C : UDeployMenu_SquadSelectionWidgetBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PlatoonsList UScrollBox
---@field NumFakePlatoonItems int32
---@field PlatoonItemPadding FMargin
UWBP_DeployMenu_SquadSelectionPanel_C = {}

---@param RemovedPlatoonData UPlatoonListEntry
---@param RemoveIdx int32
function UWBP_DeployMenu_SquadSelectionPanel_C:RemovePlatoonItemWidgetFromList(RemovedPlatoonData, RemoveIdx) end
---@param PlatoonData UPlatoonListEntry
function UWBP_DeployMenu_SquadSelectionPanel_C:AddNewPlatoonItemWidget(PlatoonData) end
---@param PlatoonData UPlatoonListEntry
function UWBP_DeployMenu_SquadSelectionPanel_C:GeneratePlatoon(PlatoonData) end
---@param RemovedPlatoonData UPlatoonListEntry
---@param RemovedPlatoonIdx int32
function UWBP_DeployMenu_SquadSelectionPanel_C:DeconstructPlatoon(RemovedPlatoonData, RemovedPlatoonIdx) end
---@param IsDesignTime boolean
function UWBP_DeployMenu_SquadSelectionPanel_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_DeployMenu_SquadSelectionPanel_C:ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel(EntryPoint) end


