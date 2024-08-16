---@meta

---@class UWBP_ServerListEntryColumn_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ItemSBox USizeBox
---@field ItemSubText UTextBlock
---@field ItemText UTextBlock
---@field Text FText
---@field TextMinDesiredWidth float
---@field TextMaxStartLength int32
---@field TextMaxEndLength int32
---@field TextFont FSlateFontInfo
---@field SubText FText
---@field SubTextMinDesiredWidth float
---@field SubTextMaxStartLength int32
---@field SubTextMaxEndLength int32
---@field ItemMinDesiredWidth float
---@field ItemMaxDesiredWidth float
---@field SubTextFont FSlateFontInfo
UWBP_ServerListEntryColumn_C = {}

---@param InText FText
function UWBP_ServerListEntryColumn_C:SetItemSubText(InText) end
---@param InText FText
function UWBP_ServerListEntryColumn_C:SetItemText(InText) end
---@param IsDesignTime boolean
function UWBP_ServerListEntryColumn_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_ServerListEntryColumn_C:ExecuteUbergraph_WBP_ServerListEntryColumn(EntryPoint) end


