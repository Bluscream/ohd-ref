#pragma once
#include "CoreMinimal.h"
#include "EInputCaptureState.generated.h"

UENUM(BlueprintType)
enum class EInputCaptureState : uint8 {
    Begin = 1,
    Continue,
    End,
    Ignore,
};

