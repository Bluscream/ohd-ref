#pragma once
#include "CoreMinimal.h"
#include "EArcVehicleSeatChangeType.generated.h"

UENUM(BlueprintType)
enum class EArcVehicleSeatChangeType : uint8 {
    Invalid,
    EnterVehicle,
    ExitVehicle,
    SwitchSeats,
};

