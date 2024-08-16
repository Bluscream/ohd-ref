---@meta

---@class UWBP_GameModifierSettingsSection_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Content UNamedSlot
---@field SectionActiveToggleChkBox UCheckBox
---@field SectionExpansionArrow UImage
---@field SectionExpansionToggleBtn UButton
---@field SectionTitleText UTextBlock
---@field TitleText FText
---@field bShowToggleBtn boolean
---@field bExpanded boolean
---@field bActive boolean
---@field OnActivated FWBP_GameModifierSettingsSection_COnActivated
---@field OnDeactivated FWBP_GameModifierSettingsSection_COnDeactivated
UWBP_GameModifierSettingsSection_C = {}

---@param bInIsEnabled boolean
function UWBP_GameModifierSettingsSection_C:InternalRecursiveSetContentIsEnabled(bInIsEnabled) end
---@param bActive boolean
function UWBP_GameModifierSettingsSection_C:IsActive(bActive) end
---@param bExpanded boolean
function UWBP_GameModifierSettingsSection_C:IsExpanded(bExpanded) end
---@param TitleText FText
function UWBP_GameModifierSettingsSection_C:GetTitleText(TitleText) end
---@param bActive boolean
function UWBP_GameModifierSettingsSection_C:SetIsActive(bActive) end
---@param bExpanded boolean
function UWBP_GameModifierSettingsSection_C:SetExpansionState(bExpanded) end
---@param InTitleText FText
function UWBP_GameModifierSettingsSection_C:SetTitleText(InTitleText) end
---@param IsDesignTime boolean
function UWBP_GameModifierSettingsSection_C:PreConstruct(IsDesignTime) end
function UWBP_GameModifierSettingsSection_C:BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param bIsChecked boolean
function UWBP_GameModifierSettingsSection_C:BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
---@param EntryPoint int32
function UWBP_GameModifierSettingsSection_C:ExecuteUbergraph_WBP_GameModifierSettingsSection(EntryPoint) end
function UWBP_GameModifierSettingsSection_C:OnDeactivated__DelegateSignature() end
function UWBP_GameModifierSettingsSection_C:OnActivated__DelegateSignature() end


