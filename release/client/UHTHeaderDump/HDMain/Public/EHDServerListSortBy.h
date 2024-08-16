#pragma once
#include "CoreMinimal.h"
#include "EHDServerListSortBy.generated.h"

UENUM(BlueprintType)
enum class EHDServerListSortBy : uint8 {
    None,
    Name,
    Mode,
    Map,
    PlayerCount,
    Ping,
    Version,
};

