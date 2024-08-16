#pragma once
#include "CoreMinimal.h"
#include "ESessionSearchPresenceType.generated.h"

UENUM(BlueprintType)
enum class ESessionSearchPresenceType : uint8 {
    AllServers,
    ListenServersOnly,
    DedicatedServersOnly,
};

