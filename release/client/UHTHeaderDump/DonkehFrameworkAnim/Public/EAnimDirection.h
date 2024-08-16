#pragma once
#include "CoreMinimal.h"
#include "EAnimDirection.generated.h"

UENUM(BlueprintType)
enum class EAnimDirection : uint8 {
    None,
    Left,
    Right,
    Up,
    Down,
};

