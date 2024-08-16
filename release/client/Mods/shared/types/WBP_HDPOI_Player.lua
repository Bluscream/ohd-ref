---@meta

---@class UWBP_HDPOI_Player_C : UDFPOIWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PlayerIcon UImage
---@field SquadNumberText UTextBlock
---@field POIWidgetInitialized boolean
---@field SelectedTintColor FSlateColor
---@field DeselectedTintColor FSlateColor
UWBP_HDPOI_Player_C = {}

function UWBP_HDPOI_Player_C:ReceivePOISelected() end
function UWBP_HDPOI_Player_C:ReceivePOIDeselected() end
---@param IsDesignTime boolean
function UWBP_HDPOI_Player_C:PreConstruct(IsDesignTime) end
function UWBP_HDPOI_Player_C:Construct() end
---@param NewIconBrush FSlateBrush
function UWBP_HDPOI_Player_C:SetIconBrush(NewIconBrush) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_HDPOI_Player_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_HDPOI_Player_C:ExecuteUbergraph_WBP_HDPOI_Player(EntryPoint) end


