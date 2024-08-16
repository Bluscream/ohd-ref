---@meta

---@class UWBP_CreditsListHeader_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DividerLine UImage
---@field HeaderText UTextBlock
---@field CreditsEntry FFGameCreditsEntry
UWBP_CreditsListHeader_C = {}

---@param Entry FFGameCreditsEntry
---@param HeaderPadding FMargin
function UWBP_CreditsListHeader_C:SetCreditsEntry(Entry, HeaderPadding) end
---@param IsDesignTime boolean
function UWBP_CreditsListHeader_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CreditsListHeader_C:ExecuteUbergraph_WBP_CreditsListHeader(EntryPoint) end


