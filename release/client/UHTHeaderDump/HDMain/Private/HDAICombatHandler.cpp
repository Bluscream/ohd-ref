#include "HDAICombatHandler.h"

UHDAICombatHandler::UHDAICombatHandler() {
    this->BehaviorHandler = NULL;
    this->VocalHandler = NULL;
    this->Enemy = NULL;
    this->CombatTargetLocationType = EHDAICombatTargetType::None;
    this->bDoNotAttack = false;
    this->bWeaponAutoReload = false;
    this->bWeaponMovementFire = true;
    this->bWeaponHasAmmo = false;
    this->WeaponNextFireTime = 0.00f;
    this->AttackRateMin = 0.30f;
    this->AttackRateMax = 0.70f;
    this->BurstAttackProbability = 0.20f;
    this->BurstAttackNumberMin = 2;
    this->BurstAttackNumberMax = 4;
    this->CurrentBurstAttackNumber = 0;
    this->WeaponStopFireTime = 0.00f;
    this->WeaponStopFireTimeMin = 0.10f;
    this->WeaponStopFireTimeMax = 0.20f;
    this->bWeaponInfiniteAmmo = false;
    this->bWeaponInfiniteClipAmmo = false;
    this->bIgnoreFriendlySuppression = true;
    this->bIgnoreFriendlyHits = true;
    this->MaxNumSuppressionSources = 5;
    this->SuppressionSourceTimeThreshold = 5.00f;
    this->SuppressionSourceUpdateRate = 0.20f;
    this->SuppressionSourceUpdateTime = 0.00f;
    this->CurrentKit = NULL;
    this->CurrentSpecificItemType = ESpecificItemType::Undefined;
    this->EquipmentHandlingTime = 0.00f;
    this->EquipmentHandlingRate = 1.25f;
    this->EquipmentHandlingRateVariation = 0.20f;
    this->bSpecialtyItemInUse = false;
    this->bProjectileWeaponInUse = false;
    this->AfterEquipCooldownTime = 2.50f;
    this->SpecialtyItemUseTimeLimit = 7.00f;
    this->AfterSpecialtyItemUsedTimeLimit = 1.50f;
    this->GrenadeLauncherRangeMin = 6500.00f;
    this->GrenadeLauncherRangeMax = 30000.00f;
    this->GrenadeLauncherChance = 0.20f;
    this->RocketLauncherRangeMin = 6500.00f;
    this->RocketLauncherRangeMax = 40000.00f;
    this->RocketLauncherChance = 0.20f;
    this->FragGrenadeRangeMin = 2500.00f;
    this->FragGrenadeRangeMax = 4500.00f;
    this->FragGrenadeChance = 0.08f;
    this->SmokeGrenadeRangeMin = 5000.00f;
    this->SmokeGrenadeChance = 0.03f;
}

void UHDAICombatHandler::UpdateSuppressionSources() {
}

void UHDAICombatHandler::UpdateEquipmentHandling() {
}

void UHDAICombatHandler::UpdateAttackParameters() {
}

void UHDAICombatHandler::StopUsingSpecialtyItem() {
}

void UHDAICombatHandler::StopAttack() {
}

void UHDAICombatHandler::StartAttack() {
}

void UHDAICombatHandler::SetupEquipmentReferences() {
}

void UHDAICombatHandler::SetNextAttackTime() {
}

void UHDAICombatHandler::SetItemAttackParameters(const FHDAISpecificItemTypeAttackData& InAttackData) {
}

void UHDAICombatHandler::SetEnemy(AActor* NewEnemy) {
}

void UHDAICombatHandler::Reload(AHDBaseWeapon* InWeapon) {
}

void UHDAICombatHandler::ReceiveSuppression(ADFBaseProjectile* OtherProjectile, ADFBasePickup* Pickup) {
}

void UHDAICombatHandler::ReceiveHitDamage(ADFBaseProjectile* OtherProjectile, ADFBasePickup* Pickup) {
}

void UHDAICombatHandler::PauseAttack() {
}

bool UHDAICombatHandler::IsFiring() const {
    return false;
}

bool UHDAICombatHandler::HasValidEnemy(bool bAliveCheck) const {
    return false;
}

bool UHDAICombatHandler::HasValidCustomCombatTargetLocation() const {
    return false;
}

bool UHDAICombatHandler::HasValidCombatTargetLocation() const {
    return false;
}

bool UHDAICombatHandler::HasAmmoLoaded() const {
    return false;
}

FVector UHDAICombatHandler::GetOldestSuppressionSource() {
    return FVector{};
}

FVector UHDAICombatHandler::GetMostRelevantSuppressionSource() {
    return FVector{};
}

void UHDAICombatHandler::ClearCustomCombatTargetLocation() {
}

void UHDAICombatHandler::ClearCombatTargetLocation() {
}

bool UHDAICombatHandler::CanAttackEnemy(bool bCheckFireTime, bool bIgnoreAmmoReloadCheck) const {
    return false;
}

void UHDAICombatHandler::AddSuppressionSource(FHDAISuppressionSource InSuppressionSource) {
}


