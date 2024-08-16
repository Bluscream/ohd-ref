#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=WheeledVehicleMovementComponent -FallbackName=WheeledVehicleMovementComponent
#include "VehicleTankEngineData.h"
#include "VehicleTankTransmissionData.h"
#include "WheeledVehicleMovementComponentTank.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWheeledVehicleMovementComponentTank : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTankEngineData EngineSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTankTransmissionData TransmissionSetup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawBothTracksThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawLeftTrackThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawRightTrackThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BothTracksThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftTrackThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightTrackThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WheelSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WheelAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftTrackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightTrackSpeed;
    
public:
    UWheeledVehicleMovementComponentTank(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRightTrackThrottleInput(float InThrottle);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftTrackThrottleInput(float InThrottle);
    
    UFUNCTION(BlueprintCallable)
    void SetBothTracksThrottleInput(float InThrottle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightTrackSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftTrackSpeed() const;
    
};

