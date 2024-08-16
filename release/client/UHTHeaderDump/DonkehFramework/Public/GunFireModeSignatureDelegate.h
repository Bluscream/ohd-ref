#pragma once
#include "CoreMinimal.h"
#include "EFireMode.h"
#include "GunFireModeSignatureDelegate.generated.h"

class ADFBaseGun;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGunFireModeSignature, ADFBaseGun*, Gun, EFireMode, NewFireMode, EFireMode, PrevFireMode, bool, bFromPlayerInput);

