---@meta

---@class IBPI_GameModifierSettings_C : IInterface
IBPI_GameModifierSettings_C = {}

---@param Options FString
function IBPI_GameModifierSettings_C:GetTravelURLOptions(Options) end
---@param bEnabled boolean
function IBPI_GameModifierSettings_C:IsEnabled(bEnabled) end
---@param ParentMenu UWBP_OptionMenu_CreateGame_C
function IBPI_GameModifierSettings_C:SetupModifier(ParentMenu) end


