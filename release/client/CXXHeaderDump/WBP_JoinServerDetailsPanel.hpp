#ifndef UE4SS_SDK_WBP_JoinServerDetailsPanel_HPP
#define UE4SS_SDK_WBP_JoinServerDetailsPanel_HPP

class UWBP_JoinServerDetailsPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_ServerListModifierSettings_AdvancedServerData_C* AdvancedServerData;   // 0x0238 (size: 0x8)
    class UWBP_ServerListModifierSettings_BasicServerData_C* BasicServerData;         // 0x0240 (size: 0x8)
    class UButton* JoinGameBtn;                                                       // 0x0248 (size: 0x8)
    class UImage* MapPreviewImg;                                                      // 0x0250 (size: 0x8)
    FWBP_JoinServerDetailsPanel_COnJoinServerBtnClicked OnJoinServerBtnClicked;       // 0x0258 (size: 0x10)
    void OnJoinServerBtnClicked();
    class UTexture2D* PlaceholderMapPreviewImg;                                       // 0x0268 (size: 0x8)

    void SetMapPreviewImage(class UTexture2D* NewImg);
    void HideServerDetails();
    void ShowServerDetails();
    void UpdateServerMetaData(FHDServerInfo& ServerData);
    void UpdateServerData(FHDServerInfo& ServerData);
    void SetupServerDetails(FHDServerInfo ServerInfo);
    void BndEvt__JoinGameBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnInitialized();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_JoinServerDetailsPanel(int32 EntryPoint);
    void OnJoinServerBtnClicked__DelegateSignature();
}; // Size: 0x270

#endif
