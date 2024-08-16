#pragma once
#include "CoreMinimal.h"
#include "EHDPrimaryAssetType.generated.h"

UENUM(BlueprintType)
enum class EHDPrimaryAssetType : uint8 {
    Faction,
    GameMode,
    Map,
    Platoon,
    Ruleset,
};

