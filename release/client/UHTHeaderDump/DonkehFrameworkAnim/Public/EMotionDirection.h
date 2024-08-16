#pragma once
#include "CoreMinimal.h"
#include "EMotionDirection.generated.h"

UENUM(BlueprintType)
enum class EMotionDirection : uint8 {
    XPos,
    YPos,
    ZPos,
    XNeg,
    YNeg,
    ZNeg,
};

