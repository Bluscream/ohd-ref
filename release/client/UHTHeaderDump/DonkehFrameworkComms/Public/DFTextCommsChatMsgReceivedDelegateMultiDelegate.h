#pragma once
#include "CoreMinimal.h"
#include "DFTextCommsChatMsgReceivedDelegateMultiDelegate.generated.h"

class APlayerState;
class UDFCommChannel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDFTextCommsChatMsgReceivedDelegateMulti, UDFCommChannel*, MsgSourceChannel, APlayerState*, MsgSenderPS, const FString&, MsgContent);

