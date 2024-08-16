#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "ArcVehicleTurretMovementPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FArcVehicleTurretMovementPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ARCVEHICLES_API FArcVehicleTurretMovementPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FArcVehicleTurretMovementPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FArcVehicleTurretMovementPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

