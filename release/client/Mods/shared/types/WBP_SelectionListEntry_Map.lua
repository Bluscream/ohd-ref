---@meta

---@class UWBP_SelectionListEntry_Map_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SelectionEntry UWBP_CreateGameSelectionListEntry_C
---@field MapInfo FFMapInfo
UWBP_SelectionListEntry_Map_C = {}

function UWBP_SelectionListEntry_Map_C:BP_OnEntryReleased() end
---@param bIsExpanded boolean
function UWBP_SelectionListEntry_Map_C:BP_OnItemExpansionChanged(bIsExpanded) end
---@param Item UWBP_CreateGameSelectionListEntry_C
---@param bSelected boolean
function UWBP_SelectionListEntry_Map_C:BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature(Item, bSelected) end
---@param ListItemObject UObject
function UWBP_SelectionListEntry_Map_C:OnListItemObjectSet(ListItemObject) end
---@param bIsSelected boolean
function UWBP_SelectionListEntry_Map_C:BP_OnItemSelectionChanged(bIsSelected) end
---@param EntryPoint int32
function UWBP_SelectionListEntry_Map_C:ExecuteUbergraph_WBP_SelectionListEntry_Map(EntryPoint) end


