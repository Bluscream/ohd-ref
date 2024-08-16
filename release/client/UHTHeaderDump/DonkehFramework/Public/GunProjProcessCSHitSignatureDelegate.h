#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GunProjProcessCSHitSignatureDelegate.generated.h"

class ADFBaseGun_Projectile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FGunProjProcessCSHitSignatureUObject*, EnterPropertyName, ADFBaseGun_Projectile*, Gun, const FHitResult&, SimulatedCSHitResult);

