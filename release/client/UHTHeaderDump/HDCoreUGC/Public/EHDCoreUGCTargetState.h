#pragma once
#include "CoreMinimal.h"
#include "EHDCoreUGCTargetState.generated.h"

UENUM(BlueprintType)
enum class EHDCoreUGCTargetState : uint8 {
    Installed,
    Registered,
    Loaded,
    Active,
};

