#pragma once
#include "CoreMinimal.h"
#include "OnSquadLeaderAssignedDelegate.generated.h"

class AHDPlayerState;
class AHDSquadState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSquadLeaderAssigned, AHDSquadState*, Squad, AHDPlayerState*, NewLeaderPS, AHDPlayerState*, PrevLeaderPS);

