#pragma once
#include "CoreMinimal.h"
#include "EHDUICharacterStanceState.generated.h"

UENUM(BlueprintType)
enum class EHDUICharacterStanceState : uint8 {
    Stand,
    StandAim,
    StandMount,
    Sprint,
    Crouch,
    CrouchAim,
    CrouchMount,
    Prone,
};

