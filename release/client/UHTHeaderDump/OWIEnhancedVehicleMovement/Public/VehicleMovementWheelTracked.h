#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=VehicleWheel -FallbackName=VehicleWheel
#include "VehicleMovementWheelTracked.generated.h"

UCLASS(Blueprintable)
class UVehicleMovementWheelTracked : public UVehicleWheel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SuspensionDirection;
    
    UVehicleMovementWheelTracked();

};

