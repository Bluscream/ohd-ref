---@meta

---@class UWBP_DeployMenu_PlatoonSquadList_C : UDeployMenu_PlatoonSquadListBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CreateSquadBtn UButton
---@field Image_10 UImage
---@field PlatoonNameText UTextBlock
---@field SquadCountText UTextBlock
---@field SquadsList UVerticalBox
---@field ToggleListVisibilityBtn UButton
---@field ToggleListVisibilityImg UImage
---@field bExpanded boolean
---@field PlatoonTextFormat FText
---@field bExpandListInDesigner boolean
---@field NumFakeSquadItems int32
---@field SquadItemPadding FMargin
---@field bCollapsedByUser boolean
---@field ParentContainerWidget UWBP_DeployMenu_SquadSelectionPanel_C
UWBP_DeployMenu_PlatoonSquadList_C = {}

---@param bValidPLTN boolean
function UWBP_DeployMenu_PlatoonSquadList_C:IsPlatoonValid(bValidPLTN) end
---@param bCollapsedByUser boolean
function UWBP_DeployMenu_PlatoonSquadList_C:WasListCollapsedByUser(bCollapsedByUser) end
---@param bValidSquadsPresent boolean
function UWBP_DeployMenu_PlatoonSquadList_C:HasAnySquads(bValidSquadsPresent) end
---@param NewPlatoonName FText
function UWBP_DeployMenu_PlatoonSquadList_C:SetPlatoonNameText(NewPlatoonName) end
function UWBP_DeployMenu_PlatoonSquadList_C:UpdateCreateBtnAvailability() end
function UWBP_DeployMenu_PlatoonSquadList_C:UpdateSquadCountText() end
function UWBP_DeployMenu_PlatoonSquadList_C:CollapseListIfEmpty() end
function UWBP_DeployMenu_PlatoonSquadList_C:CollapseList() end
function UWBP_DeployMenu_PlatoonSquadList_C:ExpandList() end
---@param RemovedSquadData USquadListEntry
---@param RemoveIdx int32
function UWBP_DeployMenu_PlatoonSquadList_C:RemoveSquadItemWidgetFromList(RemovedSquadData, RemoveIdx) end
---@param SquadData USquadListEntry
---@param SquadItemWidget UWBP_DeployMenu_SquadList_C
function UWBP_DeployMenu_PlatoonSquadList_C:AddNewSquadItemWidget(SquadData, SquadItemWidget) end
---@param SquadData USquadListEntry
function UWBP_DeployMenu_PlatoonSquadList_C:GenerateSquad(SquadData) end
---@param RemovedSquadData USquadListEntry
---@param RemovedSquadIdx int32
function UWBP_DeployMenu_PlatoonSquadList_C:DeconstructSquad(RemovedSquadData, RemovedSquadIdx) end
function UWBP_DeployMenu_PlatoonSquadList_C:BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_DeployMenu_PlatoonSquadList_C:PreConstruct(IsDesignTime) end
function UWBP_DeployMenu_PlatoonSquadList_C:SquadsListExpanded() end
function UWBP_DeployMenu_PlatoonSquadList_C:SquadsListCollapsed() end
function UWBP_DeployMenu_PlatoonSquadList_C:BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_DeployMenu_PlatoonSquadList_C:OnPlatoonSet() end
---@param EntryPoint int32
function UWBP_DeployMenu_PlatoonSquadList_C:ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList(EntryPoint) end


