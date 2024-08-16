#include "DFBaseProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "Templates/SubclassOf.h"

ADFBaseProjectile::ADFBaseProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ProjectileImpactFXClass = NULL;
    this->ShotID = 0;
    this->bSpawnImpactFXOnHit = false;
    this->bAlwaysShootable = false;
    this->bIgnoreInstigator = true;
    this->bIgnoreInstigatorOnPayloadActivation = true;
    this->InstigatingController = NULL;
    this->bDebug = false;
    this->bIgnoreInstigatorHitEventsOnly = false;
    this->bProcessedAHit = false;
    this->bClientSideHitDetectionEnabled = false;
    this->bClientSideHitDamageEnabled = false;
    this->bNotifyOfPredictedProjectileHits = true;
    this->bOnlyNotifyOfPredictedProjectileHits = true;
    this->ImpactedActor = NULL;
    this->bApplyDamageOnImpact = true;
    this->bApplyDamageOnBounceImpact = false;
    this->bApplyDamageToInstigator = false;
    this->WeaponDamageTypeClass = UDamageType::StaticClass();
    this->RadialDamagePreventionChannel = ECC_GameTraceChannel1;
    this->bWantsToUseClientSidePrediction = true;
    this->bReconcilePredictedProjWithServerProj = true;
    this->bPredictedClientProjectile = false;
    this->MyPredictedClientProjectile = NULL;
    this->ServerAuthoritativeProjectile = NULL;
    this->bPayloadTriggered = false;
    this->bTriggerPayloadWhenStopped = true;
    this->bTearOffOnPayloadActivation = true;
    this->bDisableOnPayloadActivation = true;
}

void ADFBaseProjectile::TriggerPayload(const FHitResult& ImpactHitResult, bool bFromTearOff) {
}

void ADFBaseProjectile::SpawnImpactFX(const FHitResult& Impact) {
}

void ADFBaseProjectile::SetProjectileUpdatedComponent(USceneComponent* NewProjectileUpdatedComponent) {
}


void ADFBaseProjectile::ProjectileStop(const FHitResult& ImpactResult) {
}

void ADFBaseProjectile::ProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}



void ADFBaseProjectile::IgnoreInstigatorWhenMoving(bool bShouldIgnore, bool bBidirectional) {
}

bool ADFBaseProjectile::HasValidPredictedClientProjectile() const {
    return false;
}

UPrimitiveComponent* ADFBaseProjectile::GetProjectileUpdatedPrimitive() const {
    return NULL;
}

USceneComponent* ADFBaseProjectile::GetProjectileUpdatedComponent() const {
    return NULL;
}

ADFBaseWeapon* ADFBaseProjectile::GetOwningWeapon() const {
    return NULL;
}

TSubclassOf<ADFBaseImpactEffect> ADFBaseProjectile::GetImpactFXClass() const {
    return NULL;
}

FDFDamageParams ADFBaseProjectile::GetAdjustedDamageParams(AActor* OtherActor, const FVector& HitLocation) const {
    return FDFDamageParams{};
}

void ADFBaseProjectile::DisableAndDeferDestroy() {
}

float ADFBaseProjectile::ApplyDamageToImpactedActor_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FVector& HitLocation, const FVector& HitNormal, const FHitResult& HitResult) {
    return 0.0f;
}


