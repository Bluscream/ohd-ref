#ifndef UE4SS_SDK_WBP_TextChat_MsgPrefix_HPP
#define UE4SS_SDK_WBP_TextChat_MsgPrefix_HPP

class UWBP_TextChat_MsgPrefix_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* MsgIcon;                                                            // 0x0238 (size: 0x8)

    void SetupMsgPrefix(class UHDTextChatMsgInfo* Msg);
    void ExecuteUbergraph_WBP_TextChat_MsgPrefix(int32 EntryPoint);
}; // Size: 0x240

#endif
