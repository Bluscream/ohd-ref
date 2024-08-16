#ifndef UE4SS_SDK_WBP_MobilityStatusBar_HPP
#define UE4SS_SDK_WBP_MobilityStatusBar_HPP

class UWBP_MobilityStatusBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWidgetAnimation* PingUIAnim;                                               // 0x0238 (size: 0x8)
    class UProgressBar* StatusBar;                                                    // 0x0240 (size: 0x8)
    class UImage* StatusPingImg;                                                      // 0x0248 (size: 0x8)

    void SetPercent(float InPercent, bool bInitial);
    void PingValueFull();
    void ExecuteUbergraph_WBP_MobilityStatusBar(int32 EntryPoint);
}; // Size: 0x250

#endif
