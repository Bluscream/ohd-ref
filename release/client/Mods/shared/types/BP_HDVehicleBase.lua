---@meta

---@class ABP_HDVehicleBase_C : AArcBaseVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EngineSound UAudioComponent
---@field Mesh USkeletalMeshComponent
---@field VehicleMovementOWI UWheeledVehicleMovementComponentNW
---@field DriverAnimSet TMap<FName, UAnimSequenceBase>
---@field PassengerAnimSet TMap<FName, UAnimSequenceBase>
ABP_HDVehicleBase_C = {}

---@param Key FKey
function ABP_HDVehicleBase_C:InpActEvt_Jump_K2Node_InputActionEvent_2(Key) end
---@param Key FKey
function ABP_HDVehicleBase_C:InpActEvt_Jump_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ABP_HDVehicleBase_C:InpActEvt_Use_K2Node_InputActionEvent_0(Key) end
---@param AxisValue float
function ABP_HDVehicleBase_C:InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(AxisValue) end
---@param AxisValue float
function ABP_HDVehicleBase_C:InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(AxisValue) end
---@param Invoker AActor
function ABP_HDVehicleBase_C:Used(Invoker) end
---@param Player APlayerState
---@param ToSeat UArcVehicleSeatConfig
---@param FromSeat UArcVehicleSeatConfig
---@param SeatChangeEvent EArcVehicleSeatChangeType
function ABP_HDVehicleBase_C:NotifyPlayerSeatChangeEvent(Player, ToSeat, FromSeat, SeatChangeEvent) end
---@param DeltaSeconds float
function ABP_HDVehicleBase_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_HDVehicleBase_C:ExecuteUbergraph_BP_HDVehicleBase(EntryPoint) end


