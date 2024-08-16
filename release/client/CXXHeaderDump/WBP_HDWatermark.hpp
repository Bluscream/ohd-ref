#ifndef UE4SS_SDK_WBP_HDWatermark_HPP
#define UE4SS_SDK_WBP_HDWatermark_HPP

class UWBP_HDWatermark_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextBlock* WatermarkTextBlock;                                             // 0x0238 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_HDWatermark(int32 EntryPoint);
}; // Size: 0x240

#endif
