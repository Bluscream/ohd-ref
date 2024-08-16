#pragma once
#include "CoreMinimal.h"
#include "EHDFilterRuleBehavior.generated.h"

UENUM(BlueprintType)
enum class EHDFilterRuleBehavior : uint8 {
    Show,
    Hide,
    OnlyShow,
};

