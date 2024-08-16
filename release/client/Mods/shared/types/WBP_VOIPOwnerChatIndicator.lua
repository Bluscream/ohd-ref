---@meta

---@class UWBP_VOIPOwnerChatIndicator_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OwnerVOIPInputUIAnim UWidgetAnimation
---@field IndicatorSpeakerIcon UImage
---@field IndicatorText UTextBlock
---@field IndicatorNameText FText
---@field IndicatorColor FSlateColor
---@field bActive boolean
UWBP_VOIPOwnerChatIndicator_C = {}

---@param IsDesignTime boolean
function UWBP_VOIPOwnerChatIndicator_C:PreConstruct(IsDesignTime) end
function UWBP_VOIPOwnerChatIndicator_C:OnInitialized() end
function UWBP_VOIPOwnerChatIndicator_C:Activate() end
function UWBP_VOIPOwnerChatIndicator_C:Deactivate() end
function UWBP_VOIPOwnerChatIndicator_C:InputAnimFinished() end
---@param EntryPoint int32
function UWBP_VOIPOwnerChatIndicator_C:ExecuteUbergraph_WBP_VOIPOwnerChatIndicator(EntryPoint) end


