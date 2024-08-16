---@meta

---@class UWBP_HUDElement_Compass_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CompassClips UOverlay
---@field FadeEffectMask URetainerBox
---@field MarkerContainer UInvalidationBox
---@field CompassClippedRegion FVector2D
---@field CompassSizeAbsolute FVector2D
---@field CompassPosFactor float
---@field CompassHalfWidth float
---@field CompassHalfHeightNeg float
UWBP_HUDElement_Compass_C = {}

---@param Widget UWidget
---@param NewLayoutSize FVector2D
function UWBP_HUDElement_Compass_C:SetWidgetCanvasSlotSize(Widget, NewLayoutSize) end
function UWBP_HUDElement_Compass_C:UpdateDirection() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_HUDElement_Compass_C:Tick(MyGeometry, InDeltaTime) end
---@param IsDesignTime boolean
function UWBP_HUDElement_Compass_C:PreConstruct(IsDesignTime) end
function UWBP_HUDElement_Compass_C:OnInitialized() end
---@param EntryPoint int32
function UWBP_HUDElement_Compass_C:ExecuteUbergraph_WBP_HUDElement_Compass(EntryPoint) end


