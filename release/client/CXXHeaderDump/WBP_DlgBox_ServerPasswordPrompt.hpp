#ifndef UE4SS_SDK_WBP_DlgBox_ServerPasswordPrompt_HPP
#define UE4SS_SDK_WBP_DlgBox_ServerPasswordPrompt_HPP

class UWBP_DlgBox_ServerPasswordPrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UEditableTextBox* PromptTextBox;                                            // 0x0238 (size: 0x8)
    FWBP_DlgBox_ServerPasswordPrompt_COnConfirmInput OnConfirmInput;                  // 0x0240 (size: 0x10)
    void OnConfirmInput(FText InputText);
    FWBP_DlgBox_ServerPasswordPrompt_COnCancelInput OnCancelInput;                    // 0x0250 (size: 0x10)
    void OnCancelInput();

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void DummyInput();
    void ConfirmInput();
    void CancelInput();
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_DlgBox_ServerPasswordPrompt(int32 EntryPoint);
    void OnCancelInput__DelegateSignature();
    void OnConfirmInput__DelegateSignature(FText InputText);
}; // Size: 0x260

#endif
