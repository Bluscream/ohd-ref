---@meta

---@class UWBP_DeployMenu_ClassSelectionPanel_C : UDeployMenu_ClassSelectionPanel
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ClassScrollBox UScrollBox
---@field bPanelInitialized boolean
---@field HDOwningPlayer ABP_HDPlayerControllerBase_C
---@field TimerHandle_CheckRestrictions FTimerHandle
---@field KitListingWidgetClass TSubclassOf<UWBP_DeployMenu_ClassSelectionListing_C>
---@field DesignPreviewKits TSet<UHDKit>
---@field SelectedClass UHDKit
---@field LastFaction EHDTeam
UWBP_DeployMenu_ClassSelectionPanel_C = {}

---@param ClassToUpdate UHDKit
---@param bSelected boolean
---@param bMatchDisplayNames boolean
---@param bClassUpdated boolean
function UWBP_DeployMenu_ClassSelectionPanel_C:SetClassSelectionState(ClassToUpdate, bSelected, bMatchDisplayNames, bClassUpdated) end
---@param NewSelection UDeployMenu_ClassSelectionListing
function UWBP_DeployMenu_ClassSelectionPanel_C:InternalUpdateSelectionState(NewSelection) end
function UWBP_DeployMenu_ClassSelectionPanel_C:SelectFirstUnrestrictedClass() end
function UWBP_DeployMenu_ClassSelectionPanel_C:InternalDeselectAllClasses() end
---@param ChildIndex int32
---@param bValidIndex boolean
function UWBP_DeployMenu_ClassSelectionPanel_C:IsValidClassListingIndex(ChildIndex, bValidIndex) end
---@param ChildIndex int32
---@param bSelected boolean
function UWBP_DeployMenu_ClassSelectionPanel_C:SetClassSelectionStateByIndex(ChildIndex, bSelected) end
---@param bEnabled boolean
---@param bFireOnceImmediately boolean
function UWBP_DeployMenu_ClassSelectionPanel_C:ToggleRestrictionsTimer(bEnabled, bFireOnceImmediately) end
---@param Kit UHDKit
---@param NewKitListingWidget UWBP_DeployMenu_ClassSelectionListing_C
function UWBP_DeployMenu_ClassSelectionPanel_C:InternalCreateClassListingWidget(Kit, NewKitListingWidget) end
---@param TeamKits TSet<UHDKit>
function UWBP_DeployMenu_ClassSelectionPanel_C:InternalPopulateListWithClasses(TeamKits) end
---@param OwningPlayerTeam EHDTeam
function UWBP_DeployMenu_ClassSelectionPanel_C:RepopulateListByFaction(OwningPlayerTeam) end
function UWBP_DeployMenu_ClassSelectionPanel_C:Construct() end
---@param IsDesignTime boolean
function UWBP_DeployMenu_ClassSelectionPanel_C:PreConstruct(IsDesignTime) end
function UWBP_DeployMenu_ClassSelectionPanel_C:LateInit_RepPlayerState() end
function UWBP_DeployMenu_ClassSelectionPanel_C:CheckRestrictions() end
function UWBP_DeployMenu_ClassSelectionPanel_C:Destruct() end
---@param SelectedClassWidget UWBP_DeployMenu_ClassSelectionListing_C
function UWBP_DeployMenu_ClassSelectionPanel_C:OnClassSelected(SelectedClassWidget) end
---@param DeselectedClassWidget UWBP_DeployMenu_ClassSelectionListing_C
function UWBP_DeployMenu_ClassSelectionPanel_C:OnClassDeselected(DeselectedClassWidget) end
---@param EntryPoint int32
function UWBP_DeployMenu_ClassSelectionPanel_C:ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel(EntryPoint) end


