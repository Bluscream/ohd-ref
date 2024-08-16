---@meta

---@class UWBP_DeathScreen_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DeathKeyBindText UTextBlock
UWBP_DeathScreen_C = {}

---@param Key FKey
function UWBP_DeathScreen_C:UpdateDeathKeyText(Key) end
---@param IsDesignTime boolean
function UWBP_DeathScreen_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_DeathScreen_C:ExecuteUbergraph_WBP_DeathScreen(EntryPoint) end


