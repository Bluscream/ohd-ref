---@meta

---@class UWBP_BotsGameModifierSettings_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SectionContainer UWBP_GameModifierSettingsSection_C
---@field TeamBotCountBlufor UWBP_ModifierSetting_Numeric_C
---@field TeamBotCountOpfor UWBP_ModifierSetting_Numeric_C
UWBP_BotsGameModifierSettings_C = {}

---@param Options FString
function UWBP_BotsGameModifierSettings_C:GetTravelURLOptions(Options) end
---@param bEnabled boolean
function UWBP_BotsGameModifierSettings_C:IsEnabled(bEnabled) end
---@param Team EHDTeam
---@param Count int32
---@param Pair FString
function UWBP_BotsGameModifierSettings_C:BuildBotCountURLOption(Team, Count, Pair) end
---@param ParentMenu UWBP_OptionMenu_CreateGame_C
function UWBP_BotsGameModifierSettings_C:SetupModifier(ParentMenu) end
---@param EntryPoint int32
function UWBP_BotsGameModifierSettings_C:ExecuteUbergraph_WBP_BotsGameModifierSettings(EntryPoint) end


