---@meta

---@class UWBP_MenuSubNavSelectionListEntry_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SelectionEntry UWBP_CreateGameSelectionListEntry_C
---@field ItemText FText
---@field SubMenuIndex int32
---@field ButtonClicked FWBP_MenuSubNavSelectionListEntry_CButtonClicked
UWBP_MenuSubNavSelectionListEntry_C = {}

---@param Idx int32
function UWBP_MenuSubNavSelectionListEntry_C:SetSubMenuIndex(Idx) end
---@param IsDesignTime boolean
function UWBP_MenuSubNavSelectionListEntry_C:PreConstruct(IsDesignTime) end
---@param bIsSelected boolean
function UWBP_MenuSubNavSelectionListEntry_C:OnItemSelectionChanged(bIsSelected) end
---@param Item UWBP_CreateGameSelectionListEntry_C
---@param bSelected boolean
function UWBP_MenuSubNavSelectionListEntry_C:BndEvt__SelectionEntry_K2Node_ComponentBoundEvent_1_OnSelectionStateChanged__DelegateSignature(Item, bSelected) end
---@param EntryPoint int32
function UWBP_MenuSubNavSelectionListEntry_C:ExecuteUbergraph_WBP_MenuSubNavSelectionListEntry(EntryPoint) end
---@param ClickedBtn UWBP_MenuSubNavSelectionListEntry_C
function UWBP_MenuSubNavSelectionListEntry_C:ButtonClicked__DelegateSignature(ClickedBtn) end


