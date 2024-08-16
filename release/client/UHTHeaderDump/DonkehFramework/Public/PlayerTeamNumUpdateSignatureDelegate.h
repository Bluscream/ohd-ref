#pragma once
#include "CoreMinimal.h"
#include "PlayerTeamNumUpdateSignatureDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerTeamNumUpdateSignature, APlayerState*, PlayerState, uint8, LastTeamNum, uint8, NewTeamNum);

