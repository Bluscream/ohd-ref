#ifndef UE4SS_SDK_WBP_HDMenuButton_ModalDialog_HPP
#define UE4SS_SDK_WBP_HDMenuButton_ModalDialog_HPP

class UWBP_HDMenuButton_ModalDialog_C : public UHDButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UTextBlock* ButtonTextBlock;                                                // 0x0270 (size: 0x8)

    void UpdateButtonText(const FText& InText);
    void ExecuteUbergraph_WBP_HDMenuButton_ModalDialog(int32 EntryPoint);
}; // Size: 0x278

#endif
