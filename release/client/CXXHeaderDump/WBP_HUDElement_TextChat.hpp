#ifndef UE4SS_SDK_WBP_HUDElement_TextChat_HPP
#define UE4SS_SDK_WBP_HUDElement_TextChat_HPP

class UWBP_HUDElement_TextChat_C : public UHDTextChatWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UWidgetAnimation* DisplayChatInputUI;                                       // 0x02B0 (size: 0x8)
    class UWidgetAnimation* DisplayChatHistoryUI;                                     // 0x02B8 (size: 0x8)
    class UTextBlock* ChatBoxTitle;                                                   // 0x02C0 (size: 0x8)
    class UOverlay* ChatHistory;                                                      // 0x02C8 (size: 0x8)
    class UOverlay* ChatInput;                                                        // 0x02D0 (size: 0x8)
    class UWBP_HUDElement_TextChat_InputHandler_C* ChatInputHandler;                  // 0x02D8 (size: 0x8)
    class UScrollBox* ChatMsgLogSBox;                                                 // 0x02E0 (size: 0x8)
    int32 NumFakeChatMsgs;                                                            // 0x02E8 (size: 0x4)
    int32 MaxChatMsgs;                                                                // 0x02EC (size: 0x4)
    FMargin ChatMsgPadding;                                                           // 0x02F0 (size: 0x10)
    float ChatHistoryFadeOutDelay;                                                    // 0x0300 (size: 0x4)
    bool bChatHistoryVisible;                                                         // 0x0304 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0305 (size: 0x3)
    FTimerHandle ChatHistoryTimeoutHandle;                                            // 0x0308 (size: 0x8)
    bool bWantsScrollToEnd;                                                           // 0x0310 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0311 (size: 0x7)
    class UWidget* ScrollToWidget;                                                    // 0x0318 (size: 0x8)

    void UpdateChatBoxTitleKeyText(FKey& Key);
    void OnPaint(FPaintContext& Context);
    void GetChatHistoryIsVisible(bool& bVisible);
    void AddNewOutputListing(class UHDTextChatMsgInfo* ChatMsg, class UWidget*& Listing);
    void DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg);
    void PreConstruct(bool IsDesignTime);
    void StartTalking(class UDFCommChannel* TalkChannel);
    void StopTalking();
    void BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnInitialized();
    void ChatHistoryTimeout();
    void SetChatHistoryIsVisible(bool bVisible);
    void BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void ExecuteUbergraph_WBP_HUDElement_TextChat(int32 EntryPoint);
}; // Size: 0x320

#endif
