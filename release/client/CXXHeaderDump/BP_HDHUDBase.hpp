#ifndef UE4SS_SDK_BP_HDHUDBase_HPP
#define UE4SS_SDK_BP_HDHUDBase_HPP

class ABP_HDHUDBase_C : public AHDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    bool bDrawCrosshair;                                                              // 0x0320 (size: 0x1)
    bool bShowCompass;                                                                // 0x0321 (size: 0x1)
    bool bShowPlayerStatus;                                                           // 0x0322 (size: 0x1)
    bool bShowWeaponStatus;                                                           // 0x0323 (size: 0x1)
    bool bShowCaptureStatus;                                                          // 0x0324 (size: 0x1)
    bool bShowEquipmentSelect;                                                        // 0x0325 (size: 0x1)
    bool bShowWatermark;                                                              // 0x0326 (size: 0x1)
    bool bInitialized;                                                                // 0x0327 (size: 0x1)
    float CrosshairWidth;                                                             // 0x0328 (size: 0x4)
    float CrosshairHeight;                                                            // 0x032C (size: 0x4)
    TSubclassOf<class UWBP_HUD_C> HUDContainerUWClass;                                // 0x0330 (size: 0x8)
    ESlateVisibility HUDContainerUWVisibilityOverride;                                // 0x0338 (size: 0x1)
    bool bHUDWidgetShown;                                                             // 0x0339 (size: 0x1)
    char padding_0[0x6];                                                              // 0x033A (size: 0x6)
    class APawn* LastOwningPawn;                                                      // 0x0340 (size: 0x8)
    class ABP_HDPlayerControllerBase_C* OwningHDPC;                                   // 0x0348 (size: 0x8)
    class ABP_HDPlayerCharacterBase_C* OwningHDPawn;                                  // 0x0350 (size: 0x8)
    class ADFBaseItem* OwningPawnEquippedItem;                                        // 0x0358 (size: 0x8)
    bool bDrawNametags;                                                               // 0x0360 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0361 (size: 0x3)
    float DrawNametagDistanceMin;                                                     // 0x0364 (size: 0x4)
    float DrawNametagDistanceMax;                                                     // 0x0368 (size: 0x4)
    char padding_2[0x4];                                                              // 0x036C (size: 0x4)
    class UWBP_HUD_C* HUDContainerUW;                                                 // 0x0370 (size: 0x8)
    float DrawDotsDistanceMin;                                                        // 0x0378 (size: 0x4)
    float DrawDotsDistanceMax;                                                        // 0x037C (size: 0x4)
    class UFont* NametagFont;                                                         // 0x0380 (size: 0x8)
    float NametagTextVerticalOffset;                                                  // 0x0388 (size: 0x4)
    int32 NametagTextLengthMax;                                                       // 0x038C (size: 0x4)
    bool bNametagUseTextScaling;                                                      // 0x0390 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0391 (size: 0x3)
    float NametagTextScaleMin;                                                        // 0x0394 (size: 0x4)
    float NametagTextScaleMax;                                                        // 0x0398 (size: 0x4)
    bool bEnableNametagTextFade;                                                      // 0x039C (size: 0x1)
    char padding_4[0x3];                                                              // 0x039D (size: 0x3)
    float NametagTextFadeRangeNear;                                                   // 0x03A0 (size: 0x4)
    float NametagDotVerticalOffset;                                                   // 0x03A4 (size: 0x4)
    bool bNametagUseDotSymbolScaling;                                                 // 0x03A8 (size: 0x1)
    char padding_5[0x3];                                                              // 0x03A9 (size: 0x3)
    float NametagDotScaleMin;                                                         // 0x03AC (size: 0x4)
    float NametagDotScaleMax;                                                         // 0x03B0 (size: 0x4)
    bool bEnableNametagDotFade;                                                       // 0x03B4 (size: 0x1)
    char padding_6[0x3];                                                              // 0x03B5 (size: 0x3)
    float NametagDotFadeRangeNear;                                                    // 0x03B8 (size: 0x4)
    float NametagDotFadeRangeFar;                                                     // 0x03BC (size: 0x4)
    FLinearColor NametagTextColorSquad;                                               // 0x03C0 (size: 0x10)
    class UTexture2D* NametagDotSymbolSquad;                                          // 0x03D0 (size: 0x8)
    FLinearColor NametagDotSymbolSquadColor;                                          // 0x03D8 (size: 0x10)
    float NametagDotSymbolSquadWidth;                                                 // 0x03E8 (size: 0x4)
    float NametagDotSymbolSquadHeight;                                                // 0x03EC (size: 0x4)
    FLinearColor NametagTextColorOther;                                               // 0x03F0 (size: 0x10)
    class UTexture2D* NametagDotSymbolOther;                                          // 0x0400 (size: 0x8)
    FLinearColor NametagDotSymbolOtherColor;                                          // 0x0408 (size: 0x10)
    float NametagDotSymbolOtherWidth;                                                 // 0x0418 (size: 0x4)
    float NametagDotSymbolOtherHeight;                                                // 0x041C (size: 0x4)
    FLinearColor NametagTextColorDefault;                                             // 0x0420 (size: 0x10)
    class UTexture2D* NametagDotSymbolDefault;                                        // 0x0430 (size: 0x8)
    FLinearColor NametagDotSymbolDefaultColor;                                        // 0x0438 (size: 0x10)
    float NametagDotSymbolDefaultWidth;                                               // 0x0448 (size: 0x4)
    float NametagDotSymbolDefaultHeight;                                              // 0x044C (size: 0x4)
    bool bNametagUseLineTraces;                                                       // 0x0450 (size: 0x1)
    char padding_7[0x3];                                                              // 0x0451 (size: 0x3)
    FVector2D NametagReferenceResolution;                                             // 0x0454 (size: 0x8)
    float NametagLineTraceOffsetTop;                                                  // 0x045C (size: 0x4)
    bool bNametagUseAdditionalLineTraces;                                             // 0x0460 (size: 0x1)
    char padding_8[0x3];                                                              // 0x0461 (size: 0x3)
    float NametagAdditionalLineTraceOffsetSides;                                      // 0x0464 (size: 0x4)
    float NametagTextFadeRangeFar;                                                    // 0x0468 (size: 0x4)
    bool bEnableNametagTextFrame;                                                     // 0x046C (size: 0x1)
    char padding_9[0x3];                                                              // 0x046D (size: 0x3)
    float NametagTextFrameHorizontalMargin;                                           // 0x0470 (size: 0x4)
    float NametagTextFrameHorizontalFade;                                             // 0x0474 (size: 0x4)
    float NametagTextFrameVerticalMargin;                                             // 0x0478 (size: 0x4)
    float NametagTextFrameVerticalFade;                                               // 0x047C (size: 0x4)
    bool bEnableNametagDotFrame;                                                      // 0x0480 (size: 0x1)
    char padding_10[0x3];                                                             // 0x0481 (size: 0x3)
    float NametagDotFrameHorizontalMargin;                                            // 0x0484 (size: 0x4)
    float NametagDotFrameHorizontalFade;                                              // 0x0488 (size: 0x4)
    float NametagDotFrameVerticalMargin;                                              // 0x048C (size: 0x4)
    float NametagDotFrameVerticalFade;                                                // 0x0490 (size: 0x4)
    bool bVoteListenersInitialized;                                                   // 0x0494 (size: 0x1)
    char padding_11[0x3];                                                             // 0x0495 (size: 0x3)
    FDFActiveVoteInfo ActiveVoteInfo;                                                 // 0x0498 (size: 0x48)
    EDFVoteStatus LastVoteStatus;                                                     // 0x04E0 (size: 0x1)
    char padding_12[0x3];                                                             // 0x04E1 (size: 0x3)
    int32 LastYesVoteCount;                                                           // 0x04E4 (size: 0x4)
    int32 LastNoVoteCount;                                                            // 0x04E8 (size: 0x4)

    void IsValidVoteInfo(FDFActiveVoteInfo& VoteInfo, bool& bValid);
    void AddCustomNotification(class UUserWidget* Widget);
    void AddBasicNotification(FFUINotificationInfo Info);
    bool NametagsSingleLinetrace(const FVector Start, const FVector End, class ABP_HDPlayerCharacterBase_C* OtherPlayer);
    void CanDrawNametag(class ABP_HDPlayerCharacterBase_C* InOtherPawn, float InVerticalOffset, FVector InOwnerCameraLocation, bool& bCanDrawNametag, FVector2D& NametagScreenPosition);
    void DrawNametags(int32 SizeX, int32 SizeY);
    void DrawCrosshair(int32 SizeX, int32 SizeY);
    void IsTextChatHistoryVisible(bool& bVisible);
    void SetTextChatHistoryVisibility(bool bVisible);
    void SetMedicHealingEffectVisibility(bool bVisible);
    void SetAmmoResupplyEffectVisibility(bool bVisible);
    void ResetPlayerStatusEffectsUI();
    void ClearOwningPawnReferences();
    void ForceUpdateOwningPawnReferences();
    void ClearAllOwningPlayerReferences();
    void ForceUpdateAllOwningPlayerReferences();
    void CleanupDelegatesForHDPawn(class ABP_HDPlayerCharacterBase_C* PlayerChar);
    void InitOwningHDPawnDelegates();
    void CleanupOwningHDPCDelegates();
    void InitOwningHDPCDelegates();
    void UpdateHUDVisibility(bool bDestroyOnHide);
    void HideHUDWidget(bool bDestroyWidgetOnHide);
    void ShowHUDWidget();
    void EquipmentSelectEquippedItem(class UHDKit* CurrentLoadout, class AHDBaseWeapon* EquippedItem);
    void EquipmentSelectItemBySlotNum(int32 SlotNum, bool& bOutNewSelection);
    void EquipmentGetSelectedItemSlotNum(int32& OutSlotNum, bool& bFoundItem);
    void EquipmentGetSelectedItem(class AHDBaseWeapon*& OutItemToEquip, bool& bFoundItem);
    void EquipmentAddItemsFromLoadout(class UHDKit* NewLoadout, class UDFInventoryComponent* PlayerInventory, class ADFBaseWeapon* EquippedItem);
    void EquipmentSelectItem(int32 ItemIndex);
    void EquipmentSelectPrevItem();
    void EquipmentSelectNextItem();
    void ToggleWeaponStatusUI(bool bShown);
    void ToggleEquipmentUI(bool bShown);
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void OwningPawnUpdated(class APawn* NewOwningPawn, class APawn* PrevOwningPawn);
    void OwningPawnEquipmentItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
    void OwningPlayerPossessPawn(class APawn* Pawn);
    void OwningPlayerUnpossessPawn(class APawn* Pawn);
    void TeamsUpdated(class AGameStateBase* GameState);
    void PlayerVoteStateUpdated(class UDFVotingComponent* SourceVotingComponent);
    void VoteStarted();
    void VoteReset();
    void VoteEnded();
    void VoteCountUpdated();
    void PlayersUpdated(class AGameStateBase* GameState);
    void ExecuteUbergraph_BP_HDHUDBase(int32 EntryPoint);
}; // Size: 0x4EC

#endif
