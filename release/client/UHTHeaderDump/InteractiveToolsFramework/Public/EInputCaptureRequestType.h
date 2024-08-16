#pragma once
#include "CoreMinimal.h"
#include "EInputCaptureRequestType.generated.h"

UENUM(BlueprintType)
enum class EInputCaptureRequestType : uint8 {
    Begin = 1,
    Ignore,
};

