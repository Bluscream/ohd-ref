#ifndef UE4SS_SDK_WBP_CaptureStatus_HPP
#define UE4SS_SDK_WBP_CaptureStatus_HPP

class UWBP_CaptureStatus_C : public UHDUIUWCaptureStatus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* DisplayCaptureUIAnim;                                     // 0x0270 (size: 0x8)
    class UProgressBar* ControlPointProgressBar;                                      // 0x0278 (size: 0x8)
    class UTextBlock* ControlPointText;                                               // 0x0280 (size: 0x8)
    class UHorizontalBox* GarrisonedUnitHBox;                                         // 0x0288 (size: 0x8)
    class UTextBlock* TeamOwnerText;                                                  // 0x0290 (size: 0x8)
    FLinearColor LocalOwnershipColorToUse;                                            // 0x0298 (size: 0x10)
    int32 PreviewNumFriendlies;                                                       // 0x02A8 (size: 0x4)
    int32 PreviewNumEnemies;                                                          // 0x02AC (size: 0x4)
    int32 PreviewMinNumRequiredToCapture;                                             // 0x02B0 (size: 0x4)
    bool bFriendlyUnitsRightToLeft;                                                   // 0x02B4 (size: 0x1)
    bool bEnemyUnitsRightToLeft;                                                      // 0x02B5 (size: 0x1)
    bool bUseFriendlyOwnershipColor;                                                  // 0x02B6 (size: 0x1)
    char padding_0[0x1];                                                              // 0x02B7 (size: 0x1)
    FMargin UnitPadding;                                                              // 0x02B8 (size: 0x10)
    FLinearColor FriendlyOwnershipColor;                                              // 0x02C8 (size: 0x10)
    FLinearColor NeutralOwnershipColor;                                               // 0x02D8 (size: 0x10)
    FLinearColor EnemyOwnershipColor;                                                 // 0x02E8 (size: 0x10)

    void UpdateActiveUnits(bool bFriendly, int32 UnitCount, int32 MinUnitsRequired);
    void SetMinCountToCapture(int32 MinCount);
    void ResizeGarrisonContainer(int32 NewUnitIconCount);
    void UpdateTeamOwnerText(EHDTeam CaptureTeam);
    void UpdateProgressBarColor(EHDTeam OwningTeam);
    void OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial);
    void OwnerNoControlPoint();
    void OnInitialized();
    void ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial);
    void ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial);
    void ControlPointSetGarrisonedPlayerCount(int32 NumFriendlies, int32 NumEnemies, int32 MinNumRequiredForCapture, bool bInitial);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CaptureStatus(int32 EntryPoint);
}; // Size: 0x2F8

#endif
