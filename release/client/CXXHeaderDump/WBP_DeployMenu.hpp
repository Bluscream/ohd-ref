#ifndef UE4SS_SDK_WBP_DeployMenu_HPP
#define UE4SS_SDK_WBP_DeployMenu_HPP

class UWBP_DeployMenu_C : public UDeployMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UImage* BgImg;                                                              // 0x0240 (size: 0x8)
    class UWBP_DeployMenu_ClassSelectionPanel_C* ClassSelectionPanel;                 // 0x0248 (size: 0x8)
    class UWBP_DeployMenu_DeployButton_C* DeployBtn;                                  // 0x0250 (size: 0x8)
    class UTextBlock* MapNameText;                                                    // 0x0258 (size: 0x8)
    class UTextBlock* MatchTimeText;                                                  // 0x0260 (size: 0x8)
    class UWBP_DeployMenu_SpawnMapView_C* SpawnMapView;                               // 0x0268 (size: 0x8)
    class UWBP_DeployMenu_SquadSelectionPanel_C* SquadSelectionPanel;                 // 0x0270 (size: 0x8)
    class UButton* SuicideBtn;                                                        // 0x0278 (size: 0x8)
    class UImage* Team0CheckmarkImage;                                                // 0x0280 (size: 0x8)
    class UImage* Team0CheckmarkImage_Vert;                                           // 0x0288 (size: 0x8)
    class UImage* Team0SelectionOverlay;                                              // 0x0290 (size: 0x8)
    class UImage* Team0SelectionOverlay_Vert;                                         // 0x0298 (size: 0x8)
    class UTextBlock* Team0TicketNumText;                                             // 0x02A0 (size: 0x8)
    class UTextBlock* Team0TicketNumText_Vert;                                        // 0x02A8 (size: 0x8)
    class UImage* Team1CheckmarkImage;                                                // 0x02B0 (size: 0x8)
    class UImage* Team1CheckmarkImage_Vert;                                           // 0x02B8 (size: 0x8)
    class UImage* Team1SelectionOverlay;                                              // 0x02C0 (size: 0x8)
    class UImage* Team1SelectionOverlay_Vert;                                         // 0x02C8 (size: 0x8)
    class UTextBlock* Team1TicketNumText;                                             // 0x02D0 (size: 0x8)
    class UTextBlock* Team1TicketNumText_Vert;                                        // 0x02D8 (size: 0x8)
    class UButton* TeamSwitch0Btn;                                                    // 0x02E0 (size: 0x8)
    class UButton* TeamSwitch0Btn_Vert;                                               // 0x02E8 (size: 0x8)
    class UTextBlock* TeamSwitch0BtnText;                                             // 0x02F0 (size: 0x8)
    class UTextBlock* TeamSwitch0BtnText_Vert;                                        // 0x02F8 (size: 0x8)
    class UButton* TeamSwitch1Btn;                                                    // 0x0300 (size: 0x8)
    class UButton* TeamSwitch1Btn_Vert;                                               // 0x0308 (size: 0x8)
    class UTextBlock* TeamSwitch1BtnText;                                             // 0x0310 (size: 0x8)
    class UTextBlock* TeamSwitch1BtnText_Vert;                                        // 0x0318 (size: 0x8)
    class UHorizontalBox* TeamSwitchHBox;                                             // 0x0320 (size: 0x8)
    class UVerticalBox* TeamSwitchVBox;                                               // 0x0328 (size: 0x8)
    bool bBlockAllOtherInput;                                                         // 0x0330 (size: 0x1)
    bool bMenuInitialized;                                                            // 0x0331 (size: 0x1)
    char padding_0[0x6];                                                              // 0x0332 (size: 0x6)
    FWBP_DeployMenu_COnPreloadFinished OnPreloadFinished;                             // 0x0338 (size: 0x10)
    void OnPreloadFinished();
    bool bDonePreloading;                                                             // 0x0348 (size: 0x1)
    bool bSpawnPointSelected;                                                         // 0x0349 (size: 0x1)
    bool bDeploying;                                                                  // 0x034A (size: 0x1)
    bool bClearPOISelectionOnDeploy;                                                  // 0x034B (size: 0x1)
    char padding_1[0x4];                                                              // 0x034C (size: 0x4)
    FButtonStyle Team0Selected;                                                       // 0x0350 (size: 0x278)
    FButtonStyle Team0Deselected;                                                     // 0x05C8 (size: 0x278)
    FButtonStyle Team1Selected;                                                       // 0x0840 (size: 0x278)
    FButtonStyle Team1Deselected;                                                     // 0x0AB8 (size: 0x278)
    FSlateBrush Team0SelectedOverlayBrush;                                            // 0x0D30 (size: 0x88)
    FSlateBrush Team1SelectedOverlayBrush;                                            // 0x0DB8 (size: 0x88)
    FSlateBrush Team0DeselectedOverlayBrush;                                          // 0x0E40 (size: 0x88)
    FSlateBrush Team1DeselectedOverlayBrush;                                          // 0x0EC8 (size: 0x88)
    bool bUseVerticalTeamLayout;                                                      // 0x0F50 (size: 0x1)
    char padding_2[0x7];                                                              // 0x0F51 (size: 0x7)
    class UImage* Team1SelectionOverlayToUse;                                         // 0x0F58 (size: 0x8)
    class UImage* Team1CheckmarkImageToUse;                                           // 0x0F60 (size: 0x8)
    class UTextBlock* Team1TicketNumTextToUse;                                        // 0x0F68 (size: 0x8)
    bool bMenuPreInitialized;                                                         // 0x0F70 (size: 0x1)
    char padding_3[0x7];                                                              // 0x0F71 (size: 0x7)
    class UImage* Team0SelectionOverlayToUse;                                         // 0x0F78 (size: 0x8)
    class UImage* Team0CheckmarkImageToUse;                                           // 0x0F80 (size: 0x8)
    class UTextBlock* Team0TicketNumTextToUse;                                        // 0x0F88 (size: 0x8)
    class UTextBlock* Team0SwitchBtnTextToUse;                                        // 0x0F90 (size: 0x8)
    class UTextBlock* Team1SwitchBtnTextToUse;                                        // 0x0F98 (size: 0x8)
    class UButton* Team1SwitchBtnToUse;                                               // 0x0FA0 (size: 0x8)
    class UButton* Team0SwitchBtnToUse;                                               // 0x0FA8 (size: 0x8)
    class AHDTeamState* BluforTeamState;                                              // 0x0FB0 (size: 0x8)
    class AHDTeamState* OpforTeamState;                                               // 0x0FB8 (size: 0x8)
    class UBP_HDFactionInfoBase_C* BluforFactionInfo;                                 // 0x0FC0 (size: 0x8)
    class UBP_HDFactionInfoBase_C* OpforFactionInfo;                                  // 0x0FC8 (size: 0x8)

    void OnPaint(FPaintContext& Context);
    void UpdateMatchTime();
    void UpdateTeamLayoutElements(bool bUseVerticalLayout, bool bUpdateTeam0);
    void SetTeamSwitchLayout(bool bUseVerticalLayout);
    void InitTeamLayout();
    void InitSquadSelectionUI();
    void UpdateTicketCounts();
    void UpdateTeamSwitchUISettings(EHDTeam TeamToUpdate);
    void UpdateTeamSwitchVisuals(EHDTeam TeamToUpdate);
    void InitClassSelectionUI();
    void DeselectCurrentPOI();
    void DeployAtSelectedSpawnPoint();
    void UpdateDeployBtnState();
    void CloseDeployMenu(bool bForce);
    void PreloadContent();
    void UpdateSuicideBtnState();
    void CleanupOwningPlayerDelegates();
    void InitOwningPlayerDelegates();
    void InitTeamUI();
    void InitMapUI();
    void RequestSuicide();
    void UpdateTeamSwitchBtnState(EHDTeam NewTeam);
    void TeamSwitch(EHDTeam NewTeam);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void OnDeployMenuInputToggle();
    void BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void OnOwningCharDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, const class APawn* InstigatingPawn, const class AActor* DamageCauser);
    void OnUnpossessedPawn(class APawn* UnpossessedPawn);
    void OnPossessedPawn(class APawn* PossessedPawn);
    void OnPlayerTeamUpdated(uint8 PrevTeam, uint8 NewTeam);
    void BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature();
    void BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
    void BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature();
    void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bCloseBtn);
    void OnPlayerSpawnTimerElapsed();
    void OnRepPlayerStatePC();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void On Team 1 Switch Btn Clicked();
    void On Team 0 Switch Btn Clicked();
    void UpdateTeamStateRefs();
    void OnBluforPostInitTeam(class ADFTeamState* TeamState);
    void OnOpforPostInitTeam(class ADFTeamState* TeamState);
    void OnPlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    void ExecuteUbergraph_WBP_DeployMenu(int32 EntryPoint);
    void OnPreloadFinished__DelegateSignature();
}; // Size: 0xFD0

#endif
