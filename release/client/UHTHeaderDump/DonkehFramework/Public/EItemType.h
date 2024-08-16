#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    Melee,
    Other,
    Pistol,
    Throwable,
    Rifle,
    Equipment,
};

