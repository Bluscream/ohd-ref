---@meta

---@class UBP_HDVehiclePlayerSeatComponent_C : UHDVehiclePlayerSeatComponent
---@field UberGraphFrame FPointerToUberGraphFrame
UBP_HDVehiclePlayerSeatComponent_C = {}

---@param SeatConfig UArcVehicleSeatConfig
function UBP_HDVehiclePlayerSeatComponent_C:GetValidSeatConfig(SeatConfig) end
function UBP_HDVehiclePlayerSeatComponent_C:ReceiveBeginPlay() end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UBP_HDVehiclePlayerSeatComponent_C:OnDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param SeatChangeType EArcVehicleSeatChangeType
function UBP_HDVehiclePlayerSeatComponent_C:OnSeatChangeEvent(SeatChangeType) end
---@param PC APlayerController
function UBP_HDVehiclePlayerSeatComponent_C:ResetPlayerCameraConstraints(PC) end
---@param PC APlayerController
function UBP_HDVehiclePlayerSeatComponent_C:SetupPlayerCameraConstraints(PC) end
---@param EntryPoint int32
function UBP_HDVehiclePlayerSeatComponent_C:ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent(EntryPoint) end


