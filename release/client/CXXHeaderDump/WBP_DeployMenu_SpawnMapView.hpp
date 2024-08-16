#ifndef UE4SS_SDK_WBP_DeployMenu_SpawnMapView_HPP
#define UE4SS_SDK_WBP_DeployMenu_SpawnMapView_HPP

class UWBP_DeployMenu_SpawnMapView_C : public UDeployMenu_SpawnMapView
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UWBP_DeployMenu_SpawnMinimap_C* Minimap;                                    // 0x0238 (size: 0x8)
    bool bMenuInitialized;                                                            // 0x0240 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0241 (size: 0x7)
    FWBP_DeployMenu_SpawnMapView_COnPreloadFinished OnPreloadFinished;                // 0x0248 (size: 0x10)
    void OnPreloadFinished();
    class AActor* SelectedPOIActor;                                                   // 0x0258 (size: 0x8)
    FWBP_DeployMenu_SpawnMapView_COnSpawnPointSelected OnSpawnPointSelected;          // 0x0260 (size: 0x10)
    void OnSpawnPointSelected(class AActor* POISpawnPointActor);
    FWBP_DeployMenu_SpawnMapView_COnSpawnPointDeselected OnSpawnPointDeselected;      // 0x0270 (size: 0x10)
    void OnSpawnPointDeselected();

    void UpdatePlayerPOIs();
    void GetMinimapData(bool& bSuccess, TSoftObjectPtr<UTexture2D>& MinimapImg, FMinimapGenerationSettings& MinimapSettings);
    void PreloadContent();
    void Construct();
    void BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature();
    void OnPreloadFinished (SpawnMapView)();
    void BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
    void BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor);
    void ExecuteUbergraph_WBP_DeployMenu_SpawnMapView(int32 EntryPoint);
    void OnSpawnPointDeselected__DelegateSignature();
    void OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
    void OnPreloadFinished__DelegateSignature();
}; // Size: 0x280

#endif
