#pragma once
#include "CoreMinimal.h"
#include "RepPlayerNameSignatureDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRepPlayerNameSignature, APlayerState*, PlayerState, const FString&, NewPlayerName);

