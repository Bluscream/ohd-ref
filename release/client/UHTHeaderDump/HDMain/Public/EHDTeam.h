#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.generated.h"

UENUM(BlueprintType)
enum class EHDTeam : uint8 {
    Red,
    Blue,
    NoTeam = 255,
};

