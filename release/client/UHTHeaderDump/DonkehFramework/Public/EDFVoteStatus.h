#pragma once
#include "CoreMinimal.h"
#include "EDFVoteStatus.generated.h"

UENUM(BlueprintType)
enum class EDFVoteStatus : uint8 {
    Inactive,
    InProgress,
    Passed,
    FailedNotEnoughVotes,
    FailedInsufficientVoteRatio,
};

