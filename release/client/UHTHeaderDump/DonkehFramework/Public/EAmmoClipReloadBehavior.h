#pragma once
#include "CoreMinimal.h"
#include "EAmmoClipReloadBehavior.generated.h"

UENUM(BlueprintType)
enum class EAmmoClipReloadBehavior : uint8 {
    DiscardOnEmpty,
    DiscardOnReload,
    NoDiscard,
};

