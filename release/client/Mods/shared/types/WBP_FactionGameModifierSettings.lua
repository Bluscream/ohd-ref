---@meta

---@class UWBP_FactionGameModifierSettings_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FactionBlufor UWBP_ModifierSetting_ComboBox_C
---@field FactionOpfor UWBP_ModifierSetting_ComboBox_C
---@field KitRestrictionsToggle UWBP_ModifierSetting_CheckBox_C
---@field SectionContainer UWBP_GameModifierSettingsSection_C
---@field TicketCountBlufor UWBP_ModifierSetting_Numeric_C
---@field TicketCountOpfor UWBP_ModifierSetting_Numeric_C
---@field SelectableFactionAssetIds TArray<FPrimaryAssetId>
UWBP_FactionGameModifierSettings_C = {}

---@param Options FString
function UWBP_FactionGameModifierSettings_C:GetTravelURLOptions(Options) end
---@param bEnabled boolean
function UWBP_FactionGameModifierSettings_C:IsEnabled(bEnabled) end
---@param Team EHDTeam
---@param Count int32
---@param Pair FString
function UWBP_FactionGameModifierSettings_C:BuildTicketCountURLOption(Team, Count, Pair) end
---@param Team EHDTeam
---@param PackageName FName
---@param Pair FString
function UWBP_FactionGameModifierSettings_C:BuildFactionURLOption(Team, PackageName, Pair) end
---@param Loaded TArray<UClass>
function UWBP_FactionGameModifierSettings_C:Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94(Loaded) end
---@param ParentMenu UWBP_OptionMenu_CreateGame_C
function UWBP_FactionGameModifierSettings_C:SetupModifier(ParentMenu) end
function UWBP_FactionGameModifierSettings_C:Destruct() end
---@param EntryPoint int32
function UWBP_FactionGameModifierSettings_C:ExecuteUbergraph_WBP_FactionGameModifierSettings(EntryPoint) end


