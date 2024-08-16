---@meta

---@class UWBP_CaptureStatus_FlagIcon_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG UImage
---@field Icon UImage
---@field IconFrame UImage
---@field IconFrameNoTeam FSlateBrush
---@field BgNoTeam FSlateBrush
---@field IconLocked FSlateBrush
---@field IconFlag FSlateBrush
---@field IconFrameEnemy FSlateBrush
---@field IconOpacityCapturable float
---@field IconOpacityUncapturable float
---@field IconOpacityOffensive float
---@field IconFrameFriendly FSlateBrush
---@field BgEnemy FSlateBrush
---@field BgFriendly FSlateBrush
---@field ColorFriendly FSlateColor
---@field ColorEnemy FSlateColor
---@field ColorNoTeam FSlateColor
UWBP_CaptureStatus_FlagIcon_C = {}

---@param BrushToUpdate FSlateBrush
---@param bLocked boolean
---@param ObjType EHDControlPointObjectiveType
---@param NewBrush FSlateBrush
function UWBP_CaptureStatus_FlagIcon_C:SetBrushOpacityByCaptureStatus(BrushToUpdate, bLocked, ObjType, NewBrush) end
---@param BrushToTint FSlateBrush
---@param Team EHDTeam
---@param NewBrush FSlateBrush
function UWBP_CaptureStatus_FlagIcon_C:TintBrushByTeam(BrushToTint, Team, NewBrush) end
---@param bLocked boolean
---@param Team EHDTeam
---@param ObjType EHDControlPointObjectiveType
function UWBP_CaptureStatus_FlagIcon_C:UpdateBrushesByTeam(bLocked, Team, ObjType) end
---@param IconFrame FSlateBrush
---@param BG FSlateBrush
---@param Icon FSlateBrush
function UWBP_CaptureStatus_FlagIcon_C:SetBrushes(IconFrame, BG, Icon) end
---@param bActive boolean
---@param Team EHDTeam
---@param bLocked boolean
---@param ObjType EHDControlPointObjectiveType
function UWBP_CaptureStatus_FlagIcon_C:OnUpdateIcon(bActive, Team, bLocked, ObjType) end
---@param IsDesignTime boolean
function UWBP_CaptureStatus_FlagIcon_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CaptureStatus_FlagIcon_C:ExecuteUbergraph_WBP_CaptureStatus_FlagIcon(EntryPoint) end


