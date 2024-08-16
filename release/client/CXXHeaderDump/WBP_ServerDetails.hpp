#ifndef UE4SS_SDK_WBP_ServerDetails_HPP
#define UE4SS_SDK_WBP_ServerDetails_HPP

class UWBP_ServerDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UCheckBox* FavoriteServerBtn;                                               // 0x0238 (size: 0x8)
    class UButton* JoinServerBtn;                                                     // 0x0240 (size: 0x8)
    class UTextBlock* ServerAddrText;                                                 // 0x0248 (size: 0x8)
    class UTextBlock* ServerDataDescriptionText;                                      // 0x0250 (size: 0x8)
    class UTextBlock* ServerDataNameText;                                             // 0x0258 (size: 0x8)
    class UTextBlock* ServerDataSubtitleText;                                         // 0x0260 (size: 0x8)
    class UTextBlock* ServerGMText;                                                   // 0x0268 (size: 0x8)
    class UImage* ServerMapPreviewImg;                                                // 0x0270 (size: 0x8)
    class UTextBlock* ServerMapText;                                                  // 0x0278 (size: 0x8)
    class UTextBlock* ServerStatusText;                                               // 0x0280 (size: 0x8)
    FWBP_ServerDetails_COnJoinServerBtnClicked OnJoinServerBtnClicked;                // 0x0288 (size: 0x10)
    void OnJoinServerBtnClicked();

    void UpdateServerMetaData(FHDServerInfo& ServerInfo);
    void UpdateServerData(FHDServerInfo& ServerInfo);
    void SetupServerDetails(FHDServerInfo ServerInfo);
    void BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ServerDetails(int32 EntryPoint);
    void OnJoinServerBtnClicked__DelegateSignature();
}; // Size: 0x298

#endif
