#pragma once
#include "CoreMinimal.h"
#include "EPlayerVoiceState.generated.h"

UENUM(BlueprintType)
enum class EPlayerVoiceState : uint8 {
    NotTalking,
    Talking,
    Muted,
};

