---@meta

---@class UWBP_ModifierSetting_EditableText_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ModifierEditableText UEditableText
---@field ModifierSetting UWBP_ModifierSettingBox_C
---@field SettingLabelText FText
---@field SettingLabelTextStyle FFModifierTextStyle
---@field DefaultText FText
---@field DefaultHintText FText
---@field DefaultOptions TArray<FString>
---@field DefaultSelectedOptionIdx int32
---@field OnTextChanged FWBP_ModifierSetting_EditableText_COnTextChanged
---@field OnTextCommitted FWBP_ModifierSetting_EditableText_COnTextCommitted
UWBP_ModifierSetting_EditableText_C = {}

---@param SettingText FText
function UWBP_ModifierSetting_EditableText_C:GetSettingLabel(SettingText) end
---@param InSettingText FText
function UWBP_ModifierSetting_EditableText_C:SetSettingLabel(InSettingText) end
---@param IsDesignTime boolean
function UWBP_ModifierSetting_EditableText_C:PreConstruct(IsDesignTime) end
function UWBP_ModifierSetting_EditableText_C:OnInitialized() end
---@param Text FText
function UWBP_ModifierSetting_EditableText_C:BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(Text) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_ModifierSetting_EditableText_C:BndEvt__ModifierEditableText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param EntryPoint int32
function UWBP_ModifierSetting_EditableText_C:ExecuteUbergraph_WBP_ModifierSetting_EditableText(EntryPoint) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_ModifierSetting_EditableText_C:OnTextCommitted__DelegateSignature(Text, CommitMethod) end
---@param Text FText
function UWBP_ModifierSetting_EditableText_C:OnTextChanged__DelegateSignature(Text) end


