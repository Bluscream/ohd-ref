#pragma once
#include "CoreMinimal.h"
#include "PawnPossessionSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnPossessionSignature, APawn*, Pawn);

