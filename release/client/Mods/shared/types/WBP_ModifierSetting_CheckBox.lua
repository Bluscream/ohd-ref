---@meta

---@class UWBP_ModifierSetting_CheckBox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ModifierCheckBox UCheckBox
---@field ModifierSBox USizeBox
---@field ModifierSetting UWBP_ModifierSettingBox_C
---@field bDefaultIsChecked boolean
---@field SettingText FText
---@field OnCheckStateChanged FWBP_ModifierSetting_CheckBox_COnCheckStateChanged
---@field SettingTextStyle FFModifierTextStyle
---@field CheckBoxMinSize FVector2D
UWBP_ModifierSetting_CheckBox_C = {}

---@param SettingText FText
function UWBP_ModifierSetting_CheckBox_C:GetSettingText(SettingText) end
---@param InSettingText FText
function UWBP_ModifierSetting_CheckBox_C:SetSettingText(InSettingText) end
---@param IsDesignTime boolean
function UWBP_ModifierSetting_CheckBox_C:PreConstruct(IsDesignTime) end
---@param bIsChecked boolean
function UWBP_ModifierSetting_CheckBox_C:BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
function UWBP_ModifierSetting_CheckBox_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_ModifierSetting_CheckBox_C:ExecuteUbergraph_WBP_ModifierSetting_CheckBox(EntryPoint) end
---@param bIsChecked boolean
function UWBP_ModifierSetting_CheckBox_C:OnCheckStateChanged__DelegateSignature(bIsChecked) end


