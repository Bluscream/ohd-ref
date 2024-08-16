#ifndef UE4SS_SDK_WBP_HUDElement_TextChat_InputHandler_HPP
#define UE4SS_SDK_WBP_HUDElement_TextChat_InputHandler_HPP

class UWBP_HUDElement_TextChat_InputHandler_C : public UHDTextChatInputWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UTextBlock* ChannelNameText;                                                // 0x0248 (size: 0x8)
    class UEditableTextBox* MsgInputTextBox;                                          // 0x0250 (size: 0x8)
    class UDFCommChannel* CurrentChannel;                                             // 0x0258 (size: 0x8)
    FWBP_HUDElement_TextChat_InputHandler_COnInputTextCommitted OnInputTextCommitted; // 0x0260 (size: 0x10)
    void OnInputTextCommitted(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);

    void StartTalking(class UDFCommChannel* NewTalkChannel);
    void StopTalking(class UDFCommChannel* CurrentChannel);
    void InputTextEntered(FText Text);
    void BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler(int32 EntryPoint);
    void OnInputTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
}; // Size: 0x270

#endif
