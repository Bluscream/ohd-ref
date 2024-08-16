#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ProjectileTriggerPayloadSignatureDelegate.generated.h"

class ADFBaseProjectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FProjectileTriggerPayloadSignatureUObject*, EnterPropertyName, ADFBaseProjectile*, Projectile, const FHitResult&, ImpactHitResult, bool, bFromTearOff);

