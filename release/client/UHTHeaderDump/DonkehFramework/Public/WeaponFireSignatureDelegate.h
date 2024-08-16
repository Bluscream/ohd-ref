#pragma once
#include "CoreMinimal.h"
#include "WeaponFireSignatureDelegate.generated.h"

class ADFBaseWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponFireSignature, ADFBaseWeapon*, FiredWeapon, bool, bLastFire);

