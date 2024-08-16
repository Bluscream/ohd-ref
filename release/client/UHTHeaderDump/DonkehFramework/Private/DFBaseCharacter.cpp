#include "DFBaseCharacter.h"
#include "DFCharacterLeanHandler.h"
#include "DFCharacterMovementComponent.h"
#include "DFInventoryComponent.h"
#include "Net/UnrealNetwork.h"

ADFBaseCharacter::ADFBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UDFCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->RemoteViewYaw = 0;
    this->bClientResimulateSprintStamina = false;
    this->bPlayFootstepFXWithPerspMeshOnly = false;
    this->bTickAllAnimationOnDedicatedServer = true;
    this->bOnlyTickAnimMontagesOnDedicatedServer = false;
    this->EquippedItem = NULL;
    this->LastEquippedItem = NULL;
    this->ItemAttachPoint = TEXT("WeaponSocket");
    this->Inventory = CreateDefaultSubobject<UDFInventoryComponent>(TEXT("Inventory"));
    this->DefaultLoadout = NULL;
    this->ItemEnabledMode = EDFItemEnabledMode::Enabled;
    this->ShotIDCounter = -1;
    this->bAllowWeaponFireWhileCrawling = false;
    this->bDying = false;
    this->Health = 0.00f;
    this->RagdollLifeSpan = 10.00f;
    this->MaxHealth = 100.00f;
    this->bApplyDamageMomentumOnHit = true;
    this->ReplicatedStance = ECharacterStance::None;
    this->PreviousStance = ECharacterStance::None;
    this->bPressedVault = false;
    this->bSprinting = false;
    this->bAiming = false;
    this->bIsProne = false;
    this->bVaulting = false;
    this->bWasVaulting = false;
    this->ReplicatedLeanAmount = 0.00f;
    this->LeanHandler = CreateDefaultSubobject<UDFCharacterLeanHandler>(TEXT("LeanHandler"));
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->DFCharacterMovement = (UDFCharacterMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UDFCharacterMovementComponent*>(this);
    this->TargetEyeHeight = 0.00f;
    this->bInterpCrouchedEyeHeight = true;
    this->CrouchedTransitionInterpSpeed = 10.00f;
    this->bInterpProneEyeHeight = true;
    this->ProneTransitionInterpSpeed = 10.00f;
    this->ProneEyeHeight = 16.00f;
    this->TeamNum = 255;
    this->TeamState = NULL;
    this->PrevTeamState = NULL;
    this->bAllowTeamIdOverride = false;
}

void ADFBaseCharacter::Vault() {
}

void ADFBaseCharacter::UnSprint(bool bClientSimulation) {
}

void ADFBaseCharacter::UnLean(ELeanDirection UnDesiredLeanDir, bool bClientSimulation) {
}

void ADFBaseCharacter::UnAim(bool bClientSimulation) {
}

void ADFBaseCharacter::Suicide() {
}

void ADFBaseCharacter::StopVaulting() {
}

void ADFBaseCharacter::StopFire() {
}

void ADFBaseCharacter::StopCharacterPerspectiveAnimation(const FPerspectiveAnim& CharAnim) {
}

void ADFBaseCharacter::StopCharacterMontage(UAnimMontage* CharMontage) {
}

void ADFBaseCharacter::StopAllAnimMontages(bool bPerspectiveMeshOnly) {
}

void ADFBaseCharacter::StartFire() {
}

void ADFBaseCharacter::SprintToggle() {
}

void ADFBaseCharacter::Sprint(bool bClientSimulation) {
}

void ADFBaseCharacter::SpawnHitImpactFX(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) {
}

void ADFBaseCharacter::SetRagdollPhysics() {
}

void ADFBaseCharacter::SetItemEnabledMode(EDFItemEnabledMode ItemMode) {
}

void ADFBaseCharacter::SetHealth(float InHealth) {
}

void ADFBaseCharacter::ServerSuicide_Implementation() {
}
bool ADFBaseCharacter::ServerSuicide_Validate() {
    return true;
}

void ADFBaseCharacter::ServerEquipItem_Implementation(ADFBaseItem* ItemToEquip) {
}
bool ADFBaseCharacter::ServerEquipItem_Validate(ADFBaseItem* ItemToEquip) {
    return true;
}

void ADFBaseCharacter::ServerDoVault_Implementation(const FDFVaultTraceData& VaultStartParams) {
}
bool ADFBaseCharacter::ServerDoVault_Validate(const FDFVaultTraceData& VaultStartParams) {
    return true;
}

void ADFBaseCharacter::Reload() {
}


















void ADFBaseCharacter::ProneToggle() {
}

float ADFBaseCharacter::PlayCharacterUnEquipMontage(UAnimMontage* UnEquipMontageToPlay) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterThrowUnderhandMontage(UAnimMontage* ThrowUnderhandMontageToPlay) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterThrowOverhandMontage(UAnimMontage* ThrowOverhandMontageToPlay) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterStartReloadMontage(UAnimMontage* StartReloadMontageToPlay, bool bDryReload) {
    return 0.0f;
}

UAudioComponent* ADFBaseCharacter::PlayCharacterSound(const FPerspectiveSound& Sound) {
    return NULL;
}

float ADFBaseCharacter::PlayCharacterReloadMontage(bool bDryReload) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterPerspectiveAnimation(const FPerspectiveAnim& CharAnim, bool bForceDisableAutoBlendOut) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterMontage(UAnimMontage* CharMontage, bool bForceDisableAutoBlendOut) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterFireMontage(UAnimMontage* FireMontageToPlay, bool bFireLast, bool bFireADS) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterEquipMontage(bool bDontPlayAndReturnDominantPlayLengthOnly) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterEndReloadMontage(UAnimMontage* EndReloadMontageToPlay, bool bDryReload) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterDeathMontage(bool bDontPlayAndReturnDominantPlayLengthOnly) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterCockMontage(UAnimMontage* CockMontageToPlay) {
    return 0.0f;
}

float ADFBaseCharacter::PlayCharacterActionMontage(UAnimMontage* ActionMontageToPlay) {
    return 0.0f;
}

void ADFBaseCharacter::OnRep_TeamState(ADFTeamState* TeamStateBeforeUpdate) {
}

void ADFBaseCharacter::OnRep_TeamNum(uint8 LastTeamNum) {
}

void ADFBaseCharacter::OnRep_ReplicatedStance() {
}

void ADFBaseCharacter::OnRep_ReplicatedLeanAmount(float LastReplicatedLeanAmount) {
}

void ADFBaseCharacter::OnRep_LastTakeHitInfo() {
}

void ADFBaseCharacter::OnRep_ItemEnabledMode(EDFItemEnabledMode PreviousItemEnabledMode) {
}

void ADFBaseCharacter::OnRep_IsProne() {
}

void ADFBaseCharacter::OnRep_Health(const float PreviousValue) {
}

void ADFBaseCharacter::OnRep_EquippedItem(ADFBaseItem* LastItem) {
}

void ADFBaseCharacter::OnRep_bSprinting() {
}

void ADFBaseCharacter::OnRep_bAiming() {
}

void ADFBaseCharacter::OnDeath_Implementation(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) {
}

int32 ADFBaseCharacter::NextShotID() {
    return 0;
}

void ADFBaseCharacter::LeaveProne(bool bClientSimulation) {
}

void ADFBaseCharacter::LeanToggle(ELeanDirection LeanDir) {
}

void ADFBaseCharacter::Lean(ELeanDirection DesiredLeanDir, bool bClientSimulation) {
}


bool ADFBaseCharacter::IsPrefiring() const {
    return false;
}

bool ADFBaseCharacter::IsPlayer() const {
    return false;
}

bool ADFBaseCharacter::IsPerspectiveMesh(const USkeletalMeshComponent* MeshCompToCheck) const {
    return false;
}

bool ADFBaseCharacter::IsLeaning() const {
    return false;
}

bool ADFBaseCharacter::IsFiring() const {
    return false;
}

bool ADFBaseCharacter::IsEquipped() const {
    return false;
}

bool ADFBaseCharacter::IsAlive() const {
    return false;
}

void ADFBaseCharacter::GoProne(bool bClientSimulation) {
}

void ADFBaseCharacter::GiveLoadout(UDFLoadout* Loadout, bool bEquipFirstItem) {
}

ADFBaseItem* ADFBaseCharacter::GetRelevantEquippedItem() const {
    return NULL;
}

ADFBaseItem* ADFBaseCharacter::GetPreviousInventoryItem(bool bEquippable) {
    return NULL;
}

ADFBaseItem* ADFBaseCharacter::GetNextInventoryItem(bool bEquippable) {
    return NULL;
}

UAnimMontage* ADFBaseCharacter::GetMontageToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const {
    return NULL;
}

EDFItemEnabledMode ADFBaseCharacter::GetItemEnabledMode() const {
    return EDFItemEnabledMode::Enabled;
}

FName ADFBaseCharacter::GetItemAttachPoint() const {
    return NAME_None;
}

UDFInventoryComponent* ADFBaseCharacter::GetInventory() const {
    return NULL;
}

ADFBaseItem* ADFBaseCharacter::GetEquippedItem() const {
    return NULL;
}

bool ADFBaseCharacter::GetDamageMultiplierByBoneName(const FName& BoneName, float& DamageMultiplier) const {
    return false;
}

USkeletalMeshComponent* ADFBaseCharacter::GetCharacterMeshToUse(bool bIgnoreLocalControlOnServer) const {
    return NULL;
}

bool ADFBaseCharacter::GetCharacterDeathMontageToUse(UAnimMontage*& OutCharDeathMontage) const {
    return false;
}

EVisibilityBasedAnimTickOption ADFBaseCharacter::GetCharacterAnimTickOptionToUse(bool bVisibleMesh) const {
    return EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}

UAnimSequenceBase* ADFBaseCharacter::GetAnimToUseFromPerspectiveAnimPair(const FPerspectiveAnim& AnimationPair) const {
    return NULL;
}

FRotator ADFBaseCharacter::GetAimOffsets() const {
    return FRotator{};
}

void ADFBaseCharacter::EquipPreviousItem() {
}

void ADFBaseCharacter::EquipNextItemByType(EItemType ItemType) {
}

void ADFBaseCharacter::EquipNextItem() {
}

void ADFBaseCharacter::EquipItem(ADFBaseItem* ItemToEquip) {
}

bool ADFBaseCharacter::Die(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) {
    return false;
}

void ADFBaseCharacter::CrouchToggle() {
}

void ADFBaseCharacter::ClientVeryShortAdjustPosition_CustomStamina_Implementation(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina) {
}

void ADFBaseCharacter::ClientAdjustRootMotionSourcePosition_CustomStamina_Implementation(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina) {
}

void ADFBaseCharacter::ClientAdjustRootMotionPosition_CustomStamina_Implementation(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina) {
}

void ADFBaseCharacter::ClientAdjustPosition_CustomStamina_Implementation(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, float ServerSprintStamina) {
}

void ADFBaseCharacter::ClearCharacterAnimInstances(bool bPerspectiveMeshOnly) {
}

bool ADFBaseCharacter::CanVault() const {
    return false;
}

bool ADFBaseCharacter::CanSprint() const {
    return false;
}

bool ADFBaseCharacter::CanLean(ELeanDirection DesiredLeanDir) const {
    return false;
}

bool ADFBaseCharacter::CanGoProne() const {
    return false;
}

bool ADFBaseCharacter::CanDie(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) const {
    return false;
}

bool ADFBaseCharacter::CanAim() const {
    return false;
}

bool ADFBaseCharacter::AllowsWeaponFire() const {
    return false;
}

void ADFBaseCharacter::AimToggle() {
}

void ADFBaseCharacter::Aim(bool bClientSimulation) {
}

void ADFBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADFBaseCharacter, RemoteViewYaw);
    DOREPLIFETIME(ADFBaseCharacter, EquippedItem);
    DOREPLIFETIME(ADFBaseCharacter, ItemEnabledMode);
    DOREPLIFETIME(ADFBaseCharacter, Health);
    DOREPLIFETIME(ADFBaseCharacter, LastTakeHitInfo);
    DOREPLIFETIME(ADFBaseCharacter, ReplicatedStance);
    DOREPLIFETIME(ADFBaseCharacter, bSprinting);
    DOREPLIFETIME(ADFBaseCharacter, bAiming);
    DOREPLIFETIME(ADFBaseCharacter, VaultParams);
    DOREPLIFETIME(ADFBaseCharacter, ReplicatedLeanAmount);
    DOREPLIFETIME(ADFBaseCharacter, TeamNum);
    DOREPLIFETIME(ADFBaseCharacter, TeamState);
}


