#ifndef UE4SS_SDK_WBP_CreditsListHeader_HPP
#define UE4SS_SDK_WBP_CreditsListHeader_HPP

class UWBP_CreditsListHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* DividerLine;                                                        // 0x0238 (size: 0x8)
    class UTextBlock* HeaderText;                                                     // 0x0240 (size: 0x8)
    FFGameCreditsEntry CreditsEntry;                                                  // 0x0248 (size: 0x30)

    void SetCreditsEntry(FFGameCreditsEntry& Entry, FMargin HeaderPadding);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CreditsListHeader(int32 EntryPoint);
}; // Size: 0x278

#endif
