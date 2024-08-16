#ifndef UE4SS_SDK_WBP_CaptureStatus_FlagIcon_HPP
#define UE4SS_SDK_WBP_CaptureStatus_FlagIcon_HPP

class UWBP_CaptureStatus_FlagIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* BG;                                                                 // 0x0238 (size: 0x8)
    class UImage* Icon;                                                               // 0x0240 (size: 0x8)
    class UImage* IconFrame;                                                          // 0x0248 (size: 0x8)
    FSlateBrush IconFrameNoTeam;                                                      // 0x0250 (size: 0x88)
    FSlateBrush BgNoTeam;                                                             // 0x02D8 (size: 0x88)
    FSlateBrush IconLocked;                                                           // 0x0360 (size: 0x88)
    FSlateBrush IconFlag;                                                             // 0x03E8 (size: 0x88)
    FSlateBrush IconFrameEnemy;                                                       // 0x0470 (size: 0x88)
    float IconOpacityCapturable;                                                      // 0x04F8 (size: 0x4)
    float IconOpacityUncapturable;                                                    // 0x04FC (size: 0x4)
    float IconOpacityOffensive;                                                       // 0x0500 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0504 (size: 0x4)
    FSlateBrush IconFrameFriendly;                                                    // 0x0508 (size: 0x88)
    FSlateBrush BgEnemy;                                                              // 0x0590 (size: 0x88)
    FSlateBrush BgFriendly;                                                           // 0x0618 (size: 0x88)
    FSlateColor ColorFriendly;                                                        // 0x06A0 (size: 0x28)
    FSlateColor ColorEnemy;                                                           // 0x06C8 (size: 0x28)
    FSlateColor ColorNoTeam;                                                          // 0x06F0 (size: 0x28)

    void SetBrushOpacityByCaptureStatus(FSlateBrush& BrushToUpdate, bool bLocked, EHDControlPointObjectiveType ObjType, FSlateBrush& NewBrush);
    void TintBrushByTeam(FSlateBrush& BrushToTint, EHDTeam Team, FSlateBrush& NewBrush);
    void UpdateBrushesByTeam(bool bLocked, EHDTeam Team, EHDControlPointObjectiveType ObjType);
    void SetBrushes(FSlateBrush& IconFrame, FSlateBrush& BG, FSlateBrush& Icon);
    void OnUpdateIcon(bool bActive, EHDTeam Team, bool bLocked, EHDControlPointObjectiveType ObjType);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CaptureStatus_FlagIcon(int32 EntryPoint);
}; // Size: 0x718

#endif
