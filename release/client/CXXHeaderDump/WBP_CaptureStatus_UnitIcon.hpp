#ifndef UE4SS_SDK_WBP_CaptureStatus_UnitIcon_HPP
#define UE4SS_SDK_WBP_CaptureStatus_UnitIcon_HPP

class UWBP_CaptureStatus_UnitIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* UnitIcon;                                                           // 0x0238 (size: 0x8)
    TEnumAsByte<ECaptureUnitType::Type> UnitType;                                     // 0x0240 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0241 (size: 0x7)
    FSlateBrush UnoccupiedUnitImage;                                                  // 0x0248 (size: 0x88)
    FSlateBrush FriendlyUnitImage;                                                    // 0x02D0 (size: 0x88)
    FSlateBrush EnemyUnitImage;                                                       // 0x0358 (size: 0x88)
    FSlateBrush MultipleUnitImage;                                                    // 0x03E0 (size: 0x88)
    bool bUseFriendlyUnitColor;                                                       // 0x0468 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0469 (size: 0x3)
    FLinearColor UnoccupiedUnitColor;                                                 // 0x046C (size: 0x10)
    FLinearColor FriendlyUnitColor;                                                   // 0x047C (size: 0x10)
    FLinearColor EnemyUnitColor;                                                      // 0x048C (size: 0x10)
    bool bUnitMultiple;                                                               // 0x049C (size: 0x1)
    bool bIsDesignTime;                                                               // 0x049D (size: 0x1)
    char padding_2[0x2];                                                              // 0x049E (size: 0x2)
    FLinearColor LocalUnitColorToUse;                                                 // 0x04A0 (size: 0x10)

    void SetIsMultipleUnit(bool bNewUnitMultiple);
    void SetUnitType(TEnumAsByte<ECaptureUnitType::Type> NewUnitType);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CaptureStatus_UnitIcon(int32 EntryPoint);
}; // Size: 0x4B0

#endif
