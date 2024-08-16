#pragma once
#include "CoreMinimal.h"
#include "EDFPlayerWhitelistType.generated.h"

UENUM(BlueprintType)
enum class EDFPlayerWhitelistType : uint8 {
    None,
    Manual,
    Token,
};

