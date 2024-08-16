#ifndef UE4SS_SDK_WBP_ServerListEntryColumn_HPP
#define UE4SS_SDK_WBP_ServerListEntryColumn_HPP

class UWBP_ServerListEntryColumn_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class USizeBox* ItemSBox;                                                         // 0x0238 (size: 0x8)
    class UTextBlock* ItemSubText;                                                    // 0x0240 (size: 0x8)
    class UTextBlock* ItemText;                                                       // 0x0248 (size: 0x8)
    FText Text;                                                                       // 0x0250 (size: 0x18)
    float TextMinDesiredWidth;                                                        // 0x0268 (size: 0x4)
    int32 TextMaxStartLength;                                                         // 0x026C (size: 0x4)
    int32 TextMaxEndLength;                                                           // 0x0270 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0274 (size: 0x4)
    FSlateFontInfo TextFont;                                                          // 0x0278 (size: 0x50)
    FText SubText;                                                                    // 0x02C8 (size: 0x18)
    float SubTextMinDesiredWidth;                                                     // 0x02E0 (size: 0x4)
    int32 SubTextMaxStartLength;                                                      // 0x02E4 (size: 0x4)
    int32 SubTextMaxEndLength;                                                        // 0x02E8 (size: 0x4)
    float ItemMinDesiredWidth;                                                        // 0x02EC (size: 0x4)
    float ItemMaxDesiredWidth;                                                        // 0x02F0 (size: 0x4)
    char padding_1[0x4];                                                              // 0x02F4 (size: 0x4)
    FSlateFontInfo SubTextFont;                                                       // 0x02F8 (size: 0x50)

    void SetItemSubText(FText InText);
    void SetItemText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ServerListEntryColumn(int32 EntryPoint);
}; // Size: 0x348

#endif
