#ifndef UE4SS_SDK_WBP_HDLoadingScreenBase_HPP
#define UE4SS_SDK_WBP_HDLoadingScreenBase_HPP

class UWBP_HDLoadingScreenBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UImage* BackgroundImage_Map;                                                // 0x0238 (size: 0x8)
    class UTextBlock* BluforFactionName;                                              // 0x0240 (size: 0x8)
    class UOverlay* BluforTeamInfo;                                                   // 0x0248 (size: 0x8)
    class UTextBlock* BluforTeamReinforcementText;                                    // 0x0250 (size: 0x8)
    class UTextBlock* DeploymentText;                                                 // 0x0258 (size: 0x8)
    class UThrobber* DeploymentThrobber;                                              // 0x0260 (size: 0x8)
    class UOverlay* GameModeHeader;                                                   // 0x0268 (size: 0x8)
    class UTextBlock* GameModeNameText;                                               // 0x0270 (size: 0x8)
    class UTextBlock* MapNameText;                                                    // 0x0278 (size: 0x8)
    class UOverlay* MapOverview;                                                      // 0x0280 (size: 0x8)
    class UImage* MinimapImage;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* OpforFactionName;                                               // 0x0290 (size: 0x8)
    class UOverlay* OpforTeamInfo;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* OpforTeamReinforcementText;                                     // 0x02A0 (size: 0x8)
    TArray<TSoftObjectPtr<UTexture2D>> MapBgImages;                                   // 0x02A8 (size: 0x10)
    FSlateBrush MapBgBrush;                                                           // 0x02B8 (size: 0x88)
    bool bEnableMapOverviewUI;                                                        // 0x0340 (size: 0x1)
    bool bEnableTeamInfoUI;                                                           // 0x0341 (size: 0x1)

    void SetMapBgImage(TSoftObjectPtr<UTexture2D> InBgImage);
    void SetOpforStartingTicketCount(int32 TicketCount);
    void SetBluforStartingTicketCount(int32 TicketCount);
    void SetMapElementVisibility(ESlateVisibility NewVisibility);
    void SetLoadingScreenDescription(const FLoadingScreenDescription& Description);
    void SetLevelLoadData(const FLoadScreenLevelData& LevelData);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_HDLoadingScreenBase(int32 EntryPoint);
}; // Size: 0x342

#endif
