#pragma once
#include "CoreMinimal.h"
#include "HDSquadAssignmentInfo.h"
#include "PlayerSquadInfoUpdateSignatureDelegate.generated.h"

class AHDPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSquadInfoUpdateSignature, AHDPlayerState*, PlayerState, const FHDSquadAssignmentInfo&, PlayerSQInfo);

