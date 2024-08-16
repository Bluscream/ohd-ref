#ifndef UE4SS_SDK_WBP_DeployMenu_SpawnMinimap_HPP
#define UE4SS_SDK_WBP_DeployMenu_SpawnMinimap_HPP

class UWBP_DeployMenu_SpawnMinimap_C : public UDeployMenu_SpawnMinimap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* MapMI;                                            // 0x02A0 (size: 0x8)
    TSoftObjectPtr<UTexture2D> MapTexture;                                            // 0x02A8 (size: 0x28)
    float InitialZoom;                                                                // 0x02D0 (size: 0x4)
    char padding_0[0x4];                                                              // 0x02D4 (size: 0x4)
    class UMaterialInterface* MapMaterial;                                            // 0x02D8 (size: 0x8)
    float PanSpeedFactor;                                                             // 0x02E0 (size: 0x4)
    float ZoomDivisor;                                                                // 0x02E4 (size: 0x4)
    float ZoomStep;                                                                   // 0x02E8 (size: 0x4)
    FLinearColor MapTint;                                                             // 0x02EC (size: 0x10)
    bool bDonePreloading;                                                             // 0x02FC (size: 0x1)
    bool bMenuInitialized;                                                            // 0x02FD (size: 0x1)
    char padding_1[0x2];                                                              // 0x02FE (size: 0x2)
    class UTexture2D* CurrentMapTexture;                                              // 0x0300 (size: 0x8)
    int32 NumContentToLoad;                                                           // 0x0308 (size: 0x4)
    int32 NumLoadedContent;                                                           // 0x030C (size: 0x4)
    FWBP_DeployMenu_SpawnMinimap_COnPreloadFinished OnPreloadFinished;                // 0x0310 (size: 0x10)
    void OnPreloadFinished();
    FWBP_DeployMenu_SpawnMinimap_COnSpawnPointSelected OnSpawnPointSelected;          // 0x0320 (size: 0x10)
    void OnSpawnPointSelected(class AActor* POISpawnPointActor);
    FWBP_DeployMenu_SpawnMinimap_COnSpawnPointDeselected OnSpawnPointDeselected;      // 0x0330 (size: 0x10)
    void OnSpawnPointDeselected(class AActor* POISpawnPointActor);

    void UpdatePlayerPOIs();
    void SetCurrentMapTexture(class UTexture2D* NewMapTexture);
    void HasPreloadInProgress(bool& bPreloading);
    void ApplyPreloadedContent();
    void PreloadContent();
    void ZoomOut(float ZoomDecrement);
    void ZoomIn(float ZoomIncrement);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateMapMatParams();
    void GetLocalCursorDelta(FGeometry& Geometry, FPointerEvent& MouseEvent, FVector2D& LocalDelta);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InitMapBg(class UTexture2D* MapTexture);
    void OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E(class UObject* Loaded);
    void OnLoaded_BB8D079144A98AFE7BD3849D43A40947(UClass* Loaded);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnContentPreloadStarted(const TArray<TSoftObjectPtr<UObject>>& AssetsToLoad, const TArray<TSoftClassPtr<UObject>>& ClassesToLoad);
    void OnContentPreloadFinished();
    void OnAsyncLoadCompleted();
    void ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected);
    void ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap(int32 EntryPoint);
    void OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor);
    void OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
    void OnPreloadFinished__DelegateSignature();
}; // Size: 0x340

#endif
