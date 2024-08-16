#ifndef UE4SS_SDK_BPI_UINotificationSticky_HPP
#define UE4SS_SDK_BPI_UINotificationSticky_HPP

class IBPI_UINotificationSticky_C : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    void Negative Vote();
    void Positive Vote();
    void Set Tray(class UWBP_NotificationTray_C* Notification Tray);
    void Set Top(bool bTop);
    void Get Is Sticky?(bool& bIsSticky, int32& StickyPriority);
}; // Size: 0x28

#endif
