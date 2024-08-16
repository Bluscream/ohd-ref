#ifndef UE4SS_SDK_BP_HDCapturePointBase_HPP
#define UE4SS_SDK_BP_HDCapturePointBase_HPP

class ABP_HDCapturePointBase_C : public AHDBaseCapturePoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetComponent* IconWidget;                                               // 0x0358 (size: 0x8)
    bool bDebug;                                                                      // 0x0360 (size: 0x1)
    bool bDebugFlagClothLOD;                                                          // 0x0361 (size: 0x1)
    bool bOnlyShowDebugIfActive;                                                      // 0x0362 (size: 0x1)
    char padding_0[0x5];                                                              // 0x0363 (size: 0x5)
    class UDFMinimap* Minimap;                                                        // 0x0368 (size: 0x8)
    bool bShowIconWidget;                                                             // 0x0370 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0371 (size: 0x7)
    FBP_HDCapturePointBase_COnCaptureStatusUpdated OnCaptureStatusUpdated;            // 0x0378 (size: 0x10)
    void OnCaptureStatusUpdated(class ABP_HDCapturePointBase_C* ControlPoint);
    class AHDPlayerController* LocalPC;                                               // 0x0388 (size: 0x8)
    class UNavigationInvokerComponent* NavInvoker;                                    // 0x0390 (size: 0x8)

    void UpdateFlagClothLOD();
    void AddPOI();
    void RemovePOI();
    void UpdatePOIState();
    void InitPOI(class UDFMinimap* Minimap);
    void UpdateFlagIcon(EHDTeam InOwningTeam, class AHUD* InLocalPlayerHUD);
    void UpdateFlagColor(EHDTeam InOwningTeam);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam);
    void ReceiveOnCaptureProgress(bool bNewContested);
    void OnCaptureUpdate(bool bContested, int32 Progress);
    void ReceiveOnActive(bool bNewActive);
    void ReceiveOnLocked(bool bNewLocked);
    void ReceiveBeginPlay();
    void ReceiveOnTeamCaptureStatusUpdated();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_HDCapturePointBase(int32 EntryPoint);
    void OnCaptureStatusUpdated__DelegateSignature(class ABP_HDCapturePointBase_C* ControlPoint);
}; // Size: 0x398

#endif
