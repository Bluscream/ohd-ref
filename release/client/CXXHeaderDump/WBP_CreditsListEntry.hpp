#ifndef UE4SS_SDK_WBP_CreditsListEntry_HPP
#define UE4SS_SDK_WBP_CreditsListEntry_HPP

class UWBP_CreditsListEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UTextBlock* EntryBodyText;                                                  // 0x0238 (size: 0x8)
    class UWBP_CreditsListHeader_C* EntryHeader;                                      // 0x0240 (size: 0x8)
    FFGameCreditsEntry Header;                                                        // 0x0248 (size: 0x30)
    FMargin HeaderPadding;                                                            // 0x0278 (size: 0x10)
    TArray<FFGameCreditsEntry> BodyEntries;                                           // 0x0288 (size: 0x10)

    void CombineBodyText(FString& BodyCombinedStr);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CreditsListEntry(int32 EntryPoint);
}; // Size: 0x298

#endif
