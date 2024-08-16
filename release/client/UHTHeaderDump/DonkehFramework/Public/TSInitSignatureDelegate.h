#pragma once
#include "CoreMinimal.h"
#include "TSInitSignatureDelegate.generated.h"

class ADFTeamState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTSInitSignature, ADFTeamState*, TeamState);

