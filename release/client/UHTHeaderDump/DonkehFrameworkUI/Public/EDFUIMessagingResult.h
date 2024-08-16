#pragma once
#include "CoreMinimal.h"
#include "EDFUIMessagingResult.generated.h"

UENUM(BlueprintType)
enum class EDFUIMessagingResult : uint8 {
    Confirmed,
    Declined,
    Cancelled,
    Killed,
    Unknown,
};

