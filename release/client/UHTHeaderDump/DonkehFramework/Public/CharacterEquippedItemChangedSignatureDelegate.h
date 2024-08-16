#pragma once
#include "CoreMinimal.h"
#include "CharacterEquippedItemChangedSignatureDelegate.generated.h"

class ADFBaseCharacter;
class ADFBaseItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterEquippedItemChangedSignature, ADFBaseCharacter*, Character, ADFBaseItem*, NewEquippedItem, ADFBaseItem*, PrevEquippedItem);

