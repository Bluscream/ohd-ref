#ifndef UE4SS_SDK_WBP_EquipmentSelect_EqBox_HPP
#define UE4SS_SDK_WBP_EquipmentSelect_EqBox_HPP

class UWBP_EquipmentSelect_EqBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextBlock* EquipmentNumber;                                                // 0x0238 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0240 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0248 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0250 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0258 (size: 0x8)
    class UImage* Item;                                                               // 0x0260 (size: 0x8)
    class UOverlay* RestrictedOverlay;                                                // 0x0268 (size: 0x8)
    class UImage* Selected;                                                           // 0x0270 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0278 (size: 0x8)
    int32 SlotNum;                                                                    // 0x0280 (size: 0x4)
    bool bEnabled;                                                                    // 0x0284 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0285 (size: 0x3)
    class AHDBaseWeapon* EqpItem;                                                     // 0x0288 (size: 0x8)
    bool bHighlighted;                                                                // 0x0290 (size: 0x1)

    void SetEnabled(bool bEnabled);
    void IsHighlighted(bool& bHighlight);
    void SetHighlight(bool bHighlighted);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_EquipmentSelect_EqBox(int32 EntryPoint);
}; // Size: 0x291

#endif
