#pragma once
#include "CoreMinimal.h"
#include "HDBaseProjectile.h"
#include "HDProj_Bullet.generated.h"

class USphereComponent;

UCLASS(Abstract, Blueprintable)
class HDMAIN_API AHDProj_Bullet : public AHDBaseProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ProjectileCollision;
    
public:
    AHDProj_Bullet(const FObjectInitializer& ObjectInitializer);

};

