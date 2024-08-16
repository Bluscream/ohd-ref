#include "DFBaseWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

ADFBaseWeapon::ADFBaseWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("WeaponMesh"))) {
    this->ItemMesh = NULL;
    this->ItemMesh1P = NULL;
    this->bCanEquip = true;
    this->bFiring = false;
    this->bReadyToFirePendingRelease = false;
    this->bFireOnRelease = false;
    this->PrefireDelayMin = 0.00f;
    this->bPrefiring = false;
    this->bADSFireOnly = false;
    this->bLastShotFired = false;
    this->bRepCounterPending = false;
    this->LastFireTime = 0.00f;
    this->LastShotFireTime = 0.00f;
    this->bUseServerSideFiringLogic = false;
    this->bSimulateWeaponFireOnDedicatedServer = false;
    this->bStopAllFireAnimsAfterFireRateDelay = false;
    this->bSimulate1PWeaponFireOnPawnOwner1PMesh = false;
    this->bSingleAction = false;
    this->bSingleLoad = false;
    this->WeaponMesh = (USkeletalMeshComponent*)RootComponent;
    this->WeaponMesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh1P"));
    this->bCanSprintWhilePrefiring = false;
    this->DamageTypeClass = UDamageType::StaticClass();
    this->WeaponMesh1P->SetupAttachment(RootComponent);
}

void ADFBaseWeapon::StopWeaponPerspectiveAnimation(const FPerspectiveAnim& WeapAnim) {
}

void ADFBaseWeapon::StopWeaponMontage(UAnimMontage* WeapMontage) {
}

void ADFBaseWeapon::StopSimulatingWeaponFire(bool bForceStopAll) {
}

void ADFBaseWeapon::SimulateWeaponFire() {
}

bool ADFBaseWeapon::ShouldSimulateWeaponFire() const {
    return false;
}

void ADFBaseWeapon::ServerPreFire_Implementation() {
}

void ADFBaseWeapon::ServerFireShot_Implementation(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID) {
}
bool ADFBaseWeapon::ServerFireShot_Validate(const FVector_NetQuantize& Origin, const FVector_NetQuantizeNormal& ShootDir, int32 RandomSeed, float Timestamp, int32 ShotID) {
    return true;
}






void ADFBaseWeapon::PrefireDelayElapsed(bool bClientSimulation) {
}

float ADFBaseWeapon::PlayWeaponUnEquipMontage(UAnimMontage* UnEquipMontageToPlay) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponThrowUnderhandMontage(UAnimMontage* ThrowUnderhandMontageToPlay) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponThrowOverhandMontage(UAnimMontage* ThrowOverhandMontageToPlay) {
    return 0.0f;
}

UAudioComponent* ADFBaseWeapon::PlayWeaponSound(const FPerspectiveSound& Sound) {
    return NULL;
}

float ADFBaseWeapon::PlayWeaponPerspectiveAnimation(const FPerspectiveAnim& WeapAnim) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponMontage(UAnimMontage* WeapMontage, bool bForceDisableAutoBlendOut) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponFireMontage(UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponEquipMontage(UAnimMontage* EquipMontageToPlay) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponCockMontage(UAnimMontage* CockMontageToPlay) {
    return 0.0f;
}

float ADFBaseWeapon::PlayWeaponActionMontage(UAnimMontage* ActionMontageToPlay) {
    return 0.0f;
}

float ADFBaseWeapon::PlayThrowAnimations(bool bOverhandThrow, bool bDontPlayAndReturnDominantPlayLengthOnly) {
    return 0.0f;
}

float ADFBaseWeapon::PlayCockAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly) {
    return 0.0f;
}

void ADFBaseWeapon::PlayActionAnimations(bool bDontPlayAndReturnDominantPlayLengthOnly) {
}

void ADFBaseWeapon::OnStopFiring() {
}

void ADFBaseWeapon::OnStartFiring() {
}

void ADFBaseWeapon::OnRep_FireCounter(const FRepShotInfo& PreviousValue) {
}

void ADFBaseWeapon::OnRep_bPrefiring() {
}

bool ADFBaseWeapon::IsFiring() const {
    return false;
}

void ADFBaseWeapon::HandleFire() {
}

USkeletalMeshComponent* ADFBaseWeapon::GetWeaponMeshToUse(bool bIgnoreLocalControlOnServer) const {
    return NULL;
}

USkeletalMeshComponent* ADFBaseWeapon::GetWeaponMesh1P() const {
    return NULL;
}

USkeletalMeshComponent* ADFBaseWeapon::GetWeaponMesh() const {
    return NULL;
}

UAnimMontage* ADFBaseWeapon::GetMontageToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const {
    return NULL;
}

float ADFBaseWeapon::GetMontagePlayLengthToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const {
    return 0.0f;
}

UAnimSequenceBase* ADFBaseWeapon::GetAnimToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const {
    return NULL;
}

float ADFBaseWeapon::GetAnimPlayLengthToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const {
    return 0.0f;
}

void ADFBaseWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseWeapon, bPrefiring);
    DOREPLIFETIME(ADFBaseWeapon, bLastShotFired);
    DOREPLIFETIME(ADFBaseWeapon, FireCounter);
}


