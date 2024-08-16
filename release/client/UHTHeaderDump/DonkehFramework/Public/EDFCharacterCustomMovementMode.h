#pragma once
#include "CoreMinimal.h"
#include "EDFCharacterCustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class EDFCharacterCustomMovementMode : uint8 {
    None,
    Vaulting,
    MAX,
};

