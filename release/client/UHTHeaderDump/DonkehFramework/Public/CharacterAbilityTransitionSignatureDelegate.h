#pragma once
#include "CoreMinimal.h"
#include "CharacterAbilityTransitionSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterAbilityTransitionSignature, bool, bIsStartTransition);

