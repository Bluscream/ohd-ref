---@meta

---@class UWBP_OptionMenu_Home_C : UDFBaseMenu
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EntitlementBadgeGrid UUniformGridPanel
---@field MediaLinkVBox UVerticalBox
---@field EntitlementBadgeDefinitionSource UDataTable
---@field MediaLinkDefinitionSource UDataTable
---@field BadgeMaxRows int32
---@field BadgeMaxColumns int32
---@field BadgeSlotPadding FMargin
---@field BadgeMinDesiredSlotWidth float
---@field BadgeMinDesiredSlotHeight float
UWBP_OptionMenu_Home_C = {}

---@param Entitlements TArray<FFEntitlementDefinition>
---@param bEntitled boolean
function UWBP_OptionMenu_Home_C:IsEntitledToBadge(Entitlements, bEntitled) end
---@param MaxSize int32
function UWBP_OptionMenu_Home_C:GetMaxGridSize(MaxSize) end
---@param LinkUIDef FFCommunityMediaLinkUIDefinition
function UWBP_OptionMenu_Home_C:InsertMediaLink(LinkUIDef) end
---@param EntitlementUIDef FFEntitlementBadgeUIDefinition
function UWBP_OptionMenu_Home_C:InsertEntitlementBadge(EntitlementUIDef) end
---@param IsDesignTime boolean
function UWBP_OptionMenu_Home_C:PreConstruct(IsDesignTime) end
function UWBP_OptionMenu_Home_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_OptionMenu_Home_C:ExecuteUbergraph_WBP_OptionMenu_Home(EntryPoint) end


