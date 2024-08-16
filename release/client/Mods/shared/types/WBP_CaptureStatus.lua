---@meta

---@class UWBP_CaptureStatus_C : UHDUIUWCaptureStatus
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DisplayCaptureUIAnim UWidgetAnimation
---@field ControlPointProgressBar UProgressBar
---@field ControlPointText UTextBlock
---@field GarrisonedUnitHBox UHorizontalBox
---@field TeamOwnerText UTextBlock
---@field LocalOwnershipColorToUse FLinearColor
---@field PreviewNumFriendlies int32
---@field PreviewNumEnemies int32
---@field PreviewMinNumRequiredToCapture int32
---@field bFriendlyUnitsRightToLeft boolean
---@field bEnemyUnitsRightToLeft boolean
---@field bUseFriendlyOwnershipColor boolean
---@field UnitPadding FMargin
---@field FriendlyOwnershipColor FLinearColor
---@field NeutralOwnershipColor FLinearColor
---@field EnemyOwnershipColor FLinearColor
UWBP_CaptureStatus_C = {}

---@param bFriendly boolean
---@param UnitCount int32
---@param MinUnitsRequired int32
function UWBP_CaptureStatus_C:UpdateActiveUnits(bFriendly, UnitCount, MinUnitsRequired) end
---@param MinCount int32
function UWBP_CaptureStatus_C:SetMinCountToCapture(MinCount) end
---@param NewUnitIconCount int32
function UWBP_CaptureStatus_C:ResizeGarrisonContainer(NewUnitIconCount) end
---@param CaptureTeam EHDTeam
function UWBP_CaptureStatus_C:UpdateTeamOwnerText(CaptureTeam) end
---@param OwningTeam EHDTeam
function UWBP_CaptureStatus_C:UpdateProgressBarColor(OwningTeam) end
---@param OverlappingCP AHDBaseCapturePoint
---@param bInitial boolean
function UWBP_CaptureStatus_C:OwnerTouchingControlPoint(OverlappingCP, bInitial) end
function UWBP_CaptureStatus_C:OwnerNoControlPoint() end
function UWBP_CaptureStatus_C:OnInitialized() end
---@param bContested boolean
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UWBP_CaptureStatus_C:ControlPointSetCaptureProgress(bContested, NewValueNorm, OldValueNorm, bInitial) end
---@param bCaptured boolean
---@param NewOwningTeam EHDTeam
---@param OldOwningTeam EHDTeam
---@param bInitial boolean
function UWBP_CaptureStatus_C:ControlPointSetOwnershipState(bCaptured, NewOwningTeam, OldOwningTeam, bInitial) end
---@param NumFriendlies int32
---@param NumEnemies int32
---@param MinNumRequiredForCapture int32
---@param bInitial boolean
function UWBP_CaptureStatus_C:ControlPointSetGarrisonedPlayerCount(NumFriendlies, NumEnemies, MinNumRequiredForCapture, bInitial) end
---@param IsDesignTime boolean
function UWBP_CaptureStatus_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CaptureStatus_C:ExecuteUbergraph_WBP_CaptureStatus(EntryPoint) end


