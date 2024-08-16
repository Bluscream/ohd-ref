#pragma once
#include "CoreMinimal.h"
#include "EHDControlPointObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EHDControlPointObjectiveType : uint8 {
    Offensive,
    Defensive,
    NoObjective,
};

