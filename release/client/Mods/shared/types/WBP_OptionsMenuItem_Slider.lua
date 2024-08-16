---@meta

---@class UWBP_OptionsMenuItem_Slider_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OptionSlider UTBSlider
---@field OptionText UTextBlock
---@field SliderValueText UTextBlock
---@field Text FText
---@field TextDescription FText
---@field InitialValue float
---@field ValueChanged FWBP_OptionsMenuItem_Slider_CValueChanged
---@field ValueMin float
---@field ValueMax float
---@field ValueStepSize float
---@field SpecialValues TMap<float, FText>
---@field bStepValuesOnly boolean
---@field bMouseUsesStep boolean
---@field bSnapToStepValue boolean
---@field TextIntegralDigitsMin int32
---@field TextIntegralDigitsMax int32
---@field TextFractionalDigitsMin int32
---@field TextFractionalDigitsMax int32
---@field bTextUsesGrouping boolean
---@field TextRoundingMode ERoundingMode
---@field TextSuffix FText
---@field TextPrefix FText
---@field SliderPadding FMargin
---@field OptionTextPadding FMargin
UWBP_OptionsMenuItem_Slider_C = {}

---@param InValue float
---@param bDirectSet boolean
function UWBP_OptionsMenuItem_Slider_C:SetValueInternal(InValue, bDirectSet) end
---@param bOutMouseUsesStep boolean
function UWBP_OptionsMenuItem_Slider_C:DoesMouseUseStep(bOutMouseUsesStep) end
---@param bInMouseUsesStep boolean
function UWBP_OptionsMenuItem_Slider_C:SetMouseUsesStep(bInMouseUsesStep) end
---@param NewStepSize float
function UWBP_OptionsMenuItem_Slider_C:SetValueStepSize(NewStepSize) end
---@param NewMax float
function UWBP_OptionsMenuItem_Slider_C:SetValueMax(NewMax) end
---@param NewMin float
function UWBP_OptionsMenuItem_Slider_C:SetValueMin(NewMin) end
---@param NewValue float
function UWBP_OptionsMenuItem_Slider_C:UpdateSliderText(NewValue) end
---@param ValueNormalized float
function UWBP_OptionsMenuItem_Slider_C:GetNormalizedValue(ValueNormalized) end
---@param InNormValue float
function UWBP_OptionsMenuItem_Slider_C:SetNormalizedValue(InNormValue) end
---@param bInLocked boolean
function UWBP_OptionsMenuItem_Slider_C:SetLocked(bInLocked) end
---@param bOutLocked boolean
function UWBP_OptionsMenuItem_Slider_C:IsLocked(bOutLocked) end
---@param InValue float
function UWBP_OptionsMenuItem_Slider_C:SetValue(InValue) end
---@param Value float
function UWBP_OptionsMenuItem_Slider_C:GetValue(Value) end
---@param IsDesignTime boolean
function UWBP_OptionsMenuItem_Slider_C:PreConstruct(IsDesignTime) end
---@param Value float
function UWBP_OptionsMenuItem_Slider_C:BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param EntryPoint int32
function UWBP_OptionsMenuItem_Slider_C:ExecuteUbergraph_WBP_OptionsMenuItem_Slider(EntryPoint) end
---@param Value float
function UWBP_OptionsMenuItem_Slider_C:ValueChanged__DelegateSignature(Value) end


