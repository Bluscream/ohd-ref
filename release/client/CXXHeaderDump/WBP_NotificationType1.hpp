#ifndef UE4SS_SDK_WBP_NotificationType1_HPP
#define UE4SS_SDK_WBP_NotificationType1_HPP

class UWBP_NotificationType1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWidgetAnimation* Remove;                                                   // 0x0238 (size: 0x8)
    class UWidgetAnimation* Boot;                                                     // 0x0240 (size: 0x8)
    class UImage* BlindImageLeft;                                                     // 0x0248 (size: 0x8)
    class UImage* BlindImageRight;                                                    // 0x0250 (size: 0x8)
    class UBorder* BlindLeftHighlight;                                                // 0x0258 (size: 0x8)
    class UBorder* BlindRightHighlight;                                               // 0x0260 (size: 0x8)
    class UHorizontalBox* BlindVote;                                                  // 0x0268 (size: 0x8)
    class UImage* DisableImage;                                                       // 0x0270 (size: 0x8)
    class USizeBox* Overall;                                                          // 0x0278 (size: 0x8)
    class UImage* ParityImageLeft;                                                    // 0x0280 (size: 0x8)
    class UImage* ParityImageRight;                                                   // 0x0288 (size: 0x8)
    class UBorder* ParityLeftHighlight;                                               // 0x0290 (size: 0x8)
    class UBorder* ParityRightHighlight;                                              // 0x0298 (size: 0x8)
    class UTextBlock* ParityTallyLeft;                                                // 0x02A0 (size: 0x8)
    class UTextBlock* ParityTallyRight;                                               // 0x02A8 (size: 0x8)
    class UHorizontalBox* ParityVote;                                                 // 0x02B0 (size: 0x8)
    class UTextBlock* Plain_Text;                                                     // 0x02B8 (size: 0x8)
    class URichTextBlock* RemainingTime;                                              // 0x02C0 (size: 0x8)
    class URichTextBlock* Rich_Text;                                                  // 0x02C8 (size: 0x8)
    class UBorder* ThresholdHighlight;                                                // 0x02D0 (size: 0x8)
    class UImage* ThresholdImage;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* ThresholdTally;                                                 // 0x02E0 (size: 0x8)
    class UCanvasPanel* ThresholdVote;                                                // 0x02E8 (size: 0x8)
    class UProgressBar* TimerBar;                                                     // 0x02F0 (size: 0x8)
    float Display Time;                                                               // 0x02F8 (size: 0x4)
    char padding_0[0x4];                                                              // 0x02FC (size: 0x4)
    FText Text;                                                                       // 0x0300 (size: 0x18)
    FText TimerStyle;                                                                 // 0x0318 (size: 0x18)
    float CreationTime;                                                               // 0x0330 (size: 0x4)
    TEnumAsByte<EUINotificationType::Type> NotificationType;                          // 0x0334 (size: 0x1)
    bool bUseRichText;                                                                // 0x0335 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0336 (size: 0x2)
    class UTexture2D* No Image;                                                       // 0x0338 (size: 0x8)
    class UTexture2D* Yes Image;                                                      // 0x0340 (size: 0x8)
    int32 VotesInFavor;                                                               // 0x0348 (size: 0x4)
    int32 VotesAgainst;                                                               // 0x034C (size: 0x4)
    bool bIsTopOfEvents;                                                              // 0x0350 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0351 (size: 0x7)
    class UWBP_NotificationTray_C* Tray Ref (Automated);                              // 0x0358 (size: 0x8)
    float SquashLerp;                                                                 // 0x0360 (size: 0x4)
    bool bDestroying;                                                                 // 0x0364 (size: 0x1)
    bool bSticky;                                                                     // 0x0365 (size: 0x1)
    char padding_3[0x2];                                                              // 0x0366 (size: 0x2)
    int32 StickyPriority;                                                             // 0x0368 (size: 0x4)
    int32 Threshold;                                                                  // 0x036C (size: 0x4)
    bool bShrinking;                                                                  // 0x0370 (size: 0x1)

    void Get Is Sticky?(bool& bIsSticky, int32& StickyPriority);
    void GetRemainingTime(float& Float);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void Begin Destroy();
    void Destroy For Real();
    void Change Vote Tally(int32 Add Votes In Favor, int32 Add Votes Against);
    void Set Top(bool bTop);
    void Refreshed Position();
    void Set Tray(class UWBP_NotificationTray_C* Notification Tray);
    void Positive Vote();
    void Negative Vote();
    void Set Threshold(int32 Threshold);
    void Shrink();
    void Begin Shrink();
    void Set Vote Tally(int32 VotesInFavor, int32 VotesAgainst);
    void ExecuteUbergraph_WBP_NotificationType1(int32 EntryPoint);
}; // Size: 0x371

#endif
