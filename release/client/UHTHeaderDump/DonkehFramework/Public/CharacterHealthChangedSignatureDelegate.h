#pragma once
#include "CoreMinimal.h"
#include "CharacterHealthChangedSignatureDelegate.generated.h"

class ADFBaseCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterHealthChangedSignature, ADFBaseCharacter*, Character, float, NewHealthTotal, float, PrevHealthTotal);

