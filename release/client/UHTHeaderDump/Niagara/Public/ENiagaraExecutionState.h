#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionState.generated.h"

UENUM(BlueprintType)
enum class ENiagaraExecutionState : uint8 {
    Active,
    Inactive,
    InactiveClear,
    Complete,
    Disabled,
    Num,
};

