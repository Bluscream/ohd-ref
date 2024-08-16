#pragma once
#include "CoreMinimal.h"
#include "GunReloadSignatureDelegate.generated.h"

class ADFBaseGun;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGunReloadSignature, ADFBaseGun*, Gun);

