---@meta

---@class UWBP_ScrollBarArrowButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ArrowBtn UButton
---@field ScrollBox UScrollBox
---@field bScrollDown boolean
---@field bInit boolean
UWBP_ScrollBarArrowButton_C = {}

---@param MaxOffset float
function UWBP_ScrollBarArrowButton_C:GetMaxScrollOffset(MaxOffset) end
---@param bInitialized boolean
function UWBP_ScrollBarArrowButton_C:IsInitialized(bInitialized) end
---@param ScrollBoxToUse UScrollBox
function UWBP_ScrollBarArrowButton_C:SetScrollBox(ScrollBoxToUse) end
function UWBP_ScrollBarArrowButton_C:BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UWBP_ScrollBarArrowButton_C:PreConstruct(IsDesignTime) end
function UWBP_ScrollBarArrowButton_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_ScrollBarArrowButton_C:ExecuteUbergraph_WBP_ScrollBarArrowButton(EntryPoint) end


