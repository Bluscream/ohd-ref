---@meta

---@class UTBButton : UButton
---@field OnDoubleClicked FTBButtonOnDoubleClicked
---@field bStopDoubleClickPropagation boolean
UTBButton = {}

function UTBButton:StopDoubleClickPropagation() end
---@param bInIsInteractionEnabled boolean
function UTBButton:SetIsInteractionEnabled(bInIsInteractionEnabled) end
---@param bInIsFocusable boolean
function UTBButton:SetIsFocusable(bInIsFocusable) end
---@return boolean
function UTBButton:IsInteractionEnabled() end
---@return boolean
function UTBButton:GetIsFocusable() end


---@class UTBListView : UListView
---@field BP_OnPreviewItemCreated FTBListViewBP_OnPreviewItemCreated
UTBListView = {}



---@class UTBSlider : USlider
---@field SliderFgBarColor FLinearColor
UTBSlider = {}

---@param InValue FLinearColor
function UTBSlider:SetSliderFgBarColor(InValue) end
---@param bInValue boolean
function UTBSlider:SetMouseUsesStep(bInValue) end


---@class UTBSliderWidgetStyle : USlateWidgetStyleContainerBase
---@field SliderStyle FSliderStyle
UTBSliderWidgetStyle = {}



