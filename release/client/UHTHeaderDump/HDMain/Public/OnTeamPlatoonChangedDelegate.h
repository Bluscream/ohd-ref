#pragma once
#include "CoreMinimal.h"
#include "OnTeamPlatoonChangedDelegate.generated.h"

class AHDPlatoonState;
class AHDTeamState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeamPlatoonChanged, AHDTeamState*, Team, AHDPlatoonState*, Platoon);

