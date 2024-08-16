#ifndef UE4SS_SDK_WBP_OptionMenu_Credits_HPP
#define UE4SS_SDK_WBP_OptionMenu_Credits_HPP

class UWBP_OptionMenu_Credits_C : public UDFBaseMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UScrollBox* CreditsScrollBox;                                               // 0x0240 (size: 0x8)
    class UDataTable* CreditsEntriesTable;                                            // 0x0248 (size: 0x8)
    FMargin EntryPadding;                                                             // 0x0250 (size: 0x10)
    float AutoScrollSpeed;                                                            // 0x0260 (size: 0x4)

    void GetCreditEntriesForHeader(FName HeaderRowName, TArray<FFGameCreditsEntry>& CreditEntries);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_OptionMenu_Credits(int32 EntryPoint);
}; // Size: 0x264

#endif
