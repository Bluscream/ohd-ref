---@meta

---@class UWBP_Confirmation_C : UHDConfirmationDialog
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DescriptionRichText URichTextBlock
---@field TitleText UTextBlock
UWBP_Confirmation_C = {}

---@param TitleText FText
---@param DescriptionText FText
function UWBP_Confirmation_C:UpdateDialogText(TitleText, DescriptionText) end
---@param EntryPoint int32
function UWBP_Confirmation_C:ExecuteUbergraph_WBP_Confirmation(EntryPoint) end


