#include "HDProj_Bullet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AHDProj_Bullet::AHDProj_Bullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetTemporary = true;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileCollision"));
    this->bSpawnImpactFXOnHit = true;
    this->bClientSideHitDetectionEnabled = true;
    this->ProjectileCollision = (USphereComponent*)RootComponent;
}


