---@meta

---@class AMagicLeapSharedWorldGameMode : AGameMode
---@field SharedWorldData FMagicLeapSharedWorldSharedData
---@field OnNewLocalDataFromClients FMagicLeapSharedWorldGameModeOnNewLocalDataFromClients
---@field PinSelectionConfidenceThreshold float
---@field ChosenOne AMagicLeapSharedWorldPlayerController
AMagicLeapSharedWorldGameMode = {}

---@return boolean
function AMagicLeapSharedWorldGameMode:SendSharedWorldDataToClients() end
function AMagicLeapSharedWorldGameMode:SelectChosenOne() end
function AMagicLeapSharedWorldGameMode:MagicLeapOnNewLocalDataFromClients__DelegateSignature() end
---@param NewSharedWorldData FMagicLeapSharedWorldSharedData
function AMagicLeapSharedWorldGameMode:DetermineSharedWorldData(NewSharedWorldData) end


---@class AMagicLeapSharedWorldGameState : AGameState
---@field SharedWorldData FMagicLeapSharedWorldSharedData
---@field AlignmentTransforms FMagicLeapSharedWorldAlignmentTransforms
---@field OnSharedWorldDataUpdated FMagicLeapSharedWorldGameStateOnSharedWorldDataUpdated
---@field OnAlignmentTransformsUpdated FMagicLeapSharedWorldGameStateOnAlignmentTransformsUpdated
AMagicLeapSharedWorldGameState = {}

function AMagicLeapSharedWorldGameState:OnReplicate_SharedWorldData() end
function AMagicLeapSharedWorldGameState:OnReplicate_AlignmentTransforms() end
function AMagicLeapSharedWorldGameState:MagicLeapSharedWorldEvent__DelegateSignature() end
---@return FTransform
function AMagicLeapSharedWorldGameState:CalculateXRCameraRootTransform() end


---@class AMagicLeapSharedWorldPlayerController : APlayerController
AMagicLeapSharedWorldPlayerController = {}

---@param LocalWorldReplicationData FMagicLeapSharedWorldLocalData
function AMagicLeapSharedWorldPlayerController:ServerSetLocalWorldData(LocalWorldReplicationData) end
---@param InAlignmentTransforms FMagicLeapSharedWorldAlignmentTransforms
function AMagicLeapSharedWorldPlayerController:ServerSetAlignmentTransforms(InAlignmentTransforms) end
---@return boolean
function AMagicLeapSharedWorldPlayerController:IsChosenOne() end
---@param bChosenOne boolean
function AMagicLeapSharedWorldPlayerController:ClientSetChosenOne(bChosenOne) end
function AMagicLeapSharedWorldPlayerController:ClientMarkReadyForSendingLocalData() end
---@return boolean
function AMagicLeapSharedWorldPlayerController:CanSendLocalDataToServer() end


---@class FMagicLeapSharedWorldAlignmentTransforms
---@field AlignmentTransforms TArray<FTransform>
FMagicLeapSharedWorldAlignmentTransforms = {}



---@class FMagicLeapSharedWorldLocalData
---@field LocalPins TArray<FMagicLeapSharedWorldPinData>
FMagicLeapSharedWorldLocalData = {}



---@class FMagicLeapSharedWorldPinData
---@field PinID FGuid
---@field PinState FMagicLeapARPinState
FMagicLeapSharedWorldPinData = {}



---@class FMagicLeapSharedWorldSharedData
---@field PinIDs TArray<FGuid>
FMagicLeapSharedWorldSharedData = {}



