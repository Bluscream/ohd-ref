---@meta

---@class UWBP_ModifierSetting_ComboBox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ModifierComboBox UComboBoxString
---@field ModifierSetting UWBP_ModifierSettingBox_C
---@field SettingText FText
---@field SettingTextStyle FFModifierTextStyle
---@field SettingComboBoxPadding FMargin
---@field DefaultOptions TArray<FString>
---@field DefaultSelectedOptionIdx int32
---@field OnSelectionChanged FWBP_ModifierSetting_ComboBox_COnSelectionChanged
---@field OnOpening FWBP_ModifierSetting_ComboBox_COnOpening
UWBP_ModifierSetting_ComboBox_C = {}

---@param SettingText FText
function UWBP_ModifierSetting_ComboBox_C:GetSettingText(SettingText) end
---@param InSettingText FText
function UWBP_ModifierSetting_ComboBox_C:SetSettingText(InSettingText) end
---@param IsDesignTime boolean
function UWBP_ModifierSetting_ComboBox_C:PreConstruct(IsDesignTime) end
---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UWBP_ModifierSetting_ComboBox_C:BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(SelectedItem, SelectionType) end
function UWBP_ModifierSetting_ComboBox_C:BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature() end
function UWBP_ModifierSetting_ComboBox_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_ModifierSetting_ComboBox_C:ExecuteUbergraph_WBP_ModifierSetting_ComboBox(EntryPoint) end
function UWBP_ModifierSetting_ComboBox_C:OnOpening__DelegateSignature() end
---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UWBP_ModifierSetting_ComboBox_C:OnSelectionChanged__DelegateSignature(SelectedItem, SelectionType) end


