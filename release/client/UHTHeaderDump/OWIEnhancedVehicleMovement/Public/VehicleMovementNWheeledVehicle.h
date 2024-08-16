#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=WheeledVehicle -FallbackName=WheeledVehicle
#include "VehicleMovementNWheeledVehicle.generated.h"

UCLASS(Blueprintable)
class AVehicleMovementNWheeledVehicle : public AWheeledVehicle {
    GENERATED_BODY()
public:
    AVehicleMovementNWheeledVehicle(const FObjectInitializer& ObjectInitializer);

};

