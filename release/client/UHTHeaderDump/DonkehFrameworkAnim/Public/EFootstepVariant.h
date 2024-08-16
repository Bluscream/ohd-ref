#pragma once
#include "CoreMinimal.h"
#include "EFootstepVariant.generated.h"

UENUM(BlueprintType)
enum class EFootstepVariant : uint8 {
    Walk,
    Run,
    Sprint,
    Shuffle,
    Jump,
    Land,
};

