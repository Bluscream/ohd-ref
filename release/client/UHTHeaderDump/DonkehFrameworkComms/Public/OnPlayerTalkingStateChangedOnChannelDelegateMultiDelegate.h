#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTalkingStateChangedOnChannelDelegateMultiDelegate.generated.h"

class APlayerState;
class UDFCommChannel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerTalkingStateChangedOnChannelDelegateMulti, UDFCommChannel*, TalkerChannel, APlayerState*, TalkerPS, bool, bIsTalking);

