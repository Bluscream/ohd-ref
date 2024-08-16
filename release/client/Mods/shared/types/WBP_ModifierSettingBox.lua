---@meta

---@class UWBP_ModifierSettingBox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Content UNamedSlot
---@field SettingLabel UTextBlock
---@field SettingText FText
---@field SettingTextStyle FFModifierTextStyle
UWBP_ModifierSettingBox_C = {}

---@param InSettingTextStyle FFModifierTextStyle
function UWBP_ModifierSettingBox_C:SetSettingTextStyle(InSettingTextStyle) end
---@param SettingText FText
function UWBP_ModifierSettingBox_C:GetSettingText(SettingText) end
---@param InSettingText FText
function UWBP_ModifierSettingBox_C:SetSettingText(InSettingText) end
---@param IsDesignTime boolean
function UWBP_ModifierSettingBox_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_ModifierSettingBox_C:ExecuteUbergraph_WBP_ModifierSettingBox(EntryPoint) end


