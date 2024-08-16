#pragma once
#include "CoreMinimal.h"
#include "PlayerTalkingStateChangedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerTalkingStateChanged, APlayerState*, TalkerPS, bool, bTalking);

