#ifndef UE4SS_SDK_WBP_PlayerStatus_HPP
#define UE4SS_SDK_WBP_PlayerStatus_HPP

class UWBP_PlayerStatus_C : public UHDUIUWPlayerStatus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class UWidgetAnimation* EffectChangeUIAnim;                                       // 0x0260 (size: 0x8)
    class UWidgetAnimation* StanceChangeUIAnim;                                       // 0x0268 (size: 0x8)
    class UWidgetAnimation* AllStaminaFullUIAnim;                                     // 0x0270 (size: 0x8)
    class UWidgetAnimation* SprintInputUIAnim;                                        // 0x0278 (size: 0x8)
    class UImage* AmmoResupplyFXIcon;                                                 // 0x0280 (size: 0x8)
    class UHorizontalBox* EffectStack;                                                // 0x0288 (size: 0x8)
    class UWBP_MobilityStatusBar_C* JumpStaminaBar;                                   // 0x0290 (size: 0x8)
    class UHorizontalBox* MedicHealFXIcon;                                            // 0x0298 (size: 0x8)
    class UWBP_MobilityStatusBar_C* SprintStaminaBar;                                 // 0x02A0 (size: 0x8)
    class UWBP_StanceIndicator_C* StanceIndicator;                                    // 0x02A8 (size: 0x8)

    void SetPlayerEffectVisibility(class UWidget* EffectWidget, bool bVisible);
    void SetMedicHealingEffectVisibility(bool bVisible);
    void SetAmmoResupplyEffectVisibility(bool bVisible);
    void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
    void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
    void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
    void OwnerStartSprint();
    void OwnerEndSprint();
    void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
    void OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial);
    void Construct();
    void OwnerActivatePlayerEffect(class UWidget* EffectIndicatorWidget);
    void OwnerDeactivatePlayerEffect(class UWidget* EffectIndicatorWidget);
    void BPOwnerDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void ExecuteUbergraph_WBP_PlayerStatus(int32 EntryPoint);
}; // Size: 0x2B0

#endif
