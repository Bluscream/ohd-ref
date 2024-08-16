#pragma once
#include "CoreMinimal.h"
#include "EMobileMSAASampleCount.generated.h"

UENUM(BlueprintType)
namespace EMobileMSAASampleCount {
    enum Type {
        One = 1,
        Two,
        Four = 4,
        Eight = 8,
    };
}

