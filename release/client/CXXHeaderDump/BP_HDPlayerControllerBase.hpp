#ifndef UE4SS_SDK_BP_HDPlayerControllerBase_HPP
#define UE4SS_SDK_BP_HDPlayerControllerBase_HPP

class ABP_HDPlayerControllerBase_C : public AHDPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06A0 (size: 0x8)
    class UWBP_DeployMenu_C* DeployMenu;                                              // 0x06A8 (size: 0x8)
    bool bInitialSpawn;                                                               // 0x06B0 (size: 0x1)
    bool bWantsToOpenDeployMenu;                                                      // 0x06B1 (size: 0x1)
    bool bDeployMenuShown;                                                            // 0x06B2 (size: 0x1)
    char padding_0[0x5];                                                              // 0x06B3 (size: 0x5)
    FBP_HDPlayerControllerBase_COnRepPlayerState OnRepPlayerState;                    // 0x06B8 (size: 0x10)
    void OnRepPlayerState();
    bool bOpenDeployMenuOnBeginPlay;                                                  // 0x06C8 (size: 0x1)
    char padding_1[0x7];                                                              // 0x06C9 (size: 0x7)
    class UUserWidget* DeathScreen;                                                   // 0x06D0 (size: 0x8)
    bool bDeathScreenShown;                                                           // 0x06D8 (size: 0x1)
    char padding_2[0x7];                                                              // 0x06D9 (size: 0x7)
    class UUserWidget* WatermarkWidget;                                               // 0x06E0 (size: 0x8)
    TSoftClassPtr<UUserWidget> WatermarkWidgetClass;                                  // 0x06E8 (size: 0x28)

    void GetJoystickDirection(TEnumAsByte<EJoystickTypes::Type> Stick, FVector2D& StickInput);
    void RestoreCamDefaultViewRotationYawLimits();
    void RestoreCamDefaultViewRotationPitchLimits();
    void RestoreCamDefaultViewRotationRollLimits();
    void RestoreCamDefaultViewRotationLimits();
    void SetCamViewRotationYawLimits(float ViewYawMin, float ViewYawMax, bool bRelativeToPawnRotation);
    void SetCamViewRotationPitchLimits(float ViewPitchMin, float ViewPitchMax, bool bRelativeToPawnRotation);
    void SetCamViewRotationRollLimits(float ViewRollMin, float ViewRollMax, bool bRelativeToPawnRotation);
    void SetCamViewRotationLimits(FRotator ViewRotMin, FRotator ViewRotMax, bool bRelativeToPawnRotation);
    void SetSquadLockedState(class AHDSquadState* Squad, bool bLocked);
    void KickSquadMember(class AHDSquadState* Squad, class AHDPlayerState* MemberToRemove, bool& bRemoveSuccess);
    void LeaveCurrentSquad(bool& bLeaveSuccess);
    void IsSquadLeader(class AHDSquadState* Squad, bool& bSquadLeader);
    void CanJoinSquad(class AHDSquadState* SquadToJoin, bool& bJoinableSquad);
    void JoinSquad(class AHDSquadState* SquadToJoin, bool& bJoinSuccess);
    void InternalCreateUnnamedSquad(class AHDPlatoonState* ForPlatoon, bool bJoinSquadAfterCreation, bool bStartLocked, bool& bSuccess, class AHDSquadState*& NewSquad);
    void GetHDTeamState(class AHDTeamState*& TeamState);
    void GetHDPlayerState(class AHDPlayerState*& PlayerState);
    void SpawnVehicleAtPlayer(TSubclassOf<class ABP_HDVehicleBase_C> VehicleClass);
    void HideHUD();
    void ShowHUD();
    void GetTeamKits(TSet<UHDKit*>& TeamKits);
    void GetMinimapWidget(class UDFMinimap*& MinimapWidget);
    void IsVictoryMenuShown(bool& bShown);
    void DeathScreenToggle(bool bShow);
    void UnloadDeathScreen();
    void LoadDeathScreen();
    void DeployMenuToggle(bool bShowMenu, bool bForce);
    void UnloadDeployMenu();
    void LoadDeployMenu();
    void LoadAndActivateDeployMenu();
    void InpActEvt_Fire_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Fire_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_DeployMenu_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_F1_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_F2_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_F3_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Use_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_F4_K2Node_InputKeyEvent_0(FKey Key);
    void OnLoaded_97A2A56D4425648AEE60ECA073085E53(UClass* Loaded);
    void InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_VoteYes_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_VoteNo_K2Node_InputActionEvent_0(FKey Key);
    void ServerCreateAndJoinUserSquadUnnamed(class AHDPlatoonState* ForPlatoon);
    void ServerLeaveCurrentSquad();
    void ServerJoinSquad(class AHDSquadState* SquadToJoin);
    void ServerSetSquadLockedState(class AHDSquadState* Squad, bool bLocked);
    void ServerKickSquadMember(class AHDSquadState* Squad, class AHDPlayerState* MemberToRemove);
    void UpdatePlayerPOIs();
    void ReceiveBeginPlay();
    void OnDeployMenuPreloadFinished();
    void ReceiveOnRepPlayerState();
    void OnPlayerSpawnTimerElapsed();
    void ReceivePlayerTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    void TryGetInVehicle(class AArcBaseVehicle* Vehicle);
    void RequestExitVehicle(class AArcBaseVehicle* Vehicle);
    void Server_RequestSeatChange(int32 Seat);
    void ReceivePossessPawn(class APawn* NewPawn);
    void CharacterDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
    void Auth_SpawnVehicle();
    void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
    void ReceiveUnpossessPawn(class APawn* UnpossessedPawn);
    void ExecuteUbergraph_BP_HDPlayerControllerBase(int32 EntryPoint);
    void OnRepPlayerState__DelegateSignature();
}; // Size: 0x710

#endif
