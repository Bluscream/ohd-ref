---@meta

---@class UWBP_CaptureStatus_UnitIcon_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field UnitIcon UImage
---@field UnitType ECaptureUnitType::Type
---@field UnoccupiedUnitImage FSlateBrush
---@field FriendlyUnitImage FSlateBrush
---@field EnemyUnitImage FSlateBrush
---@field MultipleUnitImage FSlateBrush
---@field bUseFriendlyUnitColor boolean
---@field UnoccupiedUnitColor FLinearColor
---@field FriendlyUnitColor FLinearColor
---@field EnemyUnitColor FLinearColor
---@field bUnitMultiple boolean
---@field bIsDesignTime boolean
---@field LocalUnitColorToUse FLinearColor
UWBP_CaptureStatus_UnitIcon_C = {}

---@param bNewUnitMultiple boolean
function UWBP_CaptureStatus_UnitIcon_C:SetIsMultipleUnit(bNewUnitMultiple) end
---@param NewUnitType ECaptureUnitType::Type
function UWBP_CaptureStatus_UnitIcon_C:SetUnitType(NewUnitType) end
---@param IsDesignTime boolean
function UWBP_CaptureStatus_UnitIcon_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CaptureStatus_UnitIcon_C:ExecuteUbergraph_WBP_CaptureStatus_UnitIcon(EntryPoint) end


