---@meta

---@class AArcBaseVehicle : AArcVehiclePawn
---@field DriverSeatConfig UArcVehicleSeatConfig
---@field AdditionalSeatConfigs TArray<UArcVehicleSeatConfig>
---@field ReplicatedSeatConfigs TArray<UArcVehicleSeatConfig>
---@field SeatChangeQueue TArray<FArcVehicleSeatChangeEvent>
---@field ServerDebugStrings TArray<FString>
AArcBaseVehicle = {}

---@param SeatConfig UArcVehicleSeatConfig
function AArcBaseVehicle:SetupSeat(SeatConfig) end
function AArcBaseVehicle:ServerPrintDebug_Request() end
---@param InPlayerState APlayerState
function AArcBaseVehicle:RequestLeaveVehicle(InPlayerState) end
---@param InPlayerState APlayerState
---@param RequestedSeatIndex int32
---@param bIgnoreRestrictions boolean
function AArcBaseVehicle:RequestEnterSeat(InPlayerState, RequestedSeatIndex, bIgnoreRestrictions) end
---@param InPlayerState APlayerState
function AArcBaseVehicle:RequestEnterAnySeat(InPlayerState) end
function AArcBaseVehicle:OnRep_ServerDebugStrings() end
---@param InSeatIndex int32
---@return boolean
function AArcBaseVehicle:IsValidSeatIndex(InSeatIndex) end
---@param InputLocation FTransform
---@param OutTransformArray TArray<FTransform>
function AArcBaseVehicle:GetSortedExitPoints(InputLocation, OutTransformArray) end
---@param InputLocation FTransform
---@return FTransform
function AArcBaseVehicle:GetNearestExitTransform(InputLocation) end
---@return UArcVehicleSeatConfig
function AArcBaseVehicle:GetDriverSeat() end
---@param Seats TArray<UArcVehicleSeatConfig>
function AArcBaseVehicle:GetAllSeats(Seats) end


---@class AArcVehiclePawn : APawn
AArcVehiclePawn = {}

---@param Player APlayerState
---@param ToSeat UArcVehicleSeatConfig
---@param FromSeat UArcVehicleSeatConfig
---@param SeatChangeEvent EArcVehicleSeatChangeType
function AArcVehiclePawn:NotifyPlayerSeatChangeEvent(Player, ToSeat, FromSeat, SeatChangeEvent) end
---@return UArcVehicleSeatConfig
function AArcVehiclePawn:GetSeatConfig() end
---@return AArcBaseVehicle
function AArcVehiclePawn:GetOwningVehicle() end


---@class AArcVehicleSeat : AArcVehiclePawn
---@field SeatConfig UArcVehicleSeatConfig
AArcVehicleSeat = {}



---@class FArcOwnerAttachmentReference
---@field ComponentName FName
---@field SocketName FName
FArcOwnerAttachmentReference = {}



---@class FArcVehicleSeatChangeEvent
---@field Player APlayerState
FArcVehicleSeatChangeEvent = {}



---@class FArcVehicleSeatReference
---@field Vehicle AArcBaseVehicle
---@field SeatID int32
FArcVehicleSeatReference = {}



---@class FArcVehicleTurretMovementPostPhysicsTickFunction : FTickFunction
FArcVehicleTurretMovementPostPhysicsTickFunction = {}


---@class UArcVehicleBPFunctionLibrary : UBlueprintFunctionLibrary
UArcVehicleBPFunctionLibrary = {}

---@param SeatRef FArcVehicleSeatReference
---@return boolean
function UArcVehicleBPFunctionLibrary:IsSeatRefValid(SeatRef) end
---@param SeatRef FArcVehicleSeatReference
---@return UArcVehicleSeatConfig
function UArcVehicleBPFunctionLibrary:GetVehicleSeatConfigFromRef(SeatRef) end
---@param SeatRef FArcVehicleSeatReference
---@return AArcBaseVehicle
function UArcVehicleBPFunctionLibrary:GetVehicleFromSeatConfig(SeatRef) end


---@class UArcVehicleDeveloperSettings : UDeveloperSettings
---@field PlayerSeatComponentClass TSubclassOf<UArcVehiclePlayerSeatComponent>
---@field PlayerStateComponentClass TSubclassOf<UArcVehiclePlayerStateComponent>
UArcVehicleDeveloperSettings = {}



---@class UArcVehicleEngineSubsystem : UEngineSubsystem
UArcVehicleEngineSubsystem = {}


---@class UArcVehicleExitPoint : USceneComponent
UArcVehicleExitPoint = {}


---@class UArcVehiclePlayerSeatComponent : UActorComponent
---@field CurrentSeatConfig FArcVehicleSeatReference
---@field PreviousSeatConfig FArcVehicleSeatReference
---@field StoredPlayerState APlayerState
---@field ServerDebugStrings TArray<FString>
---@field PreviousVehicleCollisionResponses TMap<UPrimitiveComponent, ECollisionResponse>
UArcVehiclePlayerSeatComponent = {}

function UArcVehiclePlayerSeatComponent:ServerPrintDebug_Request() end
---@param SeatChangeType EArcVehicleSeatChangeType
function UArcVehiclePlayerSeatComponent:OnSeatChangeEvent(SeatChangeType) end
---@param InPreviousPlayerState APlayerState
function UArcVehiclePlayerSeatComponent:OnRep_StoredPlayerState(InPreviousPlayerState) end
function UArcVehiclePlayerSeatComponent:OnRep_ServerDebugStrings() end
---@param InPreviousSeatConfig FArcVehicleSeatReference
function UArcVehiclePlayerSeatComponent:OnRep_SeatConfig(InPreviousSeatConfig) end
---@param InPreviousPlayerState APlayerState
function UArcVehiclePlayerSeatComponent:BP_OnRep_StoredPlayerState(InPreviousPlayerState) end


---@class UArcVehiclePlayerStateComponent : UActorComponent
---@field StoredPlayerPawn APawn
UArcVehiclePlayerStateComponent = {}



---@class UArcVehicleSeatConfig : UActorComponent
---@field AttachSeatToComponent FArcOwnerAttachmentReference
---@field PlayerInSeat APlayerState
---@field PlayerSeatComponent UArcVehiclePlayerSeatComponent
---@field bPlayerVisible boolean
UArcVehicleSeatConfig = {}

---@param Player APlayerState
function UArcVehicleSeatConfig:UnAttachPlayerFromSeat(Player) end
function UArcVehicleSeatConfig:SetupSeatAttachment() end
---@return boolean
function UArcVehicleSeatConfig:IsOpenSeat() end
---@return boolean
function UArcVehicleSeatConfig:IsDriverSeat() end
---@return AArcBaseVehicle
function UArcVehicleSeatConfig:GetVehicleOwner() end
---@param Player APlayerState
function UArcVehicleSeatConfig:BP_UnAttachPlayerFromSeat(Player) end
---@param Player APlayerState
function UArcVehicleSeatConfig:BP_AttachPlayerToSeat(Player) end
---@param Player APlayerState
function UArcVehicleSeatConfig:AttachPlayerToSeat(Player) end


---@class UArcVehicleSeatConfig_PlayerAttachment : UArcVehicleSeatConfig
UArcVehicleSeatConfig_PlayerAttachment = {}


---@class UArcVehicleSeatConfig_SeatPawn : UArcVehicleSeatConfig_PlayerAttachment
---@field SeatPawnClass TSubclassOf<AArcVehicleSeat>
---@field PlayerCharacterAttachToComponent FArcOwnerAttachmentReference
---@field bResetControlRotationOnEnter boolean
---@field SeatPawn AArcVehiclePawn
UArcVehicleSeatConfig_SeatPawn = {}

---@param OldSeatPawn AArcVehiclePawn
function UArcVehicleSeatConfig_SeatPawn:OnRep_SeatPawn(OldSeatPawn) end


---@class UArcVehicleTurretMovementComp : UPawnMovementComponent
---@field bIgnoreBaseRotation boolean
---@field bIgnorePitch boolean
---@field bIgnoreYaw boolean
---@field bIgnoreRoll boolean
---@field UpdatedPitchComponent USceneComponent
---@field RotationRate FRotator
---@field CurrentBase USceneComponent
---@field PostPhysicsTickFunction FArcVehicleTurretMovementPostPhysicsTickFunction
UArcVehicleTurretMovementComp = {}

---@param FullRotation FRotator
function UArcVehicleTurretMovementComp:Server_ServerMove(FullRotation) end


