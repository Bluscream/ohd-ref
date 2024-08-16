#pragma once
#include "CoreMinimal.h"
#include "AimingHandlerContactSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAimingHandlerContactSignature, bool, bHasContact);

