#ifndef UE4SS_SDK_WBP_WeaponStatus_HPP
#define UE4SS_SDK_WBP_WeaponStatus_HPP

class UWBP_WeaponStatus_C : public UHDUIUWWeaponStatus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* MagCounterChangeUIAnim;                                   // 0x0268 (size: 0x8)
    class UWidgetAnimation* AimStyleInputUIAnim;                                      // 0x0270 (size: 0x8)
    class UWidgetAnimation* FireModeInputUIAnim;                                      // 0x0278 (size: 0x8)
    class UTextBlock* AimStyleText;                                                   // 0x0280 (size: 0x8)
    class UTextBlock* FireModeText;                                                   // 0x0288 (size: 0x8)
    class UTextBlock* MagCounterText;                                                 // 0x0290 (size: 0x8)
    class UImage* Separator;                                                          // 0x0298 (size: 0x8)

    void ShouldDisplayTotalAmmo(bool& bDisplayTotalAmmo);
    void UpdateElementVisibility();
    void PreConstruct(bool IsDesignTime);
    void BPOwnerWeaponChanged(class AHDBaseWeapon* NewWeap, class AHDBaseWeapon* PrevWeap);
    void BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput);
    void BPOwnerWeaponAmmoUpdated(const FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated);
    void OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    void ExecuteUbergraph_WBP_WeaponStatus(int32 EntryPoint);
}; // Size: 0x2A0

#endif
