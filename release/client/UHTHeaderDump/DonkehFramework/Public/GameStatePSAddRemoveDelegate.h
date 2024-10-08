#pragma once
#include "CoreMinimal.h"
#include "GameStatePSAddRemoveDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStatePSAddRemove, APlayerState*, PlayerState);

