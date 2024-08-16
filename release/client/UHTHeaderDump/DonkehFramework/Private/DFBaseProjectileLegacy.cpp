#include "DFBaseProjectileLegacy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Net/UnrealNetwork.h"

ADFBaseProjectileLegacy::ADFBaseProjectileLegacy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileCollision"));
    this->ProjectileCollision = (UPrimitiveComponent*)RootComponent;
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ProjectileImpactFXClass = NULL;
    this->bListenForImpactEvents = true;
    this->bIgnoreInstigator = true;
    this->InstigatingController = NULL;
    this->ActiveLifeSpan = 0.00f;
    this->WeaponDamageTypeClass = UDamageType::StaticClass();
    this->bDebug = false;
    this->bApplyDamageFromPayload = true;
    this->HitDamage = 20.00f;
    this->bApplyRadialDamage = false;
    this->RadialDamagePreventionChannel = ECC_GameTraceChannel1;
    this->DamageRadius = 500.00f;
    this->bPayloadTriggered = false;
    this->bTriggerPayloadWhenStopped = true;
    this->bTriggerPayloadOnDelay = false;
    this->PayloadTriggerDelay = 5.00f;
    this->PayloadTriggerFX = NULL;
    this->bAttachTriggerFXToRoot = false;
    this->TriggerFXPSC = NULL;
    this->PayloadTriggerSnd = NULL;
    this->bAttachTriggerSndToRoot = false;
    this->TriggerSnd = NULL;
}

void ADFBaseProjectileLegacy::TriggerPayload(const FHitResult& ImpactHitResult) {
}

void ADFBaseProjectileLegacy::StopSimulatingPayloadActivation() {
}

void ADFBaseProjectileLegacy::SpawnImpactFX(const FHitResult& Impact) {
}

void ADFBaseProjectileLegacy::SimulatePayloadActivation() {
}




void ADFBaseProjectileLegacy::ProjectileStop(const FHitResult& ImpactResult) {
}

void ADFBaseProjectileLegacy::ProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void ADFBaseProjectileLegacy::PayloadDelayElapsed() {
}

void ADFBaseProjectileLegacy::OnRep_bPayloadTriggered() {
}

ADFBaseWeapon* ADFBaseProjectileLegacy::GetOwningWeapon() const {
    return NULL;
}

void ADFBaseProjectileLegacy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseProjectileLegacy, bPayloadTriggered);
}


