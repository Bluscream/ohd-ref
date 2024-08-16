#pragma once
#include "CoreMinimal.h"
#include "EDFItemEnabledMode.generated.h"

UENUM(BlueprintType)
enum class EDFItemEnabledMode : uint8 {
    Enabled,
    Disabled,
    Hidden,
};

