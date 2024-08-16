#pragma once
#include "CoreMinimal.h"
#include "OnSquadLockToggledDelegate.generated.h"

class AHDSquadState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadLockToggled, AHDSquadState*, Squad, bool, bNewLocked);

