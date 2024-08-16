#pragma once
#include "CoreMinimal.h"
#include "OnPlatoonSquadChangedDelegate.generated.h"

class AHDPlatoonState;
class AHDSquadState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlatoonSquadChanged, AHDPlatoonState*, Platoon, AHDSquadState*, Squad);

