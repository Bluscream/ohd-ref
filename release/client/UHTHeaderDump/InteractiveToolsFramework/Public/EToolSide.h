#pragma once
#include "CoreMinimal.h"
#include "EToolSide.generated.h"

UENUM(BlueprintType)
enum class EToolSide : uint8 {
    Left = 1,
    Mouse = Left,
    Right,
};

