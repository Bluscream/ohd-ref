#ifndef UE4SS_SDK_WBP_NotificationTray_HPP
#define UE4SS_SDK_WBP_NotificationTray_HPP

class UWBP_NotificationTray_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UVerticalBox* Tray;                                                         // 0x0238 (size: 0x8)
    class UVerticalBox* TrayCycler;                                                   // 0x0240 (size: 0x8)
    TArray<class UWidget*> StickyArray;                                               // 0x0248 (size: 0x10)
    TArray<int32> PriorityArray;                                                      // 0x0258 (size: 0x10)
    TArray<class UWidget*> WidgetArray;                                               // 0x0268 (size: 0x10)
    TArray<class UCanvasPanelSlot*> WidgetSlotArray;                                  // 0x0278 (size: 0x10)
    float PassedPosition;                                                             // 0x0288 (size: 0x4)
    char padding_0[0x4];                                                              // 0x028C (size: 0x4)
    TArray<class UWidget*> WidgetArrayTEMP;                                           // 0x0290 (size: 0x10)
    TArray<class UCanvasPanelSlot*> WidgetSlotArrayTEMP;                              // 0x02A0 (size: 0x10)
    bool bFlipper;                                                                    // 0x02B0 (size: 0x1)
    char padding_1[0x3];                                                              // 0x02B1 (size: 0x3)
    int32 HighestPriority;                                                            // 0x02B4 (size: 0x4)
    int32 HighestIndex;                                                               // 0x02B8 (size: 0x4)
    char padding_2[0x4];                                                              // 0x02BC (size: 0x4)
    class UWidget* HighestWidget;                                                     // 0x02C0 (size: 0x8)
    class UWidget* 2ndHighestWidget;                                                  // 0x02C8 (size: 0x8)
    int32 Loops;                                                                      // 0x02D0 (size: 0x4)

    void Add Notification(FFUINotificationInfo Info);
    void Add Custom Notification(class UWidget* Widget Object Reference);
    void Process Notification Order();
    void Set Next Top();
    void Positive Vote();
    void Negative Vote();
    void ExecuteUbergraph_WBP_NotificationTray(int32 EntryPoint);
}; // Size: 0x2D4

#endif
