---@meta

---@class AVehicleMovementNWheeledVehicle : AWheeledVehicle
AVehicleMovementNWheeledVehicle = {}


---@class AVehicleMovementTankVehicle : AWheeledVehicle
AVehicleMovementTankVehicle = {}


---@class FVehicleNWEngineData
---@field TorqueCurve FRuntimeFloatCurve
---@field MaxRPM float
---@field MOI float
---@field DampingRateFullThrottle float
---@field DampingRateZeroThrottleClutchEngaged float
---@field DampingRateZeroThrottleClutchDisengaged float
FVehicleNWEngineData = {}



---@class FVehicleNWGearData
---@field Ratio float
---@field DownRatio float
---@field UpRatio float
FVehicleNWGearData = {}



---@class FVehicleNWTransmissionData
---@field bUseGearAutoBox boolean
---@field GearSwitchTime float
---@field GearAutoBoxLatency float
---@field FinalRatio float
---@field ForwardGears TArray<FVehicleNWGearData>
---@field BackwardGears TArray<FVehicleNWGearData>
---@field ReverseGearRatio float
---@field NeutralGearUpRatio float
---@field NeutralGearDownRatio float
---@field ClutchStrength float
FVehicleNWTransmissionData = {}



---@class FVehicleNWWheelDifferentialData
---@field bDriven boolean
FVehicleNWWheelDifferentialData = {}



---@class FVehicleTankEngineData
---@field TorqueCurve FRuntimeFloatCurve
---@field MaxRPM float
---@field MOI float
---@field DampingRateFullThrottle float
---@field DampingRateZeroThrottleClutchEngaged float
---@field DampingRateZeroThrottleClutchDisengaged float
FVehicleTankEngineData = {}



---@class FVehicleTankGearData
---@field Ratio float
---@field DownRatio float
---@field UpRatio float
FVehicleTankGearData = {}



---@class FVehicleTankTransmissionData
---@field bUseGearAutoBox boolean
---@field GearSwitchTime float
---@field GearAutoBoxLatency float
---@field FinalRatio float
---@field ForwardGears TArray<FVehicleTankGearData>
---@field BackwardGears TArray<FVehicleTankGearData>
---@field ReverseGearRatio float
---@field NeutralGearUpRatio float
---@field NeutralGearDownRatio float
---@field ClutchStrength float
FVehicleTankTransmissionData = {}



---@class UVehicleMovementWheelTracked : UVehicleWheel
---@field SuspensionDirection FVector
UVehicleMovementWheelTracked = {}



---@class UWheeledVehicleMovementComponentNW : UWheeledVehicleMovementComponent
---@field EngineSetup FVehicleNWEngineData
---@field DifferentialSetup TArray<FVehicleNWWheelDifferentialData>
---@field TransmissionSetup FVehicleNWTransmissionData
---@field SteeringCurve FRuntimeFloatCurve
UWheeledVehicleMovementComponentNW = {}



---@class UWheeledVehicleMovementComponentTank : UWheeledVehicleMovementComponent
---@field EngineSetup FVehicleTankEngineData
---@field TransmissionSetup FVehicleTankTransmissionData
---@field RawBothTracksThrottleInput float
---@field RawLeftTrackThrottleInput float
---@field RawRightTrackThrottleInput float
---@field BothTracksThrottleInput float
---@field LeftTrackThrottleInput float
---@field RightTrackThrottleInput float
---@field WheelSpeeds TArray<float>
---@field WheelAngles TArray<float>
---@field LeftTrackSpeed float
---@field RightTrackSpeed float
UWheeledVehicleMovementComponentTank = {}

---@param InThrottle float
function UWheeledVehicleMovementComponentTank:SetRightTrackThrottleInput(InThrottle) end
---@param InThrottle float
function UWheeledVehicleMovementComponentTank:SetLeftTrackThrottleInput(InThrottle) end
---@param InThrottle float
function UWheeledVehicleMovementComponentTank:SetBothTracksThrottleInput(InThrottle) end
---@return float
function UWheeledVehicleMovementComponentTank:GetRightTrackSpeed() end
---@return float
function UWheeledVehicleMovementComponentTank:GetLeftTrackSpeed() end


