#pragma once
#include "CoreMinimal.h"
#include "EHDFilterRuleComparisonOp.generated.h"

UENUM(BlueprintType)
enum class EHDFilterRuleComparisonOp : uint8 {
    EqualTo,
    NotEqualTo,
};

