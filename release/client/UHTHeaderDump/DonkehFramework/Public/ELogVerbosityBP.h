#pragma once
#include "CoreMinimal.h"
#include "ELogVerbosityBP.generated.h"

UENUM(BlueprintType)
enum class ELogVerbosityBP : uint8 {
    Error = 2,
    Warning,
    Log = 5,
    Verbose,
    VeryVerbose,
    MAX = 0,
};

