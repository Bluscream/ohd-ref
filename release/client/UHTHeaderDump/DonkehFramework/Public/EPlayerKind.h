#pragma once
#include "CoreMinimal.h"
#include "EPlayerKind.generated.h"

UENUM(BlueprintType)
enum class EPlayerKind : uint8 {
    Human,
    Bot,
    Either,
};

