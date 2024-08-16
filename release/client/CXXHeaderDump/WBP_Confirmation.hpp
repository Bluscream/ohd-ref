#ifndef UE4SS_SDK_WBP_Confirmation_HPP
#define UE4SS_SDK_WBP_Confirmation_HPP

class UWBP_Confirmation_C : public UHDConfirmationDialog
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class URichTextBlock* DescriptionRichText;                                        // 0x0258 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0260 (size: 0x8)

    void UpdateDialogText(const FText& TitleText, const FText& DescriptionText);
    void ExecuteUbergraph_WBP_Confirmation(int32 EntryPoint);
}; // Size: 0x268

#endif
