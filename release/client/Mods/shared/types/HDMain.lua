---@meta

---@class AHDAIController : ADFBaseAIController
---@field PlayerComponent UHDPlayerComponent
---@field GOAPComponent UHDGOAPComponent
---@field bCanJoinSquads boolean
---@field bCanJoinPlayerSquads boolean
---@field bCanCreateSquads boolean
---@field MaxNumberOfAILedSquads int32
---@field MaxNumberOfSquadMembers int32
---@field MaxNumberOfAISquadMembers int32
---@field bUseFactionSpecifiedSquadLeaderKit boolean
---@field bUseFactionSpecifiedSquadMemberKit boolean
---@field FocusActorPerceivedLocation FVector
AHDAIController = {}

---@return boolean
function AHDAIController:JoinOrCreateSquad() end
---@return TSubclassOf<APawn>
function AHDAIController:GetStartPawnClass() end
---@return UHDKit
function AHDAIController:GetFactionSpecifiedSquadMemberKit() end
---@return UHDKit
function AHDAIController:GetFactionSpecifiedSquadLeaderKit() end


---@class AHDBaseCapturePoint : AActor
---@field Mesh USkeletalMeshComponent
---@field SphereCollision USphereComponent
---@field POI UDFPOIComponent
---@field NavigationInvoker UNavigationInvokerComponent
---@field bActive boolean
---@field bLocked boolean
---@field bContested boolean
---@field bCaptured boolean
---@field bCapturedOnce boolean
---@field CaptureProgress int32
---@field ActiveRoute int32
---@field SpawnPoints TArray<UChildActorComponent>
---@field OnCaptureProgressUpdated FHDBaseCapturePointOnCaptureProgressUpdated
---@field StartingTeam EHDTeam
---@field CaptureDisplayName FText
---@field CaptureTimerRate float
---@field CaptureSpeed int32
---@field CaptureRadius float
---@field MinPlayersToCapture int32
---@field bEnforceMinPlayersToCaptureWithSmallerPlayerCount boolean
---@field bScaleCaptureSpeed boolean
---@field bRecapturable boolean
---@field bWinOnCapture boolean
---@field bProvideSpawnPoint boolean
---@field bProvideSpawnPointWhenUnderAttack boolean
---@field PossibleRoutes TSet<int32>
---@field Tier int32
---@field SpawnPointTransforms TArray<FTransform>
---@field OwningTeam EHDTeam
---@field PrevNonNeutralOwningTeam EHDTeam
---@field OnOwningTeamUpdate FHDBaseCapturePointOnOwningTeamUpdate
---@field bCapturableByTeamRed boolean
---@field bCapturableByTeamBlue boolean
---@field OnTeamCaptureStatusUpdate FHDBaseCapturePointOnTeamCaptureStatusUpdate
AHDBaseCapturePoint = {}

function AHDBaseCapturePoint:Unlock() end
---@param NewActiveRoute int32
function AHDBaseCapturePoint:SetActiveRoute(NewActiveRoute) end
---@param bNewActive boolean
function AHDBaseCapturePoint:SetActive(bNewActive) end
function AHDBaseCapturePoint:ReceiveOnTeamCaptureStatusUpdated() end
---@param LastOwningTeam EHDTeam
function AHDBaseCapturePoint:ReceiveOnOwningTeamUpdated(LastOwningTeam) end
---@param bNewLocked boolean
function AHDBaseCapturePoint:ReceiveOnLocked(bNewLocked) end
---@param bNewContested boolean
function AHDBaseCapturePoint:ReceiveOnCaptureProgress(bNewContested) end
---@param bNewActive boolean
function AHDBaseCapturePoint:ReceiveOnActive(bNewActive) end
---@param LastOwningTeam EHDTeam
function AHDBaseCapturePoint:OnRep_OwningTeam(LastOwningTeam) end
function AHDBaseCapturePoint:OnRep_Locked() end
function AHDBaseCapturePoint:OnRep_Contested() end
function AHDBaseCapturePoint:OnRep_CaptureProgress() end
function AHDBaseCapturePoint:OnRep_CapturableByTeam() end
function AHDBaseCapturePoint:OnRep_Active() end
---@param LastOwningTeam EHDTeam
function AHDBaseCapturePoint:OnOwningTeamUpdated(LastOwningTeam) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AHDBaseCapturePoint:OnEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AHDBaseCapturePoint:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function AHDBaseCapturePoint:Lock() end
---@param CaptureTeam EHDTeam
---@return boolean
function AHDBaseCapturePoint:IsCapturableByTeam(CaptureTeam) end
---@param OverlappingCharsRed TArray<ADFBaseCharacter>
---@param OverlappingCharsBlue TArray<ADFBaseCharacter>
function AHDBaseCapturePoint:GetOverlappingCharactersByTeam(OverlappingCharsRed, OverlappingCharsBlue) end
---@param ObjTeam EHDTeam
---@return EHDControlPointObjectiveType
function AHDBaseCapturePoint:GetObjectiveTypeForTeam(ObjTeam) end
---@param CaptureTeam EHDTeam
---@return int32
function AHDBaseCapturePoint:GetMinPlayersRequiredForCaptureTeam(CaptureTeam) end
---@param Player AHDPlayerController
---@return AActor
function AHDBaseCapturePoint:ChoosePlayerStart(Player) end
---@param Player AController
---@return boolean
function AHDBaseCapturePoint:CanRestartPlayer(Player) end
---@return boolean
function AHDBaseCapturePoint:CanCapture() end


---@class AHDBaseGameMode : ADFBaseGameMode
---@field ScoreboardMenuClass TSubclassOf<UHDScoreboardBase>
---@field RoundEndEventDetails FHDGameRoundEndEventDetails
---@field bDisablePlayerSpawnKitRestrictions boolean
---@field bUseTickets boolean
---@field DefaultBluforTeamDefinition UHDTeamDefinition
---@field DefaultOpforTeamDefinition UHDTeamDefinition
---@field BluforTeamDefinition UHDTeamDefinition
---@field OpforTeamDefinition UHDTeamDefinition
---@field bRandomPlayerTeamBalance boolean
---@field PlatoonInfos TArray<UHDPlatoonInfo>
---@field PlatoonStateClass TSubclassOf<AHDPlatoonState>
AHDBaseGameMode = {}

---@param Num int32
function AHDBaseGameMode:RemoveOpforBots(Num) end
---@param Num int32
function AHDBaseGameMode:RemoveBluforBots(Num) end
---@param Player AController
---@param StartSpot AActor
---@param StartLoadout UDFLoadout
---@return boolean
function AHDBaseGameMode:PlayerCanRestartAtPlayerStart(Player, StartSpot, StartLoadout) end
---@param Num int32
function AHDBaseGameMode:AddOpforBots(Num) end
---@param Num int32
function AHDBaseGameMode:AddBluforBots(Num) end


---@class AHDBasePickup_Kit : ADFBasePickup
---@field Inventory UDFInventoryComponent
---@field KitVisuals TArray<UPrimitiveComponent>
---@field KitLoadout UHDKit
AHDBasePickup_Kit = {}



---@class AHDBaseProjectile : ADFBaseProjectile
AHDBaseProjectile = {}


---@class AHDBaseWeapon : ADFBaseGun_Projectile
---@field DisplayIcon UTexture2D
---@field DisplayEquipmentSymbol UTexture2D
---@field bUseFreeAim boolean
---@field bSelectable boolean
---@field bHideFireModeIndicator boolean
---@field AmmoReplenishmentDelay float
AHDBaseWeapon = {}

---@return boolean
function AHDBaseWeapon:IsSelectableEquipment() end


---@class AHDGameSession : ADFGameSession
---@field bSupportersOnlyWhitelist boolean
AHDGameSession = {}



---@class AHDGameState : ADFBaseGameState
---@field ReplicatedMinRespawnDelay float
---@field bReplicatedDisableSpawnKitRestrictions boolean
---@field BluforTickets int32
---@field OpforTickets int32
---@field BluforTeamState AHDTeamState
---@field OpforTeamState AHDTeamState
AHDGameState = {}

---@param TicketTeam EHDTeam
---@param TicketsToRemove int32
function AHDGameState:RevokeTicketsFromTeam(TicketTeam, TicketsToRemove) end
---@return boolean
function AHDGameState:IsGameUsingTickets() end
---@param Controller AController
---@return boolean
function AHDGameState:IsGameUsingPlayerSpawnKitRestrictions(Controller) end
---@param TicketTeam EHDTeam
---@param TicketsToAdd int32
function AHDGameState:GiveTicketsToTeam(TicketTeam, TicketsToAdd) end
---@param TeamToCheck EHDTeam
---@return int32
function AHDGameState:GetNumPlayersOnTeam(TeamToCheck) end
function AHDGameState:ClearTickets() end


---@class AHDGame_AdvanceAndSecure : AHDBaseGameMode
---@field StartingBlueTier int32
---@field StartingRedTier int32
---@field ActiveRoute int32
---@field CurrentBlueCaptureTier int32
---@field CurrentRedCaptureTier int32
---@field bBlueIncreasesTier boolean
AHDGame_AdvanceAndSecure = {}

---@return int32
function AHDGame_AdvanceAndSecure:GetCurrentRedCaptureTier() end
---@return int32
function AHDGame_AdvanceAndSecure:GetCurrentBlueCaptureTier() end


---@class AHDGame_TeamDeathMatch : AHDBaseGameMode
AHDGame_TeamDeathMatch = {}


---@class AHDHUD : AHUD
AHDHUD = {}


---@class AHDPlatoonState : ADFReplInfo
---@field OnSquadAdded FHDPlatoonStateOnSquadAdded
---@field OnSquadPreRemove FHDPlatoonStateOnSquadPreRemove
---@field SquadStateClass TSubclassOf<AHDSquadState>
---@field Squads FDFGenericObjectContainer
---@field bInitialized boolean
---@field ID int32
---@field Info UHDPlatoonInfo
---@field TeamId uint8
---@field OwnerTeam AHDTeamState
AHDPlatoonState = {}

---@param Squad AHDSquadState
---@param bIgnorePendingRemoval boolean
---@return boolean
function AHDPlatoonState:SquadExists(Squad, bIgnorePendingRemoval) end
---@param RemoveIdx int32
function AHDPlatoonState:RemoveSquadAt(RemoveIdx) end
---@param SquadToRemove AHDSquadState
function AHDPlatoonState:RemoveSquad(SquadToRemove) end
function AHDPlatoonState:RemoveFromOwner() end
---@param Squad AHDSquadState
function AHDPlatoonState:ReceiveSquadPreRemove(Squad) end
---@param Squad AHDSquadState
function AHDPlatoonState:ReceiveSquadAdded(Squad) end
---@param Squad AHDSquadState
---@return boolean
function AHDPlatoonState:IsSquadPendingRemovalFromPlatoon(Squad) end
---@return boolean
function AHDPlatoonState:HasReachedMaxSquadLimit() end
---@param Index int32
---@param bIgnorePendingRemoval boolean
---@return AHDSquadState
function AHDPlatoonState:GetSquadAt(Index, bIgnorePendingRemoval) end
---@param bValidSquadsOnly boolean
---@return int32
function AHDPlatoonState:GetNumSquads(bValidSquadsOnly) end
---@return int32
function AHDPlatoonState:GetMaxSquadLimit() end
---@param SquadDisplayName FText
---@param OutFoundSquad AHDSquadState
---@return boolean
function AHDPlatoonState:FindSquadByName(SquadDisplayName, OutFoundSquad) end
function AHDPlatoonState:DumpSquadState() end
---@param SquadDisplayName FText
---@param SquadLeader AHDPlayerState
---@param bStartLocked boolean
---@return AHDSquadState
function AHDPlatoonState:AddSquad(SquadDisplayName, SquadLeader, bStartLocked) end


---@class AHDPlayerCameraManager : ADFPlayerCameraManager
AHDPlayerCameraManager = {}


---@class AHDPlayerCharacter : ADFBasePlayerCharacter
---@field bUseAttachedVehicleRelevancy boolean
---@field WalkingBobSpeed float
---@field bDoHeadBob boolean
---@field bAllowFreeAim boolean
---@field bAllowFreeAimWhileAiming boolean
---@field bDoFreeAim boolean
---@field VariationHandle FDFCharacterVariationDataHandle
---@field SpringArm USpringArmComponent
---@field FreeAimSpringArm USpringArmComponent
---@field CurrentLoadout UHDKit
---@field KitClassFallback TSubclassOf<AHDBasePickup_Kit>
---@field KitDropTraceDistance float
---@field bInventoryMenuShown boolean
---@field OnAimStyleChanged FHDPlayerCharacterOnAimStyleChanged
---@field AimStyle EHDWeaponAimStyle
---@field HDTeamState AHDTeamState
---@field AIVocalAC UAudioComponent
---@field WalkingHeadBob TSubclassOf<UCameraShake>
---@field SprintingHeadBob TSubclassOf<UCameraShake>
---@field bCanAddYawInput boolean
---@field bCanAddPitchInput boolean
---@field bCanAddRollInput boolean
---@field FreeAimDeadzoneCameraSpeedFactor float
---@field FreeAimReturnToCenterInterpSpeed float
---@field MaxFreeAimYaw float
---@field MaxFreeAimPitch float
---@field MaxFreeAimYawADS float
---@field MaxFreeAimPitchADS float
---@field CurrentFreeAimYaw float
---@field CurrentFreeAimPitch float
---@field FreeAimMouseDeltaX float
---@field FreeAimMouseDeltaY float
---@field FreeAimExternalDeltaX float
---@field FreeAimExternalDeltaY float
---@field LastAIVocalization EHDAIVocalizationType
---@field HDAIPerceptionComponent UHDAIPerceptionComponent
AHDPlayerCharacter = {}

---@param PreviousHandle FDFCharacterVariationDataHandle
function AHDPlayerCharacter:VariationDataChangedInternal(PreviousHandle) end
---@param InVariationHandle FDFCharacterVariationDataHandle
function AHDPlayerCharacter:SetVariationHandle(InVariationHandle) end
---@param NewYaw float
function AHDPlayerCharacter:SetMaxFreeAimYawADS(NewYaw) end
---@param NewYaw float
function AHDPlayerCharacter:SetMaxFreeAimYaw(NewYaw) end
---@param NewPitch float
function AHDPlayerCharacter:SetMaxFreeAimPitchADS(NewPitch) end
---@param NewPitch float
function AHDPlayerCharacter:SetMaxFreeAimPitch(NewPitch) end
---@param NewInterpSpeed float
function AHDPlayerCharacter:SetFreeAimReturnToCenterInterpSpeed(NewInterpSpeed) end
---@param NewSpeedFactor float
function AHDPlayerCharacter:SetFreeAimDeadzoneCameraSpeedFactor(NewSpeedFactor) end
---@param bEnabled boolean
function AHDPlayerCharacter:SetAllowFreeAimADS(bEnabled) end
---@param bEnabled boolean
function AHDPlayerCharacter:SetAllowFreeAim(bEnabled) end
---@param InAimStyle EHDWeaponAimStyle
---@param bFromPlayerInput boolean
function AHDPlayerCharacter:SetAimStyle(InAimStyle, bFromPlayerInput) end
---@param MsgTalkerChannel UDFCommChannel
---@param MsgTalkerPS APlayerState
---@param bMsgIsTalking boolean
function AHDPlayerCharacter:ReceiveVoipTalkerMsgReceived(MsgTalkerChannel, MsgTalkerPS, bMsgIsTalking) end
---@param NewVariation FDFCharacterVariationData
---@param PreviousVariation FDFCharacterVariationData
function AHDPlayerCharacter:ReceiveVariationDataChanged(NewVariation, PreviousVariation) end
---@param DeltaSeconds float
function AHDPlayerCharacter:ReceiveFreeAim(DeltaSeconds) end
function AHDPlayerCharacter:ReceiveCurrentLoadout() end
---@param NewAimStyle EHDWeaponAimStyle
---@param PrevAimStyle EHDWeaponAimStyle
---@param bFromPlayerInput boolean
function AHDPlayerCharacter:ReceiveAimStyleChanged(NewAimStyle, PrevAimStyle, bFromPlayerInput) end
---@param SoundToUse USoundBase
---@param VocalType EHDAIVocalizationType
---@param PitchMultiplier float
function AHDPlayerCharacter:PlayVocalSoundAI(SoundToUse, VocalType, PitchMultiplier) end
function AHDPlayerCharacter:OnRep_CurrentLoadout() end
---@param Kit AHDBasePickup_Kit
function AHDPlayerCharacter:OnPickupKit(Kit) end
---@param NewPlayerState APlayerState
---@param OldPlayerState APlayerState
function AHDPlayerCharacter:NotifyPlayerStateChanged(NewPlayerState, OldPlayerState) end
---@return boolean
function AHDPlayerCharacter:IsInVehicle() end
function AHDPlayerCharacter:HeadBob() end
---@return UHDPlayerComponent
function AHDPlayerCharacter:GetPlayerComponent() end
---@return float
function AHDPlayerCharacter:GetMaxFreeAimYawToUse() end
---@return float
function AHDPlayerCharacter:GetMaxFreeAimPitchToUse() end
---@return TSubclassOf<AHDBasePickup_Kit>
function AHDPlayerCharacter:GetKitClassToUse() end
---@param DeltaSeconds float
function AHDPlayerCharacter:FreeAim(DeltaSeconds) end
---@return boolean
function AHDPlayerCharacter:EquipPrimaryItem() end
function AHDPlayerCharacter:DropKit() end


---@class AHDPlayerController : ADFBasePlayerController
---@field HDCharacter AHDPlayerCharacter
---@field PlayerComponent UHDPlayerComponent
---@field PushToTalkKeyStates TMap<FName, FPTTKeyState>
---@field TextCommsFormatName FName
---@field TeamLocalVoipCommChannelGroupName FName
---@field SquadVoipCommChannelGroupName FName
---@field CommandVoipCommChannelGroupName FName
---@field CachedPlayerCommsComp UDFPlayerCommsComponent
---@field VictoryMenuClass TSubclassOf<UVictoryMenu>
---@field VictoryMenu UVictoryMenu
AHDPlayerController = {}

function AHDPlayerController:UnloadVictoryMenu() end
function AHDPlayerController:TeamTalk() end
function AHDPlayerController:Talk() end
---@param TalkStopChannelName FName
function AHDPlayerController:StopTalkingOverChannelIfActive(TalkStopChannelName) end
---@param TalkStopGroupName FName
function AHDPlayerController:StopTalkingOverChannelGroupIfActive(TalkStopGroupName) end
function AHDPlayerController:StopTalkingOnActiveChannels() end
---@param TalkStartGroupName FName
function AHDPlayerController:StartTalkingOverChannelGroup(TalkStartGroupName) end
---@param TalkStartChannelName FName
function AHDPlayerController:StartTalkingOverChannel(TalkStartChannelName) end
function AHDPlayerController:ServerSwitchTeam() end
function AHDPlayerController:ServerSpawnVehicle() end
---@param DesiredStartSpot AActor
---@param DesiredStartLoadout UDFLoadout
function AHDPlayerController:ServerRestartPlayerAtStartSpot(DesiredStartSpot, DesiredStartLoadout) end
---@param DesiredTeam EHDTeam
function AHDPlayerController:ServerPickTeam(DesiredTeam) end
---@param bIdleSwayDisallowed boolean
function AHDPlayerController:ServerCheatSetAllowIdleSway(bIdleSwayDisallowed) end
---@param MsgTalkerChannel UDFCommChannel
---@param MsgTalkerPS APlayerState
---@param bMsgIsTalking boolean
function AHDPlayerController:ReceiveVoipTalkerMsgReceived(MsgTalkerChannel, MsgTalkerPS, bMsgIsTalking) end
function AHDPlayerController:OnShowScoreboardReleased() end
function AHDPlayerController:OnShowScoreboardPressed() end
function AHDPlayerController:OnPlayerSpawnTimerElapsed() end
function AHDPlayerController:OnPauseMenu() end
---@param RoundDetails FHDGameRoundEndEventDetails
---@param bWinner boolean
function AHDPlayerController:LoadVictoryMenu(RoundDetails, bWinner) end
---@param TalkChannelName FName
---@return boolean
function AHDPlayerController:IsTalkingOverChannelName(TalkChannelName) end
---@param TalkGroupName FName
---@return boolean
function AHDPlayerController:IsTalkingOverChannelGroup(TalkGroupName) end
---@param TalkChannel UDFCommChannel
---@return boolean
function AHDPlayerController:IsTalkingOverChannel(TalkChannel) end
---@param bIncludeWantsToTalk boolean
---@return boolean
function AHDPlayerController:IsTalking(bIncludeWantsToTalk) end
---@return boolean
function AHDPlayerController:IsInVehicle() end
---@return boolean
function AHDPlayerController:IsIdleSwayAllowed() end
---@return UDFCommChannel
function AHDPlayerController:GetTalkChannel() end
---@return UDFPlayerCommsComponent
function AHDPlayerController:GetPlayerCommsComponent() end
---@param RoundDetails FHDGameRoundEndEventDetails
---@param bIsWinner boolean
function AHDPlayerController:ClientRoundEnd(RoundDetails, bIsWinner) end
---@param FactionAssetPaths TArray<FString>
function AHDPlayerController:ClientLoadTeamData(FactionAssetPaths) end
---@param bIdleSwayDisallowed boolean
function AHDPlayerController:ClientCheatSetAllowIdleSway(bIdleSwayDisallowed) end
---@param TalkChannelName FName
---@return boolean
function AHDPlayerController:CanTalkOverChannel(TalkChannelName) end
function AHDPlayerController:Auth_SpawnVehicle() end


---@class AHDPlayerStart : APlayerStart
AHDPlayerStart = {}

---@return UCapsuleComponent
function AHDPlayerStart:K2_GetCapsuleComponent() end


---@class AHDPlayerState : ADFBasePlayerState
---@field SpawnLoadout UHDKit
---@field CurrentLoadout UHDKit
---@field SquadInfo FHDSquadAssignmentInfo
---@field OnPlayerSquadInfoUpdated FHDPlayerStateOnPlayerSquadInfoUpdated
AHDPlayerState = {}

function AHDPlayerState:UnregisterFromSquad() end
function AHDPlayerState:OnRep_SquadInfo() end
---@param PrevSpawnLoadout UHDKit
function AHDPlayerState:OnRep_SpawnLoadout(PrevSpawnLoadout) end
---@param PrevLoadout UHDKit
function AHDPlayerState:OnRep_CurrentLoadout(PrevLoadout) end
---@param NewSpawnLoadout UHDKit
function AHDPlayerState:AssignSpawnLoadout(NewSpawnLoadout) end
---@param NewCurrentLoadout UHDKit
function AHDPlayerState:AssignCurrentLoadout(NewCurrentLoadout) end


---@class AHDProj_Bullet : AHDBaseProjectile
---@field ProjectileCollision USphereComponent
AHDProj_Bullet = {}



---@class AHDProj_Deployable : AHDBaseProjectile
AHDProj_Deployable = {}


---@class AHDProj_Grenade : AHDBaseProjectile
---@field FuzeDelay float
---@field PayloadPostTriggerLifeSpan float
---@field PayloadServerActivationTime float
AHDProj_Grenade = {}

function AHDProj_Grenade:OnRep_PayloadServerActivationTime() end


---@class AHDProj_SpawnPointDeployable : AHDProj_Deployable
---@field Team EHDTeam
AHDProj_SpawnPointDeployable = {}



---@class AHDRecastNavMesh : ADFRecastNavMesh
AHDRecastNavMesh = {}


---@class AHDSquadHiddenState : AInfo
---@field SquadStateOwner AHDSquadState
AHDSquadHiddenState = {}



---@class AHDSquadState : ADFReplInfo
---@field bInitialized boolean
---@field SquadHiddenStateClass TSubclassOf<AHDSquadHiddenState>
---@field ID int32
---@field TeamId uint8
---@field OwnerPlatoon AHDPlatoonState
---@field DisplayName FText
---@field SquadHiddenState AHDSquadHiddenState
---@field SquadLeader AHDPlayerState
---@field bLocked boolean
---@field bRequiresSquadLeader boolean
---@field bDisbandSquadOnEmpty boolean
---@field OnSquadLeaderAssigned FHDSquadStateOnSquadLeaderAssigned
---@field OnSquadMemberRegistered FHDSquadStateOnSquadMemberRegistered
---@field OnSquadMemberPreUnregister FHDSquadStateOnSquadMemberPreUnregister
---@field OnSquadMemberInfoUpdated FHDSquadStateOnSquadMemberInfoUpdated
---@field OnSquadRenamed FHDSquadStateOnSquadRenamed
---@field OnSquadLockToggled FHDSquadStateOnSquadLockToggled
---@field SquadMembers FDFGenericObjectContainer
---@field MaxSquadMemberLimit int32
AHDSquadState = {}

---@param RemoveIdx int32
---@return boolean
function AHDSquadState:UnregisterSquadMemberAt(RemoveIdx) end
---@param MemberPSToRemove AHDPlayerState
---@return boolean
function AHDSquadState:UnregisterSquadMember(MemberPSToRemove) end
---@param MemberPCToRemove AHDPlayerController
---@return boolean
function AHDSquadState:UnregisterPlayerSquadMember(MemberPCToRemove) end
function AHDSquadState:UnlockSquad() end
---@param MemberPS APlayerState
---@param LastTeamNum uint8
---@param NewTeamNum uint8
function AHDSquadState:SquadMemberPSTeamUpdated(MemberPS, LastTeamNum, NewTeamNum) end
---@param MemberPS AHDPlayerState
---@param MemberSQInfo FHDSquadAssignmentInfo
function AHDSquadState:SquadMemberPSSquadUpdated(MemberPS, MemberSQInfo) end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function AHDSquadState:SquadMemberPSEndPlay(Actor, EndPlayReason) end
---@param NewDisplayName FText
function AHDSquadState:RenameSquad(NewDisplayName) end
function AHDSquadState:RemoveFromOwner() end
---@param NewMemberPS AHDPlayerState
---@return boolean
function AHDSquadState:RegisterSquadMember(NewMemberPS) end
---@param NewMemberPC AHDPlayerController
---@return boolean
function AHDSquadState:RegisterPlayerSquadMember(NewMemberPC) end
function AHDSquadState:ReceiveSquadUnlocked() end
---@param NewName FText
---@param PrevName FText
function AHDSquadState:ReceiveSquadRenamed(NewName, PrevName) end
---@param MemberPS AHDPlayerState
function AHDSquadState:ReceiveSquadMemberRegistered(MemberPS) end
---@param MemberPS AHDPlayerState
function AHDSquadState:ReceiveSquadMemberPreUnregister(MemberPS) end
function AHDSquadState:ReceiveSquadLocked() end
---@param NewLeaderPS AHDPlayerState
---@param PrevLeaderPS AHDPlayerState
function AHDSquadState:ReceiveSquadLeaderAssigned(NewLeaderPS, PrevLeaderPS) end
---@param CreationParams FHDSquadCreationParams
function AHDSquadState:ReceiveInit(CreationParams) end
---@param PrevSquadLeader AHDPlayerState
function AHDSquadState:OnRep_SquadLeader(PrevSquadLeader) end
function AHDSquadState:OnRep_SquadHiddenState() end
---@param PrevDisplayName FText
function AHDSquadState:OnRep_DisplayName(PrevDisplayName) end
function AHDSquadState:OnRep_bLocked() end
function AHDSquadState:LockSquad() end
---@param PS AHDPlayerState
---@param bIgnorePendingRemoval boolean
---@return boolean
function AHDSquadState:IsRegisteredSquadMember(PS, bIgnorePendingRemoval) end
---@param PC AHDPlayerController
---@param bIgnorePendingRemoval boolean
---@return boolean
function AHDSquadState:IsPlayerRegisteredSquadMember(PC, bIgnorePendingRemoval) end
---@param PC AHDPlayerController
---@return boolean
function AHDSquadState:IsPlayerPendingRemovalFromSquad(PC) end
---@param PS AHDPlayerState
---@return boolean
function AHDSquadState:IsPendingRemovalFromSquad(PS) end
---@return boolean
function AHDSquadState:HasReachedMaxSquadMemberLimit() end
---@param Index int32
---@param bIgnorePendingRemoval boolean
---@return AHDPlayerState
function AHDSquadState:GetSquadMemberAt(Index, bIgnorePendingRemoval) end
---@param bValidMembersOnly boolean
---@return int32
function AHDSquadState:GetNumSquadMembersBots(bValidMembersOnly) end
---@param bValidMembersOnly boolean
---@return int32
function AHDSquadState:GetNumSquadMembers(bValidMembersOnly) end
function AHDSquadState:DumpSquadMemberState() end
---@param NewMemberPS AHDPlayerState
---@return boolean
function AHDSquadState:CanRegisterSquadMember(NewMemberPS) end
---@param NewMemberPC AHDPlayerController
---@return boolean
function AHDSquadState:CanRegisterPlayerSquadMember(NewMemberPC) end
---@param NewLeaderPS AHDPlayerState
---@return boolean
function AHDSquadState:AssignSquadLeader(NewLeaderPS) end


---@class AHDTeamState : ADFTeamState
---@field OnPlatoonAdded FHDTeamStateOnPlatoonAdded
---@field OnPlatoonPreRemove FHDTeamStateOnPlatoonPreRemove
---@field Platoons FDFGenericObjectContainer
---@field MaxPlatoonLimit int32
---@field Kits TSet<UHDKit>
AHDTeamState = {}

---@param RemoveIdx int32
function AHDTeamState:RemovePlatoonAt(RemoveIdx) end
---@param PlatoonToRemove AHDPlatoonState
function AHDTeamState:RemovePlatoon(PlatoonToRemove) end
---@param Platoon AHDPlatoonState
function AHDTeamState:ReceivePlatoonPreRemove(Platoon) end
---@param Platoon AHDPlatoonState
function AHDTeamState:ReceivePlatoonAdded(Platoon) end
---@param Platoon AHDPlatoonState
---@param bIgnorePendingRemoval boolean
---@return boolean
function AHDTeamState:PlatoonExists(Platoon, bIgnorePendingRemoval) end
---@param Platoon AHDPlatoonState
---@return boolean
function AHDTeamState:IsPlatoonPendingRemovalFromTeam(Platoon) end
---@return boolean
function AHDTeamState:HasReachedMaxPlatoonLimit() end
---@return EHDTeam
function AHDTeamState:GetTeam() end
---@param Index int32
---@param bIgnorePendingRemoval boolean
---@return AHDPlatoonState
function AHDTeamState:GetPlatoonAt(Index, bIgnorePendingRemoval) end
---@param bValidPlatoonsOnly boolean
---@return int32
function AHDTeamState:GetNumPlatoons(bValidPlatoonsOnly) end
---@param PlatoonDisplayName FText
---@param OutFoundPlatoon AHDPlatoonState
---@return boolean
function AHDTeamState:FindPlatoonByName(PlatoonDisplayName, OutFoundPlatoon) end
---@param PlatoonDef UHDPlatoonInfo
---@param OutFoundPlatoon AHDPlatoonState
---@return boolean
function AHDTeamState:FindPlatoonByDefinition(PlatoonDef, OutFoundPlatoon) end
function AHDTeamState:DumpPlatoonState() end
---@param PlatoonInfo UHDPlatoonInfo
---@return AHDPlatoonState
function AHDTeamState:AddPlatoon(PlatoonInfo) end


---@class AHDWorldSettings : ATBWorldSettings
---@field BluforTeamDefinition UHDTeamDefinition
---@field OpforTeamDefinition UHDTeamDefinition
AHDWorldSettings = {}



---@class FAICharacterVocalProfile : FTableRowBase
---@field ContactSounds TArray<USoundBase>
---@field LostContactSounds TArray<USoundBase>
---@field ReloadingSounds TArray<USoundBase>
---@field BeenHitSounds TArray<USoundBase>
---@field UnderSuppressionSounds TArray<USoundBase>
---@field DeathSounds TArray<USoundBase>
FAICharacterVocalProfile = {}



---@class FControlPointRulesetSettings
---@field TicketsGainedForCapture int32
---@field TicketsGainedForCaptureFromNeutral int32
---@field TicketsLostOnCapture int32
---@field PointsForNeutralize float
---@field PointsForCapture float
---@field PointsForDefense float
---@field PointsOnCaptureProgress float
---@field PointsOnDefenseProgress float
FControlPointRulesetSettings = {}



---@class FHDAIGroupData
---@field CapturePoint AHDBaseCapturePoint
---@field CaptureMode EHDAICaptureMode
---@field NavigationAnchor FVector
---@field TargetLocation FVector
---@field FormationIndex int32
---@field FormationOffset FVector
FHDAIGroupData = {}



---@class FHDAIItemData
---@field SpecificType ESpecificItemType
---@field InventoryIndex int32
FHDAIItemData = {}



---@class FHDAIMasterNavPoint
---@field Location FVector
---@field DistanceToNext float
FHDAIMasterNavPoint = {}



---@class FHDAISpecificItemTypeAttackData
---@field AttackRateMin float
---@field AttackRateMax float
---@field BurstAttackProbability float
---@field BurstAttackNumberMin int32
---@field BurstAttackNumberMax int32
---@field WeaponStopFireTimeMin float
---@field WeaponStopFireTimeMax float
---@field AfterEquipCooldownTime float
---@field SpecialtyItemUseTimeLimit float
---@field AfterSpecialtyItemUsedTimeLimit float
---@field bWeaponMovementFire boolean
FHDAISpecificItemTypeAttackData = {}



---@class FHDAISuppressionSource
---@field OwnerChar ADFBaseCharacter
---@field Location FVector
FHDAISuppressionSource = {}



---@class FHDCharacterVariationData : FDFCharacterVariationData
FHDCharacterVariationData = {}


---@class FHDFilterRuleParams
---@field Behavior EHDFilterRuleBehavior
---@field ComparisonOp EHDFilterRuleComparisonOp
FHDFilterRuleParams = {}



---@class FHDGameRoundEndEventDetails
---@field ElapsedTime int32
---@field WinningTeam EHDTeam
---@field BluforTickets int32
---@field OpforTickets int32
FHDGameRoundEndEventDetails = {}



---@class FHDItemEntry
---@field ItemClass TSubclassOf<AHDBaseWeapon>
---@field SlotNum int32
FHDItemEntry = {}



---@class FHDPlatoonAttributes
---@field ID int32
---@field TeamId uint8
---@field DisplayName FText
FHDPlatoonAttributes = {}



---@class FHDPlatoonCreationParams
---@field Info UHDPlatoonInfo
---@field OwnerTeam AHDTeamState
FHDPlatoonCreationParams = {}



---@class FHDPrimaryAssetSearchPath
---@field AssetType EHDPrimaryAssetType
---@field Directory FString
FHDPrimaryAssetSearchPath = {}



---@class FHDServerInfo
---@field GameVersion FString
---@field ServerName FString
---@field ServerFlags FHDServerInfoFlags
---@field ModName FString
---@field GameMode FString
---@field MapName FString
---@field MapId FPrimaryAssetId
---@field MapBannerImg UTexture2D
---@field MapThumbnailImg UTexture2D
---@field CurrentPlayers int32
---@field MaxPlayers int32
---@field Ping int32
FHDServerInfo = {}



---@class FHDServerInfoFlags
---@field bPasswordProtected boolean
---@field WhitelistType EDFPlayerWhitelistType
---@field bSupportersOnlyWhitelist boolean
---@field bUtilizesUGC boolean
FHDServerInfoFlags = {}



---@class FHDSquadAssignmentInfo
---@field SquadState AHDSquadState
---@field SquadAssignmentTime float
FHDSquadAssignmentInfo = {}



---@class FHDSquadCreationParams
---@field DisplayName FText
---@field OwnerPlatoon AHDPlatoonState
---@field SquadLeader AHDPlayerState
---@field bLocked boolean
FHDSquadCreationParams = {}



---@class FHDUIWeaponAmmoState
---@field TotalFreeAmmo int32
---@field NumFreeAmmoClips int32
---@field CurrentClipAmmo int32
---@field CurrentClipMaxAmmo int32
---@field CurrentClipAmmoClass TSubclassOf<ADFBaseAmmoClip>
FHDUIWeaponAmmoState = {}



---@class FKillDeathRulesetSettings
---@field TicketsGainedForKill int32
---@field TicketsLostOnKill int32
---@field TicketsLostOnTeamKill int32
---@field TicketsLostOnDeath int32
---@field TicketsLostOnSuicide int32
---@field PointsForKill float
---@field PointsForAssist float
---@field PointsForTeamKill float
---@field PointsForDeath float
---@field PointsForSuicide float
FKillDeathRulesetSettings = {}



---@class FPTTKeyState
FPTTKeyState = {}


---@class FTicketBleedRulesetSettings
---@field TicketBleed int32
---@field MercyTicketBleed int32
---@field bAllowMercyTicketBleed boolean
FTicketBleedRulesetSettings = {}



---@class FUniqueNetIdVoipWrapper
FUniqueNetIdVoipWrapper = {}


---@class UDeployMenu : UDFBaseMenu
UDeployMenu = {}


---@class UDeployMenu_ClassSelectionListing : UUserWidget
UDeployMenu_ClassSelectionListing = {}


---@class UDeployMenu_ClassSelectionPanel : UUserWidget
UDeployMenu_ClassSelectionPanel = {}


---@class UDeployMenu_PlatoonSquadListBase : UUserWidget
---@field PlatoonData UPlatoonListEntry
---@field bSortSquads boolean
---@field CurrentSquads TArray<USquadListEntry>
UDeployMenu_PlatoonSquadListBase = {}

---@param SourcePlatoon AHDPlatoonState
---@param SquadToBeRemoved AHDSquadState
function UDeployMenu_PlatoonSquadListBase:SquadPreRemoveFromPlatoon(SourcePlatoon, SquadToBeRemoved) end
---@param SourcePlatoon AHDPlatoonState
---@param NewSquad AHDSquadState
function UDeployMenu_PlatoonSquadListBase:SquadAddedToPlatoon(SourcePlatoon, NewSquad) end
---@param InPlatoonData UPlatoonListEntry
function UDeployMenu_PlatoonSquadListBase:SetupPlatoon(InPlatoonData) end
function UDeployMenu_PlatoonSquadListBase:RepopulatePlatoon() end
function UDeployMenu_PlatoonSquadListBase:OnPlatoonSet() end
---@return AHDPlatoonState
function UDeployMenu_PlatoonSquadListBase:GetPlatoonStateFromData() end
---@param SquadData USquadListEntry
function UDeployMenu_PlatoonSquadListBase:GenerateSquad(SquadData) end
---@param RemovedSquadData USquadListEntry
---@param RemovedSquadIdx int32
function UDeployMenu_PlatoonSquadListBase:DeconstructSquad(RemovedSquadData, RemovedSquadIdx) end


---@class UDeployMenu_SpawnMapView : UUserWidget
UDeployMenu_SpawnMapView = {}


---@class UDeployMenu_SpawnMinimap : UDFMinimap
UDeployMenu_SpawnMinimap = {}


---@class UDeployMenu_SquadListBase : UUserWidget
---@field SquadData USquadListEntry
---@field bSortSquadMembers boolean
---@field CurrentSquadMembers TArray<USquadMemberInfo>
---@field MemberEntryWidgetsPendingRemoval TArray<USquadMemberInfo>
UDeployMenu_SquadListBase = {}

---@param SourceSquad AHDSquadState
---@param NewName FText
---@param PrevName FText
function UDeployMenu_SquadListBase:SquadNameChanged(SourceSquad, NewName, PrevName) end
---@param SourceSquad AHDSquadState
---@param bNewLocked boolean
function UDeployMenu_SquadListBase:SquadLockStateUpdated(SourceSquad, bNewLocked) end
---@param SourceSquad AHDSquadState
---@param NewLeaderPS AHDPlayerState
---@param PrevLeaderPS AHDPlayerState
function UDeployMenu_SquadListBase:SquadLeaderChanged(SourceSquad, NewLeaderPS, PrevLeaderPS) end
---@param InSquadData USquadListEntry
function UDeployMenu_SquadListBase:SetupSquad(InSquadData) end
function UDeployMenu_SquadListBase:RepopulateSquad() end
function UDeployMenu_SquadListBase:OnSquadSet() end
---@param NewSquadName FText
---@param PreviousSquadName FText
function UDeployMenu_SquadListBase:OnSquadNameUpdated(NewSquadName, PreviousSquadName) end
---@param bNewLockedState boolean
function UDeployMenu_SquadListBase:OnSquadLockStateUpdated(bNewLockedState) end
---@param NewLeaderPS AHDPlayerState
---@param PrevLeaderPS AHDPlayerState
function UDeployMenu_SquadListBase:OnSquadLeaderUpdated(NewLeaderPS, PrevLeaderPS) end
function UDeployMenu_SquadListBase:OnListRefresh() end
---@param SourceSquad AHDSquadState
---@param MemberPS AHDPlayerState
---@param MemberSQInfo FHDSquadAssignmentInfo
function UDeployMenu_SquadListBase:MemberSquadInfoUpdated(SourceSquad, MemberPS, MemberSQInfo) end
---@param SourceSquad AHDSquadState
---@param MemberPSToBeRemoved AHDPlayerState
function UDeployMenu_SquadListBase:MemberPreRemoveFromSquad(SourceSquad, MemberPSToBeRemoved) end
---@param SourceSquad AHDSquadState
---@param NewMemberPS AHDPlayerState
function UDeployMenu_SquadListBase:MemberAddedToSquad(SourceSquad, NewMemberPS) end
---@return AHDSquadState
function UDeployMenu_SquadListBase:GetSquadStateFromData() end
---@return AHDPlatoonState
function UDeployMenu_SquadListBase:GetParentPlatoonStateFromData() end
---@param MemberData USquadMemberInfo
function UDeployMenu_SquadListBase:GenerateSquadMember(MemberData) end
---@param RemovedMemberData USquadMemberInfo
function UDeployMenu_SquadListBase:DeconstructSquadMember(RemovedMemberData) end


---@class UDeployMenu_SquadMemberListingBase : UUserWidget
---@field MemberData USquadMemberInfo
UDeployMenu_SquadMemberListingBase = {}

---@param InMemberData USquadMemberInfo
function UDeployMenu_SquadMemberListingBase:SetupMember(InMemberData) end
function UDeployMenu_SquadMemberListingBase:OnMemberSet() end
---@param NewPlayerName FString
function UDeployMenu_SquadMemberListingBase:OnMemberPlayerNameUpdated(NewPlayerName) end
---@param PlayerState APlayerState
---@param NewPlayerName FString
function UDeployMenu_SquadMemberListingBase:MemberPlayerNameChanged(PlayerState, NewPlayerName) end
---@return AHDPlayerState
function UDeployMenu_SquadMemberListingBase:GetPlayerStateFromData() end
---@return AHDSquadState
function UDeployMenu_SquadMemberListingBase:GetParentSquadStateFromData() end
---@return AHDPlatoonState
function UDeployMenu_SquadMemberListingBase:GetParentPlatoonStateFromData() end


---@class UDeployMenu_SquadSelectionWidgetBase : UUserWidget
---@field PlatoonTeamState AHDTeamState
---@field bSortPlatoons boolean
---@field CurrentPlatoons TArray<UPlatoonListEntry>
UDeployMenu_SquadSelectionWidgetBase = {}

---@param InPlatoonTeamState AHDTeamState
function UDeployMenu_SquadSelectionWidgetBase:SetupSquadSelection(InPlatoonTeamState) end
function UDeployMenu_SquadSelectionWidgetBase:RepopulateSquadSelection() end
---@param SourceTeam AHDTeamState
---@param PlatoonToBeRemoved AHDPlatoonState
function UDeployMenu_SquadSelectionWidgetBase:PlatoonPreRemoveFromTeam(SourceTeam, PlatoonToBeRemoved) end
---@param SourceTeam AHDTeamState
---@param NewPlatoon AHDPlatoonState
function UDeployMenu_SquadSelectionWidgetBase:PlatoonAddedToTeam(SourceTeam, NewPlatoon) end
function UDeployMenu_SquadSelectionWidgetBase:OnSquadSelectionSet() end
---@param PlatoonData UPlatoonListEntry
function UDeployMenu_SquadSelectionWidgetBase:GeneratePlatoon(PlatoonData) end
---@param RemovedPlatoonData UPlatoonListEntry
---@param RemovedPlatoonIdx int32
function UDeployMenu_SquadSelectionWidgetBase:DeconstructPlatoon(RemovedPlatoonData, RemovedPlatoonIdx) end


---@class UHDAIAimingHandler : UHDAIHandlerBase
---@field CombatHandler UHDAICombatHandler
---@field NavigationHandler UHDAINavigationHandler
---@field BehaviorHandler UHDAIBehaviorHandler
---@field VocalHandler UHDAIVocalHandler
---@field PerceptionComponent UAIPerceptionComponent
---@field AimingTargetPoint FVector
---@field CurrentTargetLocation FVector
---@field CurrentTargetStimulusStrength float
---@field CurrentTargetStimulusAge float
---@field RefreshTargetTime float
---@field RefreshTargetRate float
---@field NewTargetStimulusStrengthThreshold float
---@field AimingAtTargetAngleThreshold float
---@field bAimingAtTarget boolean
---@field AimingSpeed float
---@field AimingSpeedNear float
---@field AimingSpeedFar float
---@field AimingSpeedAngleNear float
---@field AimingSpeedAngleFar float
---@field AimingSpeedMultiplier float
---@field RotationRate FRotator
---@field DefaultRotationRate FRotator
---@field OnContactStateChanged FHDAIAimingHandlerOnContactStateChanged
---@field WeaponAimingDistance float
---@field WeaponMinConeOfFireAngleDegrees float
---@field WeaponMaxConeOfFireAngleDegrees float
---@field bEnableNoEnemyLookAround boolean
---@field NoEnemyFocalPoint FVector
---@field NextFocalPointTime float
---@field NextFocalPointIntervalMin float
---@field NextFocalPointIntervalMax float
---@field NextFocalPointAngleMin float
---@field NextFocalPointAngleMax float
---@field NextFocalPointDistanceMin float
---@field NextFocalPointDistanceMax float
---@field ProjectileAimingTossVelocity FVector
---@field ProjectileAimingTime float
---@field ProjectileAimingRate float
---@field ProjectileAimingRateVariation float
UHDAIAimingHandler = {}

---@param TossVelocity FVector
---@param StartLocation FVector
---@param EndLocation FVector
---@param TossSpeed float
---@return boolean
function UHDAIAimingHandler:SuggestProjectileVelocity(TossVelocity, StartLocation, EndLocation, TossSpeed) end
---@return boolean
function UHDAIAimingHandler:ShouldChangeNoEnemyFocalPoint() end
---@param bInEnableNoEnemyLookAround boolean
function UHDAIAimingHandler:SetEnableNoEnemyLookAround(bInEnableNoEnemyLookAround) end
function UHDAIAimingHandler:MakeNoEnemyFocalPoint() end
---@param ActorToCheck AActor
---@return boolean
function UHDAIAimingHandler:IsCandidateTarget(ActorToCheck) end
---@return boolean
function UHDAIAimingHandler:IsAimingAtTarget() end
---@return boolean
function UHDAIAimingHandler:HasValidCustomAimingTarget() end
---@return FVector
function UHDAIAimingHandler:GetNoEnemyFocalPoint() end
---@param OldTargetStrength float
---@param NewTargetStrength float
---@return boolean
function UHDAIAimingHandler:GetIsNewTargetMoreRelevant(OldTargetStrength, NewTargetStrength) end
---@return boolean
function UHDAIAimingHandler:GetEnableNoEnemyLookAround() end
---@param InActor AActor
---@param OutLocation FVector
---@param OutStrength float
---@param OutAge float
function UHDAIAimingHandler:GetActorStimulusData(InActor, OutLocation, OutStrength, OutAge) end
---@param SenseToUse TSubclassOf<UAISense>
function UHDAIAimingHandler:EstablishNewTargetFromPerception(SenseToUse) end
---@param TargetActor AActor
---@param Stimulus FAIStimulus
---@return boolean
function UHDAIAimingHandler:CheckForTarget(TargetActor, Stimulus) end
function UHDAIAimingHandler:CalcAimingDirection() end
function UHDAIAimingHandler:AimAtCurrentTarget() end


---@class UHDAIBehDecision_MoveCloser : UHDAIBehaviorDecisionBase
UHDAIBehDecision_MoveCloser = {}


---@class UHDAIBehState_Attacking : UHDAIBehaviorStateBase
---@field bAttackingTimerStarted boolean
---@field AttackingEndTime float
---@field AttackingTimeMin float
---@field AttackingTimeMax float
---@field CombatState UHDAIBehState_BasicAASCombat
UHDAIBehState_Attacking = {}

function UHDAIBehState_Attacking:HandleAttacking() end


---@class UHDAIBehState_BasicAAS : UHDAIBehaviorStateBase
---@field CombatHandler UHDAICombatHandler
---@field BehaviorHandler UHDAIBehaviorHandler
---@field GroupHandler UHDAIGroupBehaviorHandler
---@field CaptureHandler UHDAICaptureHandler
---@field CombatState UHDAIBehaviorStateBase
---@field CaptureState UHDAIBehaviorStateBase
---@field IdleState UHDAIBehaviorStateBase
---@field CombatStateClass TSubclassOf<UHDAIBehaviorStateBase>
---@field CaptureStateClass TSubclassOf<UHDAIBehaviorStateBase>
---@field IdleStateClass TSubclassOf<UHDAIBehaviorStateBase>
---@field MinDistanceToStartCombatState float
UHDAIBehState_BasicAAS = {}

---@param InCombatTarget FVector
---@param InNavigationAnchor FVector
function UHDAIBehState_BasicAAS:StartCombatState(InCombatTarget, InNavigationAnchor) end
---@param InMoveTarget FVector
function UHDAIBehState_BasicAAS:StartCombatRepositioning(InMoveTarget) end
function UHDAIBehState_BasicAAS:StartCaptureState() end
function UHDAIBehState_BasicAAS:SelectBehaviorState() end


---@class UHDAIBehState_BasicAASCapture : UHDAIBehaviorStateBase
---@field NavigationHandler UHDAINavigationHandler
---@field CaptureHandler UHDAICaptureHandler
---@field GroupHandler UHDAIGroupBehaviorHandler
---@field bIsSprinting boolean
---@field SprintTimeMin float
---@field SprintTimeMax float
---@field SprintTimeEnd float
---@field SprintStaminaThresholdMin float
---@field SprintStaminaThresholdMax float
---@field SprintStaminaThreshold float
---@field SprintStaminaMin float
---@field SprintLookAroundTimeMin float
---@field SprintLookAroundTimeMax float
---@field SprintLookAroundTimeEnd float
UHDAIBehState_BasicAASCapture = {}

function UHDAIBehState_BasicAASCapture:StopSprinting() end
function UHDAIBehState_BasicAASCapture:StartSprinting() end
function UHDAIBehState_BasicAASCapture:StartCapturingTheObjective() end
function UHDAIBehState_BasicAASCapture:PatrolAtObjective() end
function UHDAIBehState_BasicAASCapture:LoneWolfDecisionMaking() end
function UHDAIBehState_BasicAASCapture:HandleSprinting() end
function UHDAIBehState_BasicAASCapture:GroupMemberDecisionMaking() end
function UHDAIBehState_BasicAASCapture:GroupLeaderDecisionMaking() end
function UHDAIBehState_BasicAASCapture:AdvanceToObjective() end


---@class UHDAIBehState_BasicAASCombat : UHDAIBehaviorStateBase
---@field CombatHandler UHDAICombatHandler
---@field BehaviorHandler UHDAIBehaviorHandler
---@field GroupHandler UHDAIGroupBehaviorHandler
---@field TargetLocation FVector
---@field AttackSpot FVector
---@field SafeSpot FVector
---@field bSafeSpotIsOpen boolean
---@field bCurrentLocationIsSafe boolean
---@field MinDistanceBetweenAttackAndSafeSpot float
---@field ExitCombatStateTimerMin float
---@field ExitCombatStateTimerMax float
---@field TimeToExitCombatState float
---@field FindAttackSpotState UHDAIBehaviorStateBase
---@field FindSafeSpotState UHDAIBehaviorStateBase
---@field AttackingState UHDAIBehaviorStateBase
---@field SafespottingState UHDAIBehaviorStateBase
---@field RepositionState UHDAIBehaviorStateBase
---@field FindSafeSpotClass TSubclassOf<UHDAIBehaviorStateBase>
---@field FindAttackSpotClass TSubclassOf<UHDAIBehaviorStateBase>
---@field AttackingClass TSubclassOf<UHDAIBehaviorStateBase>
---@field SafespottingClass TSubclassOf<UHDAIBehaviorStateBase>
---@field RepositionClass TSubclassOf<UHDAIBehaviorStateBase>
---@field CombatRepositioningDecisions TArray<UHDAIBehaviorDecisionBase>
UHDAIBehState_BasicAASCombat = {}

function UHDAIBehState_BasicAASCombat:StartSafespotting() end
---@param InMoveTarget FVector
function UHDAIBehState_BasicAASCombat:StartCombatRepositioning(InMoveTarget) end
function UHDAIBehState_BasicAASCombat:StartAttacking() end
function UHDAIBehState_BasicAASCombat:ProcessCombatLocations() end
---@param InSafeSpot FVector
---@return boolean
function UHDAIBehState_BasicAASCombat:IsValidSafeSpot(InSafeSpot) end
---@param InAttackSpot FVector
---@return boolean
function UHDAIBehState_BasicAASCombat:IsValidAttackSpot(InAttackSpot) end
---@return boolean
function UHDAIBehState_BasicAASCombat:HandleExitCombatStateTimer() end
function UHDAIBehState_BasicAASCombat:HandleCombatRepositioning() end
function UHDAIBehState_BasicAASCombat:FindSafeSpot() end
function UHDAIBehState_BasicAASCombat:FindAttackSpot() end


---@class UHDAIBehState_BasicAASIdle : UHDAIBehaviorStateBase
UHDAIBehState_BasicAASIdle = {}


---@class UHDAIBehState_FindAttackSpot : UHDAIBehaviorStateBase
---@field NavigationHandler UHDAINavigationHandler
---@field FindAttackSpotStartLocation FVector
---@field FindAttackSpotEndLocation FVector
---@field InitialDirection FVector
---@field InitialDirectionRandomizationAngle float
---@field FindAttackSpotMaxDistanceMin float
---@field FindAttackSpotMaxDistanceMax float
---@field NumOfRandomAttemptsRemaining int32
---@field MaxNumOfRandomAttempts int32
---@field RandomAttemptNavRadius float
---@field bIsAtLocation boolean
---@field WaitEndTime float
---@field WaitTimeMin float
---@field WaitTimeMax float
---@field bAutoUpdateSafeSpot boolean
---@field CombatState UHDAIBehState_BasicAASCombat
UHDAIBehState_FindAttackSpot = {}



---@class UHDAIBehState_FindSafeSpot : UHDAIBehaviorStateBase
---@field NavigationHandler UHDAINavigationHandler
---@field CombatHandler UHDAICombatHandler
---@field AimingHandler UHDAIAimingHandler
---@field OwnerChar AHDPlayerCharacter
---@field FindSafeSpotStartLocation FVector
---@field FindSafeSpotEndLocation FVector
---@field InitialDirection FVector
---@field InitialDirectionRandomizationAngle float
---@field FindSafeSpotMaxDistanceMin float
---@field FindSafeSpotMaxDistanceMax float
---@field NumOfRandomAttemptsRemaining int32
---@field MaxNumOfRandomAttempts int32
---@field RandomAttemptNavRadius float
---@field bIsAtLocation boolean
---@field WaitEndTime float
---@field WaitTimeMin float
---@field WaitTimeMax float
---@field bAutoUpdateAttackSpot boolean
---@field bSprintWhileFindingSafeSpot boolean
---@field CombatState UHDAIBehState_BasicAASCombat
UHDAIBehState_FindSafeSpot = {}



---@class UHDAIBehState_Reposition : UHDAIBehaviorStateBase
---@field MoveDestination FVector
---@field CombatState UHDAIBehState_BasicAASCombat
---@field bIsSprinting boolean
---@field SprintTimeMin float
---@field SprintTimeMax float
---@field SprintTimeEnd float
---@field SprintStaminaThresholdMin float
---@field SprintStaminaThresholdMax float
---@field SprintStaminaThreshold float
---@field SprintStaminaMin float
---@field SprintLookAroundTimeMin float
---@field SprintLookAroundTimeMax float
---@field SprintLookAroundTimeEnd float
UHDAIBehState_Reposition = {}

function UHDAIBehState_Reposition:StopSprinting() end
function UHDAIBehState_Reposition:StartSprinting() end
function UHDAIBehState_Reposition:HandleSprinting() end


---@class UHDAIBehState_SafeSpotting : UHDAIBehaviorStateBase
---@field bSafespottingTimerStarted boolean
---@field SafespottingEndTime float
---@field SafespottingTimeMin float
---@field SafespottingTimeMax float
---@field CombatState UHDAIBehState_BasicAASCombat
UHDAIBehState_SafeSpotting = {}

function UHDAIBehState_SafeSpotting:HandleSafeSpotting() end


---@class UHDAIBehaviorDecisionBase : UObject
---@field Controller AHDAIController
---@field GOAPComponent UHDGOAPComponent
UHDAIBehaviorDecisionBase = {}



---@class UHDAIBehaviorHandler : UHDAIHandlerBase
---@field NavigationHandler UHDAINavigationHandler
---@field CombatHandler UHDAICombatHandler
---@field AimingHandler UHDAIAimingHandler
---@field VocalHandler UHDAIVocalHandler
---@field CaptureHandler UHDAICaptureHandler
---@field GroupHandler UHDAIGroupBehaviorHandler
---@field SuppressionThreatLevel float
---@field SuppressionLevelPerShot float
---@field SuppressionThreatThreshold float
---@field SuppressionFalloff float
---@field SuppressionTime float
---@field SuppressionFallingOffDelay float
---@field BeingHitThreatLevel float
---@field BeingHitThreatThreshold float
---@field BeingHitFalloff float
---@field BeingHitThreatLevelSpikeProbability float
---@field BeingHitThreatLevelSpikeAmount float
---@field BeingHitFallingOffDelay float
---@field BeingHitTime float
---@field CurrentBehaviorState UHDAIBehaviorStateBase
---@field DefaultBehaviorStateClass TSubclassOf<UHDAIBehaviorStateBase>
---@field MinDistanceToStartCombatState float
---@field bIsInCombat boolean
UHDAIBehaviorHandler = {}

---@param DeltaTime float
function UHDAIBehaviorHandler:UpdateCurrentBehaviorState(DeltaTime) end
function UHDAIBehaviorHandler:StartMoveToObjectiveBehaviorState() end
---@param InMoveTarget FVector
function UHDAIBehaviorHandler:StartCombatRepositioning(InMoveTarget) end
---@param InCombatTarget FVector
---@param InNavigationAnchor FVector
function UHDAIBehaviorHandler:StartCombatBehaviorState(InCombatTarget, InNavigationAnchor) end
function UHDAIBehaviorHandler:ReceiveSuppression() end
function UHDAIBehaviorHandler:ReceiveHitDamage() end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UHDAIBehaviorHandler:OnOwnerDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param DeltaTime float
function UHDAIBehaviorHandler:HandleBehaviorStates(DeltaTime) end
---@return boolean
function UHDAIBehaviorHandler:GetIsUnderSuppression() end
---@return boolean
function UHDAIBehaviorHandler:GetIsBeingHit() end
function UHDAIBehaviorHandler:ExitCurrentBehaviorState() end
function UHDAIBehaviorHandler:EnterCurrentBehaviorState() end
function UHDAIBehaviorHandler:CalcThreatLevels() end


---@class UHDAIBehaviorStateBase : UObject
---@field Controller AHDAIController
---@field GOAPComponent UHDGOAPComponent
---@field bCanEverTick boolean
---@field StateUpdateTime float
---@field StateUpdateRate float
---@field CurrentSubState UHDAIBehaviorStateBase
---@field CurrentParentState UHDAIBehaviorStateBase
UHDAIBehaviorStateBase = {}

---@param DeltaTime float
function UHDAIBehaviorStateBase:UpdateState(DeltaTime) end
---@param DeltaTime float
---@return boolean
function UHDAIBehaviorStateBase:UpdateCurrentSubState(DeltaTime) end
---@param InNewState UHDAIBehaviorStateBase
---@return boolean
function UHDAIBehaviorStateBase:SwitchToSubState(InNewState) end
---@param InTimerInterval float
function UHDAIBehaviorStateBase:ResetUpdateTimer(InTimerInterval) end
---@param InController AHDAIController
---@param InGOAPComponent UHDGOAPComponent
---@param InParentState UHDAIBehaviorStateBase
function UHDAIBehaviorStateBase:Init(InController, InGOAPComponent, InParentState) end
function UHDAIBehaviorStateBase:ExitState() end
---@return boolean
function UHDAIBehaviorStateBase:ExitCurrentSubState() end
function UHDAIBehaviorStateBase:EnterState() end
---@param DeltaTime float
---@return boolean
function UHDAIBehaviorStateBase:CanUpdateState(DeltaTime) end
---@return boolean
function UHDAIBehaviorStateBase:CanExitState() end
---@return boolean
function UHDAIBehaviorStateBase:CanEnterState() end


---@class UHDAICaptureHandler : UHDAIHandlerBase
---@field CurrentCP AHDBaseCapturePoint
---@field CurrentCaptureMode EHDAICaptureMode
---@field AICaptureModePreference float
---@field TotalNumberOfCapturePoints int32
UHDAICaptureHandler = {}

---@return boolean
function UHDAICaptureHandler:ShouldEstablishNewControlPoint() end
---@param InCurrentCP AHDBaseCapturePoint
function UHDAICaptureHandler:SetCurrentCP(InCurrentCP) end
---@param NewCaptureMode EHDAICaptureMode
function UHDAICaptureHandler:SetCurrentCaptureMode(NewCaptureMode) end
---@return int32
function UHDAICaptureHandler:GetTotalNumberOfCapturePoints() end
---@param InCapturePoint AActor
---@return AActor
function UHDAICaptureHandler:GetStartSpotClosestToControlPoint(InCapturePoint) end
---@return FVector
function UHDAICaptureHandler:GetCurrentCPLocation() end
---@param OutFoundCP AHDBaseCapturePoint
---@return boolean
function UHDAICaptureHandler:FindControlPointToCapture(OutFoundCP) end
---@param CPs TArray<AHDBaseCapturePoint>
---@return AHDBaseCapturePoint
function UHDAICaptureHandler:FindControlPointRandom(CPs) end
---@param CPs TArray<AHDBaseCapturePoint>
---@return AHDBaseCapturePoint
function UHDAICaptureHandler:FindControlPointClosestToPawn(CPs) end
---@param InCaptureMode EHDAICaptureMode
---@return TArray<AHDBaseCapturePoint>
function UHDAICaptureHandler:FindAvailableControlPointsOfTypeV3(InCaptureMode) end
---@param InCaptureMode EHDAICaptureMode
---@return TArray<AHDBaseCapturePoint>
function UHDAICaptureHandler:FindAvailableControlPointsOfTypeV2(InCaptureMode) end
---@param InCaptureMode EHDAICaptureMode
---@return TArray<AHDBaseCapturePoint>
function UHDAICaptureHandler:FindAvailableControlPointsOfTypeV1(InCaptureMode) end
---@param InCaptureMode EHDAICaptureMode
---@return TArray<AHDBaseCapturePoint>
function UHDAICaptureHandler:FindAvailableControlPointsOfType(InCaptureMode) end
---@return boolean
function UHDAICaptureHandler:EstablishNewControlPoint() end


---@class UHDAICombatHandler : UHDAIHandlerBase
---@field BehaviorHandler UHDAIBehaviorHandler
---@field VocalHandler UHDAIVocalHandler
---@field Enemy AActor
---@field CombatTargetLocation FVector
---@field CustomCombatTargetLocation FVector
---@field CombatTargetLocationType EHDAICombatTargetType
---@field bDoNotAttack boolean
---@field bWeaponAutoReload boolean
---@field bWeaponMovementFire boolean
---@field bWeaponHasAmmo boolean
---@field WeaponNextFireTime float
---@field AttackRateMin float
---@field AttackRateMax float
---@field BurstAttackProbability float
---@field BurstAttackNumberMin int32
---@field BurstAttackNumberMax int32
---@field CurrentBurstAttackNumber int32
---@field WeaponStopFireTime float
---@field WeaponStopFireTimeMin float
---@field WeaponStopFireTimeMax float
---@field bWeaponInfiniteAmmo boolean
---@field bWeaponInfiniteClipAmmo boolean
---@field bIgnoreFriendlySuppression boolean
---@field bIgnoreFriendlyHits boolean
---@field OnReload FHDAICombatHandlerOnReload
---@field OnReceiveSuppression FHDAICombatHandlerOnReceiveSuppression
---@field OnReceiveHitDamage FHDAICombatHandlerOnReceiveHitDamage
---@field SuppressionSources TArray<FHDAISuppressionSource>
---@field MaxNumSuppressionSources int32
---@field SuppressionSourceTimeThreshold float
---@field SuppressionSourceUpdateRate float
---@field SuppressionSourceUpdateTime float
---@field CurrentKit UHDKit
---@field CurrentSpecificItemType ESpecificItemType
---@field EquipmentReferences TArray<FHDAIItemData>
---@field EquipmentHandlingTime float
---@field EquipmentHandlingRate float
---@field EquipmentHandlingRateVariation float
---@field bSpecialtyItemInUse boolean
---@field bProjectileWeaponInUse boolean
---@field AfterEquipCooldownTime float
---@field SpecialtyItemUseTimeLimit float
---@field AfterSpecialtyItemUsedTimeLimit float
---@field ItemAttackData TMap<ESpecificItemType, FHDAISpecificItemTypeAttackData>
---@field DefaultItemAttackData FHDAISpecificItemTypeAttackData
---@field GrenadeLauncherRangeMin float
---@field GrenadeLauncherRangeMax float
---@field GrenadeLauncherChance float
---@field RocketLauncherRangeMin float
---@field RocketLauncherRangeMax float
---@field RocketLauncherChance float
---@field FragGrenadeRangeMin float
---@field FragGrenadeRangeMax float
---@field FragGrenadeChance float
---@field SmokeGrenadeRangeMin float
---@field SmokeGrenadeChance float
UHDAICombatHandler = {}

function UHDAICombatHandler:UpdateSuppressionSources() end
function UHDAICombatHandler:UpdateEquipmentHandling() end
function UHDAICombatHandler:UpdateAttackParameters() end
function UHDAICombatHandler:StopUsingSpecialtyItem() end
function UHDAICombatHandler:StopAttack() end
function UHDAICombatHandler:StartAttack() end
function UHDAICombatHandler:SetupEquipmentReferences() end
function UHDAICombatHandler:SetNextAttackTime() end
---@param InAttackData FHDAISpecificItemTypeAttackData
function UHDAICombatHandler:SetItemAttackParameters(InAttackData) end
---@param NewEnemy AActor
function UHDAICombatHandler:SetEnemy(NewEnemy) end
---@param InWeapon AHDBaseWeapon
function UHDAICombatHandler:Reload(InWeapon) end
---@param OtherProjectile ADFBaseProjectile
---@param Pickup ADFBasePickup
function UHDAICombatHandler:ReceiveSuppression(OtherProjectile, Pickup) end
---@param OtherProjectile ADFBaseProjectile
---@param Pickup ADFBasePickup
function UHDAICombatHandler:ReceiveHitDamage(OtherProjectile, Pickup) end
function UHDAICombatHandler:PauseAttack() end
---@return boolean
function UHDAICombatHandler:IsFiring() end
---@param bAliveCheck boolean
---@return boolean
function UHDAICombatHandler:HasValidEnemy(bAliveCheck) end
---@return boolean
function UHDAICombatHandler:HasValidCustomCombatTargetLocation() end
---@return boolean
function UHDAICombatHandler:HasValidCombatTargetLocation() end
---@return boolean
function UHDAICombatHandler:HasAmmoLoaded() end
---@return FVector
function UHDAICombatHandler:GetOldestSuppressionSource() end
---@return FVector
function UHDAICombatHandler:GetMostRelevantSuppressionSource() end
function UHDAICombatHandler:ClearCustomCombatTargetLocation() end
function UHDAICombatHandler:ClearCombatTargetLocation() end
---@param bCheckFireTime boolean
---@param bIgnoreAmmoReloadCheck boolean
---@return boolean
function UHDAICombatHandler:CanAttackEnemy(bCheckFireTime, bIgnoreAmmoReloadCheck) end
---@param InSuppressionSource FHDAISuppressionSource
function UHDAICombatHandler:AddSuppressionSource(InSuppressionSource) end


---@class UHDAIGroupBehaviorHandler : UHDAIHandlerBase
---@field NavigationHandler UHDAINavigationHandler
---@field CaptureHandler UHDAICaptureHandler
---@field PlayerState AHDPlayerState
---@field bIsGroupLeader boolean
---@field bIsGroupMember boolean
---@field bGroupDataIsSet boolean
---@field bGroupDataIsSynchronized boolean
---@field bLeaderIsHuman boolean
---@field bIsRespawned boolean
---@field NumValidGroupMembers int32
---@field NumGroupMembersOnPoint int32
---@field bWaitingForGroupMembers boolean
---@field WaitingForMembersStartTime float
---@field bIsGroupWaiting boolean
---@field GroupWaitTimeDuration float
---@field GroupWaitTimeEnd float
---@field WaitingTimePerGroupMember float
---@field WaitingRadiusMultiplier float
---@field MinNumGroupMembersOnPoint int32
---@field AdvanceWaitTimeDurationMin float
---@field AdvanceWaitTimeDurationMax float
---@field PatrolWaitTimeDurationMin float
---@field PatrolWaitTimeDurationMax float
---@field FormationIndex int32
---@field FormationOffset FVector
---@field GroupFormationRadius float
---@field GroupFormationSlotRadius float
---@field GroupFormationSlotDistance float
---@field FormationSlots TArray<FVector>
---@field FollowHumanLeaderTime float
---@field FollowHumanLeaderPatrolTime float
---@field FollowHumanLeaderLastKnownLocation FVector
---@field bEnableFollowHumanLeader boolean
---@field FollowHumanLeaderInterval float
---@field FollowHumanLeaderVelocityMultiplier float
---@field FollowHumanLeaderAcceptanceRadius float
---@field FollowHumanLeaderRange float
---@field FollowHumanLeaderPatrolTimeThreshold float
---@field NumGroupMembersInCombat int32
UHDAIGroupBehaviorHandler = {}

---@param InGroupData FHDAIGroupData
function UHDAIGroupBehaviorHandler:SyncGroupData(InGroupData) end
function UHDAIGroupBehaviorHandler:StartGroupWaitTime() end
function UHDAIGroupBehaviorHandler:SetupGroupData() end
function UHDAIGroupBehaviorHandler:SetGroupParams() end
---@return boolean
function UHDAIGroupBehaviorHandler:RequestGroupDataSync() end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UHDAIGroupBehaviorHandler:OnOwnerDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@return boolean
function UHDAIGroupBehaviorHandler:IsGroupWaitTimeOver() end
---@param InCombatTarget FVector
---@param InNavigationAnchor FVector
function UHDAIGroupBehaviorHandler:InformLeaderOnContact(InCombatTarget, InNavigationAnchor) end
function UHDAIGroupBehaviorHandler:InformGroupOnLostContact() end
---@param InCombatTarget FVector
---@param InNavigationAnchor FVector
function UHDAIGroupBehaviorHandler:InformGroupOnContact(InCombatTarget, InNavigationAnchor) end
---@return int32
function UHDAIGroupBehaviorHandler:GetNumValidGroupMembers() end
---@return int32
function UHDAIGroupBehaviorHandler:GetNumGroupMembersInCombat() end
---@return TArray<AHDAIController>
function UHDAIGroupBehaviorHandler:GetGroupMembers() end
---@return AHDPlayerState
function UHDAIGroupBehaviorHandler:GetGroupLeader() end
---@return FHDAIGroupData
function UHDAIGroupBehaviorHandler:GetGroupData() end
function UHDAIGroupBehaviorHandler:FollowHumanLeader() end
function UHDAIGroupBehaviorHandler:CountGroupMembers() end
function UHDAIGroupBehaviorHandler:BroadcastGroupData() end
---@return boolean
function UHDAIGroupBehaviorHandler:AllGroupMembersAreOnPoint() end


---@class UHDAIHandlerBase : UObject
---@field Controller AHDAIController
---@field GOAPComponent UHDGOAPComponent
---@field HandlerDuplicate UHDAIHandlerBase
UHDAIHandlerBase = {}



---@class UHDAINavigationHandler : UHDAIHandlerBase
---@field NavSystem UNavigationSystemV1
---@field bMoving boolean
---@field DesiredLocation FVector
---@field AcceptanceRadius float
---@field bIgnoreZeroVectorGoto boolean
---@field MasterNavPath TArray<FHDAIMasterNavPoint>
---@field MasterNavPathLength float
---@field TargetNavPoint FVector
---@field TargetNavPointIndex int32
---@field NavigationAnchorPoint FVector
---@field RemainingNavPathLength float
---@field bPawnIsAtTheEndOfPath boolean
---@field NavPathSegmentLengthMin float
---@field NavPathSegmentLengthMax float
---@field bCompensatePartialPathForGroupFormationRadius boolean
---@field PartialPathGroupRadiusMultiplier float
---@field NavigationAnchorRandomRange float
---@field OnMoveToLocationFailed FHDAINavigationHandlerOnMoveToLocationFailed
---@field MoveToFailedTime float
---@field MoveToFailedTimeDelay float
---@field MoveToFailedRandomizationRadiusBase float
---@field MoveToFailedRandomizationRadiusIncrement float
---@field MaxMoveToFailedRandomizationRadius float
---@field MoveToFailedAttemptNumber int32
---@field MoveToFailedAttemptResetTimer float
---@field bMoveToFailedIsBeingHandled boolean
---@field SavedCapturePoint AHDBaseCapturePoint
---@field StuckCheckTime float
---@field StuckCheckInterval float
---@field StuckCheckDistance float
---@field StuckCheckLastLocation FVector
---@field bEnableRVOAvoidance boolean
---@field RVOAvoidanceConsiderationRadius float
---@field RVOAvoidanceWeight float
UHDAINavigationHandler = {}

function UHDAINavigationHandler:SetupRVOAvoidance() end
---@param InDesiredLocation FVector
function UHDAINavigationHandler:SetDesiredLocation(InDesiredLocation) end
---@param Vector1 FVector
---@param Vector2 FVector
---@param Tolerance float
---@return boolean
function UHDAINavigationHandler:PointsAreEqualXY(Vector1, Vector2, Tolerance) end
function UHDAINavigationHandler:OnMoveToFailed() end
function UHDAINavigationHandler:MoveToLocationFailed() end
---@return boolean
function UHDAINavigationHandler:MakePathToDesiredLocation() end
---@param InStart FVector
---@param InDestination FVector
---@return boolean
function UHDAINavigationHandler:MakeNewMasterNavPath(InStart, InDestination) end
function UHDAINavigationHandler:MakeNavPathSegment() end
---@return boolean
function UHDAINavigationHandler:IsPawnAtDestination() end
---@return boolean
function UHDAINavigationHandler:IsNavigationPossible() end
---@return boolean
function UHDAINavigationHandler:IsNavDataValidForAllControlPoints() end
---@return boolean
function UHDAINavigationHandler:IsMoving() end
function UHDAINavigationHandler:HandleMoveToFailed() end
---@param InLocation FVector
---@param InRandomizationRadius float
function UHDAINavigationHandler:GotoLocationRandomized(InLocation, InRandomizationRadius) end
---@param InLocation FVector
function UHDAINavigationHandler:GotoLocation(InLocation) end
---@param InVector FVector
---@param bRandomize boolean
function UHDAINavigationHandler:FixVectorValuesNaN(InVector, bRandomize) end
---@param CP AHDBaseCapturePoint
---@param OutNavLoc FVector
---@return boolean
function UHDAINavigationHandler:FindNavLocationInsideControlPoint(CP, OutNavLoc) end
---@return boolean
function UHDAINavigationHandler:CheckPawnStuckStatus() end


---@class UHDAIPerceptionComponent : UActorComponent
---@field OwnerPlayer AHDPlayerCharacter
---@field bEnableAdvancedLineTracing boolean
---@field ObserverSightRadius float
---@field ObserverLoseSightRadius float
---@field DistanceToObserverRangeFar float
---@field DistanceToObserverRangeNear float
---@field bComplexSightLineTrace boolean
---@field ShoulderLocationFactor float
---@field RangeFactorWeight float
---@field StanceFactorWeight float
---@field MovementFactorWeight float
---@field StanceFactorMaxValue float
---@field StanceFactorMinValue float
---@field OwnerMaxMovementSpeed float
---@field OwnerDefaultHalfHeight float
UHDAIPerceptionComponent = {}

---@param ObserverLocation FVector
---@param OutSeenLocation FVector
---@param NumberOfLoSChecksPerformed int32
---@param OutSightStrength float
---@param IgnoreActor AActor
---@return boolean
function UHDAIPerceptionComponent:CanBeSeenFrom(ObserverLocation, OutSeenLocation, NumberOfLoSChecksPerformed, OutSightStrength, IgnoreActor) end
---@param Distance float
---@return float
function UHDAIPerceptionComponent:CalcSightStrength(Distance) end


---@class UHDAIVocalHandler : UHDAIHandlerBase
---@field CombatHandler UHDAICombatHandler
---@field bEnableVocalization boolean
---@field CurrentProfile FAICharacterVocalProfile
---@field bEnableTimeLimitNotify boolean
---@field bFactionOnlyTimeLimit boolean
---@field TimeLimitNotifyRange float
---@field PitchMultiplier float
---@field MinPitchMultiplier float
---@field MaxPitchMultiplier float
---@field AnySoundTimeLimit float
---@field ContactTimeLimit float
---@field LostContactTimeLimit float
---@field ReloadingTimeLimit float
---@field BeenHitTimeLimit float
---@field UnderSuppressionTimeLimit float
---@field DeathTimeLimit float
---@field NextAnySoundTime float
---@field NextContactTime float
---@field NextLostContactTime float
---@field NextReloadingTime float
---@field NextBeenHitTime float
---@field NextUnderSuppressionTime float
---@field NextDeathTime float
UHDAIVocalHandler = {}

function UHDAIVocalHandler:VocalizeSuppression() end
function UHDAIVocalHandler:VocalizeReload() end
---@param bHasContact boolean
function UHDAIVocalHandler:VocalizeContact(bHasContact) end
function UHDAIVocalHandler:VocalizeBeenHit() end
---@param InVocalType EHDAIVocalizationType
function UHDAIVocalHandler:Vocalize(InVocalType) end
---@param InVocalType EHDAIVocalizationType
function UHDAIVocalHandler:SetTimeLimit(InVocalType) end
---@param InPitchMultiplier float
function UHDAIVocalHandler:SetPitchMultiplier(InPitchMultiplier) end
function UHDAIVocalHandler:RandomizePitchMultiplier() end
---@param InVocalType EHDAIVocalizationType
function UHDAIVocalHandler:PlayVocalSound(InVocalType) end
---@param InVocalType EHDAIVocalizationType
function UHDAIVocalHandler:NotifySurroundingCharacters(InVocalType) end


---@class UHDAssetManager : UDFAssetManager
UHDAssetManager = {}


---@class UHDButtonBase : UUserWidget
---@field ButtonText FText
---@field Button UButton
UHDButtonBase = {}

---@param InText FText
function UHDButtonBase:UpdateButtonText(InText) end
---@param InText FText
function UHDButtonBase:SetButtonText(InText) end
function UHDButtonBase:HandleButtonClicked() end


---@class UHDCheatManager : UDFCheatManager
UHDCheatManager = {}

function UHDCheatManager:ToggleIdleSway() end
function UHDCheatManager:ToggleFreeAimADS() end
function UHDCheatManager:ToggleFreeAim() end
function UHDCheatManager:SpawnVehicle() end
---@param NewYaw float
function UHDCheatManager:SetMaxFreeAimYawADS(NewYaw) end
---@param NewYaw float
function UHDCheatManager:SetMaxFreeAimYaw(NewYaw) end
---@param NewPitch float
function UHDCheatManager:SetMaxFreeAimPitchADS(NewPitch) end
---@param NewPitch float
function UHDCheatManager:SetMaxFreeAimPitch(NewPitch) end
---@param NewInterpSpeed float
function UHDCheatManager:SetFreeAimReturnToCenterInterpSpeed(NewInterpSpeed) end
---@param NewSpeedFactor float
function UHDCheatManager:SetFreeAimDeadzoneCameraSpeedFactor(NewSpeedFactor) end


---@class UHDConfirmationDialog : UDFGameDialog
---@field ButtonsEntryBox UDynamicEntryBox
UHDConfirmationDialog = {}

---@param TitleText FText
---@param DescriptionText FText
function UHDConfirmationDialog:UpdateDialogText(TitleText, DescriptionText) end


---@class UHDContainsAddressServerFilterRule : UHDServerListFilterRule
UHDContainsAddressServerFilterRule = {}


---@class UHDEmptyServerFilterRule : UHDServerListFilterRule
UHDEmptyServerFilterRule = {}


---@class UHDFactionInfo : UDFFactionInfo
---@field Kits TSet<TSoftObjectPtr<UHDKit>>
UHDFactionInfo = {}



---@class UHDGOAPAct_AttackEnemy : UHDGOAPActionBase
UHDGOAPAct_AttackEnemy = {}


---@class UHDGOAPAct_CaptureControlPoint : UHDGOAPActionBase
UHDGOAPAct_CaptureControlPoint = {}


---@class UHDGOAPAct_DefendControlPoint : UHDGOAPActionBase
UHDGOAPAct_DefendControlPoint = {}


---@class UHDGOAPAct_LoadWeapon : UHDGOAPActionBase
UHDGOAPAct_LoadWeapon = {}


---@class UHDGOAPAct_MoveToDesiredLocation : UHDGOAPActionBase
UHDGOAPAct_MoveToDesiredLocation = {}


---@class UHDGOAPActionBase : UGOAPAction
UHDGOAPActionBase = {}


---@class UHDGOAPComponent : UGOAPComponent
---@field HDAIOwner AHDAIController
---@field HDAICharOwner AHDPlayerCharacter
---@field AIHandlers TArray<UHDAIHandlerBase>
---@field NavigationHandler UHDAINavigationHandler
---@field CaptureHandler UHDAICaptureHandler
---@field CombatHandler UHDAICombatHandler
---@field BehaviorHandler UHDAIBehaviorHandler
---@field GroupBehaviorHandler UHDAIGroupBehaviorHandler
---@field AimingHandler UHDAIAimingHandler
---@field VocalHandler UHDAIVocalHandler
---@field DecisionFrequency float
UHDGOAPComponent = {}

---@param Actor AActor
---@param Stimulus FAIStimulus
function UHDGOAPComponent:TargetPerceptionUpdated(Actor, Stimulus) end
function UHDGOAPComponent:ResetPlanningTimer() end
---@return boolean
function UHDGOAPComponent:IsAIActiveInWorld() end
---@return boolean
function UHDGOAPComponent:IsAIActive() end
---@param HandlerClass TSubclassOf<UHDAIHandlerBase>
---@return UHDAIHandlerBase
function UHDGOAPComponent:GetAIHandler(HandlerClass) end


---@class UHDGOAPGoalBase : UGOAPGoal
UHDGOAPGoalBase = {}


---@class UHDGOAPGoal_CaptureControlPoint : UHDGOAPGoalBase
---@field CPToCaptureCurrent AHDBaseCapturePoint
---@field CPToCapturePending AHDBaseCapturePoint
UHDGOAPGoal_CaptureControlPoint = {}



---@class UHDGOAPGoal_EliminateEnemy : UHDGOAPGoalBase
UHDGOAPGoal_EliminateEnemy = {}


---@class UHDGameEngine : UDFGameEngine
UHDGameEngine = {}


---@class UHDGameInstance : UTBGameInstance
---@field UGCLoadProgressScreen UHDUGCLoadProgressScreen
---@field ScoreboardMenu UHDScoreboardBase
---@field UGCLoadProgressScreenClassPtr TSubclassOf<UHDUGCLoadProgressScreen>
---@field UGCLoadProgressScreenClass TSoftClassPtr<UHDUGCLoadProgressScreen>
UHDGameInstance = {}

function UHDGameInstance:UnloadScoreboardMenu() end
---@param Title FText
---@param Message FText
function UHDGameInstance:ShowErrorDialog(Title, Message) end
---@param Title FText
---@param Message FText
function UHDGameInstance:ShowConfirmationDialog(Title, Message) end
---@param AppID int64
---@return boolean
function UHDGameInstance:OwnsAppBP(AppID) end
function UHDGameInstance:LoadScoreboardMenu() end
---@return boolean
function UHDGameInstance:HasModsLoaded() end
---@param DLCAppID int64
---@return boolean
function UHDGameInstance:HasDLCBP(DLCAppID) end


---@class UHDGameModeDefinition : UDFGameModeDefinition
---@field GameModeClass TSoftClassPtr<AHDBaseGameMode>
UHDGameModeDefinition = {}



---@class UHDGameModsProjectPolicies : UHDCoreDefaultUGCProjectPolicies
UHDGameModsProjectPolicies = {}


---@class UHDGameProjectBuildSettings : UBlueprintFunctionLibrary
UHDGameProjectBuildSettings = {}

---@return boolean
function UHDGameProjectBuildSettings:IsDemoBuild() end


---@class UHDGameRulesetBase : UDFGameRulesetBase
---@field bUseTickets boolean
UHDGameRulesetBase = {}

---@param TicketTeam EHDTeam
---@param TicketsToRemove int32
function UHDGameRulesetBase:RevokeTicketsFromTeam(TicketTeam, TicketsToRemove) end
---@param TicketTeam EHDTeam
---@param TicketsToAdd int32
function UHDGameRulesetBase:GiveTicketsToTeam(TicketTeam, TicketsToAdd) end
---@return AHDGameState
function UHDGameRulesetBase:GetHDGameState() end
---@return AHDBaseGameMode
function UHDGameRulesetBase:GetHDGameMode() end


---@class UHDHasUGCServerFilterRule : UHDServerListFilterRule
UHDHasUGCServerFilterRule = {}


---@class UHDJoinGameMenu : UDFBaseMenu
---@field ServerList UHDServerListView
---@field MapIds TArray<FPrimaryAssetId>
UHDJoinGameMenu = {}

function UHDJoinGameMenu:ReceiveOnRefreshStart() end
---@param bSortAscending boolean
---@param SortBy EHDServerListSortBy
function UHDJoinGameMenu:ReceiveOnRefreshComplete(bSortAscending, SortBy) end
---@param bSortAscending boolean
---@param SortBy EHDServerListSortBy
function UHDJoinGameMenu:OnRefresh(bSortAscending, SortBy) end
---@param ServerItem UHDServerListItemData
---@param JoinPassword FString
function UHDJoinGameMenu:JoinGame(ServerItem, JoinPassword) end
---@return boolean
function UHDJoinGameMenu:IsUsingDebugServerListings() end


---@class UHDKit : UDFLoadout
---@field ItemEntries TArray<FHDItemEntry>
---@field PrimaryItemSlotNum int32
---@field KitDropPrefabClass TSubclassOf<AHDBasePickup_Kit>
---@field KitRequirements TArray<UHDKitPrerequisiteBase>
---@field CharacterVariations TArray<FDataTableRowHandle>
---@field bSquadLeaderKit boolean
---@field bAllowsRallyPointDeployment boolean
---@field KitDisplayName FText
---@field KitDisplaySymbol UTexture2D
UHDKit = {}

---@return FDFCharacterVariationDataHandle
function UHDKit:RandomCharacterVariationDataFromKit() end
---@param Player AController
---@param OutKitDenialReason FText
---@return boolean
function UHDKit:PlayerCanStartWithKit(Player, OutKitDenialReason) end
---@return boolean
function UHDKit:HasKitRequirements() end
---@param OutDisplayIcon UTexture2D
---@return boolean
function UHDKit:GetPrimaryItemEntryDisplayIcon(OutDisplayIcon) end
---@param OutPrimaryEntry FHDItemEntry
---@return boolean
function UHDKit:GetPrimaryItemEntry(OutPrimaryEntry) end
---@param WorldContextObject UObject
---@param OutPSArray TArray<AHDPlayerState>
---@return int32
function UHDKit:GetPlayersUsingKit(WorldContextObject, OutPSArray) end
---@param WorldContextObject UObject
---@return int32
function UHDKit:GetNumPlayersUsingKit(WorldContextObject) end
---@param ItemEntry FHDItemEntry
---@param OutDisplayIcon UTexture2D
---@return boolean
function UHDKit:GetItemEntryDisplayIcon(ItemEntry, OutDisplayIcon) end
---@param ItemEntry FHDItemEntry
---@param OutDisplayEquipmentSymbol UTexture2D
---@return boolean
function UHDKit:GetItemEntryDisplayEquipmentSymbol(ItemEntry, OutDisplayEquipmentSymbol) end
---@param SlotNum int32
---@param OutEntry FHDItemEntry
---@return boolean
function UHDKit:GetItemEntryBySlotNum(SlotNum, OutEntry) end


---@class UHDKitPrerequisiteBase : UObject
---@field KitDenialReason FText
UHDKitPrerequisiteBase = {}



---@class UHDKitPrerequisite_AdminOnly : UHDKitPrerequisiteBase
UHDKitPrerequisite_AdminOnly = {}


---@class UHDKitPrerequisite_AlwaysDisable : UHDKitPrerequisiteBase
UHDKitPrerequisite_AlwaysDisable = {}


---@class UHDKitPrerequisite_MinSquadMembers : UHDKitPrerequisiteBase
---@field MinSquadMembers int32
UHDKitPrerequisite_MinSquadMembers = {}



---@class UHDKitPrerequisite_SquadLeaderOnly : UHDKitPrerequisiteBase
UHDKitPrerequisite_SquadLeaderOnly = {}


---@class UHDKitPrerequisite_SquadSizeLimit : UHDKitPrerequisiteBase
---@field MaxSquadCount int32
UHDKitPrerequisite_SquadSizeLimit = {}



---@class UHDKitPrerequisite_SquadUsageLimit : UHDKitPrerequisiteBase
---@field MaxSquadMembers int32
UHDKitPrerequisite_SquadUsageLimit = {}



---@class UHDKitPrerequisite_TeamSpecific : UHDKitPrerequisiteBase
---@field RequiredTeam EHDTeam
UHDKitPrerequisite_TeamSpecific = {}



---@class UHDKitPrerequisite_TeamUsageLimit : UHDKitPrerequisiteBase
---@field MaxTeamMembers int32
UHDKitPrerequisite_TeamUsageLimit = {}



---@class UHDLocalPlayer : UDFLocalPlayer
UHDLocalPlayer = {}


---@class UHDModData : UHDCoreUGCData
---@field PrimaryAssetPathsToScan TArray<FHDPrimaryAssetSearchPath>
---@field bServersideOnlyMod boolean
---@field ModDataVersion uint32
UHDModData = {}

---@param PluginName FString
---@return boolean
function UHDModData:DoesModPluginUseLegacyMapScanning(PluginName) end


---@class UHDNavigationSystem : UDFNavigationSystem
UHDNavigationSystem = {}


---@class UHDNavigationSystemConfig : UDFNavigationSystemConfig
UHDNavigationSystemConfig = {}


---@class UHDOnlineSessionClient : UDFOnlineSessionClient
UHDOnlineSessionClient = {}


---@class UHDOptionsMenu : UDFBaseMenu
UHDOptionsMenu = {}


---@class UHDPasswordProtectedServerFilterRule : UHDServerListFilterRule
UHDPasswordProtectedServerFilterRule = {}


---@class UHDPhysicsCollisionHandler : UDFPhysicsCollisionHandler
UHDPhysicsCollisionHandler = {}


---@class UHDPlatoonCreationRuleBase : UObject
UHDPlatoonCreationRuleBase = {}

---@param TeamDef UHDTeamDefinition
---@return boolean
function UHDPlatoonCreationRuleBase:SatisfiesRule(TeamDef) end


---@class UHDPlatoonInfo : UPrimaryDataAsset
---@field PlatoonType FPrimaryAssetType
---@field CreationRules TArray<UHDPlatoonCreationRuleBase>
---@field DisplayName FText
---@field MaxSquadLimit int32
UHDPlatoonInfo = {}

---@param TeamDef UHDTeamDefinition
---@return boolean
function UHDPlatoonInfo:ShouldCreateForTeam(TeamDef) end


---@class UHDPlatoonStateCreationPayload : UObject
---@field CreationParams FHDPlatoonCreationParams
UHDPlatoonStateCreationPayload = {}



---@class UHDPlayerCharacterAnimInst_FPP : UHDPlayerCharacterAnimInstanceBase
UHDPlayerCharacterAnimInst_FPP = {}


---@class UHDPlayerCharacterAnimInst_TPP : UHDPlayerCharacterAnimInstanceBase
UHDPlayerCharacterAnimInst_TPP = {}


---@class UHDPlayerCharacterAnimInstanceBase : UDFCharacterAnimInstance
---@field HDPlyCharOwner AHDPlayerCharacter
---@field HDPCOwner AHDPlayerController
---@field HDEquippedWeapon AHDBaseWeapon
---@field bInVehicle boolean
UHDPlayerCharacterAnimInstanceBase = {}



---@class UHDPlayerComponent : UDFPlayerComponent
---@field StartLoadout UDFLoadout
UHDPlayerComponent = {}

function UHDPlayerComponent:SwitchTeam() end
---@param DesiredStartSpot AActor
---@param DesiredStartLoadout UDFLoadout
function UHDPlayerComponent:RestartPlayerAtStartSpot(DesiredStartSpot, DesiredStartLoadout) end
---@param DesiredTeam EHDTeam
function UHDPlayerComponent:PickTeam(DesiredTeam) end


---@class UHDRuleset_AAS : UHDGameRulesetBase
UHDRuleset_AAS = {}


---@class UHDRuleset_ControlPoint : UHDGameRulesetBase
---@field BluforTeamCPSettings FControlPointRulesetSettings
---@field OpforTeamCPSettings FControlPointRulesetSettings
UHDRuleset_ControlPoint = {}

---@param ControlPointTeam EHDTeam
---@return FControlPointRulesetSettings
function UHDRuleset_ControlPoint:GetControlPointSettingsForTeam(ControlPointTeam) end
---@param ControlPoint AHDBaseCapturePoint
---@param PrevTeam EHDTeam
---@param NewTeam EHDTeam
---@param bCaptured boolean
function UHDRuleset_ControlPoint:ControlPointTeamUpdated(ControlPoint, PrevTeam, NewTeam, bCaptured) end
---@param ControlPoint AHDBaseCapturePoint
---@param bContested boolean
---@param Progress int32
function UHDRuleset_ControlPoint:ControlPointCaptureProgressUpdated(ControlPoint, bContested, Progress) end


---@class UHDRuleset_KillDeath : UHDGameRulesetBase
---@field BluforTeamKDSettings FKillDeathRulesetSettings
---@field OpforTeamKDSettings FKillDeathRulesetSettings
UHDRuleset_KillDeath = {}

---@param Killer AController
---@param Victim AController
function UHDRuleset_KillDeath:PlayerTeamKilled(Killer, Victim) end
---@param KillDeathTeam EHDTeam
---@return FKillDeathRulesetSettings
function UHDRuleset_KillDeath:GetKillDeathSettingsForTeam(KillDeathTeam) end


---@class UHDRuleset_NoPlayerSpawnKitRestrictions : UHDGameRulesetBase
UHDRuleset_NoPlayerSpawnKitRestrictions = {}


---@class UHDRuleset_TicketBleed : UHDGameRulesetBase
---@field RegisteredCPs TArray<AHDBaseCapturePoint>
---@field BluforTeamTBSettings FTicketBleedRulesetSettings
---@field OpforTeamTBSettings FTicketBleedRulesetSettings
UHDRuleset_TicketBleed = {}

function UHDRuleset_TicketBleed:UpdateTicketBleedState() end
---@param TicketBleedTeam EHDTeam
---@return FTicketBleedRulesetSettings
function UHDRuleset_TicketBleed:GetTicketBleedSettingsForTeam(TicketBleedTeam) end
---@param ControlPoint AHDBaseCapturePoint
---@param PrevTeam EHDTeam
---@param NewTeam EHDTeam
---@param bCaptured boolean
function UHDRuleset_TicketBleed:ControlPointTeamUpdated(ControlPoint, PrevTeam, NewTeam, bCaptured) end
---@param BleedTeam EHDTeam
---@param TicketBleedMultiplier int32
---@param bUseMercyTicketBleed boolean
function UHDRuleset_TicketBleed:ApplyTicketBleed(BleedTeam, TicketBleedMultiplier, bUseMercyTicketBleed) end


---@class UHDSQCommChannelState : UObject
---@field SquadState AHDSquadState
---@field InitialSetupParams FDFCommStateSetupParams
UHDSQCommChannelState = {}

---@param ForSquadState AHDSquadState
function UHDSQCommChannelState:SetupSQChannelState(ForSquadState) end
---@param Squad AHDSquadState
---@return FName
function UHDSQCommChannelState:GetChannelNameForSquad(Squad) end


---@class UHDScoreboardBase : UDFBaseMenu
---@field ScoreboardListRowClass TSubclassOf<UHDScoreboardListingRowBase>
---@field OpforPlayerList UPanelWidget
---@field BluforPlayerList UPanelWidget
UHDScoreboardBase = {}

---@param NewListEntry UHDScoreboardListingRowBase
function UHDScoreboardBase:ReceiveScoreboardListRowAdded(NewListEntry) end


---@class UHDScoreboardListingRowBase : UUserWidget
---@field ParentMenu UHDScoreboardBase
---@field PlayerState ADFBasePlayerState
---@field bRefreshListingOnTick boolean
---@field MutePlayerBtn UButton
---@field PlayerName UTextBlock
---@field Score UTextBlock
---@field Kills UTextBlock
---@field Deaths UTextBlock
---@field Ping UTextBlock
---@field NotTalkingVoiceIcon TSoftObjectPtr<UTexture2D>
---@field TalkingVoiceIcon TSoftObjectPtr<UTexture2D>
---@field MutedVoiceIcon TSoftObjectPtr<UTexture2D>
---@field PlayerNumber UTextBlock
UHDScoreboardListingRowBase = {}

---@param NewIcon UTexture2D
function UHDScoreboardListingRowBase:SetVoiceStateIcon(NewIcon) end
function UHDScoreboardListingRowBase:RefreshListing() end
function UHDScoreboardListingRowBase:ReceiveRefreshListing() end
---@param NewVoiceState EPlayerVoiceState
function UHDScoreboardListingRowBase:ReceivePlayerVoiceStateChanged(NewVoiceState) end
function UHDScoreboardListingRowBase:OnMutePlayer() end
---@param InParentMenu UHDScoreboardBase
---@param InPlayerState ADFBasePlayerState
---@param bInRefreshListingOnTick boolean
function UHDScoreboardListingRowBase:Init(InParentMenu, InPlayerState, bInRefreshListingOnTick) end
---@return boolean
function UHDScoreboardListingRowBase:HasInitialized() end
---@param VoiceState EPlayerVoiceState
---@return TSoftObjectPtr<UTexture2D>
function UHDScoreboardListingRowBase:GetIconForVoiceState(VoiceState) end
---@return int32
function UHDScoreboardListingRowBase:GetCurrentPing() end


---@class UHDServerAtCapacityFilterRule : UHDServerListFilterRule
UHDServerAtCapacityFilterRule = {}


---@class UHDServerListFilterRule : UObject
UHDServerListFilterRule = {}

---@param ListItem UHDServerListItemData
---@return boolean
function UHDServerListFilterRule:MatchesServer(ListItem) end


---@class UHDServerListItemData : UObject
---@field ServerInfo FHDServerInfo
UHDServerListItemData = {}



---@class UHDServerListView : UListView
---@field bItemSortAscending boolean
---@field ItemSortBy EHDServerListSortBy
---@field ItemFilterRules TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
UHDServerListView = {}

---@param bSortAscending boolean
---@param SortBy EHDServerListSortBy
function UHDServerListView:SortListItems(bSortAscending, SortBy) end
---@param SortBy EHDServerListSortBy
function UHDServerListView:SetItemSortBy(SortBy) end
---@param bSortAscending boolean
function UHDServerListView:SetItemSortAscending(bSortAscending) end
---@param FilterRules TMap<TSubclassOf<UHDServerListFilterRule>, FHDFilterRuleParams>
function UHDServerListView:SetItemFilterRules(FilterRules) end
---@return float
function UHDServerListView:GetEntrySpacing() end
---@param Item UObject
---@return FMargin
function UHDServerListView:GetDesiredEntryPaddingForItem(Item) end
---@param Item UObject
---@return boolean
function UHDServerListView:DoesFilterExcludeListItem(Item) end


---@class UHDServerListing : UUserWidget
---@field bTextToUpper boolean
---@field ServerData UHDServerListItemData
---@field ServerNameText UTextBlock
---@field ModNameText UTextBlock
---@field GameModeText UTextBlock
---@field MapNameText UTextBlock
---@field PlayersText UTextBlock
---@field PingText UTextBlock
UHDServerListing = {}

---@param InServerItemData UHDServerListItemData
function UHDServerListing:SetupListing(InServerItemData) end
---@param bIsDesignTime boolean
function UHDServerListing:OnServerItemDataSet(bIsDesignTime) end


---@class UHDSquadStateCreationPayload : UObject
---@field CreationParams FHDSquadCreationParams
UHDSquadStateCreationPayload = {}



---@class UHDSupportersOnlyServerFilterRule : UHDServerListFilterRule
UHDSupportersOnlyServerFilterRule = {}


---@class UHDTeamCommChannelState : UObject
---@field TeamState AHDTeamState
---@field InitialSetupParams FDFCommStateSetupParams
UHDTeamCommChannelState = {}

---@param ForTeamState AHDTeamState
function UHDTeamCommChannelState:SetupTeamChannelState(ForTeamState) end
---@param Team AHDTeamState
---@return FName
function UHDTeamCommChannelState:GetChannelNameForTeam(Team) end
---@param CmdTeam AHDTeamState
---@return FName
function UHDTeamCommChannelState:GetChannelNameForCommand(CmdTeam) end


---@class UHDTeamDefinition : UDFTeamDefinition
---@field StartingTickets int32
---@field CommChannelDefinition UDFCommChannelDefinition
UHDTeamDefinition = {}



---@class UHDTextChatInputWidgetBase : UUserWidget
---@field TextCommsFormatName FName
---@field CurrentTalkChannel UDFCommChannel
UHDTextChatInputWidgetBase = {}

---@param ChatMsgText FText
function UHDTextChatInputWidgetBase:SubmitChatMessage(ChatMsgText) end
function UHDTextChatInputWidgetBase:StopTalkingOnCurrentChannel() end
---@param CurrentChannel UDFCommChannel
function UHDTextChatInputWidgetBase:StopTalking(CurrentChannel) end
---@param TalkChannel UDFCommChannel
function UHDTextChatInputWidgetBase:StartTalkingOnChannel(TalkChannel) end
---@param NewTalkChannel UDFCommChannel
function UHDTextChatInputWidgetBase:StartTalking(NewTalkChannel) end
---@param SubmittedChatMsg UHDTextChatMsgInfo
function UHDTextChatInputWidgetBase:OnChatMessageSubmitted(SubmittedChatMsg) end


---@class UHDTextChatMsgInfo : UObject
---@field CommChannel UDFCommChannel
---@field SenderPS APlayerState
---@field ChatMsgContent FString
UHDTextChatMsgInfo = {}



---@class UHDTextChatWidgetBase : UUserWidget
---@field SayAllInputActionName FName
---@field SayTeamInputActionName FName
---@field SaySquadInputActionName FName
---@field SayAllChannelName FName
---@field MaxChatMsgsToCache int32
---@field LastTalkChannelName FName
---@field CurrentChatMsgs TArray<UHDTextChatMsgInfo>
UHDTextChatWidgetBase = {}

function UHDTextChatWidgetBase:StopTalking() end
---@param TalkChannel UDFCommChannel
function UHDTextChatWidgetBase:StartTalking(TalkChannel) end
---@param NumChatMsgsToCache int32
function UHDTextChatWidgetBase:SetMaxChatMsgsToCache(NumChatMsgsToCache) end
function UHDTextChatWidgetBase:SayTeamActionPressed() end
function UHDTextChatWidgetBase:SaySquadActionPressed() end
function UHDTextChatWidgetBase:SayAllActionPressed() end
---@return int32
function UHDTextChatWidgetBase:GetNumCachedChatMsgs() end
---@param MsgIndex int32
---@param OutFoundMsg UHDTextChatMsgInfo
---@return boolean
function UHDTextChatWidgetBase:GetCachedChatMsgAt(MsgIndex, OutFoundMsg) end
---@param NewChatMsg UHDTextChatMsgInfo
function UHDTextChatWidgetBase:DisplayChatMessage(NewChatMsg) end


---@class UHDUGCLoadProgressScreen : UDFBaseMenu
UHDUGCLoadProgressScreen = {}

---@param NumUGCRemainingToLoad int32
function UHDUGCLoadProgressScreen:UpdateLoadProgress(NumUGCRemainingToLoad) end
---@param TotalUGCToLoad int32
function UHDUGCLoadProgressScreen:SetupProgressScreen(TotalUGCToLoad) end


---@class UHDUIStatics : UBlueprintFunctionLibrary
UHDUIStatics = {}

---@param InServerInfo FHDServerInfo
---@return int32
function UHDUIStatics:GetServerPort(InServerInfo) end
---@param InServerInfo FHDServerInfo
---@return FString
function UHDUIStatics:GetServerIpPort(InServerInfo) end
---@param InServerInfo FHDServerInfo
---@return FString
function UHDUIStatics:GetServerIp(InServerInfo) end


---@class UHDUIUWCaptureStatus : UHDUIUserWidget
UHDUIUWCaptureStatus = {}

---@param OverlappingCP AHDBaseCapturePoint
---@param bInitial boolean
function UHDUIUWCaptureStatus:OwnerTouchingControlPoint(OverlappingCP, bInitial) end
function UHDUIUWCaptureStatus:OwnerNoControlPoint() end
---@param OverlappedOwnerChar AActor
---@param OtherActor AActor
function UHDUIUWCaptureStatus:OwnerEndOverlap(OverlappedOwnerChar, OtherActor) end
---@param OverlappedOwnerChar AActor
---@param OtherActor AActor
function UHDUIUWCaptureStatus:OwnerBeginOverlap(OverlappedOwnerChar, OtherActor) end
---@param ControlPoint AHDBaseCapturePoint
---@param PrevOwningTeam EHDTeam
---@param NewOwningTeam EHDTeam
---@param bCaptured boolean
function UHDUIUWCaptureStatus:CPOwnershipUpdate(ControlPoint, PrevOwningTeam, NewOwningTeam, bCaptured) end
---@param ControlPoint AHDBaseCapturePoint
---@param bInCaptureContested boolean
---@param InCaptureProgress int32
function UHDUIUWCaptureStatus:CPCaptureProgressUpdate(ControlPoint, bInCaptureContested, InCaptureProgress) end
---@param OverlappedControlPointActor AActor
---@param OtherActor AActor
function UHDUIUWCaptureStatus:CPBeginEndOverlap(OverlappedControlPointActor, OtherActor) end
---@param bCaptured boolean
---@param NewOwningTeam EHDTeam
---@param OldOwningTeam EHDTeam
---@param bInitial boolean
function UHDUIUWCaptureStatus:ControlPointSetOwnershipState(bCaptured, NewOwningTeam, OldOwningTeam, bInitial) end
---@param NumFriendlies int32
---@param NumEnemies int32
---@param MinNumRequiredForCapture int32
---@param bInitial boolean
function UHDUIUWCaptureStatus:ControlPointSetGarrisonedPlayerCount(NumFriendlies, NumEnemies, MinNumRequiredForCapture, bInitial) end
---@param bContested boolean
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UHDUIUWCaptureStatus:ControlPointSetCaptureProgress(bContested, NewValueNorm, OldValueNorm, bInitial) end


---@class UHDUIUWHUD : UHDUIUserWidget
UHDUIUWHUD = {}


---@class UHDUIUWPlayerStatus : UHDUIUserWidget
UHDUIUWPlayerStatus = {}

---@param SprintValueNorm float
---@param JumpValueNorm float
---@param bInitial boolean
function UHDUIUWPlayerStatus:OwnerUpdateStamina(SprintValueNorm, JumpValueNorm, bInitial) end
function UHDUIUWPlayerStatus:OwnerStartSprint() end
function UHDUIUWPlayerStatus:OwnerStartAim() end
---@param bIsSprinting boolean
function UHDUIUWPlayerStatus:OwnerSprintTransitionUpdate(bIsSprinting) end
---@param NewState EHDUICharacterStanceState
---@param OldState EHDUICharacterStanceState
---@param bInitial boolean
function UHDUIUWPlayerStatus:OwnerSetStanceState(NewState, OldState, bInitial) end
---@param NewStance ECharacterStance
---@param OldStance ECharacterStance
---@param bInitial boolean
function UHDUIUWPlayerStatus:OwnerSetStance(NewStance, OldStance, bInitial) end
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UHDUIUWPlayerStatus:OwnerSetSprintStamina(NewValueNorm, OldValueNorm, bInitial) end
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UHDUIUWPlayerStatus:OwnerSetJumpStamina(NewValueNorm, OldValueNorm, bInitial) end
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UHDUIUWPlayerStatus:OwnerSetHealth(NewValueNorm, OldValueNorm, bInitial) end
---@param Character ADFBaseCharacter
---@param NewHealthTotal float
---@param PrevHealthTotal float
function UHDUIUWPlayerStatus:OwnerHealthUpdate(Character, NewHealthTotal, PrevHealthTotal) end
function UHDUIUWPlayerStatus:OwnerEndSprint() end
function UHDUIUWPlayerStatus:OwnerEndAim() end
---@param bIsAiming boolean
function UHDUIUWPlayerStatus:OwnerAimTransitionUpdate(bIsAiming) end


---@class UHDUIUWWeaponStatus : UHDUIUserWidget
---@field OwnerEquippedWeapon AHDBaseWeapon
---@field WeapAmmoState FHDUIWeaponAmmoState
UHDUIUWWeaponStatus = {}

---@param Gun ADFBaseGun
---@param NewFireMode EFireMode
---@param PrevFireMode EFireMode
---@param bFromPlayerInput boolean
function UHDUIUWWeaponStatus:OwnerWeaponFireModeChanged(Gun, NewFireMode, PrevFireMode, bFromPlayerInput) end
---@param NewAimStyle EHDWeaponAimStyle
---@param PrevAimStyle EHDWeaponAimStyle
---@param bFromPlayerInput boolean
function UHDUIUWWeaponStatus:OwnerSetAimStyle(NewAimStyle, PrevAimStyle, bFromPlayerInput) end
---@param Character AHDPlayerCharacter
---@param NewAimStyle EHDWeaponAimStyle
---@param PrevAimStyle EHDWeaponAimStyle
---@param bFromPlayerInput boolean
function UHDUIUWWeaponStatus:OwnerAimStyleChanged(Character, NewAimStyle, PrevAimStyle, bFromPlayerInput) end
---@param NewFireMode EFireMode
---@param PreviousFireMode EFireMode
---@param bFromPlayerInput boolean
function UHDUIUWWeaponStatus:BPOwnerWeaponSetFireMode(NewFireMode, PreviousFireMode, bFromPlayerInput) end
---@param AmmoState FHDUIWeaponAmmoState
---@param bFromReload boolean
---@param bTotalFreeAmmoUpdated boolean
---@param bNumFreeAmmoClipsUpdated boolean
function UHDUIUWWeaponStatus:BPOwnerWeaponAmmoUpdated(AmmoState, bFromReload, bTotalFreeAmmoUpdated, bNumFreeAmmoClipsUpdated) end


---@class UHDUIUserWidget : UUserWidget
---@field bListenForPlayerCharacterEvents boolean
UHDUIUserWidget = {}

---@param UnpossessedPawn APawn
function UHDUIUserWidget:OwnerUnpossessPawn(UnpossessedPawn) end
---@param NewPawn APawn
function UHDUIUserWidget:OwnerPossessPawn(NewPawn) end
---@param Character ADFBaseCharacter
---@param NewEquippedItem ADFBaseItem
---@param PrevEquippedItem ADFBaseItem
function UHDUIUserWidget:OwnerEquippedItemChanged(Character, NewEquippedItem, PrevEquippedItem) end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UHDUIUserWidget:OwnerDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@return AHUD
function UHDUIUserWidget:GetOwningPlayerHUD() end
---@return AHDHUD
function UHDUIUserWidget:GetOwningHDPlayerHUD() end
---@return UDFCharacterMovementComponent
function UHDUIUserWidget:GetOwningHDPlayerCharacterMovement() end
---@return AHDPlayerCharacter
function UHDUIUserWidget:GetOwningHDPlayerCharacter() end
---@return AHDPlayerController
function UHDUIUserWidget:GetOwningHDPlayer() end
---@return AHDBaseWeapon
function UHDUIUserWidget:GetOwnerEquippedWeapon() end
---@param NewWeap AHDBaseWeapon
---@param PrevWeap AHDBaseWeapon
function UHDUIUserWidget:BPOwnerWeaponChanged(NewWeap, PrevWeap) end
---@param UnpossessedPawn APawn
function UHDUIUserWidget:BPOwnerUnpossessPawn(UnpossessedPawn) end
---@param NewPawn APawn
function UHDUIUserWidget:BPOwnerPossessPawn(NewPawn) end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UHDUIUserWidget:BPOwnerDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param OwnerWeap AHDBaseWeapon
function UHDUIUserWidget:BPInitializeForOwnerWeapon(OwnerWeap) end
---@param OwnerPlyChar AHDPlayerCharacter
function UHDUIUserWidget:BPInitializeForOwnerPlayerCharacter(OwnerPlyChar) end
---@param OwnerWeap AHDBaseWeapon
function UHDUIUserWidget:BPDeinitializeFromOwnerWeapon(OwnerWeap) end
---@param OwnerPlyChar AHDPlayerCharacter
function UHDUIUserWidget:BPDeinitializeFromOwnerPlayerCharacter(OwnerPlyChar) end


---@class UHDURLStatics : UBlueprintFunctionLibrary
UHDURLStatics = {}

---@param Team EHDTeam
---@return FString
function UHDURLStatics:GetNumTicketsOptionName(Team) end
---@param Team EHDTeam
---@return FString
function UHDURLStatics:GetNumBotsOptionName(Team) end
---@param Team EHDTeam
---@return FString
function UHDURLStatics:GetFactionOptionName(Team) end
---@return FString
function UHDURLStatics:GetDisableKitRestrictionsOptionName() end


---@class UHDVehiclePlayerSeatComponent : UArcVehiclePlayerSeatComponent
UHDVehiclePlayerSeatComponent = {}


---@class UHDVoiceChatMsgInfo : UObject
---@field CommChannel UDFCommChannel
---@field TalkerPS APlayerState
---@field bTalking boolean
UHDVoiceChatMsgInfo = {}



---@class UHDVoipIndicatorListingWidgetBase : UUserWidget
---@field VoiceMsgInfo UHDVoiceChatMsgInfo
UHDVoipIndicatorListingWidgetBase = {}

---@param InVoiceMsgInfo UHDVoiceChatMsgInfo
function UHDVoipIndicatorListingWidgetBase:SetupVoiceListing(InVoiceMsgInfo) end
---@param bIsDesignTime boolean
function UHDVoipIndicatorListingWidgetBase:OnVoiceMsgInfoSet(bIsDesignTime) end


---@class UHDVoipIndicatorWidgetBase : UUserWidget
---@field ActiveTalkerMap TMap<FUniqueNetIdVoipWrapper, UHDVoiceChatMsgInfo>
UHDVoipIndicatorWidgetBase = {}

---@param TalkerMsgInfo UHDVoiceChatMsgInfo
function UHDVoipIndicatorWidgetBase:OnPlayerStopTalking(TalkerMsgInfo) end
---@param TalkerMsgInfo UHDVoiceChatMsgInfo
function UHDVoipIndicatorWidgetBase:OnPlayerStartTalking(TalkerMsgInfo) end
---@param LocalTalkerMsgInfo UHDVoiceChatMsgInfo
function UHDVoipIndicatorWidgetBase:OnOwningPlayerStopTalking(LocalTalkerMsgInfo) end
---@param LocalTalkerMsgInfo UHDVoiceChatMsgInfo
function UHDVoipIndicatorWidgetBase:OnOwningPlayerStartTalking(LocalTalkerMsgInfo) end


---@class UHDWeaponAnimInstance : UDFWeaponAnimInstance
---@field HDWeaponOwner AHDBaseWeapon
UHDWeaponAnimInstance = {}



---@class UHDWeaponScopeComponent : USceneComponent
UHDWeaponScopeComponent = {}


---@class UPlatoonListEntry : UObject
---@field TeamId uint8
---@field Team EHDTeam
---@field TeamState AHDTeamState
---@field ID int32
---@field Info UHDPlatoonInfo
---@field PlatoonState AHDPlatoonState
UPlatoonListEntry = {}



---@class USquadListEntry : UObject
---@field TeamId uint8
---@field Team EHDTeam
---@field TeamState AHDTeamState
---@field ParentPlatoonData UPlatoonListEntry
---@field ID int32
---@field SquadState AHDSquadState
USquadListEntry = {}

---@return AHDPlatoonState
function USquadListEntry:GetParentPlatoonState() end


---@class USquadMemberInfo : UObject
---@field TeamId uint8
---@field Team EHDTeam
---@field TeamState AHDTeamState
---@field ParentPlatoonData UPlatoonListEntry
---@field ParentSquadData USquadListEntry
---@field PlayerState AHDPlayerState
USquadMemberInfo = {}

---@return AHDSquadState
function USquadMemberInfo:GetParentSquadState() end
---@return AHDPlatoonState
function USquadMemberInfo:GetParentPlatoonState() end


---@class UVictoryMenu : UDFBaseMenu
---@field RoundDetails FHDGameRoundEndEventDetails
---@field bWinner boolean
UVictoryMenu = {}

function UVictoryMenu:OnVictoryInit() end
---@param InRoundDetails FHDGameRoundEndEventDetails
---@param bInWinner boolean
function UVictoryMenu:Init(InRoundDetails, bInWinner) end


