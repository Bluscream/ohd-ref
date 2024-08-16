#pragma once
#include "CoreMinimal.h"
#include "EHDAICombatTargetType.generated.h"

UENUM(BlueprintType)
enum class EHDAICombatTargetType : uint8 {
    None,
    EnemyActor,
    SuppressionLocation,
    SafeSuppressionLocation,
    CustomSetLocation,
    ClearTarget,
};

