---@meta

---@class UWBP_ModifierSetting_Numeric_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ModifierSetting UWBP_ModifierSettingBox_C
---@field NumericHintText UTextBlock
---@field NumericSpinBox USpinBox
---@field SettingText FText
---@field MagicValues TMap<float, FText>
---@field MagicValueText FText
---@field ValueSnapDelta float
---@field ValueInitial float
---@field ValueMinInitial FFNumericModifierValueBound
---@field ValueMaxInitial FFNumericModifierValueBound
---@field VisibleSpinBoxForegroundColor FSlateColor
---@field MinFractionalDigitsInitial int32
---@field MaxFractionalDigitsInitial int32
---@field HiddenSpinBoxForegroundColor FSlateColor
---@field OnValueChanged FWBP_ModifierSetting_Numeric_COnValueChanged
---@field OnValueCommitted FWBP_ModifierSetting_Numeric_COnValueCommitted
UWBP_ModifierSetting_Numeric_C = {}

function UWBP_ModifierSetting_Numeric_C:UpdateMagicValueState() end
---@param Delta float
function UWBP_ModifierSetting_Numeric_C:GetValueSnapDelta(Delta) end
---@param InDelta float
function UWBP_ModifierSetting_Numeric_C:SetValueSnapDelta(InDelta) end
---@param Value float
function UWBP_ModifierSetting_Numeric_C:GetValue(Value) end
---@param InValue float
function UWBP_ModifierSetting_Numeric_C:SetValue(InValue) end
---@param MagicValueText FText
function UWBP_ModifierSetting_Numeric_C:GetMagicValueText(MagicValueText) end
---@param InMagicValueText FText
function UWBP_ModifierSetting_Numeric_C:SetMagicValueText(InMagicValueText) end
---@param SettingText FText
function UWBP_ModifierSetting_Numeric_C:GetSettingText(SettingText) end
---@param InSettingText FText
function UWBP_ModifierSetting_Numeric_C:SetSettingText(InSettingText) end
---@param IsDesignTime boolean
function UWBP_ModifierSetting_Numeric_C:PreConstruct(IsDesignTime) end
---@param InValue float
function UWBP_ModifierSetting_Numeric_C:BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(InValue) end
---@param InValue float
---@param CommitMethod ETextCommit::Type
function UWBP_ModifierSetting_Numeric_C:BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(InValue, CommitMethod) end
---@param EntryPoint int32
function UWBP_ModifierSetting_Numeric_C:ExecuteUbergraph_WBP_ModifierSetting_Numeric(EntryPoint) end
---@param InValue float
---@param CommitMethod ETextCommit::Type
function UWBP_ModifierSetting_Numeric_C:OnValueCommitted__DelegateSignature(InValue, CommitMethod) end
---@param InValue float
function UWBP_ModifierSetting_Numeric_C:OnValueChanged__DelegateSignature(InValue) end


