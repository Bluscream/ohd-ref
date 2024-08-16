#pragma once
#include "CoreMinimal.h"
#include "EMenuActivationMode.generated.h"

UENUM(BlueprintType)
enum class EMenuActivationMode : uint8 {
    Transparent,
    Opaque,
    Exclusive,
};

