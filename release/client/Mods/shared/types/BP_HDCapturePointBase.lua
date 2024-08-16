---@meta

---@class ABP_HDCapturePointBase_C : AHDBaseCapturePoint
---@field UberGraphFrame FPointerToUberGraphFrame
---@field IconWidget UWidgetComponent
---@field bDebug boolean
---@field bDebugFlagClothLOD boolean
---@field bOnlyShowDebugIfActive boolean
---@field Minimap UDFMinimap
---@field bShowIconWidget boolean
---@field OnCaptureStatusUpdated FBP_HDCapturePointBase_COnCaptureStatusUpdated
---@field LocalPC AHDPlayerController
---@field NavInvoker UNavigationInvokerComponent
ABP_HDCapturePointBase_C = {}

function ABP_HDCapturePointBase_C:UpdateFlagClothLOD() end
function ABP_HDCapturePointBase_C:AddPOI() end
function ABP_HDCapturePointBase_C:RemovePOI() end
function ABP_HDCapturePointBase_C:UpdatePOIState() end
---@param Minimap UDFMinimap
function ABP_HDCapturePointBase_C:InitPOI(Minimap) end
---@param InOwningTeam EHDTeam
---@param InLocalPlayerHUD AHUD
function ABP_HDCapturePointBase_C:UpdateFlagIcon(InOwningTeam, InLocalPlayerHUD) end
---@param InOwningTeam EHDTeam
function ABP_HDCapturePointBase_C:UpdateFlagColor(InOwningTeam) end
function ABP_HDCapturePointBase_C:UserConstructionScript() end
---@param DeltaSeconds float
function ABP_HDCapturePointBase_C:ReceiveTick(DeltaSeconds) end
---@param LastOwningTeam EHDTeam
function ABP_HDCapturePointBase_C:ReceiveOnOwningTeamUpdated(LastOwningTeam) end
---@param bNewContested boolean
function ABP_HDCapturePointBase_C:ReceiveOnCaptureProgress(bNewContested) end
---@param bContested boolean
---@param Progress int32
function ABP_HDCapturePointBase_C:OnCaptureUpdate(bContested, Progress) end
---@param bNewActive boolean
function ABP_HDCapturePointBase_C:ReceiveOnActive(bNewActive) end
---@param bNewLocked boolean
function ABP_HDCapturePointBase_C:ReceiveOnLocked(bNewLocked) end
function ABP_HDCapturePointBase_C:ReceiveBeginPlay() end
function ABP_HDCapturePointBase_C:ReceiveOnTeamCaptureStatusUpdated() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_HDCapturePointBase_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ABP_HDCapturePointBase_C:ExecuteUbergraph_BP_HDCapturePointBase(EntryPoint) end
---@param ControlPoint ABP_HDCapturePointBase_C
function ABP_HDCapturePointBase_C:OnCaptureStatusUpdated__DelegateSignature(ControlPoint) end


