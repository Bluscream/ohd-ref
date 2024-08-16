#include "DFBasePlayerCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ADFBasePlayerCharacter::ADFBasePlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTeamIdOverride = true;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->InteractionDistance = 250.00f;
    this->bFirstPerson = false;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->Camera1P = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera1P"));
    this->bStartInFirstPerson = false;
    this->bTrueFirstPerson = false;
    this->bDisableOrientationOfRotationToMovementInFirstPerson = false;
    this->bDisableUsageOfControllerRotationYawInThirdPerson = false;
    this->Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh1P"));
    this->bUseFirstPersonMesh = false;
    this->Camera->SetupAttachment(CameraBoom);
    this->CameraBoom->SetupAttachment(RootComponent);
    this->Mesh1P->SetupAttachment(Camera1P);
}

void ADFBasePlayerCharacter::Use() {
}

void ADFBasePlayerCharacter::TurnAtRate(float Rate) {
}

void ADFBasePlayerCharacter::SwitchFireMode() {
}

void ADFBasePlayerCharacter::SetMeshVisibility(bool bFirstPersonVisibility) {
}

void ADFBasePlayerCharacter::ServerUse_Implementation(AActor* UseTarget, const FVector_NetQuantize& UseTraceStart, const FVector_NetQuantize& UseTraceEnd) {
}
bool ADFBasePlayerCharacter::ServerUse_Validate(AActor* UseTarget, const FVector_NetQuantize& UseTraceStart, const FVector_NetQuantize& UseTraceEnd) {
    return true;
}

void ADFBasePlayerCharacter::ServerOnToggleFirstPerson_Implementation(bool bNewFirstPerson) {
}
bool ADFBasePlayerCharacter::ServerOnToggleFirstPerson_Validate(bool bNewFirstPerson) {
    return true;
}


void ADFBasePlayerCharacter::OnToggleFirstPerson(bool bNewFirstPerson) {
}

void ADFBasePlayerCharacter::OnFireReleased() {
}

void ADFBasePlayerCharacter::OnFirePressed() {
}

void ADFBasePlayerCharacter::MoveUp(float Value) {
}

void ADFBasePlayerCharacter::MoveRight(float Value) {
}

void ADFBasePlayerCharacter::MoveForward(float Value) {
}

void ADFBasePlayerCharacter::LookUpAtRate(float Rate) {
}

void ADFBasePlayerCharacter::JumpVaultPressed() {
}

bool ADFBasePlayerCharacter::IsUsingFirstPersonMesh() const {
    return false;
}

bool ADFBasePlayerCharacter::IsTrueFirstPerson() const {
    return false;
}

bool ADFBasePlayerCharacter::IsLocalFirstPerson() const {
    return false;
}

bool ADFBasePlayerCharacter::IsFirstPerson() const {
    return false;
}

USkeletalMeshComponent* ADFBasePlayerCharacter::GetMesh1P() const {
    return NULL;
}

FName ADFBasePlayerCharacter::GetItemAttachPoint1P() const {
    return NAME_None;
}

USkeletalMesh* ADFBasePlayerCharacter::GetDefaultPawnMesh1P() const {
    return NULL;
}

USpringArmComponent* ADFBasePlayerCharacter::GetCameraBoom() const {
    return NULL;
}

UCameraComponent* ADFBasePlayerCharacter::GetCamera1P() const {
    return NULL;
}

UCameraComponent* ADFBasePlayerCharacter::GetCamera() const {
    return NULL;
}


