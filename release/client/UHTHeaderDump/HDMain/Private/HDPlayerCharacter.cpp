#include "HDPlayerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "HDAIController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AHDPlayerCharacter::AHDPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIControllerClass = AHDAIController::StaticClass();
    this->bTickAllAnimationOnDedicatedServer = false;
    this->bOnlyTickAnimMontagesOnDedicatedServer = true;
    this->bApplyDamageMomentumOnHit = false;
    this->ItemAttachPoint1P = TEXT("WeaponSocket1P");
    this->bUseAttachedVehicleRelevancy = true;
    this->WalkingBobSpeed = 570.00f;
    this->bDoHeadBob = false;
    this->bAllowFreeAim = true;
    this->bAllowFreeAimWhileAiming = true;
    this->bDoFreeAim = false;
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->FreeAimSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FreeAimSpringArm"));
    this->CurrentLoadout = NULL;
    this->KitDropTraceDistance = 2097152.00f;
    this->bInventoryMenuShown = false;
    this->AimStyle = EHDWeaponAimStyle::None;
    this->HDTeamState = NULL;
    this->AIVocalAC = NULL;
    this->WalkingHeadBob = NULL;
    this->SprintingHeadBob = NULL;
    this->bCanAddYawInput = true;
    this->bCanAddPitchInput = true;
    this->bCanAddRollInput = true;
    this->FreeAimDeadzoneCameraSpeedFactor = 0.30f;
    this->FreeAimReturnToCenterInterpSpeed = 5.00f;
    this->MaxFreeAimYaw = 5.00f;
    this->MaxFreeAimPitch = 5.00f;
    this->MaxFreeAimYawADS = 2.50f;
    this->MaxFreeAimPitchADS = 2.50f;
    this->CurrentFreeAimYaw = 0.00f;
    this->CurrentFreeAimPitch = 0.00f;
    this->FreeAimMouseDeltaX = 0.00f;
    this->FreeAimMouseDeltaY = 0.00f;
    this->FreeAimExternalDeltaX = 0.00f;
    this->FreeAimExternalDeltaY = 0.00f;
    this->LastAIVocalization = EHDAIVocalizationType::None;
    this->HDAIPerceptionComponent = NULL;
    this->SpringArm->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FreeAimSpringArm->SetupAttachment(SpringArm);
}

void AHDPlayerCharacter::VariationDataChangedInternal(const FDFCharacterVariationDataHandle PreviousHandle) {
}

void AHDPlayerCharacter::SetVariationHandle(FDFCharacterVariationDataHandle InVariationHandle) {
}

void AHDPlayerCharacter::SetMaxFreeAimYawADS(float NewYaw) {
}

void AHDPlayerCharacter::SetMaxFreeAimYaw(float NewYaw) {
}

void AHDPlayerCharacter::SetMaxFreeAimPitchADS(float NewPitch) {
}

void AHDPlayerCharacter::SetMaxFreeAimPitch(float NewPitch) {
}

void AHDPlayerCharacter::SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed) {
}

void AHDPlayerCharacter::SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor) {
}

void AHDPlayerCharacter::SetAllowFreeAimADS(bool bEnabled) {
}

void AHDPlayerCharacter::SetAllowFreeAim(bool bEnabled) {
}

void AHDPlayerCharacter::SetAimStyle(EHDWeaponAimStyle InAimStyle, bool bFromPlayerInput) {
}






void AHDPlayerCharacter::PlayVocalSoundAI_Implementation(USoundBase* SoundToUse, EHDAIVocalizationType VocalType, float PitchMultiplier) {
}

void AHDPlayerCharacter::OnRep_CurrentLoadout() {
}

void AHDPlayerCharacter::OnPickupKit(AHDBasePickup_Kit* Kit) {
}

void AHDPlayerCharacter::NotifyPlayerStateChanged_Implementation(APlayerState* NewPlayerState, APlayerState* OldPlayerState) {
}

bool AHDPlayerCharacter::IsInVehicle() const {
    return false;
}

void AHDPlayerCharacter::HeadBob() {
}

UHDPlayerComponent* AHDPlayerCharacter::GetPlayerComponent() const {
    return NULL;
}

float AHDPlayerCharacter::GetMaxFreeAimYawToUse() const {
    return 0.0f;
}

float AHDPlayerCharacter::GetMaxFreeAimPitchToUse() const {
    return 0.0f;
}

TSubclassOf<AHDBasePickup_Kit> AHDPlayerCharacter::GetKitClassToUse() const {
    return NULL;
}

void AHDPlayerCharacter::FreeAim(float DeltaSeconds) {
}

bool AHDPlayerCharacter::EquipPrimaryItem() {
    return false;
}

void AHDPlayerCharacter::DropKit() {
}

void AHDPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDPlayerCharacter, VariationHandle);
    DOREPLIFETIME(AHDPlayerCharacter, CurrentLoadout);
}


