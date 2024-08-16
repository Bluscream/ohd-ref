#pragma once
#include "CoreMinimal.h"
#include "EVaultBehavior.generated.h"

UENUM(BlueprintType)
enum class EVaultBehavior : uint8 {
    None,
    VaultOver,
    SprintVaultOver,
    ClimbOnto,
    SprintClimbOnto,
};

