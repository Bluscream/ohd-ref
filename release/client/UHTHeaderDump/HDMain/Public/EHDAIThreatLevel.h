#pragma once
#include "CoreMinimal.h"
#include "EHDAIThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EHDAIThreatLevel : uint8 {
    None,
    Safe,
    Aware,
    Combat,
    Danger,
};

