---@meta

---@class UWBP_JoinServerListEntry_C : UHDServerListing
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GameVersionCol UWBP_ServerListEntryColumn_C
---@field GMNameCol UWBP_ServerListEntryColumn_C
---@field ItemBg UImage
---@field ItemBox USizeBox
---@field ItemCheckBox UCheckBox
---@field ItemSelectionHighlight UImage
---@field MapNameCol UWBP_ServerListEntryColumn_C
---@field PingCol UWBP_ServerListEntryColumn_C
---@field PlayerCountCol UWBP_ServerListEntryColumn_C
---@field ServerBadgeHBox UHorizontalBox
---@field ServerNameCol UWBP_ServerListEntryColumn_C
---@field OnSelectionStateChanged FWBP_JoinServerListEntry_COnSelectionStateChanged
---@field PlaceholderMapBannerImg UTexture2D
---@field BadgePadding FMargin
---@field ItemStyle FCheckBoxStyle
---@field bSelectionToggle boolean
---@field ItemMinWidth int32
---@field ItemMinHeight int32
---@field bBadgesInitialized boolean
UWBP_JoinServerListEntry_C = {}

---@param TableRowName FName
---@param BadgeArr TArray<FFServerBadgeUIDefinition>
function UWBP_JoinServerListEntry_C:AddBadgeDefinitionToListIfFound(TableRowName, BadgeArr) end
---@param BadgeUIDef FFServerBadgeUIDefinition
function UWBP_JoinServerListEntry_C:CreateAndAddBadgeWidgetFromDefinition(BadgeUIDef) end
---@param RowHandle FDataTableRowHandle
---@param bFound boolean
---@param BadgeUIDef FFServerBadgeUIDefinition
function UWBP_JoinServerListEntry_C:GetBadgeDefinitionFromTable(RowHandle, bFound, BadgeUIDef) end
function UWBP_JoinServerListEntry_C:HideAllBadges() end
function UWBP_JoinServerListEntry_C:SetBadgeVisibilityFromServerData() end
---@param BadgeDefs TArray<FFServerBadgeUIDefinition>
function UWBP_JoinServerListEntry_C:PopulateBadges(BadgeDefs) end
---@param InBrush FSlateBrush
---@param OutBrush FSlateBrush
function UWBP_JoinServerListEntry_C:GetBrushWithItemDimensions(InBrush, OutBrush) end
---@param Brush FSlateBrush
---@param Image UTexture2D
---@param UpdatedBrush FSlateBrush
function UWBP_JoinServerListEntry_C:GetBrushWithImageTexture(Brush, Image, UpdatedBrush) end
function UWBP_JoinServerListEntry_C:InternalRefreshDimensions() end
---@param MinHeight int32
function UWBP_JoinServerListEntry_C:GetItemMinHeight(MinHeight) end
---@param MinWidth int32
function UWBP_JoinServerListEntry_C:GetItemMinWidth(MinWidth) end
---@param InMinWidth int32
---@param InMinHeight int32
function UWBP_JoinServerListEntry_C:SetItemMinDimensions(InMinWidth, InMinHeight) end
---@param ItemStyle FCheckBoxStyle
function UWBP_JoinServerListEntry_C:GetItemStyle(ItemStyle) end
---@param InItemImg UTexture2D
function UWBP_JoinServerListEntry_C:SetItemImage(InItemImg) end
---@param InItemStyle FCheckBoxStyle
function UWBP_JoinServerListEntry_C:SetItemStyle(InItemStyle) end
---@param bSelected boolean
function UWBP_JoinServerListEntry_C:InternalUpdateItemBgTintColor(bSelected) end
---@param bSelected boolean
function UWBP_JoinServerListEntry_C:IsItemSelected(bSelected) end
---@param SelectionState ECheckBoxState
function UWBP_JoinServerListEntry_C:GetItemSelectionState(SelectionState) end
---@param bSelected boolean
function UWBP_JoinServerListEntry_C:SetItemIsSelected(bSelected) end
---@param InSelectionState ECheckBoxState
function UWBP_JoinServerListEntry_C:SetItemSelectionState(InSelectionState) end
---@param IsDesignTime boolean
function UWBP_JoinServerListEntry_C:PreConstruct(IsDesignTime) end
---@param bIsChecked boolean
function UWBP_JoinServerListEntry_C:BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
---@param bIsSelected boolean
function UWBP_JoinServerListEntry_C:BP_OnItemSelectionChanged(bIsSelected) end
---@param bSelected boolean
UWBP_JoinServerListEntry_C['On Selection State Changed'] = function(bSelected) end
---@param ListItemObject UObject
function UWBP_JoinServerListEntry_C:OnListItemObjectSet(ListItemObject) end
---@param bIsDesignTime boolean
function UWBP_JoinServerListEntry_C:OnServerItemDataSet(bIsDesignTime) end
function UWBP_JoinServerListEntry_C:BP_OnEntryReleased() end
---@param bIsExpanded boolean
function UWBP_JoinServerListEntry_C:BP_OnItemExpansionChanged(bIsExpanded) end
---@param EntryPoint int32
function UWBP_JoinServerListEntry_C:ExecuteUbergraph_WBP_JoinServerListEntry(EntryPoint) end
---@param Item UWBP_JoinServerListEntry_C
---@param bSelected boolean
function UWBP_JoinServerListEntry_C:OnSelectionStateChanged__DelegateSignature(Item, bSelected) end


