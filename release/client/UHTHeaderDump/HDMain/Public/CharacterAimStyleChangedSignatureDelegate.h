#pragma once
#include "CoreMinimal.h"
#include "EHDWeaponAimStyle.h"
#include "CharacterAimStyleChangedSignatureDelegate.generated.h"

class AHDPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCharacterAimStyleChangedSignature, AHDPlayerCharacter*, Character, EHDWeaponAimStyle, NewAimStyle, EHDWeaponAimStyle, PrevAimStyle, bool, bFromPlayerInput);

