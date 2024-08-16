---@meta

---@class ABP_HDPlayerControllerBase_C : AHDPlayerController
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DeployMenu UWBP_DeployMenu_C
---@field bInitialSpawn boolean
---@field bWantsToOpenDeployMenu boolean
---@field bDeployMenuShown boolean
---@field OnRepPlayerState FBP_HDPlayerControllerBase_COnRepPlayerState
---@field bOpenDeployMenuOnBeginPlay boolean
---@field DeathScreen UUserWidget
---@field bDeathScreenShown boolean
---@field WatermarkWidget UUserWidget
---@field WatermarkWidgetClass TSoftClassPtr<UUserWidget>
ABP_HDPlayerControllerBase_C = {}

---@param Stick EJoystickTypes::Type
---@param StickInput FVector2D
function ABP_HDPlayerControllerBase_C:GetJoystickDirection(Stick, StickInput) end
function ABP_HDPlayerControllerBase_C:RestoreCamDefaultViewRotationYawLimits() end
function ABP_HDPlayerControllerBase_C:RestoreCamDefaultViewRotationPitchLimits() end
function ABP_HDPlayerControllerBase_C:RestoreCamDefaultViewRotationRollLimits() end
function ABP_HDPlayerControllerBase_C:RestoreCamDefaultViewRotationLimits() end
---@param ViewYawMin float
---@param ViewYawMax float
---@param bRelativeToPawnRotation boolean
function ABP_HDPlayerControllerBase_C:SetCamViewRotationYawLimits(ViewYawMin, ViewYawMax, bRelativeToPawnRotation) end
---@param ViewPitchMin float
---@param ViewPitchMax float
---@param bRelativeToPawnRotation boolean
function ABP_HDPlayerControllerBase_C:SetCamViewRotationPitchLimits(ViewPitchMin, ViewPitchMax, bRelativeToPawnRotation) end
---@param ViewRollMin float
---@param ViewRollMax float
---@param bRelativeToPawnRotation boolean
function ABP_HDPlayerControllerBase_C:SetCamViewRotationRollLimits(ViewRollMin, ViewRollMax, bRelativeToPawnRotation) end
---@param ViewRotMin FRotator
---@param ViewRotMax FRotator
---@param bRelativeToPawnRotation boolean
function ABP_HDPlayerControllerBase_C:SetCamViewRotationLimits(ViewRotMin, ViewRotMax, bRelativeToPawnRotation) end
---@param Squad AHDSquadState
---@param bLocked boolean
function ABP_HDPlayerControllerBase_C:SetSquadLockedState(Squad, bLocked) end
---@param Squad AHDSquadState
---@param MemberToRemove AHDPlayerState
---@param bRemoveSuccess boolean
function ABP_HDPlayerControllerBase_C:KickSquadMember(Squad, MemberToRemove, bRemoveSuccess) end
---@param bLeaveSuccess boolean
function ABP_HDPlayerControllerBase_C:LeaveCurrentSquad(bLeaveSuccess) end
---@param Squad AHDSquadState
---@param bSquadLeader boolean
function ABP_HDPlayerControllerBase_C:IsSquadLeader(Squad, bSquadLeader) end
---@param SquadToJoin AHDSquadState
---@param bJoinableSquad boolean
function ABP_HDPlayerControllerBase_C:CanJoinSquad(SquadToJoin, bJoinableSquad) end
---@param SquadToJoin AHDSquadState
---@param bJoinSuccess boolean
function ABP_HDPlayerControllerBase_C:JoinSquad(SquadToJoin, bJoinSuccess) end
---@param ForPlatoon AHDPlatoonState
---@param bJoinSquadAfterCreation boolean
---@param bStartLocked boolean
---@param bSuccess boolean
---@param NewSquad AHDSquadState
function ABP_HDPlayerControllerBase_C:InternalCreateUnnamedSquad(ForPlatoon, bJoinSquadAfterCreation, bStartLocked, bSuccess, NewSquad) end
---@param TeamState AHDTeamState
function ABP_HDPlayerControllerBase_C:GetHDTeamState(TeamState) end
---@param PlayerState AHDPlayerState
function ABP_HDPlayerControllerBase_C:GetHDPlayerState(PlayerState) end
---@param VehicleClass TSubclassOf<ABP_HDVehicleBase_C>
function ABP_HDPlayerControllerBase_C:SpawnVehicleAtPlayer(VehicleClass) end
function ABP_HDPlayerControllerBase_C:HideHUD() end
function ABP_HDPlayerControllerBase_C:ShowHUD() end
---@param TeamKits TSet<UHDKit>
function ABP_HDPlayerControllerBase_C:GetTeamKits(TeamKits) end
---@param MinimapWidget UDFMinimap
function ABP_HDPlayerControllerBase_C:GetMinimapWidget(MinimapWidget) end
---@param bShown boolean
function ABP_HDPlayerControllerBase_C:IsVictoryMenuShown(bShown) end
---@param bShow boolean
function ABP_HDPlayerControllerBase_C:DeathScreenToggle(bShow) end
function ABP_HDPlayerControllerBase_C:UnloadDeathScreen() end
function ABP_HDPlayerControllerBase_C:LoadDeathScreen() end
---@param bShowMenu boolean
---@param bForce boolean
function ABP_HDPlayerControllerBase_C:DeployMenuToggle(bShowMenu, bForce) end
function ABP_HDPlayerControllerBase_C:UnloadDeployMenu() end
function ABP_HDPlayerControllerBase_C:LoadDeployMenu() end
function ABP_HDPlayerControllerBase_C:LoadAndActivateDeployMenu() end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_Fire_K2Node_InputActionEvent_6(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_Fire_K2Node_InputActionEvent_5(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_DeployMenu_K2Node_InputActionEvent_4(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_F1_K2Node_InputKeyEvent_3(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_F2_K2Node_InputKeyEvent_2(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_F3_K2Node_InputKeyEvent_1(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_Use_K2Node_InputActionEvent_3(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_F4_K2Node_InputKeyEvent_0(Key) end
---@param Loaded UClass
function ABP_HDPlayerControllerBase_C:OnLoaded_97A2A56D4425648AEE60ECA073085E53(Loaded) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_2(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_VoteYes_K2Node_InputActionEvent_1(Key) end
---@param Key FKey
function ABP_HDPlayerControllerBase_C:InpActEvt_VoteNo_K2Node_InputActionEvent_0(Key) end
---@param ForPlatoon AHDPlatoonState
function ABP_HDPlayerControllerBase_C:ServerCreateAndJoinUserSquadUnnamed(ForPlatoon) end
function ABP_HDPlayerControllerBase_C:ServerLeaveCurrentSquad() end
---@param SquadToJoin AHDSquadState
function ABP_HDPlayerControllerBase_C:ServerJoinSquad(SquadToJoin) end
---@param Squad AHDSquadState
---@param bLocked boolean
function ABP_HDPlayerControllerBase_C:ServerSetSquadLockedState(Squad, bLocked) end
---@param Squad AHDSquadState
---@param MemberToRemove AHDPlayerState
function ABP_HDPlayerControllerBase_C:ServerKickSquadMember(Squad, MemberToRemove) end
function ABP_HDPlayerControllerBase_C:UpdatePlayerPOIs() end
function ABP_HDPlayerControllerBase_C:ReceiveBeginPlay() end
function ABP_HDPlayerControllerBase_C:OnDeployMenuPreloadFinished() end
function ABP_HDPlayerControllerBase_C:ReceiveOnRepPlayerState() end
function ABP_HDPlayerControllerBase_C:OnPlayerSpawnTimerElapsed() end
---@param LastTeamNum uint8
---@param NewTeamNum uint8
function ABP_HDPlayerControllerBase_C:ReceivePlayerTeamNumUpdated(LastTeamNum, NewTeamNum) end
---@param Vehicle AArcBaseVehicle
function ABP_HDPlayerControllerBase_C:TryGetInVehicle(Vehicle) end
---@param Vehicle AArcBaseVehicle
function ABP_HDPlayerControllerBase_C:RequestExitVehicle(Vehicle) end
---@param Seat int32
function ABP_HDPlayerControllerBase_C:Server_RequestSeatChange(Seat) end
---@param NewPawn APawn
function ABP_HDPlayerControllerBase_C:ReceivePossessPawn(NewPawn) end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function ABP_HDPlayerControllerBase_C:CharacterDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
function ABP_HDPlayerControllerBase_C:Auth_SpawnVehicle() end
---@param EndGameFocus AActor
---@param bIsWinner boolean
function ABP_HDPlayerControllerBase_C:ReceiveGameHasEnded(EndGameFocus, bIsWinner) end
---@param UnpossessedPawn APawn
function ABP_HDPlayerControllerBase_C:ReceiveUnpossessPawn(UnpossessedPawn) end
---@param EntryPoint int32
function ABP_HDPlayerControllerBase_C:ExecuteUbergraph_BP_HDPlayerControllerBase(EntryPoint) end
function ABP_HDPlayerControllerBase_C:OnRepPlayerState__DelegateSignature() end


