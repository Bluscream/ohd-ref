#pragma once
#include "CoreMinimal.h"
#include "TeamNumUpdateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTeamNumUpdateSignature, uint8, LastTeamNum, uint8, NewTeamNum);

