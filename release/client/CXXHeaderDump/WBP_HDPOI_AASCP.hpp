#ifndef UE4SS_SDK_WBP_HDPOI_AASCP_HPP
#define UE4SS_SDK_WBP_HDPOI_AASCP_HPP

class UWBP_HDPOI_AASCP_C : public UDFPOIWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UImage* FlagIcon;                                                           // 0x03A8 (size: 0x8)
    class UImage* FlagPoleIcon;                                                       // 0x03B0 (size: 0x8)
    class UOverlay* IconOverlay;                                                      // 0x03B8 (size: 0x8)
    class UImage* ObjIcon;                                                            // 0x03C0 (size: 0x8)
    class UImage* RecaptureIcon;                                                      // 0x03C8 (size: 0x8)
    class UImage* SpawnPointIcon;                                                     // 0x03D0 (size: 0x8)
    bool POIWidgetInitialized;                                                        // 0x03D8 (size: 0x1)
    bool bClearSelectionOnWidgetDestruct;                                             // 0x03D9 (size: 0x1)
    char padding_0[0x6];                                                              // 0x03DA (size: 0x6)
    class ABP_HDPlayerControllerBase_C* OwningPC;                                     // 0x03E0 (size: 0x8)
    class AHDPlayerState* OwningPlayerState;                                          // 0x03E8 (size: 0x8)
    class ABP_HDCapturePointBase_C* POIActorCP;                                       // 0x03F0 (size: 0x8)
    TSubclassOf<class UWBP_SpawnMap_POISelectionIndicator_C> POISelectionIndicatorClass; // 0x03F8 (size: 0x8)
    class UWBP_SpawnMap_POISelectionIndicator_C* POISelectionIndicator;               // 0x0400 (size: 0x8)
    FSlateBrush IndicatorSelectedBrush;                                               // 0x0408 (size: 0x88)
    FSlateBrush IndicatorDeselectedBrush;                                             // 0x0490 (size: 0x88)
    FSlateBrush FlagIconBrush;                                                        // 0x0518 (size: 0x88)
    FSlateBrush ObjIconBrush;                                                         // 0x05A0 (size: 0x88)
    class UTexture2D* FlagTexBlufor;                                                  // 0x0628 (size: 0x8)
    class UTexture2D* FlagTexOpfor;                                                   // 0x0630 (size: 0x8)
    class UTexture2D* FlagTexNeutral;                                                 // 0x0638 (size: 0x8)
    TSoftObjectPtr<UTexture2D> NeutralFlagTex;                                        // 0x0640 (size: 0x28)
    class UWBP_DeployMenu_C* OwningDeployMenu;                                        // 0x0668 (size: 0x8)
    class UBP_HDFactionInfoBase_C* BluforFactionInfo;                                 // 0x0670 (size: 0x8)
    class UBP_HDFactionInfoBase_C* OpforFactionInfo;                                  // 0x0678 (size: 0x8)
    FMargin IndicatorPadding;                                                         // 0x0680 (size: 0x10)
    FVector2D OffensiveObjIconPos;                                                    // 0x0690 (size: 0x8)
    FVector2D DefensiveObjIconPos;                                                    // 0x0698 (size: 0x8)
    EHDControlPointObjectiveType PreviewObjectiveType;                                // 0x06A0 (size: 0x1)
    bool bPreviewRestricted;                                                          // 0x06A1 (size: 0x1)
    bool bPreviewSpawnable;                                                           // 0x06A2 (size: 0x1)

    void GetObjPosByType(EHDControlPointObjectiveType ObjType, FVector2D& ObjPos);
    void UpdateSpawnPointSymbol(bool bSpawnable);
    void UpdateRestrictedSymbol(bool bRestricted);
    void UpdateObjIconBrush(FSlateBrush& NewObjBrush);
    void UpdateFlagIconBrush(FSlateBrush& NewFlagBrush);
    void GetObjImageByType(EHDControlPointObjectiveType ObjType, class UObject*& ObjImg);
    void SetBrushImageInPlace(FSlateBrush& BrushToModify, class UObject* NewBrushImg);
    void GetFlagImageByTeam(EHDTeam Team, class UObject*& TeamFlagImg);
    void UpdateObjectiveSymbol(EHDControlPointObjectiveType ObjectiveType);
    void UpdateFlagSymbol(EHDTeam OwningTeam);
    void UpdateToolTipText(FText TextToUse);
    FSlateBrush GetIconBrush();
    void GetOwningPlayerTeam(EHDTeam& PlayerTeam);
    void UpdateWidgetVisuals();
    void HandlePlayerOrCPTeamUpdate();
    void InitControlPointListeners();
    void InitOwningPlayerListeners();
    bool ReceiveCanSelect();
    void SetOwningPlayerRefs();
    void OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2(class UObject* Loaded);
    void OnLoaded_DA523F1F44AD85D87E676986278348D2(class UObject* Loaded);
    void OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7(class UObject* Loaded);
    void Destruct();
    void ReceivePOIInitialized();
    void SetIconBrush(const FSlateBrush& NewIconBrush);
    void ReceivePOISelected();
    void ReceivePOIDeselected();
    void Construct();
    void OnOwningPlayerTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    void OnOwningPlayerRepPlayerState();
    void OnControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
    void OnControlPointCaptureStatusUpdated(class AHDBaseCapturePoint* ControlPoint);
    void LoadFlagImgs();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_HDPOI_AASCP(int32 EntryPoint);
}; // Size: 0x6A3

#endif
