#ifndef UE4SS_SDK_OWIEnhancedVehicleMovement_HPP
#define UE4SS_SDK_OWIEnhancedVehicleMovement_HPP

struct FVehicleNWEngineData
{
    FRuntimeFloatCurve TorqueCurve;                                                   // 0x0000 (size: 0x88)
    float MaxRPM;                                                                     // 0x0088 (size: 0x4)
    float MOI;                                                                        // 0x008C (size: 0x4)
    float DampingRateFullThrottle;                                                    // 0x0090 (size: 0x4)
    float DampingRateZeroThrottleClutchEngaged;                                       // 0x0094 (size: 0x4)
    float DampingRateZeroThrottleClutchDisengaged;                                    // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FVehicleNWGearData
{
    float Ratio;                                                                      // 0x0000 (size: 0x4)
    float DownRatio;                                                                  // 0x0004 (size: 0x4)
    float UpRatio;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FVehicleNWTransmissionData
{
    bool bUseGearAutoBox;                                                             // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float GearSwitchTime;                                                             // 0x0004 (size: 0x4)
    float GearAutoBoxLatency;                                                         // 0x0008 (size: 0x4)
    float FinalRatio;                                                                 // 0x000C (size: 0x4)
    TArray<FVehicleNWGearData> ForwardGears;                                          // 0x0010 (size: 0x10)
    TArray<FVehicleNWGearData> BackwardGears;                                         // 0x0020 (size: 0x10)
    float ReverseGearRatio;                                                           // 0x0030 (size: 0x4)
    float NeutralGearUpRatio;                                                         // 0x0034 (size: 0x4)
    float NeutralGearDownRatio;                                                       // 0x0038 (size: 0x4)
    float ClutchStrength;                                                             // 0x003C (size: 0x4)

}; // Size: 0x40

struct FVehicleNWWheelDifferentialData
{
    bool bDriven;                                                                     // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FVehicleTankEngineData
{
    FRuntimeFloatCurve TorqueCurve;                                                   // 0x0000 (size: 0x88)
    float MaxRPM;                                                                     // 0x0088 (size: 0x4)
    float MOI;                                                                        // 0x008C (size: 0x4)
    float DampingRateFullThrottle;                                                    // 0x0090 (size: 0x4)
    float DampingRateZeroThrottleClutchEngaged;                                       // 0x0094 (size: 0x4)
    float DampingRateZeroThrottleClutchDisengaged;                                    // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FVehicleTankGearData
{
    float Ratio;                                                                      // 0x0000 (size: 0x4)
    float DownRatio;                                                                  // 0x0004 (size: 0x4)
    float UpRatio;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FVehicleTankTransmissionData
{
    bool bUseGearAutoBox;                                                             // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float GearSwitchTime;                                                             // 0x0004 (size: 0x4)
    float GearAutoBoxLatency;                                                         // 0x0008 (size: 0x4)
    float FinalRatio;                                                                 // 0x000C (size: 0x4)
    TArray<FVehicleTankGearData> ForwardGears;                                        // 0x0010 (size: 0x10)
    TArray<FVehicleTankGearData> BackwardGears;                                       // 0x0020 (size: 0x10)
    float ReverseGearRatio;                                                           // 0x0030 (size: 0x4)
    float NeutralGearUpRatio;                                                         // 0x0034 (size: 0x4)
    float NeutralGearDownRatio;                                                       // 0x0038 (size: 0x4)
    float ClutchStrength;                                                             // 0x003C (size: 0x4)

}; // Size: 0x40

class AVehicleMovementNWheeledVehicle : public AWheeledVehicle
{
    char padding_0[0x290];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x290

class AVehicleMovementTankVehicle : public AWheeledVehicle
{
    char padding_0[0x290];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x290

class UVehicleMovementWheelTracked : public UVehicleWheel
{
    FVector SuspensionDirection;                                                      // 0x00F0 (size: 0xC)

}; // Size: 0x100

class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent
{
    FVehicleNWEngineData EngineSetup;                                                 // 0x0290 (size: 0xA0)
    TArray<FVehicleNWWheelDifferentialData> DifferentialSetup;                        // 0x0330 (size: 0x10)
    FVehicleNWTransmissionData TransmissionSetup;                                     // 0x0340 (size: 0x40)
    FRuntimeFloatCurve SteeringCurve;                                                 // 0x0380 (size: 0x88)

}; // Size: 0x408

class UWheeledVehicleMovementComponentTank : public UWheeledVehicleMovementComponent
{
    FVehicleTankEngineData EngineSetup;                                               // 0x0290 (size: 0xA0)
    FVehicleTankTransmissionData TransmissionSetup;                                   // 0x0330 (size: 0x40)
    float RawBothTracksThrottleInput;                                                 // 0x0370 (size: 0x4)
    float RawLeftTrackThrottleInput;                                                  // 0x0374 (size: 0x4)
    float RawRightTrackThrottleInput;                                                 // 0x0378 (size: 0x4)
    float BothTracksThrottleInput;                                                    // 0x037C (size: 0x4)
    float LeftTrackThrottleInput;                                                     // 0x0380 (size: 0x4)
    float RightTrackThrottleInput;                                                    // 0x0384 (size: 0x4)
    TArray<float> WheelSpeeds;                                                        // 0x0388 (size: 0x10)
    TArray<float> WheelAngles;                                                        // 0x0398 (size: 0x10)
    float LeftTrackSpeed;                                                             // 0x03A8 (size: 0x4)
    float RightTrackSpeed;                                                            // 0x03AC (size: 0x4)

    void SetRightTrackThrottleInput(float InThrottle);
    void SetLeftTrackThrottleInput(float InThrottle);
    void SetBothTracksThrottleInput(float InThrottle);
    float GetRightTrackSpeed();
    float GetLeftTrackSpeed();
}; // Size: 0x3B8

#endif
