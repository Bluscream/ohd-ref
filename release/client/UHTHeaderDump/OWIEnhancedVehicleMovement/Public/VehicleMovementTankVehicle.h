#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=WheeledVehicle -FallbackName=WheeledVehicle
#include "VehicleMovementTankVehicle.generated.h"

UCLASS(Blueprintable)
class AVehicleMovementTankVehicle : public AWheeledVehicle {
    GENERATED_BODY()
public:
    AVehicleMovementTankVehicle(const FObjectInitializer& ObjectInitializer);

};

