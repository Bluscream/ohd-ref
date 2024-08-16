#pragma once
#include "CoreMinimal.h"
#include "GameStateTSAddRemoveDelegate.generated.h"

class ADFTeamState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateTSAddRemove, ADFTeamState*, TeamState);

