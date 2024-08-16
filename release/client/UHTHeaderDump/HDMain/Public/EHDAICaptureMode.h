#pragma once
#include "CoreMinimal.h"
#include "EHDAICaptureMode.generated.h"

UENUM(BlueprintType)
enum class EHDAICaptureMode : uint8 {
    Attack,
    Defend,
    None,
};

