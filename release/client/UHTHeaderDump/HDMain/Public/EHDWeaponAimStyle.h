#pragma once
#include "CoreMinimal.h"
#include "EHDWeaponAimStyle.generated.h"

UENUM(BlueprintType)
enum class EHDWeaponAimStyle : uint8 {
    None,
    PointAim,
    OpticMode1,
    OpticMode2,
    OpticMode3,
};

