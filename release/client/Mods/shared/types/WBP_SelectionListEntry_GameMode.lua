---@meta

---@class UWBP_SelectionListEntry_GameMode_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SelectionEntry UWBP_CreateGameSelectionListEntry_C
UWBP_SelectionListEntry_GameMode_C = {}

function UWBP_SelectionListEntry_GameMode_C:BP_OnEntryReleased() end
---@param bIsExpanded boolean
function UWBP_SelectionListEntry_GameMode_C:BP_OnItemExpansionChanged(bIsExpanded) end
---@param ListItemObject UObject
function UWBP_SelectionListEntry_GameMode_C:OnListItemObjectSet(ListItemObject) end
---@param bIsSelected boolean
function UWBP_SelectionListEntry_GameMode_C:BP_OnItemSelectionChanged(bIsSelected) end
---@param Item UWBP_CreateGameSelectionListEntry_C
---@param bSelected boolean
function UWBP_SelectionListEntry_GameMode_C:BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature(Item, bSelected) end
---@param EntryPoint int32
function UWBP_SelectionListEntry_GameMode_C:ExecuteUbergraph_WBP_SelectionListEntry_GameMode(EntryPoint) end


