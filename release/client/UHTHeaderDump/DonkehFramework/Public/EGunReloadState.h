#pragma once
#include "CoreMinimal.h"
#include "EGunReloadState.generated.h"

UENUM(BlueprintType)
enum class EGunReloadState : uint8 {
    NotReloading,
    PartialReloadStart,
    FullReloadStart,
    PartialReload,
    FullReload,
    PartialReloadEnd,
    FullReloadEnd,
};

