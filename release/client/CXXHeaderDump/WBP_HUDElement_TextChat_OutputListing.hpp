#ifndef UE4SS_SDK_WBP_HUDElement_TextChat_OutputListing_HPP
#define UE4SS_SDK_WBP_HUDElement_TextChat_OutputListing_HPP

class UWBP_HUDElement_TextChat_OutputListing_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWidgetAnimation* FadeOutAnim;                                              // 0x0238 (size: 0x8)
    class URichTextBlock* MsgContentText;                                             // 0x0240 (size: 0x8)
    class UWBP_TextChat_MsgPrefix_C* MsgPrefix;                                       // 0x0248 (size: 0x8)
    class UHDTextChatMsgInfo* ChatMsg;                                                // 0x0250 (size: 0x8)
    float MsgLifeTime;                                                                // 0x0258 (size: 0x4)
    char padding_0[0x4];                                                              // 0x025C (size: 0x4)
    FSlateColor EnemyMsgColor;                                                        // 0x0260 (size: 0x28)
    FSlateColor FriendlyMsgColor;                                                     // 0x0288 (size: 0x28)

    void Finished_54BC5F4D4E481384960AD59474319862();
    void LifetimeExpired();
    void OnInitialized();
    void SetupListing(class UHDTextChatMsgInfo* Msg);
    void ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing(int32 EntryPoint);
}; // Size: 0x2B0

#endif
