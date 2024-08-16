---@meta

---@class UWBP_RadialMenuIconBase_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Shake UWidgetAnimation
---@field Grow UWidgetAnimation
---@field Icon UImage
---@field Sizer USizeBox
---@field IconImage UTexture2D
---@field IconSize float
---@field Settings FSRadialMenuIconSettings
---@field CurrentColor FLinearColor
---@field highlighted boolean
---@field Alpha float
UWBP_RadialMenuIconBase_C = {}

---@return FLinearColor
function UWBP_RadialMenuIconBase_C:Get_Icon_ColorAndOpacity_0() end
---@param IsDesignTime boolean
function UWBP_RadialMenuIconBase_C:PreConstruct(IsDesignTime) end
function UWBP_RadialMenuIconBase_C:OnHighlight() end
function UWBP_RadialMenuIconBase_C:OnUnhighlight() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_RadialMenuIconBase_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_RadialMenuIconBase_C:ExecuteUbergraph_WBP_RadialMenuIconBase(EntryPoint) end


