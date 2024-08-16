---@meta

---@class FMagicLeapARPinState
---@field Confidence float
---@field ValidRadius float
---@field RotationError float
---@field TranslationError float
FMagicLeapARPinState = {}



---@class UMagicLeapARPinComponent : USceneComponent
---@field ObjectUID FString
---@field UserIndex int32
---@field AutoPinType EMagicLeapAutoPinType
---@field bShouldPinActor boolean
---@field PinDataClass TSubclassOf<UMagicLeapARPinSaveGame>
---@field OnPersistentEntityPinned FMagicLeapARPinComponentOnPersistentEntityPinned
---@field OnPersistentEntityPinLost FMagicLeapARPinComponentOnPersistentEntityPinLost
---@field PinnedCFUID FGuid
---@field PinnedSceneComponent USceneComponent
---@field PinData UMagicLeapARPinSaveGame
UMagicLeapARPinComponent = {}

function UMagicLeapARPinComponent:UnPin() end
---@param ComponentToPin USceneComponent
---@return boolean
function UMagicLeapARPinComponent:PinSceneComponent(ComponentToPin) end
---@return boolean
function UMagicLeapARPinComponent:PinRestoredOrSynced() end
---@param ActorToPin AActor
---@return boolean
function UMagicLeapARPinComponent:PinActor(ActorToPin) end
---@param bRestoredOrSynced boolean
function UMagicLeapARPinComponent:PersistentEntityPinned__DelegateSignature(bRestoredOrSynced) end
function UMagicLeapARPinComponent:PersistentEntityPinLost__DelegateSignature() end
---@return boolean
function UMagicLeapARPinComponent:IsPinned() end
---@param State FMagicLeapARPinState
---@return boolean
function UMagicLeapARPinComponent:GetPinState(State) end
---@param PinID FGuid
---@return boolean
function UMagicLeapARPinComponent:GetPinnedPinID(PinID) end
---@param PinDataClass TSubclassOf<UMagicLeapARPinSaveGame>
---@return UMagicLeapARPinSaveGame
function UMagicLeapARPinComponent:GetPinData(PinDataClass) end


---@class UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapARPinFunctionLibrary = {}

---@param Delegate FUnBindToOnMagicLeapARPinUpdatedDelegateDelegate
function UMagicLeapARPinFunctionLibrary:UnBindToOnMagicLeapARPinUpdatedDelegate(Delegate) end
---@return boolean
function UMagicLeapARPinFunctionLibrary:IsTrackerValid() end
---@param Count int32
---@return EMagicLeapPassableWorldError
function UMagicLeapARPinFunctionLibrary:GetNumAvailableARPins(Count) end
---@param SearchPoint FVector
---@param PinID FGuid
---@return EMagicLeapPassableWorldError
function UMagicLeapARPinFunctionLibrary:GetClosestARPin(SearchPoint, PinID) end
---@param NumRequested int32
---@param Pins TArray<FGuid>
---@return EMagicLeapPassableWorldError
function UMagicLeapARPinFunctionLibrary:GetAvailableARPins(NumRequested, Pins) end
---@param State FMagicLeapARPinState
---@return FString
function UMagicLeapARPinFunctionLibrary:GetARPinStateToString(State) end
---@param PinID FGuid
---@param State FMagicLeapARPinState
---@return EMagicLeapPassableWorldError
function UMagicLeapARPinFunctionLibrary:GetARPinState(PinID, State) end
---@param PinID FGuid
---@param Position FVector
---@param Orientation FRotator
---@param PinFoundInEnvironment boolean
---@return boolean
function UMagicLeapARPinFunctionLibrary:GetARPinPositionAndOrientation_TrackingSpace(PinID, Position, Orientation, PinFoundInEnvironment) end
---@param PinID FGuid
---@param Position FVector
---@param Orientation FRotator
---@param PinFoundInEnvironment boolean
---@return boolean
function UMagicLeapARPinFunctionLibrary:GetARPinPositionAndOrientation(PinID, Position, Orientation, PinFoundInEnvironment) end
---@return EMagicLeapPassableWorldError
function UMagicLeapARPinFunctionLibrary:DestroyTracker() end
---@return EMagicLeapPassableWorldError
function UMagicLeapARPinFunctionLibrary:CreateTracker() end
---@param Delegate FBindToOnMagicLeapARPinUpdatedDelegateDelegate
function UMagicLeapARPinFunctionLibrary:BindToOnMagicLeapARPinUpdatedDelegate(Delegate) end


---@class UMagicLeapARPinSaveGame : USaveGame
---@field PinnedID FGuid
---@field ComponentWorldTransform FTransform
---@field PinTransform FTransform
UMagicLeapARPinSaveGame = {}



---@class UMagicLeapARPinSettings : UObject
---@field UpdateCheckFrequency float
---@field OnUpdatedEventTriggerDelta FMagicLeapARPinState
UMagicLeapARPinSettings = {}



