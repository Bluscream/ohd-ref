#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimPlaySpace.generated.h"

UENUM(BlueprintType)
namespace ECameraAnimPlaySpace {
    enum Type {
        CameraLocal,
        World,
        UserDefined,
    };
}

