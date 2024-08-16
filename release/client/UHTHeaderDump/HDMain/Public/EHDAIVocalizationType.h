#pragma once
#include "CoreMinimal.h"
#include "EHDAIVocalizationType.generated.h"

UENUM(BlueprintType)
enum class EHDAIVocalizationType : uint8 {
    None,
    Contact,
    LostContact,
    Reloading,
    BeenHit,
    UnderSuppression,
    Death,
};

