#pragma once
#include "CoreMinimal.h"
#include "TeamStateUpdateSignatureDelegate.generated.h"

class ADFTeamState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTeamStateUpdateSignature, ADFTeamState*, LastTeamState, ADFTeamState*, NewTeamState, bool, bNewTeamStateInit);

