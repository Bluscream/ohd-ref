#include "DFBaseGun.h"
#include "Net/UnrealNetwork.h"

ADFBaseGun::ADFBaseGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimerIntervalAdjustment = 0.00f;
    this->bAllowAutomaticWeaponCatchup = true;
    this->FireRate = 0.00f;
    this->ShotsPerBurst = 3;
    this->SupportedFireModes = 1;
    this->SelectedFireMode = EFireMode::Semi;
    this->RecoilHandler = NULL;
    this->PendingReloadState = EGunReloadState::NotReloading;
    this->PreviousReloadState = EGunReloadState::NotReloading;
    this->bKeepLoadedAmmoOnLeaveInventory = false;
    this->bUsesAmmo = true;
    this->bExhaustible = false;
    this->bCanSprintWhileReloading = false;
    this->bReloadOnEquip = false;
    this->bInstantReloadOnEquip = false;
    this->bInstantReloadOnInitialEquip = false;
    this->bInstantReloadOnInitialEnterInventory = true;
    this->bReloadOnDryFire = true;
    this->bReloadOnStopFire = false;
    this->bSimulateGunReloadOnDedicatedServer = false;
    this->AmmoClipReloadBehavior = EAmmoClipReloadBehavior::DiscardOnEmpty;
    this->StartingAmmoClips = 0;
    this->bDispensedStartingAmmoClips = false;
    this->CurrentAmmoClip = NULL;
    this->CurrentAmmoClipInvIndex = -1;
    this->PreviousAmmoClip = NULL;
    this->CurrentAmmoInClipBeforeReload = 0;
    this->TotalAvailableAmmoBeforeReload = 0;
    this->ReloadCycleIterations = 0;
    this->bInfiniteClipAmmo = false;
    this->bInfiniteAmmo = false;
    this->bNoRecoil = false;
    this->MuzzleAttachPoint = TEXT("MuzzleSocket");
    this->MuzzleFX = NULL;
    this->bLoopedMuzzleFX = false;
    this->MuzzlePSC = NULL;
    this->ShellEjectAttachPoint = TEXT("ShellEjectSocket");
    this->ShellEjectFX = NULL;
    this->bLoopedShellEjectFX = false;
    this->bPlayShellEjectFXOnFireLast = true;
    this->ShellEjectDelay = 0.00f;
    this->ShellEjectPSC = NULL;
}

void ADFBaseGun::UnloadCurrentAmmoClip() {
}

void ADFBaseGun::StopSimulatingGunReload() {
}

void ADFBaseGun::StartReload(bool bClientSimulation) {
}

void ADFBaseGun::SimulateGunReload() {
}

bool ADFBaseGun::ShouldUseRecoil() const {
    return false;
}

bool ADFBaseGun::ShouldSimulateGunReload() const {
    return false;
}

void ADFBaseGun::SetReloadState(EGunReloadState NewReloadState) {
}

void ADFBaseGun::SetFireModeBP(EFireMode NewFireMode) {
}

bool ADFBaseGun::SetFireMode(EFireMode NewFireMode, bool bFromPlayerInput, bool bForce) {
    return false;
}

void ADFBaseGun::ServerStartReload_Implementation() {
}
bool ADFBaseGun::ServerStartReload_Validate() {
    return true;
}

void ADFBaseGun::ServerSetFireMode_Implementation(EFireMode NewFireMode) {
}
bool ADFBaseGun::ServerSetFireMode_Validate(EFireMode NewFireMode) {
    return true;
}





float ADFBaseGun::PlayWeaponStartReloadMontage(UAnimMontage* StartReloadMontageToPlay, bool bDryReload) {
    return 0.0f;
}

float ADFBaseGun::PlayWeaponReloadMontage(bool bDryReload) {
    return 0.0f;
}

float ADFBaseGun::PlayWeaponEndReloadMontage(UAnimMontage* EndReloadMontageToPlay, bool bDryReload) {
    return 0.0f;
}

float ADFBaseGun::PlayReloadTransitionAnimations(bool bStartReload, bool bDontPlayAndReturnDominantPlayLengthOnly) {
    return 0.0f;
}

float ADFBaseGun::PlayReloadAnimations(bool bDryReload, bool bDontPlayAndReturnDominantPlayLengthOnly) {
    return 0.0f;
}

void ADFBaseGun::OnRep_SelectedFireMode(EFireMode PrevSelectedFireMode) {
}

void ADFBaseGun::OnRep_PendingReloadState(EGunReloadState PrevReloadState) {
}

void ADFBaseGun::OnRep_CurrentAmmoClip(ADFBaseAmmoClip* PrevAmmoClip) {
}

void ADFBaseGun::OnReload(bool bClientSimulation) {
}

void ADFBaseGun::LoadPreviousAmmoClip() {
}

void ADFBaseGun::LoadNextAmmoClip() {
}

void ADFBaseGun::LoadAmmoClip(ADFBaseAmmoClip* ClipToLoad) {
}

bool ADFBaseGun::IsReloading() const {
    return false;
}

bool ADFBaseGun::IsDryReloading() const {
    return false;
}

bool ADFBaseGun::HasExhaustedAllAmmo() const {
    return false;
}

bool ADFBaseGun::HasAmmoClip() const {
    return false;
}

int32 ADFBaseGun::GetTotalAmmo(bool bIncludeLoadedMags) const {
    return 0;
}

uint8 ADFBaseGun::GetSupportedFireModes() const {
    return 0;
}

FName ADFBaseGun::GetShellEjectAttachPoint() const {
    return NAME_None;
}

EFireMode ADFBaseGun::GetSelectedFireMode() const {
    return EFireMode::Semi;
}

EGunReloadState ADFBaseGun::GetReloadState() const {
    return EGunReloadState::NotReloading;
}

EGunReloadState ADFBaseGun::GetPreviousReloadState() const {
    return EGunReloadState::NotReloading;
}

int32 ADFBaseGun::GetPostReloadClipAmmo() const {
    return 0;
}

int32 ADFBaseGun::GetNumFreeAmmoClips(bool bIncludeEmptyMags, bool bIncludeCurrentMag) const {
    return 0;
}

FVector ADFBaseGun::GetMuzzleLocation(bool bIgnoreLocalControlOnServer) const {
    return FVector{};
}

FVector ADFBaseGun::GetMuzzleDirection(bool bIgnoreLocalControlOnServer) const {
    return FVector{};
}

FName ADFBaseGun::GetMuzzleAttachPoint() const {
    return NAME_None;
}

USceneComponent* ADFBaseGun::GetMuzzleAttachComponent(bool bIgnoreLocalControlOnServer) const {
    return NULL;
}

int32 ADFBaseGun::GetClipAmmo() const {
    return 0;
}

void ADFBaseGun::ClientRejectFiredShot_Implementation(int32 ShotID, ADFBaseAmmoClip* ShotAmmoClip, int32 ServerClipAmmo) {
}

bool ADFBaseGun::CanReload() const {
    return false;
}

void ADFBaseGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseGun, SelectedFireMode);
    DOREPLIFETIME(ADFBaseGun, PendingReloadState);
    DOREPLIFETIME(ADFBaseGun, CurrentAmmoClip);
}


