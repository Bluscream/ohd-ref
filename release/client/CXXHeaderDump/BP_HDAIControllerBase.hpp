#ifndef UE4SS_SDK_BP_HDAIControllerBase_HPP
#define UE4SS_SDK_BP_HDAIControllerBase_HPP

class ABP_HDAIControllerBase_C : public AHDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UAIPerceptionComponent* PerceptionComp;                                     // 0x0368 (size: 0x8)
    class UHDGOAPComponent* GOAPComp;                                                 // 0x0370 (size: 0x8)
    float SavedMaxConeOfFireAngleDegrees;                                             // 0x0378 (size: 0x4)
    float SavedMinConeOfFireAngleDegrees;                                             // 0x037C (size: 0x4)
    bool bSavedInfiniteAmmo;                                                          // 0x0380 (size: 0x1)
    bool bSavedInfiniteClipAmmo;                                                      // 0x0381 (size: 0x1)
    char padding_0[0x6];                                                              // 0x0382 (size: 0x6)
    class UDataTable* DefaultFactionVocalProfiles;                                    // 0x0388 (size: 0x8)

    void SetupVocalProfile();
    void ResetWeaponBase(class ABP_HDWeaponBase_C* Weapon);
    void SetupWeaponBase(class ABP_HDWeaponBase_C* Weapon);
    void ClearWeaponSavedValues();
    void RestorePreviousValuesForWeapon(class ABP_HDWeaponBase_C* Weapon);
    void SaveAndApplyNewValuesToWeapon(class ABP_HDWeaponBase_C* Weapon);
    void ResetRecoilHandler(class ABP_HDWeaponBase_C* Weapon);
    void SetupRecoilHandler(class ABP_HDWeaponBase_C* Weapon);
    void CharacterCleanup(class ABP_HDPlayerCharacterBase_C* Character);
    void UnbindEventsFromCharacter(class ABP_HDPlayerCharacterBase_C* Character);
    void BindEventsToCharacter(class ABP_HDPlayerCharacterBase_C* Character);
    void WarnOfNoRecoilHandler(class ABP_HDWeaponBase_C* EquippedWeapon);
    class UHDKit* GetFactionSpecifiedSquadMemberKit();
    class UHDKit* GetFactionSpecifiedSquadLeaderKit();
    void OnOwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void OnOwnerPawnEquippedItemChange(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    void ReceivePossess(class APawn* PossessedPawn);
    void SuppressionEvent(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    void HitDamageEvent(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void ExecuteUbergraph_BP_HDAIControllerBase(int32 EntryPoint);
}; // Size: 0x390

#endif
