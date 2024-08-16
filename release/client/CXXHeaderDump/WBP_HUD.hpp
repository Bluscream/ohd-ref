#ifndef UE4SS_SDK_WBP_HUD_HPP
#define UE4SS_SDK_WBP_HUD_HPP

class UWBP_HUD_C : public UHDUIUWHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWBP_CaptureStatus_C* CaptureStatus;                                        // 0x0240 (size: 0x8)
    class UWBP_HUDElement_Compass_C* Compass;                                         // 0x0248 (size: 0x8)
    class UWBP_HUDElement_EquipmentSelect_C* EquipmentSelect;                         // 0x0250 (size: 0x8)
    class UWBP_NotificationTray_C* NotificationTray;                                  // 0x0258 (size: 0x8)
    class UWBP_PlayerStatus_C* PlayerStatus;                                          // 0x0260 (size: 0x8)
    class UWBP_HUDElement_TextChat_C* TextChat;                                       // 0x0268 (size: 0x8)
    class UWBP_HUDElement_VOIPIndicator_C* VOIPStatus;                                // 0x0270 (size: 0x8)
    class UWBP_WeaponStatus_C* WeaponStatus;                                          // 0x0278 (size: 0x8)
    bool bShowCompass;                                                                // 0x0280 (size: 0x1)
    bool bShowPlayerStatus;                                                           // 0x0281 (size: 0x1)
    bool bShowWeaponStatus;                                                           // 0x0282 (size: 0x1)
    bool bShowCaptureStatus;                                                          // 0x0283 (size: 0x1)
    bool bShowEquipmentSelect;                                                        // 0x0284 (size: 0x1)

    void SetHUDElementVisibility(class UWidget* Widget, bool bShown);
    void ToggleWeaponStatus(bool bVisible);
    void ToggleEquipmentSelect(bool bVisible);
    void Construct();
    void ExecuteUbergraph_WBP_HUD(int32 EntryPoint);
}; // Size: 0x285

#endif
