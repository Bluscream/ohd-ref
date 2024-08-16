#ifndef UE4SS_SDK_WBP_OptionMenu_HDCredits_HPP
#define UE4SS_SDK_WBP_OptionMenu_HDCredits_HPP

class UWBP_OptionMenu_HDCredits_C : public UWBP_OptionMenu_Credits_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_OptionMenu_HDCredits(int32 EntryPoint);
}; // Size: 0x270

#endif
