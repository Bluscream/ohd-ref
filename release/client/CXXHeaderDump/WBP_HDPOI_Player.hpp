#ifndef UE4SS_SDK_WBP_HDPOI_Player_HPP
#define UE4SS_SDK_WBP_HDPOI_Player_HPP

class UWBP_HDPOI_Player_C : public UDFPOIWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UImage* PlayerIcon;                                                         // 0x03A8 (size: 0x8)
    class UTextBlock* SquadNumberText;                                                // 0x03B0 (size: 0x8)
    bool POIWidgetInitialized;                                                        // 0x03B8 (size: 0x1)
    char padding_0[0x7];                                                              // 0x03B9 (size: 0x7)
    FSlateColor SelectedTintColor;                                                    // 0x03C0 (size: 0x28)
    FSlateColor DeselectedTintColor;                                                  // 0x03E8 (size: 0x28)

    void ReceivePOISelected();
    void ReceivePOIDeselected();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetIconBrush(const FSlateBrush& NewIconBrush);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_HDPOI_Player(int32 EntryPoint);
}; // Size: 0x410

#endif
