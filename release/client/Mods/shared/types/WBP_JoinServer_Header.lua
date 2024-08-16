---@meta

---@class UWBP_JoinServer_Header_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HeaderText UTextBlock
---@field LayoutInfoHandle FDataTableRowHandle
---@field HeaderLayoutInfo FFServerListingLayoutInfo
---@field bSortListBtnEnabled boolean
UWBP_JoinServer_Header_C = {}

---@param bEnabled boolean
function UWBP_JoinServer_Header_C:SetSortBtnIsEnabled(bEnabled) end
---@param IsDesignTime boolean
function UWBP_JoinServer_Header_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_JoinServer_Header_C:ExecuteUbergraph_WBP_JoinServer_Header(EntryPoint) end


