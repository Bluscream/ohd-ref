#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ProjectileProcessHitSignatureDelegate.generated.h"

class AActor;
class ADFBaseProjectile;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SevenParams(FProjectileProcessHitSignatureUObject*, EnterPropertyName, ADFBaseProjectile*, Projectile, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, const FVector&, HitLocation, const FVector&, HitNormal, const FHitResult&, HitResult, bool, bFromCSHitNotify);

