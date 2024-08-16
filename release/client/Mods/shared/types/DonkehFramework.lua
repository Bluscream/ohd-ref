---@meta

---@class ADFBaseAIController : AAIController
ADFBaseAIController = {}

---@return boolean
function ADFBaseAIController:CanRestartPlayer() end


---@class ADFBaseAmmoClip : ADFBaseItem
---@field GunOwner ADFBaseGun
---@field CurrentClipAmmo int32
---@field ReloadCounter uint8
---@field SimulatedCurrentClipAmmo int32
---@field StartingClipAmmo int32
---@field MaxClipAmmo int32
ADFBaseAmmoClip = {}

---@param AmmoStore UDFInventoryComponent
---@param AmmoAmt int32
---@param AmmoType TSubclassOf<ADFBaseAmmoClip>
---@return int32
function ADFBaseAmmoClip:StoreAmmoInInventory(AmmoStore, AmmoAmt, AmmoType) end
---@param AmmoToStore int32
function ADFBaseAmmoClip:StoreAmmo(AmmoToStore) end
---@param NewOwner ADFBaseGun
function ADFBaseAmmoClip:SetOwningGun(NewOwner) end
---@param NewClipAmmo int32
function ADFBaseAmmoClip:SetCurrentClipAmmo(NewClipAmmo) end
function ADFBaseAmmoClip:OnRep_ReloadCounter() end
function ADFBaseAmmoClip:OnRep_CurrentClipAmmo() end
---@return boolean
function ADFBaseAmmoClip:IsLoaded() end
---@return int32
function ADFBaseAmmoClip:GetStartingClipAmmo() end
---@return int32
function ADFBaseAmmoClip:GetMaxClipAmmo() end
---@return ADFBaseGun
function ADFBaseAmmoClip:GetGunOwner() end
---@return int32
function ADFBaseAmmoClip:GetCurrentClipAmmo() end
---@param AmmoToConsume int32
function ADFBaseAmmoClip:ConsumeAmmo(AmmoToConsume) end


---@class ADFBaseCharacter : ACharacter
---@field RemoteViewYaw uint8
---@field bClientResimulateSprintStamina boolean
---@field DefaultPawnAnimCollection FCharacterAnimCollection
---@field bPlayFootstepFXWithPerspMeshOnly boolean
---@field bTickAllAnimationOnDedicatedServer boolean
---@field bOnlyTickAnimMontagesOnDedicatedServer boolean
---@field DefaultPawnSoundCollection FCharacterSoundCollection
---@field EquippedItem ADFBaseItem
---@field LastEquippedItem ADFBaseItem
---@field OnEquippedItemChanged FDFBaseCharacterOnEquippedItemChanged
---@field ItemAttachPoint FName
---@field Inventory UDFInventoryComponent
---@field DefaultLoadout UDFLoadout
---@field ItemEnabledMode EDFItemEnabledMode
---@field ShotIDCounter int32
---@field bAllowWeaponFireWhileCrawling boolean
---@field bDying boolean
---@field OnHealthChanged FDFBaseCharacterOnHealthChanged
---@field Health float
---@field RagdollLifeSpan float
---@field OnCharacterDeath FDFBaseCharacterOnCharacterDeath
---@field MaxHealth float
---@field LastTakeHitInfo FTakeHitInfo
---@field BoneDamageMultipliers TMap<FName, float>
---@field bApplyDamageMomentumOnHit boolean
---@field OnSprintTransition FDFBaseCharacterOnSprintTransition
---@field OnAimTransition FDFBaseCharacterOnAimTransition
---@field OnLeanTransition FDFBaseCharacterOnLeanTransition
---@field OnVaultTransition FDFBaseCharacterOnVaultTransition
---@field ReplicatedStance ECharacterStance
---@field PreviousStance ECharacterStance
---@field bPressedVault boolean
---@field bSprinting boolean
---@field bAiming boolean
---@field bIsProne boolean
---@field bVaulting boolean
---@field bWasVaulting boolean
---@field PendingVaultTraceResult FDFVaultTraceResult
---@field VaultParams FDFVaultTraceData
---@field ReplicatedLeanAmount float
---@field LeanHandler UDFCharacterLeanHandler
---@field DFCharacterMovement UDFCharacterMovementComponent
---@field TargetEyeHeight float
---@field bInterpCrouchedEyeHeight boolean
---@field CrouchedTransitionInterpSpeed float
---@field bInterpProneEyeHeight boolean
---@field ProneTransitionInterpSpeed float
---@field ProneEyeHeight float
---@field TeamNum uint8
---@field TeamState ADFTeamState
---@field PrevTeamState ADFTeamState
---@field bAllowTeamIdOverride boolean
---@field OnPawnTeamNumUpdated FDFBaseCharacterOnPawnTeamNumUpdated
---@field OnPawnTeamStateUpdated FDFBaseCharacterOnPawnTeamStateUpdated
ADFBaseCharacter = {}

function ADFBaseCharacter:Vault() end
---@param bClientSimulation boolean
function ADFBaseCharacter:UnSprint(bClientSimulation) end
---@param UnDesiredLeanDir ELeanDirection
---@param bClientSimulation boolean
function ADFBaseCharacter:UnLean(UnDesiredLeanDir, bClientSimulation) end
---@param bClientSimulation boolean
function ADFBaseCharacter:UnAim(bClientSimulation) end
function ADFBaseCharacter:Suicide() end
function ADFBaseCharacter:StopVaulting() end
function ADFBaseCharacter:StopFire() end
---@param CharAnim FPerspectiveAnim
function ADFBaseCharacter:StopCharacterPerspectiveAnimation(CharAnim) end
---@param CharMontage UAnimMontage
function ADFBaseCharacter:StopCharacterMontage(CharMontage) end
---@param bPerspectiveMeshOnly boolean
function ADFBaseCharacter:StopAllAnimMontages(bPerspectiveMeshOnly) end
function ADFBaseCharacter:StartFire() end
function ADFBaseCharacter:SprintToggle() end
---@param bClientSimulation boolean
function ADFBaseCharacter:Sprint(bClientSimulation) end
---@param DamageTaken float
---@param DamageEvent FDamageEvent
---@param PawnInstigator APawn
---@param DamageCauser AActor
function ADFBaseCharacter:SpawnHitImpactFX(DamageTaken, DamageEvent, PawnInstigator, DamageCauser) end
function ADFBaseCharacter:SetRagdollPhysics() end
---@param ItemMode EDFItemEnabledMode
function ADFBaseCharacter:SetItemEnabledMode(ItemMode) end
---@param InHealth float
function ADFBaseCharacter:SetHealth(InHealth) end
function ADFBaseCharacter:ServerSuicide() end
---@param ItemToEquip ADFBaseItem
function ADFBaseCharacter:ServerEquipItem(ItemToEquip) end
---@param VaultStartParams FDFVaultTraceData
function ADFBaseCharacter:ServerDoVault(VaultStartParams) end
function ADFBaseCharacter:Reload() end
function ADFBaseCharacter:ReceiveRestart() end
---@param DamageTaken float
---@param DamageEvent FDamageEvent
---@param PawnInstigator APawn
---@param DamageCauser AActor
---@param bKilled boolean
function ADFBaseCharacter:ReceivePlayHit(DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bKilled) end
---@param TeamStateBeforeUpdate ADFTeamState
---@param NewTeamState ADFTeamState
---@param bNewTeamStateInit boolean
function ADFBaseCharacter:ReceivePawnTeamStateUpdated(TeamStateBeforeUpdate, NewTeamState, bNewTeamStateInit) end
---@param LastTeamNum uint8
---@param NewTeamNum uint8
function ADFBaseCharacter:ReceivePawnTeamNumUpdated(LastTeamNum, NewTeamNum) end
function ADFBaseCharacter:ReceiveOnStartVault() end
function ADFBaseCharacter:ReceiveOnStartSprint() end
---@param HalfHeightAdjust float
---@param ScaledHalfHeightAdjust float
function ADFBaseCharacter:ReceiveOnStartProne(HalfHeightAdjust, ScaledHalfHeightAdjust) end
function ADFBaseCharacter:ReceiveOnStartLean() end
function ADFBaseCharacter:ReceiveOnStartAim() end
function ADFBaseCharacter:ReceiveOnRepPlayerState() end
function ADFBaseCharacter:ReceiveOnEndVault() end
function ADFBaseCharacter:ReceiveOnEndSprint() end
---@param HalfHeightAdjust float
---@param ScaledHalfHeightAdjust float
function ADFBaseCharacter:ReceiveOnEndProne(HalfHeightAdjust, ScaledHalfHeightAdjust) end
function ADFBaseCharacter:ReceiveOnEndLean() end
function ADFBaseCharacter:ReceiveOnEndAim() end
---@param NewHealthTotal float
---@param PrevHealthTotal float
function ADFBaseCharacter:ReceiveHealthChanged(NewHealthTotal, PrevHealthTotal) end
---@param NewEquippedItem ADFBaseItem
---@param PrevEquippedItem ADFBaseItem
function ADFBaseCharacter:ReceiveEquippedItemChanged(NewEquippedItem, PrevEquippedItem) end
function ADFBaseCharacter:ProneToggle() end
---@param UnEquipMontageToPlay UAnimMontage
---@return float
function ADFBaseCharacter:PlayCharacterUnEquipMontage(UnEquipMontageToPlay) end
---@param ThrowUnderhandMontageToPlay UAnimMontage
---@return float
function ADFBaseCharacter:PlayCharacterThrowUnderhandMontage(ThrowUnderhandMontageToPlay) end
---@param ThrowOverhandMontageToPlay UAnimMontage
---@return float
function ADFBaseCharacter:PlayCharacterThrowOverhandMontage(ThrowOverhandMontageToPlay) end
---@param StartReloadMontageToPlay UAnimMontage
---@param bDryReload boolean
---@return float
function ADFBaseCharacter:PlayCharacterStartReloadMontage(StartReloadMontageToPlay, bDryReload) end
---@param Sound FPerspectiveSound
---@return UAudioComponent
function ADFBaseCharacter:PlayCharacterSound(Sound) end
---@param bDryReload boolean
---@return float
function ADFBaseCharacter:PlayCharacterReloadMontage(bDryReload) end
---@param CharAnim FPerspectiveAnim
---@param bForceDisableAutoBlendOut boolean
---@return float
function ADFBaseCharacter:PlayCharacterPerspectiveAnimation(CharAnim, bForceDisableAutoBlendOut) end
---@param CharMontage UAnimMontage
---@param bForceDisableAutoBlendOut boolean
---@return float
function ADFBaseCharacter:PlayCharacterMontage(CharMontage, bForceDisableAutoBlendOut) end
---@param FireMontageToPlay UAnimMontage
---@param bFireLast boolean
---@param bFireADS boolean
---@return float
function ADFBaseCharacter:PlayCharacterFireMontage(FireMontageToPlay, bFireLast, bFireADS) end
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
---@return float
function ADFBaseCharacter:PlayCharacterEquipMontage(bDontPlayAndReturnDominantPlayLengthOnly) end
---@param EndReloadMontageToPlay UAnimMontage
---@param bDryReload boolean
---@return float
function ADFBaseCharacter:PlayCharacterEndReloadMontage(EndReloadMontageToPlay, bDryReload) end
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
---@return float
function ADFBaseCharacter:PlayCharacterDeathMontage(bDontPlayAndReturnDominantPlayLengthOnly) end
---@param CockMontageToPlay UAnimMontage
---@return float
function ADFBaseCharacter:PlayCharacterCockMontage(CockMontageToPlay) end
---@param ActionMontageToPlay UAnimMontage
---@return float
function ADFBaseCharacter:PlayCharacterActionMontage(ActionMontageToPlay) end
---@param TeamStateBeforeUpdate ADFTeamState
function ADFBaseCharacter:OnRep_TeamState(TeamStateBeforeUpdate) end
---@param LastTeamNum uint8
function ADFBaseCharacter:OnRep_TeamNum(LastTeamNum) end
function ADFBaseCharacter:OnRep_ReplicatedStance() end
---@param LastReplicatedLeanAmount float
function ADFBaseCharacter:OnRep_ReplicatedLeanAmount(LastReplicatedLeanAmount) end
function ADFBaseCharacter:OnRep_LastTakeHitInfo() end
---@param PreviousItemEnabledMode EDFItemEnabledMode
function ADFBaseCharacter:OnRep_ItemEnabledMode(PreviousItemEnabledMode) end
function ADFBaseCharacter:OnRep_IsProne() end
---@param PreviousValue float
function ADFBaseCharacter:OnRep_Health(PreviousValue) end
---@param LastItem ADFBaseItem
function ADFBaseCharacter:OnRep_EquippedItem(LastItem) end
function ADFBaseCharacter:OnRep_bSprinting() end
function ADFBaseCharacter:OnRep_bAiming() end
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function ADFBaseCharacter:OnDeath(KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@return int32
function ADFBaseCharacter:NextShotID() end
---@param bClientSimulation boolean
function ADFBaseCharacter:LeaveProne(bClientSimulation) end
---@param LeanDir ELeanDirection
function ADFBaseCharacter:LeanToggle(LeanDir) end
---@param DesiredLeanDir ELeanDirection
---@param bClientSimulation boolean
function ADFBaseCharacter:Lean(DesiredLeanDir, bClientSimulation) end
---@param PreviousItemEnabledMode EDFItemEnabledMode
function ADFBaseCharacter:ItemEnabledModeChanged(PreviousItemEnabledMode) end
---@return boolean
function ADFBaseCharacter:IsPrefiring() end
---@return boolean
function ADFBaseCharacter:IsPlayer() end
---@param MeshCompToCheck USkeletalMeshComponent
---@return boolean
function ADFBaseCharacter:IsPerspectiveMesh(MeshCompToCheck) end
---@return boolean
function ADFBaseCharacter:IsLeaning() end
---@return boolean
function ADFBaseCharacter:IsFiring() end
---@return boolean
function ADFBaseCharacter:IsEquipped() end
---@return boolean
function ADFBaseCharacter:IsAlive() end
---@param bClientSimulation boolean
function ADFBaseCharacter:GoProne(bClientSimulation) end
---@param Loadout UDFLoadout
---@param bEquipFirstItem boolean
function ADFBaseCharacter:GiveLoadout(Loadout, bEquipFirstItem) end
---@return ADFBaseItem
function ADFBaseCharacter:GetRelevantEquippedItem() end
---@param bEquippable boolean
---@return ADFBaseItem
function ADFBaseCharacter:GetPreviousInventoryItem(bEquippable) end
---@param bEquippable boolean
---@return ADFBaseItem
function ADFBaseCharacter:GetNextInventoryItem(bEquippable) end
---@param AnimationPair FPerspectiveAnim
---@return UAnimMontage
function ADFBaseCharacter:GetMontageToUseFromPerspectiveAnimPair(AnimationPair) end
---@return EDFItemEnabledMode
function ADFBaseCharacter:GetItemEnabledMode() end
---@return FName
function ADFBaseCharacter:GetItemAttachPoint() end
---@return UDFInventoryComponent
function ADFBaseCharacter:GetInventory() end
---@return ADFBaseItem
function ADFBaseCharacter:GetEquippedItem() end
---@param BoneName FName
---@param DamageMultiplier float
---@return boolean
function ADFBaseCharacter:GetDamageMultiplierByBoneName(BoneName, DamageMultiplier) end
---@param bIgnoreLocalControlOnServer boolean
---@return USkeletalMeshComponent
function ADFBaseCharacter:GetCharacterMeshToUse(bIgnoreLocalControlOnServer) end
---@param OutCharDeathMontage UAnimMontage
---@return boolean
function ADFBaseCharacter:GetCharacterDeathMontageToUse(OutCharDeathMontage) end
---@param bVisibleMesh boolean
---@return EVisibilityBasedAnimTickOption
function ADFBaseCharacter:GetCharacterAnimTickOptionToUse(bVisibleMesh) end
---@param AnimationPair FPerspectiveAnim
---@return UAnimSequenceBase
function ADFBaseCharacter:GetAnimToUseFromPerspectiveAnimPair(AnimationPair) end
---@return FRotator
function ADFBaseCharacter:GetAimOffsets() end
function ADFBaseCharacter:EquipPreviousItem() end
---@param ItemType EItemType
function ADFBaseCharacter:EquipNextItemByType(ItemType) end
function ADFBaseCharacter:EquipNextItem() end
---@param ItemToEquip ADFBaseItem
function ADFBaseCharacter:EquipItem(ItemToEquip) end
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param Killer AController
---@param DamageCauser AActor
---@return boolean
function ADFBaseCharacter:Die(KillingDamage, DamageEvent, Killer, DamageCauser) end
function ADFBaseCharacter:CrouchToggle() end
---@param Timestamp float
---@param NewLoc FVector
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode uint8
---@param ServerSprintStamina float
function ADFBaseCharacter:ClientVeryShortAdjustPosition_CustomStamina(Timestamp, NewLoc, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode, ServerSprintStamina) end
---@param Timestamp float
---@param ServerRootMotion FRootMotionSourceGroup
---@param bHasAnimRootMotion boolean
---@param ServerMontageTrackPosition float
---@param ServerLoc FVector
---@param ServerRotation FVector_NetQuantizeNormal
---@param ServerVelZ float
---@param ServerBase UPrimitiveComponent
---@param ServerBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode uint8
---@param ServerSprintStamina float
function ADFBaseCharacter:ClientAdjustRootMotionSourcePosition_CustomStamina(Timestamp, ServerRootMotion, bHasAnimRootMotion, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode, ServerSprintStamina) end
---@param Timestamp float
---@param ServerMontageTrackPosition float
---@param ServerLoc FVector
---@param ServerRotation FVector_NetQuantizeNormal
---@param ServerVelZ float
---@param ServerBase UPrimitiveComponent
---@param ServerBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode uint8
---@param ServerSprintStamina float
function ADFBaseCharacter:ClientAdjustRootMotionPosition_CustomStamina(Timestamp, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode, ServerSprintStamina) end
---@param Timestamp float
---@param NewLoc FVector
---@param NewVel FVector
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode uint8
---@param ServerSprintStamina float
function ADFBaseCharacter:ClientAdjustPosition_CustomStamina(Timestamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode, ServerSprintStamina) end
---@param bPerspectiveMeshOnly boolean
function ADFBaseCharacter:ClearCharacterAnimInstances(bPerspectiveMeshOnly) end
---@return boolean
function ADFBaseCharacter:CanVault() end
---@return boolean
function ADFBaseCharacter:CanSprint() end
---@param DesiredLeanDir ELeanDirection
---@return boolean
function ADFBaseCharacter:CanLean(DesiredLeanDir) end
---@return boolean
function ADFBaseCharacter:CanGoProne() end
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param Killer AController
---@param DamageCauser AActor
---@return boolean
function ADFBaseCharacter:CanDie(KillingDamage, DamageEvent, Killer, DamageCauser) end
---@return boolean
function ADFBaseCharacter:CanAim() end
---@return boolean
function ADFBaseCharacter:AllowsWeaponFire() end
function ADFBaseCharacter:AimToggle() end
---@param bClientSimulation boolean
function ADFBaseCharacter:Aim(bClientSimulation) end


---@class ADFBaseGameMode : AGameMode
---@field DFGameSession ADFGameSession
---@field TeamStateClass TSubclassOf<ADFTeamState>
---@field AIControllerClass TSubclassOf<AAIController>
---@field WinningTeams TArray<uint8>
---@field TimerHandle_DefaultTimer FTimerHandle
---@field WarmupTime int32
---@field RoundTimeLimit int32
---@field RoundScoreLimit int32
---@field TimeBetweenMatches int32
---@field bBalanceTeams boolean
---@field BalanceTimerInterval float
---@field AutoAssignHumanTeam uint8
---@field bBotAutofill boolean
---@field GameDisplayName FText
---@field NumTeams int32
---@field bAllowUnassignedTeams boolean
---@field bAllowPlayerNameChanges boolean
---@field bAllowPlayerNameChangesUnderNullOSS boolean
---@field bAllowPlayerNameChangesUnderSteamOSS boolean
---@field bAlwaysDestroyPlayerDuringSeamlessTravel boolean
---@field bForceRespawn boolean
---@field bRandomSpawns boolean
---@field bRestartPlayerAtTransformOnly boolean
---@field bFriendlyFire boolean
---@field bUpdatePlayerGameplayMuteStates boolean
---@field bTeamOnlyVoice boolean
---@field DefaultPawnSpawnCollisionHandlingMethodOverride ESpawnActorCollisionHandlingMethod
---@field bAllowBots boolean
---@field TimerHandle_BalanceTimer FTimerHandle
---@field GameRulesetClasses TSet<TSoftClassPtr<UDFGameRulesetBase>>
---@field SignificantActors TArray<AActor>
---@field GameRulesets TArray<UDFGameRulesetBase>
---@field bAllowVoting boolean
---@field bAllowPlayerToChangeVote boolean
---@field AllowedVoteIssues TArray<TSoftClassPtr<UDFVoteIssue>>
---@field PlayerVotingGameStateComponentClass TSubclassOf<UDFVotingComponent>
ADFBaseGameMode = {}

---@param ForPlayerController ADFBasePlayerController
function ADFBaseGameMode:UpdatePlayerGameplayMuteStates(ForPlayerController) end
---@param ActorToRemove AActor
function ADFBaseGameMode:UnregisterSignificantActor(ActorToRemove) end
function ADFBaseGameMode:SwitchToNextMap() end
---@param RemovedActor AActor
---@param EndPlayReason EEndPlayReason::Type
function ADFBaseGameMode:SignificantActorEndPlay(RemovedActor, EndPlayReason) end
---@return boolean
function ADFBaseGameMode:ShouldHibernate() end
---@param ForPlayer ADFBasePlayerController
---@param PlayerToCheck ADFBasePlayerController
---@return boolean
function ADFBaseGameMode:ShouldGameplayMuteRemotePlayer(ForPlayer, PlayerToCheck) end
---@return boolean
function ADFBaseGameMode:ShouldBotAutofill() end
---@param TeamId uint8
---@param Num int32
function ADFBaseGameMode:RemoveTeamBots(TeamId, Num) end
---@param bNewest boolean
---@param bExcludeBots boolean
---@param bExcludeHumans boolean
function ADFBaseGameMode:RemovePlayerByAge(bNewest, bExcludeBots, bExcludeHumans) end
function ADFBaseGameMode:RemoveOldestPlayer() end
function ADFBaseGameMode:RemoveOldestBot() end
function ADFBaseGameMode:RemoveNewestPlayer() end
function ADFBaseGameMode:RemoveNewestBot() end
---@param PlayerName FString
---@return boolean
function ADFBaseGameMode:RemoveBotByName(PlayerName) end
---@param BotPS APlayerState
---@return boolean
function ADFBaseGameMode:RemoveBot(BotPS) end
function ADFBaseGameMode:RemoveAllBots() end
---@param ActorToRegister AActor
function ADFBaseGameMode:RegisterSignificantActor(ActorToRegister) end
---@param OldAIC AAIController
---@param NewAIC AAIController
function ADFBaseGameMode:ReceiveOnSwapAIControllers(OldAIC, NewAIC) end
function ADFBaseGameMode:ReceiveOnMatchIsWaitingToStart() end
function ADFBaseGameMode:ReceiveOnMatchHasStarted() end
function ADFBaseGameMode:ReceiveOnMatchHasEnded() end
function ADFBaseGameMode:ReceiveOnMatchAborted() end
function ADFBaseGameMode:ReceiveOnLeavingMap() end
---@param Player AController
---@return boolean
function ADFBaseGameMode:PlayerCanRestartGeneric(Player) end
---@param Player AAIController
---@return boolean
function ADFBaseGameMode:PlayerBotCanRestart(Player) end
function ADFBaseGameMode:NextMap() end
---@param Damage float
---@param DamagedActor AActor
---@param DamageEvent FDamageEvent
---@param EventInstigator AController
---@param DamageCauser AActor
---@return float
function ADFBaseGameMode:ModifyDamage(Damage, DamagedActor, DamageEvent, EventInstigator, DamageCauser) end
---@param KickedPlayerName FString
---@param KickReason FText
---@return boolean
function ADFBaseGameMode:KickPlayerByName(KickedPlayerName, KickReason) end
---@param KickedPlayerId int32
---@param KickReason FText
---@return boolean
function ADFBaseGameMode:KickPlayerById(KickedPlayerId, KickReason) end
---@param TeamId uint8
---@return boolean
function ADFBaseGameMode:IsValidTeamId(TeamId) end
---@param PlayerStateToCheck ADFBasePlayerState
---@return boolean
function ADFBaseGameMode:IsMatchWinner(PlayerStateToCheck) end
---@return boolean
function ADFBaseGameMode:IsHibernating() end
---@return boolean
function ADFBaseGameMode:IsFriendlyFireEnabled() end
---@param bIncludeTravellingPlayers boolean
---@return int32
function ADFBaseGameMode:GetTotalNumPlayers(bIncludeTravellingPlayers) end
---@param TeamId uint8
---@param PlayerType EPlayerKind
---@return int32
function ADFBaseGameMode:GetNumPlayersOnTeam(TeamId, PlayerType) end
---@return FString
function ADFBaseGameMode:GetNextMapName() end
---@return FString
function ADFBaseGameMode:GetNextGameName() end
---@return uint8
function ADFBaseGameMode:GetAutoAssignHumanTeam() end
---@param SwitchedPlayerId int32
---@param TeamIdToAssign uint8
---@return boolean
function ADFBaseGameMode:ForceTeamId(SwitchedPlayerId, TeamIdToAssign) end
---@param SwitchedPlayerName FString
---@param TeamIdToAssign uint8
---@return boolean
function ADFBaseGameMode:ForceTeam(SwitchedPlayerName, TeamIdToAssign) end
---@param Player AController
---@param OutFoundSpawnTransform FTransform
---@param IncomingName FString
---@return boolean
function ADFBaseGameMode:FindPlayerStartTransform(Player, OutFoundSpawnTransform, IncomingName) end
function ADFBaseGameMode:DumpActiveRulesets() end
function ADFBaseGameMode:DetermineMatchWinner() end
---@param NewTeamDef UDFTeamDefinition
---@param NewTeamIdToUse uint8
---@return ADFTeamState
function ADFBaseGameMode:CreateTeam(NewTeamDef, NewTeamIdToUse) end
---@param ForPlayerState ADFBasePlayerState
---@return uint8
function ADFBaseGameMode:ChooseTeam(ForPlayerState) end
---@param Player AController
---@param StartSpot AActor
---@param OutChosenSpawnPoint FSpawnPointDef
---@param OutCollisionHandlingMethod ESpawnActorCollisionHandlingMethod
---@return boolean
function ADFBaseGameMode:ChooseSpawnPointFromPlayerStart(Player, StartSpot, OutChosenSpawnPoint, OutCollisionHandlingMethod) end
---@return boolean
function ADFBaseGameMode:CheckWinConditions() end
---@return boolean
function ADFBaseGameMode:CheckRulesetWinConditions() end
---@param ActorToRegister AActor
---@param ActorDenialReason FString
---@return boolean
function ADFBaseGameMode:CanRegisterSignificantActor(ActorToRegister, ActorDenialReason) end
---@param DamageInstigator ADFBasePlayerState
---@param DamagedPlayer ADFBasePlayerState
---@return boolean
function ADFBaseGameMode:CanDealDamage(DamageInstigator, DamagedPlayer) end
---@param RulesetClassToAdd TSubclassOf<UDFGameRulesetBase>
---@param RulesetDenialReason FString
---@return boolean
function ADFBaseGameMode:CanAddRuleset(RulesetClassToAdd, RulesetDenialReason) end
---@param BannedPlayerName FString
---@param BanReason FText
---@param BanDuration float
---@return boolean
function ADFBaseGameMode:BanPlayerByName(BannedPlayerName, BanReason, BanDuration) end
---@param BannedPlayerId int32
---@param BanReason FText
---@param BanDuration float
---@return boolean
function ADFBaseGameMode:BanPlayerById(BannedPlayerId, BanReason, BanDuration) end
function ADFBaseGameMode:AutofillWithBots() end
---@param ForController AController
---@param AssignedTeam uint8
function ADFBaseGameMode:AssignTeam(ForController, AssignedTeam) end
---@param TeamId uint8
---@param Num int32
function ADFBaseGameMode:AddTeamBots(TeamId, Num) end
---@param BotName FString
function ADFBaseGameMode:AddNamedBot(BotName) end
---@param Num int32
function ADFBaseGameMode:AddBots(Num) end
---@param PlayerTeamID uint8
---@param PlayerName FString
---@return APlayerState
function ADFBaseGameMode:AddBot(PlayerTeamID, PlayerName) end


---@class ADFBaseGameState : AGameState
---@field NumTeams uint8
---@field bTimerPaused boolean
---@field RemainingTime int32
---@field ReplicatedRemainingTime int32
---@field TeamScores TArray<float>
---@field TeamArray TArray<ADFTeamState>
---@field OnTeamStateAdded FDFBaseGameStateOnTeamStateAdded
---@field OnTeamStateRemoved FDFBaseGameStateOnTeamStateRemoved
---@field OnPlayerStateAdded FDFBaseGameStateOnPlayerStateAdded
---@field OnPlayerStateRemoved FDFBaseGameStateOnPlayerStateRemoved
---@field bAllowVoting boolean
---@field bAllowPlayerToChangeVote boolean
---@field GameStateVotingComponent UDFVotingComponent
ADFBaseGameState = {}

---@param bNewPauseState boolean
function ADFBaseGameState:SetTimerPauseState(bNewPauseState) end
---@param NewRemainingTime int32
function ADFBaseGameState:SetRemainingTime(NewRemainingTime) end
function ADFBaseGameState:OnRep_ReplicatedRemainingTime() end
function ADFBaseGameState:OnRep_NumTeams() end
---@param TeamId uint8
---@return boolean
function ADFBaseGameState:IsValidTeamId(TeamId) end
---@param TeamIdNum uint8
---@return ADFTeamState
function ADFBaseGameState:GetTeamStateById(TeamIdNum) end
---@return UDFVotingComponent
function ADFBaseGameState:GetGameStateVotingComponent() end


---@class ADFBaseGame_DeathMatch : ADFBaseGameMode
---@field WinningPlayerState ADFBasePlayerState
ADFBaseGame_DeathMatch = {}



---@class ADFBaseGame_TeamDeathMatch : ADFBaseGameMode
ADFBaseGame_TeamDeathMatch = {}


---@class ADFBaseGun : ADFBaseWeapon
---@field OnFireModeChanged FDFBaseGunOnFireModeChanged
---@field TimerIntervalAdjustment float
---@field bAllowAutomaticWeaponCatchup boolean
---@field FireRate float
---@field ShotsPerBurst int32
---@field SupportedFireModes uint8
---@field SelectedFireMode EFireMode
---@field RecoilHandler UDFGunRecoilHandler
---@field OnReloadStarted FDFBaseGunOnReloadStarted
---@field OnReloadFinished FDFBaseGunOnReloadFinished
---@field PendingReloadState EGunReloadState
---@field PreviousReloadState EGunReloadState
---@field bKeepLoadedAmmoOnLeaveInventory boolean
---@field bUsesAmmo boolean
---@field bExhaustible boolean
---@field bCanSprintWhileReloading boolean
---@field bReloadOnEquip boolean
---@field bInstantReloadOnEquip boolean
---@field bInstantReloadOnInitialEquip boolean
---@field bInstantReloadOnInitialEnterInventory boolean
---@field bReloadOnDryFire boolean
---@field bReloadOnStopFire boolean
---@field bSimulateGunReloadOnDedicatedServer boolean
---@field AmmoClipReloadBehavior EAmmoClipReloadBehavior
---@field SupportedAmmoClips TSet<TSubclassOf<ADFBaseAmmoClip>>
---@field StartingAmmoClips int32
---@field bDispensedStartingAmmoClips boolean
---@field CurrentAmmoClip ADFBaseAmmoClip
---@field CurrentAmmoClipInvIndex int32
---@field PreviousAmmoClip ADFBaseAmmoClip
---@field CurrentAmmoInClipBeforeReload int32
---@field TotalAvailableAmmoBeforeReload int32
---@field ReloadCycleIterations int32
---@field bInfiniteClipAmmo boolean
---@field bInfiniteAmmo boolean
---@field bNoRecoil boolean
---@field CustomMuzzleAttachComponentToUse FComponentReference
---@field MuzzleAttachComponentName FName
---@field MuzzleAttachPoint FName
---@field MuzzleFX UParticleSystem
---@field MuzzleLocationOffset FVector
---@field MuzzleRotationOffset FRotator
---@field bLoopedMuzzleFX boolean
---@field MuzzlePSC UParticleSystemComponent
---@field ShellEjectAttachPoint FName
---@field ShellEjectFX UParticleSystem
---@field ShellEjectLocationOffset FVector
---@field ShellEjectRotationOffset FRotator
---@field bLoopedShellEjectFX boolean
---@field bPlayShellEjectFXOnFireLast boolean
---@field ShellEjectDelay float
---@field ShellEjectPSC UParticleSystemComponent
ADFBaseGun = {}

function ADFBaseGun:UnloadCurrentAmmoClip() end
function ADFBaseGun:StopSimulatingGunReload() end
---@param bClientSimulation boolean
function ADFBaseGun:StartReload(bClientSimulation) end
function ADFBaseGun:SimulateGunReload() end
---@return boolean
function ADFBaseGun:ShouldUseRecoil() end
---@return boolean
function ADFBaseGun:ShouldSimulateGunReload() end
---@param NewReloadState EGunReloadState
function ADFBaseGun:SetReloadState(NewReloadState) end
---@param NewFireMode EFireMode
function ADFBaseGun:SetFireModeBP(NewFireMode) end
---@param NewFireMode EFireMode
---@param bFromPlayerInput boolean
---@param bForce boolean
---@return boolean
function ADFBaseGun:SetFireMode(NewFireMode, bFromPlayerInput, bForce) end
function ADFBaseGun:ServerStartReload() end
---@param NewFireMode EFireMode
function ADFBaseGun:ServerSetFireMode(NewFireMode) end
function ADFBaseGun:ReceiveReloadStarted() end
function ADFBaseGun:ReceiveReloadFinished() end
---@param NewFireMode EFireMode
---@param PrevFireMode EFireMode
---@param bFromPlayerInput boolean
function ADFBaseGun:ReceiveFireModeChanged(NewFireMode, PrevFireMode, bFromPlayerInput) end
function ADFBaseGun:ReceiveAmmoExhausted() end
---@param StartReloadMontageToPlay UAnimMontage
---@param bDryReload boolean
---@return float
function ADFBaseGun:PlayWeaponStartReloadMontage(StartReloadMontageToPlay, bDryReload) end
---@param bDryReload boolean
---@return float
function ADFBaseGun:PlayWeaponReloadMontage(bDryReload) end
---@param EndReloadMontageToPlay UAnimMontage
---@param bDryReload boolean
---@return float
function ADFBaseGun:PlayWeaponEndReloadMontage(EndReloadMontageToPlay, bDryReload) end
---@param bStartReload boolean
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
---@return float
function ADFBaseGun:PlayReloadTransitionAnimations(bStartReload, bDontPlayAndReturnDominantPlayLengthOnly) end
---@param bDryReload boolean
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
---@return float
function ADFBaseGun:PlayReloadAnimations(bDryReload, bDontPlayAndReturnDominantPlayLengthOnly) end
---@param PrevSelectedFireMode EFireMode
function ADFBaseGun:OnRep_SelectedFireMode(PrevSelectedFireMode) end
---@param PrevReloadState EGunReloadState
function ADFBaseGun:OnRep_PendingReloadState(PrevReloadState) end
---@param PrevAmmoClip ADFBaseAmmoClip
function ADFBaseGun:OnRep_CurrentAmmoClip(PrevAmmoClip) end
---@param bClientSimulation boolean
function ADFBaseGun:OnReload(bClientSimulation) end
function ADFBaseGun:LoadPreviousAmmoClip() end
function ADFBaseGun:LoadNextAmmoClip() end
---@param ClipToLoad ADFBaseAmmoClip
function ADFBaseGun:LoadAmmoClip(ClipToLoad) end
---@return boolean
function ADFBaseGun:IsReloading() end
---@return boolean
function ADFBaseGun:IsDryReloading() end
---@return boolean
function ADFBaseGun:HasExhaustedAllAmmo() end
---@return boolean
function ADFBaseGun:HasAmmoClip() end
---@param bIncludeLoadedMags boolean
---@return int32
function ADFBaseGun:GetTotalAmmo(bIncludeLoadedMags) end
---@return uint8
function ADFBaseGun:GetSupportedFireModes() end
---@return FName
function ADFBaseGun:GetShellEjectAttachPoint() end
---@return EFireMode
function ADFBaseGun:GetSelectedFireMode() end
---@return EGunReloadState
function ADFBaseGun:GetReloadState() end
---@return EGunReloadState
function ADFBaseGun:GetPreviousReloadState() end
---@return int32
function ADFBaseGun:GetPostReloadClipAmmo() end
---@param bIncludeEmptyMags boolean
---@param bIncludeCurrentMag boolean
---@return int32
function ADFBaseGun:GetNumFreeAmmoClips(bIncludeEmptyMags, bIncludeCurrentMag) end
---@param bIgnoreLocalControlOnServer boolean
---@return FVector
function ADFBaseGun:GetMuzzleLocation(bIgnoreLocalControlOnServer) end
---@param bIgnoreLocalControlOnServer boolean
---@return FVector
function ADFBaseGun:GetMuzzleDirection(bIgnoreLocalControlOnServer) end
---@return FName
function ADFBaseGun:GetMuzzleAttachPoint() end
---@param bIgnoreLocalControlOnServer boolean
---@return USceneComponent
function ADFBaseGun:GetMuzzleAttachComponent(bIgnoreLocalControlOnServer) end
---@return int32
function ADFBaseGun:GetClipAmmo() end
---@param ShotID int32
---@param ShotAmmoClip ADFBaseAmmoClip
---@param ServerClipAmmo int32
function ADFBaseGun:ClientRejectFiredShot(ShotID, ShotAmmoClip, ServerClipAmmo) end
---@return boolean
function ADFBaseGun:CanReload() end


---@class ADFBaseGun_Projectile : ADFBaseGun
---@field ProjectileClass TSubclassOf<ADFBaseProjectile>
---@field ProjectileSpawnDistance float
---@field TargetTraceDistance float
---@field bUseMuzzleAsTrace boolean
---@field MuzzleSightOffset FVector
---@field OnProcessValidProjCSHit FDFBaseGun_ProjectileOnProcessValidProjCSHit
ADFBaseGun_Projectile = {}

---@param HitInfo FCSHitInfo
---@param ShotID int32
function ADFBaseGun_Projectile:ServerNotifyCSHitPredicted(HitInfo, ShotID) end
---@param HitProj ADFBaseProjectile
---@param HitInfo FCSHitInfo
---@param ShotID int32
function ADFBaseGun_Projectile:ServerNotifyCSHit(HitProj, HitInfo, ShotID) end
---@param Proj ADFBaseProjectile
---@param NewProjLoc FVector
---@param LastProjLoc FVector
---@param NewProjRot FRotator
---@param NewProjVel FVector
function ADFBaseGun_Projectile:ClientProjDebugInfo(Proj, NewProjLoc, LastProjLoc, NewProjRot, NewProjVel) end
---@param Proj ADFBaseProjectile
---@param ImpactLoc FVector
---@param ImpactNorm FVector_NetQuantizeNormal
function ADFBaseGun_Projectile:ClientProjDebugImpactInfo(Proj, ImpactLoc, ImpactNorm) end
---@param ConeOrig FVector
---@param ConeDir FVector_NetQuantizeNormal
function ADFBaseGun_Projectile:ClientDrawDebugFireCone(ConeOrig, ConeDir) end
---@param OutProjOrigin FVector
---@param OutProjDir FVector
function ADFBaseGun_Projectile:CalcShotVector(OutProjOrigin, OutProjDir) end


---@class ADFBaseImpactEffect : AActor
---@field ConcreteDecals TArray<FDecalData>
---@field MetalSolidDecals TArray<FDecalData>
---@field WoodDecals TArray<FDecalData>
---@field GlassBPDecals TArray<FDecalData>
---@field GlassDecals TArray<FDecalData>
---@field GlassWHDecals TArray<FDecalData>
---@field MetalThinDecals TArray<FDecalData>
---@field SandbagDecals TArray<FDecalData>
---@field BrickWallDecals TArray<FDecalData>
---@field RubberDecals TArray<FDecalData>
---@field DrywallDecals TArray<FDecalData>
---@field ElectricDevicesDecals TArray<FDecalData>
---@field OilBarrelDecals TArray<FDecalData>
---@field SnowFX UParticleSystem
---@field WaterFX UParticleSystem
---@field ConcreteFX UParticleSystem
---@field DirtFX UParticleSystem
---@field MetalSolidFX UParticleSystem
---@field WoodFX UParticleSystem
---@field GlassBPFX UParticleSystem
---@field GlassFX UParticleSystem
---@field GlassWHFX UParticleSystem
---@field GrassFX UParticleSystem
---@field MetalThinFX UParticleSystem
---@field SandbagFX UParticleSystem
---@field BrickWallFX UParticleSystem
---@field RubberFX UParticleSystem
---@field DrywallFX UParticleSystem
---@field ElectricDevicesFX UParticleSystem
---@field OilBarrelFX UParticleSystem
---@field SandFX UParticleSystem
---@field SoftFX UParticleSystem
---@field GroundFX UParticleSystem
---@field RockFX UParticleSystem
---@field FleshFX UParticleSystem
---@field ConcreteSound USoundCue
---@field DirtSound USoundCue
---@field SnowSound USoundCue
---@field SandbagSound USoundCue
---@field BrickWallSound USoundCue
---@field WaterSound USoundCue
---@field MetalSolidSound USoundCue
---@field MetalThinSound USoundCue
---@field WoodSound USoundCue
---@field GlassSound USoundCue
---@field GlassBPSound USoundCue
---@field GlassWHSound USoundCue
---@field GrassSound USoundCue
---@field RubberSound USoundCue
---@field DrywallSound USoundCue
---@field GroundSound USoundCue
---@field ElectricDevicesSound USoundCue
---@field OilBarrelSound USoundCue
---@field RockSound USoundCue
---@field FleshSound USoundCue
---@field DefaultDecal FDecalData
---@field DefaultFX UParticleSystem
---@field DefaultSound USoundCue
---@field SurfaceHit FHitResult
ADFBaseImpactEffect = {}

---@param SurfaceType EPhysicalSurface
---@return USoundCue
function ADFBaseImpactEffect:GetImpactSound(SurfaceType) end
---@param SurfaceType EPhysicalSurface
---@return UParticleSystem
function ADFBaseImpactEffect:GetImpactFX(SurfaceType) end


---@class ADFBaseItem : AActor
---@field PawnOwner ADFBaseCharacter
---@field ItemMesh UStaticMeshComponent
---@field ItemMesh1P UStaticMeshComponent
---@field PawnMesh1P USkeletalMesh
---@field PawnMesh1PAnimClass TSubclassOf<UAnimInstance>
---@field PawnMesh1PLocationOffset FVector
---@field PawnMesh1PRotationOffset FRotator
---@field ItemType EItemType
---@field SpecificItemType ESpecificItemType
---@field bCanEquip boolean
---@field bCanAimWhileEquipped boolean
---@field bDisableFireInput boolean
---@field bEquipped boolean
---@field bPendingEquip boolean
---@field bPendingUnEquip boolean
---@field bWantsToFire boolean
---@field LastFiredShotID int32
---@field bDebug boolean
---@field CharacterAnimCollection FCharacterAnimCollection
ADFBaseItem = {}

function ADFBaseItem:StopFire() end
function ADFBaseItem:StartFire() end
---@param NewOwner ADFBaseCharacter
function ADFBaseItem:SetOwningPawn(NewOwner) end
---@param bFirstPerson boolean
function ADFBaseItem:SetMeshVisibility(bFirstPerson) end
function ADFBaseItem:ServerStopFire() end
---@param Origin FVector_NetQuantize
---@param ShootDir FVector_NetQuantizeNormal
---@param RandomSeed int32
---@param Timestamp float
---@param ShotID int32
function ADFBaseItem:ServerStartFire(Origin, ShootDir, RandomSeed, Timestamp, ShotID) end
---@param bFPP boolean
---@return boolean
function ADFBaseItem:RemoveLegacyLocomotionAnims(bFPP) end
---@param bFirstPerson boolean
function ADFBaseItem:ReceiveVisibilityChanged(bFirstPerson) end
function ADFBaseItem:ReceiveStopFire() end
function ADFBaseItem:ReceiveStartFire() end
---@param bLeavingPawnInventory boolean
function ADFBaseItem:ReceiveOnUnEquipFinished(bLeavingPawnInventory) end
---@param bPlayAnimAndWait boolean
---@param bLeavingPawnInventory boolean
function ADFBaseItem:ReceiveOnUnEquip(bPlayAnimAndWait, bLeavingPawnInventory) end
function ADFBaseItem:ReceiveOnTurnOff() end
---@param LastOwner ADFBaseCharacter
function ADFBaseItem:ReceiveOnLeaveInventory(LastOwner) end
function ADFBaseItem:ReceiveOnEquipFinished() end
---@param LastItem ADFBaseItem
function ADFBaseItem:ReceiveOnEquip(LastItem) end
---@param NewOwner ADFBaseCharacter
---@param LastOwner ADFBaseCharacter
function ADFBaseItem:ReceiveOnEnterInventory(NewOwner, LastOwner) end
---@return boolean
function ADFBaseItem:OwnerIsSprinting() end
---@return boolean
function ADFBaseItem:OwnerIsAiming() end
---@param bPlayAnimAndWait boolean
---@param bLeavingPawnInventory boolean
function ADFBaseItem:OnUnEquip(bPlayAnimAndWait, bLeavingPawnInventory) end
function ADFBaseItem:OnTurnOff() end
---@param LastOwner ADFBaseCharacter
function ADFBaseItem:OnRep_PawnOwner(LastOwner) end
---@param LastOwner ADFBaseCharacter
function ADFBaseItem:OnLeaveInventory(LastOwner) end
---@param LastItem ADFBaseItem
function ADFBaseItem:OnEquip(LastItem) end
---@param NewOwner ADFBaseCharacter
---@param LastOwner ADFBaseCharacter
function ADFBaseItem:OnEnterInventory(NewOwner, LastOwner) end
---@return boolean
function ADFBaseItem:IsUnEquipping() end
---@return boolean
function ADFBaseItem:IsLocallyControlled() end
---@return boolean
function ADFBaseItem:IsEquipping() end
---@return boolean
function ADFBaseItem:IsEquipped() end
---@return boolean
function ADFBaseItem:IsClientSimulated() end
---@return ESpecificItemType
function ADFBaseItem:GetSpecificItemType() end
---@return ADFBaseCharacter
function ADFBaseItem:GetPawnOwner() end
---@return UDFInventoryComponent
function ADFBaseItem:GetPawnInventory() end
---@return FRotator
function ADFBaseItem:GetOwnerViewRotation() end
---@param OutViewLoc FVector
---@param OutViewRot FRotator
---@return boolean
function ADFBaseItem:GetOwnerViewPoint(OutViewLoc, OutViewRot) end
---@return FVector
function ADFBaseItem:GetOwnerViewLocation() end
---@param bFPP boolean
---@return TMap<FName, UAnimSequenceBase>
function ADFBaseItem:GetLegacyLocomotionAnims(bFPP) end
---@return EItemType
function ADFBaseItem:GetItemType() end
---@param bIgnoreLocalControlOnServer boolean
---@return UStaticMeshComponent
function ADFBaseItem:GetItemMeshToUse(bIgnoreLocalControlOnServer) end
---@return UStaticMeshComponent
function ADFBaseItem:GetItemMesh1P() end
---@return UStaticMeshComponent
function ADFBaseItem:GetItemMesh() end
---@return FVector
function ADFBaseItem:GetAdjustedAimDirection() end
function ADFBaseItem:ForceStopFiring() end
---@return boolean
function ADFBaseItem:CanTriggerFire() end
---@return boolean
function ADFBaseItem:CanStartFire() end
---@return boolean
function ADFBaseItem:CanSprintWhileEquipped() end
---@return boolean
function ADFBaseItem:CanFire() end
---@return boolean
function ADFBaseItem:CanEquip() end
---@return boolean
function ADFBaseItem:CanAimWhileEquipped() end


---@class ADFBasePickup : AActor
---@field Mesh UStaticMeshComponent
---@field bActive boolean
---@field InvokingPawn ADFBaseCharacter
---@field bUseable boolean
---@field bOverlap boolean
---@field RespawnDelay float
---@field PickupSound USoundCue
ADFBasePickup = {}

---@param bNewActive boolean
function ADFBasePickup:UpdatePickupState(bNewActive) end
function ADFBasePickup:RespawnPickup() end
function ADFBasePickup:OnRespawn() end
function ADFBasePickup:OnRep_Active() end
function ADFBasePickup:OnPickup() end
function ADFBasePickup:InitializePickup() end
---@param PickupOwner ADFBaseCharacter
function ADFBasePickup:GivePickupTo(PickupOwner) end
---@param Invoker ADFBaseCharacter
---@return boolean
function ADFBasePickup:CanBePickedUp(Invoker) end


---@class ADFBasePickup_Health : ADFBasePickup
---@field Health float
ADFBasePickup_Health = {}



---@class ADFBasePickup_Item : ADFBasePickup
---@field Inventory UDFInventoryComponent
ADFBasePickup_Item = {}



---@class ADFBasePlayerCharacter : ADFBaseCharacter
---@field BaseTurnRate float
---@field BaseLookUpRate float
---@field InteractionDistance float
---@field bFirstPerson boolean
---@field Camera UCameraComponent
---@field CameraBoom USpringArmComponent
---@field Camera1P UCameraComponent
---@field bStartInFirstPerson boolean
---@field bTrueFirstPerson boolean
---@field bDisableOrientationOfRotationToMovementInFirstPerson boolean
---@field bDisableUsageOfControllerRotationYawInThirdPerson boolean
---@field Mesh1P USkeletalMeshComponent
---@field bUseFirstPersonMesh boolean
---@field ItemAttachPoint1P FName
---@field OnPlayerToggleFirstPerson FDFBasePlayerCharacterOnPlayerToggleFirstPerson
ADFBasePlayerCharacter = {}

function ADFBasePlayerCharacter:Use() end
---@param Rate float
function ADFBasePlayerCharacter:TurnAtRate(Rate) end
function ADFBasePlayerCharacter:SwitchFireMode() end
---@param bFirstPersonVisibility boolean
function ADFBasePlayerCharacter:SetMeshVisibility(bFirstPersonVisibility) end
---@param UseTarget AActor
---@param UseTraceStart FVector_NetQuantize
---@param UseTraceEnd FVector_NetQuantize
function ADFBasePlayerCharacter:ServerUse(UseTarget, UseTraceStart, UseTraceEnd) end
---@param bNewFirstPerson boolean
function ADFBasePlayerCharacter:ServerOnToggleFirstPerson(bNewFirstPerson) end
---@return USkeletalMesh
function ADFBasePlayerCharacter:ReceiveGetDefaultPawnMesh1P() end
---@param bNewFirstPerson boolean
function ADFBasePlayerCharacter:OnToggleFirstPerson(bNewFirstPerson) end
function ADFBasePlayerCharacter:OnFireReleased() end
function ADFBasePlayerCharacter:OnFirePressed() end
---@param Value float
function ADFBasePlayerCharacter:MoveUp(Value) end
---@param Value float
function ADFBasePlayerCharacter:MoveRight(Value) end
---@param Value float
function ADFBasePlayerCharacter:MoveForward(Value) end
---@param Rate float
function ADFBasePlayerCharacter:LookUpAtRate(Rate) end
function ADFBasePlayerCharacter:JumpVaultPressed() end
---@return boolean
function ADFBasePlayerCharacter:IsUsingFirstPersonMesh() end
---@return boolean
function ADFBasePlayerCharacter:IsTrueFirstPerson() end
---@return boolean
function ADFBasePlayerCharacter:IsLocalFirstPerson() end
---@return boolean
function ADFBasePlayerCharacter:IsFirstPerson() end
---@return USkeletalMeshComponent
function ADFBasePlayerCharacter:GetMesh1P() end
---@return FName
function ADFBasePlayerCharacter:GetItemAttachPoint1P() end
---@return USkeletalMesh
function ADFBasePlayerCharacter:GetDefaultPawnMesh1P() end
---@return USpringArmComponent
function ADFBasePlayerCharacter:GetCameraBoom() end
---@return UCameraComponent
function ADFBasePlayerCharacter:GetCamera1P() end
---@return UCameraComponent
function ADFBasePlayerCharacter:GetCamera() end


---@class ADFBasePlayerController : APlayerController
---@field OnPossessPawn FDFBasePlayerControllerOnPossessPawn
---@field OnUnpossessPawn FDFBasePlayerControllerOnUnpossessPawn
---@field DFCharacter ADFBaseCharacter
---@field bSetGameOnlyInputOnBeginPlay boolean
---@field OnPlayerTeamNumUpdated FDFBasePlayerControllerOnPlayerTeamNumUpdated
---@field OnPlayerTeamStateUpdated FDFBasePlayerControllerOnPlayerTeamStateUpdated
---@field TeamState ADFTeamState
---@field MaxChatMsgLen int32
ADFBasePlayerController = {}

---@param Msg FString
function ADFBasePlayerController:TeamSay(Msg) end
---@param Msg FString
function ADFBasePlayerController:ServerTeamSay(Msg) end
---@param Msg FString
function ADFBasePlayerController:ServerSay(Msg) end
---@param HitProj ADFBaseProjectile
---@param HitProjDamageInstigator APawn
---@param HitInfo FCSHitInfo
---@param ShotID int32
function ADFBasePlayerController:ServerNotifyProjCSHit(HitProj, HitProjDamageInstigator, HitInfo, ShotID) end
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@param IssueContext FDFVoteIssueContext
---@param VoteSelectionIndex int32
---@param VotingChannel EDFVotingChannel
function ADFBasePlayerController:ServerInitiateVote(IssueClass, IssueContext, VoteSelectionIndex, VotingChannel) end
function ADFBasePlayerController:ServerEnableCheats() end
---@param VoteSelectionIndex int32
---@param VotingChannel EDFVotingChannel
function ADFBasePlayerController:ServerCastVote(VoteSelectionIndex, VotingChannel) end
---@param Cmd FString
function ADFBasePlayerController:ServerAdmin(Cmd) end
---@param Msg FString
function ADFBasePlayerController:Say(Msg) end
---@param UnpossessedPawn APawn
function ADFBasePlayerController:ReceiveUnpossessPawn(UnpossessedPawn) end
---@param PendingURL FString
---@param bIsSeamlessTravelWithRelativeTravelType boolean
function ADFBasePlayerController:ReceivePreClientTravel(PendingURL, bIsSeamlessTravelWithRelativeTravelType) end
---@param NewPawn APawn
function ADFBasePlayerController:ReceivePossessPawn(NewPawn) end
---@param LastTeamState ADFTeamState
---@param NewTeamState ADFTeamState
---@param bNewTeamStateInit boolean
function ADFBasePlayerController:ReceivePlayerTeamStateUpdated(LastTeamState, NewTeamState, bNewTeamStateInit) end
---@param LastTeamNum uint8
---@param NewTeamNum uint8
function ADFBasePlayerController:ReceivePlayerTeamNumUpdated(LastTeamNum, NewTeamNum) end
function ADFBasePlayerController:ReceiveOnRepPlayerState() end
---@param ChatMsg FPlayerChatMsg
function ADFBasePlayerController:ReceiveNewChatMsg(ChatMsg) end
---@param EndGameFocus AActor
---@param bIsWinner boolean
function ADFBasePlayerController:ReceiveGameHasEnded(EndGameFocus, bIsWinner) end
function ADFBasePlayerController:OnFireReleased() end
function ADFBasePlayerController:OnFirePressed() end
---@return boolean
function ADFBasePlayerController:IsServerAdministrator() end
---@return boolean
function ADFBasePlayerController:IsGameInputAllowed() end
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@param IssueContext FDFVoteIssueContext
---@param VoteSelectionIndex int32
---@param VotingChannel EDFVotingChannel
---@return boolean
function ADFBasePlayerController:InitiateVote(IssueClass, IssueContext, VoteSelectionIndex, VotingChannel) end
---@param VotingChannel EDFVotingChannel
---@return UDFVotingComponent
function ADFBasePlayerController:GetVotingComponentByChannel(VotingChannel) end
---@return FTimerHandle
function ADFBasePlayerController:GetUnFreezeTimerHandle() end
function ADFBasePlayerController:ClientEnableCheats() end
---@param VoteSelectionIndex int32
---@param VotingChannel EDFVotingChannel
---@return boolean
function ADFBasePlayerController:CastVote(VoteSelectionIndex, VotingChannel) end
---@param Cmd FString
function ADFBasePlayerController:Admin(Cmd) end


---@class ADFBasePlayerState : APlayerState
---@field OnRepPlayerName FDFBasePlayerStateOnRepPlayerName
---@field OnPlayerTeamNumUpdated FDFBasePlayerStateOnPlayerTeamNumUpdated
---@field TeamNum uint8
---@field PrevTeamNum uint8
---@field TeamState ADFTeamState
---@field PrevTeamState ADFTeamState
---@field bAdmin boolean
---@field NumKills int32
---@field NumAssists int32
---@field NumDeaths int32
---@field TeamStartTime int32
ADFBasePlayerState = {}

---@param NewTeamNum uint8
---@param bCopyToInactivePlayerState boolean
function ADFBasePlayerState:SetTeam(NewTeamNum, bCopyToInactivePlayerState) end
---@param bNewAdminStatus boolean
function ADFBasePlayerState:SetAdminStatus(bNewAdminStatus) end
---@param Points float
---@param bForceNetUpdate boolean
function ADFBasePlayerState:ScorePoints(Points, bForceNetUpdate) end
---@param Victim ADFBasePlayerState
---@param Points float
function ADFBasePlayerState:ScoreKillPlayer(Victim, Points) end
---@param KilledBy ADFBasePlayerState
---@param Points float
function ADFBasePlayerState:ScoreDeath(KilledBy, Points) end
---@param Killer ADFBasePlayerState
---@param Victim ADFBasePlayerState
---@param Points float
function ADFBasePlayerState:ScoreAssistPlayer(Killer, Victim, Points) end
function ADFBasePlayerState:ReceiveOnRepPlayerName() end
---@param TeamStateBeforeUpdate ADFTeamState
function ADFBasePlayerState:OnTeamStateUpdated(TeamStateBeforeUpdate) end
---@param TeamNumBeforeUpdate uint8
function ADFBasePlayerState:OnTeamNumUpdated(TeamNumBeforeUpdate) end
---@param TeamStateBeforeUpdate ADFTeamState
function ADFBasePlayerState:OnRep_TeamState(TeamStateBeforeUpdate) end
---@param TeamNumBeforeUpdate uint8
function ADFBasePlayerState:OnRep_TeamNum(TeamNumBeforeUpdate) end
---@param PrevNumKills int32
function ADFBasePlayerState:OnRep_NumKills(PrevNumKills) end
---@param PrevNumDeaths int32
function ADFBasePlayerState:OnRep_NumDeaths(PrevNumDeaths) end
---@param PrevNumAssists int32
function ADFBasePlayerState:OnRep_NumAssists(PrevNumAssists) end
---@param bAdminStatusBeforeUpdate boolean
function ADFBasePlayerState:OnRep_bAdmin(bAdminStatusBeforeUpdate) end
---@return uint8
function ADFBasePlayerState:GetTeam() end
---@return uint8
function ADFBasePlayerState:GetPreviousTeam() end
---@return int32
function ADFBasePlayerState:GetKills() end
---@return int32
function ADFBasePlayerState:GetDeaths() end
---@return int32
function ADFBasePlayerState:GetAssists() end


---@class ADFBaseProjectile : AActor
---@field ProjectileMovement UProjectileMovementComponent
---@field ProjectileImpactFXClass TSubclassOf<ADFBaseImpactEffect>
---@field SpawnTransform FTransform
---@field ShotID int32
---@field LastLoc FVector
---@field bSpawnImpactFXOnHit boolean
---@field bAlwaysShootable boolean
---@field bIgnoreInstigator boolean
---@field bIgnoreInstigatorOnPayloadActivation boolean
---@field InstigatingController AController
---@field bDebug boolean
---@field OnProcessValidHit FDFBaseProjectileOnProcessValidHit
---@field bIgnoreInstigatorHitEventsOnly boolean
---@field bProcessedAHit boolean
---@field bClientSideHitDetectionEnabled boolean
---@field bClientSideHitDamageEnabled boolean
---@field bNotifyOfPredictedProjectileHits boolean
---@field bOnlyNotifyOfPredictedProjectileHits boolean
---@field PendingHitInfo FCSHitInfo
---@field ImpactedActor AActor
---@field bApplyDamageOnImpact boolean
---@field bApplyDamageOnBounceImpact boolean
---@field bApplyDamageToInstigator boolean
---@field BaseDamageParams FDFDamageParams
---@field WeaponDamageTypeClass TSubclassOf<UDamageType>
---@field RadialDamageOriginOffset FVector
---@field RadialDamagePreventionChannel ECollisionChannel
---@field bWantsToUseClientSidePrediction boolean
---@field bReconcilePredictedProjWithServerProj boolean
---@field bPredictedClientProjectile boolean
---@field MyPredictedClientProjectile ADFBaseProjectile
---@field ServerAuthoritativeProjectile ADFBaseProjectile
---@field OnTriggerPayload FDFBaseProjectileOnTriggerPayload
---@field bPayloadTriggered boolean
---@field bTriggerPayloadWhenStopped boolean
---@field bTearOffOnPayloadActivation boolean
---@field bDisableOnPayloadActivation boolean
ADFBaseProjectile = {}

---@param ImpactHitResult FHitResult
---@param bFromTearOff boolean
function ADFBaseProjectile:TriggerPayload(ImpactHitResult, bFromTearOff) end
---@param Impact FHitResult
function ADFBaseProjectile:SpawnImpactFX(Impact) end
---@param NewProjectileUpdatedComponent USceneComponent
function ADFBaseProjectile:SetProjectileUpdatedComponent(NewProjectileUpdatedComponent) end
---@param ImpactHitResult FHitResult
function ADFBaseProjectile:ReceivePayloadActivated(ImpactHitResult) end
---@param ImpactResult FHitResult
function ADFBaseProjectile:ProjectileStop(ImpactResult) end
---@param ImpactResult FHitResult
---@param ImpactVelocity FVector
function ADFBaseProjectile:ProjectileBounce(ImpactResult, ImpactVelocity) end
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param HitResult FHitResult
---@return boolean
function ADFBaseProjectile:K2_ShouldIgnoreHit(OtherActor, OtherComp, HitResult) end
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param HitLocation FVector
---@param HitNormal FVector
---@param HitResult FHitResult
---@param bFromCSHitNotify boolean
function ADFBaseProjectile:K2_PostProcessValidHit(OtherActor, OtherComp, HitLocation, HitNormal, HitResult, bFromCSHitNotify) end
---@param bShouldIgnore boolean
---@param bBidirectional boolean
function ADFBaseProjectile:IgnoreInstigatorWhenMoving(bShouldIgnore, bBidirectional) end
---@return boolean
function ADFBaseProjectile:HasValidPredictedClientProjectile() end
---@return UPrimitiveComponent
function ADFBaseProjectile:GetProjectileUpdatedPrimitive() end
---@return USceneComponent
function ADFBaseProjectile:GetProjectileUpdatedComponent() end
---@return ADFBaseWeapon
function ADFBaseProjectile:GetOwningWeapon() end
---@return TSubclassOf<ADFBaseImpactEffect>
function ADFBaseProjectile:GetImpactFXClass() end
---@param OtherActor AActor
---@param HitLocation FVector
---@return FDFDamageParams
function ADFBaseProjectile:GetAdjustedDamageParams(OtherActor, HitLocation) end
function ADFBaseProjectile:DisableAndDeferDestroy() end
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param HitLocation FVector
---@param HitNormal FVector
---@param HitResult FHitResult
---@return float
function ADFBaseProjectile:ApplyDamageToImpactedActor(OtherActor, OtherComp, HitLocation, HitNormal, HitResult) end


---@class ADFBaseProjectileLegacy : AActor
---@field ProjectileCollision UPrimitiveComponent
---@field ProjectileMovement UProjectileMovementComponent
---@field ProjectileImpactFXClass TSubclassOf<ADFBaseImpactEffect>
---@field SpawnTransform FTransform
---@field LastLoc FVector
---@field bListenForImpactEvents boolean
---@field bIgnoreInstigator boolean
---@field InstigatingController AController
---@field ActiveLifeSpan float
---@field WeaponDamageTypeClass TSubclassOf<UDamageType>
---@field bDebug boolean
---@field bApplyDamageFromPayload boolean
---@field HitDamage float
---@field bApplyRadialDamage boolean
---@field RadialDamageLocOffset FVector
---@field RadialDamagePreventionChannel ECollisionChannel
---@field DamageRadius float
---@field bPayloadTriggered boolean
---@field bTriggerPayloadWhenStopped boolean
---@field bTriggerPayloadOnDelay boolean
---@field PayloadTriggerDelay float
---@field PayloadTriggerFX UParticleSystem
---@field bAttachTriggerFXToRoot boolean
---@field TriggerFXPSC UParticleSystemComponent
---@field PayloadTriggerSnd USoundBase
---@field bAttachTriggerSndToRoot boolean
---@field TriggerSnd UAudioComponent
ADFBaseProjectileLegacy = {}

---@param ImpactHitResult FHitResult
function ADFBaseProjectileLegacy:TriggerPayload(ImpactHitResult) end
function ADFBaseProjectileLegacy:StopSimulatingPayloadActivation() end
---@param Impact FHitResult
function ADFBaseProjectileLegacy:SpawnImpactFX(Impact) end
function ADFBaseProjectileLegacy:SimulatePayloadActivation() end
function ADFBaseProjectileLegacy:ReceiveStopSimulatingPayloadActivation() end
function ADFBaseProjectileLegacy:ReceiveSimulatePayloadActivation() end
---@param ImpactHitResult FHitResult
function ADFBaseProjectileLegacy:ReceivePayloadActivated(ImpactHitResult) end
---@param ImpactResult FHitResult
function ADFBaseProjectileLegacy:ProjectileStop(ImpactResult) end
---@param ImpactResult FHitResult
---@param ImpactVelocity FVector
function ADFBaseProjectileLegacy:ProjectileBounce(ImpactResult, ImpactVelocity) end
function ADFBaseProjectileLegacy:PayloadDelayElapsed() end
function ADFBaseProjectileLegacy:OnRep_bPayloadTriggered() end
---@return ADFBaseWeapon
function ADFBaseProjectileLegacy:GetOwningWeapon() end


---@class ADFBaseWeapon : ADFBaseItem
---@field OnFire FDFBaseWeaponOnFire
---@field bFiring boolean
---@field bReadyToFirePendingRelease boolean
---@field bFireOnRelease boolean
---@field PrefireDelayMin float
---@field bPrefiring boolean
---@field bADSFireOnly boolean
---@field bLastShotFired boolean
---@field bRepCounterPending boolean
---@field FireCounter FRepShotInfo
---@field PreviousRepFireCounter FRepShotInfo
---@field PostStoppedFireCounter FRepShotInfo
---@field LastFireTime float
---@field LastShotFireTime float
---@field bUseServerSideFiringLogic boolean
---@field bSimulateWeaponFireOnDedicatedServer boolean
---@field WeaponAnimCollection FWeaponAnimCollection
---@field bStopAllFireAnimsAfterFireRateDelay boolean
---@field bSimulate1PWeaponFireOnPawnOwner1PMesh boolean
---@field WeaponSoundCollection FWeaponSoundCollection
---@field bSingleAction boolean
---@field bSingleLoad boolean
---@field WeaponMesh USkeletalMeshComponent
---@field WeaponMesh1P USkeletalMeshComponent
---@field bCanSprintWhilePrefiring boolean
---@field DamageFalloffCurve FRuntimeFloatCurve
---@field DamageTypeClass TSubclassOf<UDamageType>
ADFBaseWeapon = {}

---@param WeapAnim FPerspectiveAnim
function ADFBaseWeapon:StopWeaponPerspectiveAnimation(WeapAnim) end
---@param WeapMontage UAnimMontage
function ADFBaseWeapon:StopWeaponMontage(WeapMontage) end
---@param bForceStopAll boolean
function ADFBaseWeapon:StopSimulatingWeaponFire(bForceStopAll) end
function ADFBaseWeapon:SimulateWeaponFire() end
---@return boolean
function ADFBaseWeapon:ShouldSimulateWeaponFire() end
function ADFBaseWeapon:ServerPreFire() end
---@param Origin FVector_NetQuantize
---@param ShootDir FVector_NetQuantizeNormal
---@param RandomSeed int32
---@param Timestamp float
---@param ShotID int32
function ADFBaseWeapon:ServerFireShot(Origin, ShootDir, RandomSeed, Timestamp, ShotID) end
function ADFBaseWeapon:ReceiveStopSimulatingWeaponFire() end
function ADFBaseWeapon:ReceiveSimulateWeaponFire() end
function ADFBaseWeapon:ReceiveOnStopFiring() end
function ADFBaseWeapon:ReceiveOnStartFiring() end
function ADFBaseWeapon:ReceiveFire() end
---@param bClientSimulation boolean
function ADFBaseWeapon:PrefireDelayElapsed(bClientSimulation) end
---@param UnEquipMontageToPlay UAnimMontage
---@return float
function ADFBaseWeapon:PlayWeaponUnEquipMontage(UnEquipMontageToPlay) end
---@param ThrowUnderhandMontageToPlay UAnimMontage
---@return float
function ADFBaseWeapon:PlayWeaponThrowUnderhandMontage(ThrowUnderhandMontageToPlay) end
---@param ThrowOverhandMontageToPlay UAnimMontage
---@return float
function ADFBaseWeapon:PlayWeaponThrowOverhandMontage(ThrowOverhandMontageToPlay) end
---@param Sound FPerspectiveSound
---@return UAudioComponent
function ADFBaseWeapon:PlayWeaponSound(Sound) end
---@param WeapAnim FPerspectiveAnim
---@return float
function ADFBaseWeapon:PlayWeaponPerspectiveAnimation(WeapAnim) end
---@param WeapMontage UAnimMontage
---@param bForceDisableAutoBlendOut boolean
---@return float
function ADFBaseWeapon:PlayWeaponMontage(WeapMontage, bForceDisableAutoBlendOut) end
---@param FireMontageToPlay UAnimMontage
---@param bFireLast boolean
---@param bFireADS boolean
---@return float
function ADFBaseWeapon:PlayWeaponFireMontage(FireMontageToPlay, bFireLast, bFireADS) end
---@param EquipMontageToPlay UAnimMontage
---@return float
function ADFBaseWeapon:PlayWeaponEquipMontage(EquipMontageToPlay) end
---@param CockMontageToPlay UAnimMontage
---@return float
function ADFBaseWeapon:PlayWeaponCockMontage(CockMontageToPlay) end
---@param ActionMontageToPlay UAnimMontage
---@return float
function ADFBaseWeapon:PlayWeaponActionMontage(ActionMontageToPlay) end
---@param bOverhandThrow boolean
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
---@return float
function ADFBaseWeapon:PlayThrowAnimations(bOverhandThrow, bDontPlayAndReturnDominantPlayLengthOnly) end
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
---@return float
function ADFBaseWeapon:PlayCockAnimations(bDontPlayAndReturnDominantPlayLengthOnly) end
---@param bDontPlayAndReturnDominantPlayLengthOnly boolean
function ADFBaseWeapon:PlayActionAnimations(bDontPlayAndReturnDominantPlayLengthOnly) end
function ADFBaseWeapon:OnStopFiring() end
function ADFBaseWeapon:OnStartFiring() end
---@param PreviousValue FRepShotInfo
function ADFBaseWeapon:OnRep_FireCounter(PreviousValue) end
function ADFBaseWeapon:OnRep_bPrefiring() end
---@return boolean
function ADFBaseWeapon:IsFiring() end
function ADFBaseWeapon:HandleFire() end
---@param bIgnoreLocalControlOnServer boolean
---@return USkeletalMeshComponent
function ADFBaseWeapon:GetWeaponMeshToUse(bIgnoreLocalControlOnServer) end
---@return USkeletalMeshComponent
function ADFBaseWeapon:GetWeaponMesh1P() end
---@return USkeletalMeshComponent
function ADFBaseWeapon:GetWeaponMesh() end
---@param AnimationPair FPerspectiveAnim
---@return UAnimMontage
function ADFBaseWeapon:GetMontageToUseFromPerspectiveAnimPair(AnimationPair) end
---@param AnimationPair FPerspectiveAnim
---@return float
function ADFBaseWeapon:GetMontagePlayLengthToUseFromPerspectiveAnimPair(AnimationPair) end
---@param AnimationPair FPerspectiveAnim
---@return UAnimSequenceBase
function ADFBaseWeapon:GetAnimToUseFromPerspectiveAnimPair(AnimationPair) end
---@param AnimationPair FPerspectiveAnim
---@return float
function ADFBaseWeapon:GetAnimPlayLengthToUseFromPerspectiveAnimPair(AnimationPair) end


---@class ADFGameSession : AGameSession
---@field ServerName FString
---@field MinPlayers int32
---@field Password FString
ADFGameSession = {}



---@class ADFInfo : AInfo
ADFInfo = {}


---@class ADFLevelScriptActor : ALevelScriptActor
ADFLevelScriptActor = {}


---@class ADFPlayerCameraManager : APlayerCameraManager
---@field AimingFOV float
---@field AimInterpSpeed float
ADFPlayerCameraManager = {}



---@class ADFRecastNavMesh : ARecastNavMesh
ADFRecastNavMesh = {}


---@class ADFReplInfo : ADFInfo
ADFReplInfo = {}


---@class ADFTeamState : AInfo
---@field bInitialized boolean
---@field FactionInfoClass TSubclassOf<UDFFactionInfo>
---@field TeamNum uint8
---@field OnPostInitTeam FDFTeamStateOnPostInitTeam
ADFTeamState = {}

function ADFTeamState:ReceivePostInitTeam() end
---@param InTeamDef UDFTeamDefinition
function ADFTeamState:ReceiveInitTeam(InTeamDef) end
---@return boolean
function ADFTeamState:IsReadyToInitialize() end
---@return boolean
function ADFTeamState:IsPendingSetupBP() end
---@return UDFFactionInfo
function ADFTeamState:GetFactionInfo() end


---@class ADFWorldSettings : AWorldSettings
---@field bVisibleInMapSelectUI boolean
---@field MapDisplayName FText
---@field MapDescription FText
---@field MapPreviewImg TSoftObjectPtr<UTexture2D>
---@field MapPreviewBannerImg TSoftObjectPtr<UTexture2D>
---@field SupportedGameModes TSet<TSoftClassPtr<AGameModeBase>>
---@field GameRulesetClasses TSet<TSoftClassPtr<UDFGameRulesetBase>>
ADFWorldSettings = {}



---@class FAnimMontagePlaybackParams
---@field Montage UAnimMontage
---@field SourceMeshComp USkeletalMeshComponent
FAnimMontagePlaybackParams = {}



---@class FAssetDescriptor
---@field AssetName FName
---@field DisplayText FText
FAssetDescriptor = {}



---@class FCSHitInfo
---@field bBlockingHit boolean
---@field Distance float
---@field Location FVector_NetQuantize
---@field Normal FVector_NetQuantizeNormal
---@field BoneName FName
---@field ShootLoc FVector_NetQuantize
---@field ShootDir FVector_NetQuantizeNormal
---@field TraceStart FVector_NetQuantize
---@field TraceEnd FVector_NetQuantize
---@field Actor TWeakObjectPtr<AActor>
---@field Component TWeakObjectPtr<UPrimitiveComponent>
---@field InstigatingController TWeakObjectPtr<AController>
FCSHitInfo = {}



---@class FCharacterAnimCollection
---@field BasePose UAnimSequence
---@field BasePoseTPP UAnimSequence
---@field AimBasePose UAnimSequence
---@field Death UAnimMontage
---@field Intrinsic FIntrinsicWeaponAnimSubset
---@field Locomotion FLocomotionWeaponAnimSubset
---@field SingleAction FSingleActionWeaponAnimSubset
---@field SingleLoad FSingleLoadWeaponAnimSubset
---@field Throwable FThrowableWeaponAnimSubset
---@field DeathAnim FPerspectiveAnim
---@field EquipAnim FPerspectiveAnim
---@field UnEquipAnim FPerspectiveAnim
---@field FireAnim FPerspectiveAnim
---@field ActionAnim FPerspectiveAnim
---@field ReloadAnim FPerspectiveAnim
---@field ReloadFullAnim FPerspectiveAnim
---@field StartReloadAnim FPerspectiveAnim
---@field EndReloadAnim FPerspectiveAnim
FCharacterAnimCollection = {}



---@class FCharacterSoundCollection
---@field DeathSound FPerspectiveSound
FCharacterSoundCollection = {}



---@class FDFActiveVoteInfo
---@field IssueClass TSubclassOf<UDFVoteIssue>
---@field IssueContext FDFVoteIssueContext
---@field VoteEndTime float
---@field OwningPlayer APlayerState
---@field Status EDFVoteStatus
---@field Votes TArray<FDFPlayerVoteSelection>
FDFActiveVoteInfo = {}



---@class FDFCharacterVariation
---@field Mesh TSoftObjectPtr<USkeletalMesh>
FDFCharacterVariation = {}



---@class FDFCharacterVariationData : FTableRowBase
---@field Variation FDFCharacterVariation
---@field VariationFPP FDFCharacterVariation
FDFCharacterVariationData = {}



---@class FDFCharacterVariationDataHandle
FDFCharacterVariationDataHandle = {}


---@class FDFCharacterVariationDataSource
FDFCharacterVariationDataSource = {}


---@class FDFCharacterVariationDataSource_TableRow : FDFCharacterVariationDataSource
---@field RowHandle FDataTableRowHandle
---@field bValidRowHandle boolean
FDFCharacterVariationDataSource_TableRow = {}



---@class FDFDamageParams : FRadialDamageParams
FDFDamageParams = {}


---@class FDFGenericObject : FFastArraySerializerItem
---@field Object UObject
---@field bPendingRemoval boolean
---@field bPredictivelyRemoved boolean
FDFGenericObject = {}



---@class FDFGenericObjectContainer : FFastArraySerializer
---@field GenericObjects TArray<FDFGenericObject>
---@field RequiredClass UClass
FDFGenericObjectContainer = {}



---@class FDFPlayerVote
---@field VoterPS APlayerState
---@field SelectionIdx int32
FDFPlayerVote = {}



---@class FDFPlayerVoteSelection
---@field SelectionIdx int32
---@field VoteCount int32
FDFPlayerVoteSelection = {}



---@class FDFPropertyAssetBundles
FDFPropertyAssetBundles = {}


---@class FDFVaultTargetParams
---@field DesiredBehavior EVaultBehavior
---@field Location FVector_NetQuantize10
FDFVaultTargetParams = {}



---@class FDFVaultTraceData
---@field TargetParams FDFVaultTargetParams
---@field Behavior EVaultBehavior
---@field Height float
FDFVaultTraceData = {}



---@class FDFVaultTraceResult : FDFVaultTraceData
---@field bSuccess boolean
FDFVaultTraceResult = {}



---@class FDFVoteIssueContext
---@field TargetPlayer APlayerState
FDFVoteIssueContext = {}



---@class FDFVoteIssueDefinition
---@field IssueClass TSubclassOf<UDFVoteIssue>
---@field bOnlyAdminsCanInitiateVote boolean
---@field bAllowAdminTargets boolean
FDFVoteIssueDefinition = {}



---@class FDFVotingComponentConfig
---@field AllowedVoteIssues TArray<TSubclassOf<UDFVoteIssue>>
FDFVotingComponentConfig = {}



---@class FDecalData
---@field DecalMaterial UMaterialInterface
---@field DecalSize float
---@field LifeSpan float
FDecalData = {}



---@class FIntrinsicWeaponAnimSubset
---@field Equip UAnimMontage
---@field UnEquip UAnimMontage
---@field Fire UAnimMontage
---@field Reload UAnimMontage
---@field ReloadEmpty UAnimMontage
FIntrinsicWeaponAnimSubset = {}



---@class FLocomotionWeaponAnimSubset
---@field Idle UAnimSequence
---@field Move UAnimSequence
---@field Sprint UAnimSequence
FLocomotionWeaponAnimSubset = {}



---@class FPerspectiveAnim
---@field Anim1P UAnimSequenceBase
---@field Anim3P UAnimSequenceBase
FPerspectiveAnim = {}



---@class FPerspectiveAnimSequence
---@field Anim1P UAnimSequence
---@field Anim3P UAnimSequence
FPerspectiveAnimSequence = {}



---@class FPerspectiveSkeletalMesh
---@field Mesh1P USkeletalMesh
---@field Mesh3P USkeletalMesh
FPerspectiveSkeletalMesh = {}



---@class FPerspectiveSound
---@field Sound1P USoundBase
---@field Sound3P USoundBase
FPerspectiveSound = {}



---@class FPerspectiveStaticMesh
---@field Mesh1P UStaticMesh
---@field Mesh3P UStaticMesh
FPerspectiveStaticMesh = {}



---@class FPlayerChatMsg
---@field SenderPS APlayerState
---@field SenderName FString
---@field MsgTeamId uint8
---@field MsgContent FString
FPlayerChatMsg = {}



---@class FRepShotInfo
---@field ShotCounter uint16
---@field bIsFiring boolean
---@field bCompressByte boolean
FRepShotInfo = {}



---@class FSingleActionWeaponAnimSubset
---@field Action UAnimMontage
FSingleActionWeaponAnimSubset = {}



---@class FSingleLoadWeaponAnimSubset
---@field StartReload UAnimMontage
---@field EndReload UAnimMontage
FSingleLoadWeaponAnimSubset = {}



---@class FSpawnPointDef
---@field SpawnID int32
---@field SpawnTransform FTransform
---@field SpawnContextObject UObject
FSpawnPointDef = {}



---@class FTakeHitInfo
---@field ActualDamage float
---@field DamageTypeClass UClass
---@field PawnInstigator TWeakObjectPtr<APawn>
---@field DamageCauser TWeakObjectPtr<AActor>
---@field DamageEventClassID int32
---@field bKilled boolean
---@field EnsureReplicationByte uint8
---@field GeneralDamageEvent FDamageEvent
---@field PointDamageEvent FPointDamageEvent
---@field RadialDamageEvent FRadialDamageEvent
FTakeHitInfo = {}



---@class FThrowableWeaponAnimSubset
---@field ReadyBasePose UAnimSequence
---@field Cock UAnimMontage
---@field ThrowOverhand UAnimMontage
---@field ThrowUnderhand UAnimMontage
FThrowableWeaponAnimSubset = {}



---@class FWeaponAnim
---@field CharAnim UAnimSequenceBase
---@field WeapAnim UAnimSequenceBase
FWeaponAnim = {}



---@class FWeaponAnimCollection
---@field BasePose UAnimSequence
---@field EmptyBasePose UAnimSequence
---@field Intrinsic FIntrinsicWeaponAnimSubset
---@field SingleAction FSingleActionWeaponAnimSubset
---@field SingleLoad FSingleLoadWeaponAnimSubset
---@field Throwable FThrowableWeaponAnimSubset
---@field EquipAnim FPerspectiveAnim
---@field UnEquipAnim FPerspectiveAnim
---@field FireAnim FPerspectiveAnim
---@field ActionAnim FPerspectiveAnim
---@field ReloadAnim FPerspectiveAnim
---@field ReloadFullAnim FPerspectiveAnim
---@field StartReloadAnim FPerspectiveAnim
---@field EndReloadAnim FPerspectiveAnim
FWeaponAnimCollection = {}



---@class FWeaponAnimMontage
---@field CharAnim UAnimMontage
---@field WeapAnim UAnimMontage
FWeaponAnimMontage = {}



---@class FWeaponAnimSequence
---@field CharAnim UAnimSequence
---@field WeapAnim UAnimSequence
FWeaponAnimSequence = {}



---@class FWeaponSoundCollection
---@field EquipSound FPerspectiveSound
---@field UnEquipSound FPerspectiveSound
---@field FireSound FPerspectiveSound
---@field FireLastSound FPerspectiveSound
---@field DryFireSound FPerspectiveSound
---@field ReloadSound FPerspectiveSound
---@field ReloadFullSound FPerspectiveSound
---@field FireModeSound FPerspectiveSound
FWeaponSoundCollection = {}



---@class IDFHandlerInterface : IInterface
IDFHandlerInterface = {}

---@param DeltaTime float
---@param bMakeDecision boolean
function IDFHandlerInterface:EventUpdate(DeltaTime, bMakeDecision) end
---@param DeltaTime float
---@param bActiveAndSpawnedInWorld boolean
---@return boolean
function IDFHandlerInterface:EventShouldUpdateThisFrame(DeltaTime, bActiveAndSpawnedInWorld) end
function IDFHandlerInterface:EventRespawn() end
function IDFHandlerInterface:EventReset() end
---@param NewPawn APawn
---@param PreviousPawn APawn
function IDFHandlerInterface:EventOnNewPawn(NewPawn, PreviousPawn) end
function IDFHandlerInterface:EventInit() end


---@class IDFIntrinsicCharAnimInstInterface : IInterface
IDFIntrinsicCharAnimInstInterface = {}

---@param MontageToPlay UAnimMontage
---@return float
function IDFIntrinsicCharAnimInstInterface:PlayDeathMontage(MontageToPlay) end


---@class IDFIntrinsicWeapAnimInstInterface : IInterface
IDFIntrinsicWeapAnimInstInterface = {}

---@param MontageToPlay UAnimMontage
---@return float
function IDFIntrinsicWeapAnimInstInterface:PlayUnEquipMontage(MontageToPlay) end
---@param MontageToPlay UAnimMontage
---@param bFullReload boolean
---@return float
function IDFIntrinsicWeapAnimInstInterface:PlayReloadMontage(MontageToPlay, bFullReload) end
---@param MontageToPlay UAnimMontage
---@param bFireLast boolean
---@param bAiming boolean
---@return float
function IDFIntrinsicWeapAnimInstInterface:PlayFireMontage(MontageToPlay, bFireLast, bAiming) end
---@param MontageToPlay UAnimMontage
---@return float
function IDFIntrinsicWeapAnimInstInterface:PlayEquipMontage(MontageToPlay) end


---@class IDFSingleActionWeapAnimInstInterface : IInterface
IDFSingleActionWeapAnimInstInterface = {}

---@param MontageToPlay UAnimMontage
---@return float
function IDFSingleActionWeapAnimInstInterface:PlayActionMontage(MontageToPlay) end


---@class IDFSingleLoadWeapAnimInstInterface : IInterface
IDFSingleLoadWeapAnimInstInterface = {}

---@param MontageToPlay UAnimMontage
---@param bFullReload boolean
---@return float
function IDFSingleLoadWeapAnimInstInterface:PlayStartReloadMontage(MontageToPlay, bFullReload) end
---@param MontageToPlay UAnimMontage
---@param bFullReload boolean
---@return float
function IDFSingleLoadWeapAnimInstInterface:PlayEndReloadMontage(MontageToPlay, bFullReload) end


---@class IDFTeamAgentInterface : IGenericTeamAgentInterface
IDFTeamAgentInterface = {}

---@param NewTeamNum uint8
function IDFTeamAgentInterface:EventSetTeamNum(NewTeamNum) end
---@return uint8
function IDFTeamAgentInterface:EventGetTeamNum() end


---@class IDFThrowableWeapAnimInstInterface : IInterface
IDFThrowableWeapAnimInstInterface = {}

---@param MontageToPlay UAnimMontage
---@return float
function IDFThrowableWeapAnimInstInterface:PlayThrowUnderhandMontage(MontageToPlay) end
---@param MontageToPlay UAnimMontage
---@return float
function IDFThrowableWeapAnimInstInterface:PlayThrowOverhandMontage(MontageToPlay) end
---@param MontageToPlay UAnimMontage
---@return float
function IDFThrowableWeapAnimInstInterface:PlayCockMontage(MontageToPlay) end


---@class ISpawnPointProviderInterface : IInterface
ISpawnPointProviderInterface = {}

---@param SpawnPoint FSpawnPointDef
---@param OutSpawnCollisionMethod ESpawnActorCollisionHandlingMethod
---@return boolean
function ISpawnPointProviderInterface:GetSpawnPointCollisionHandlingOverrideBP(SpawnPoint, OutSpawnCollisionMethod) end
---@param SpawnPoints TArray<FSpawnPointDef>
---@return int32
function ISpawnPointProviderInterface:GetAllSpawnPointsBP(SpawnPoints) end
---@param SpawnPointID int32
---@param FoundSpawnPoint FSpawnPointDef
---@return boolean
function ISpawnPointProviderInterface:FindSpawnPointBP(SpawnPointID, FoundSpawnPoint) end
---@param SpawnPoint FSpawnPointDef
---@param SpawnActorClass TSubclassOf<AActor>
---@return boolean
function ISpawnPointProviderInterface:CanSpawnActorFromSpawnPointBP(SpawnPoint, SpawnActorClass) end
---@param SpawnPoint FSpawnPointDef
---@param Player AController
---@param PlayerPawnClass TSubclassOf<APawn>
---@return boolean
function ISpawnPointProviderInterface:CanRestartPlayerFromSpawnPointBP(SpawnPoint, Player, PlayerPawnClass) end


---@class IUseableInterface : IInterface
IUseableInterface = {}

---@param Invoker AActor
function IUseableInterface:Used(Invoker) end


---@class IVisibilityInterface : IInterface
IVisibilityInterface = {}

---@return FVector
function IVisibilityInterface:EventGetFocalPoint() end


---@class UDFAssetManager : UAssetManager
UDFAssetManager = {}


---@class UDFBaseGameInstance : UGameInstance
---@field PendingReturnToMainMenuMessage UDFGameDialogDescriptor
---@field OnPlayerStateTalkingStateChanged FDFBaseGameInstanceOnPlayerStateTalkingStateChanged
UDFBaseGameInstance = {}

function UDFBaseGameInstance:ProjectVersion() end
---@param World UWorld
---@param FailureType ETravelFailure::Type
---@param ErrorString FString
function UDFBaseGameInstance:OnTravelFailure(World, FailureType, ErrorString) end
---@param World UWorld
---@param NetDriver UNetDriver
---@param LagType ENetworkLagState::Type
function UDFBaseGameInstance:OnNetworkLagStateChanged(World, NetDriver, LagType) end
---@param World UWorld
---@param NetDriver UNetDriver
---@param FailureType ENetworkFailure::Type
---@param ErrorString FString
function UDFBaseGameInstance:OnNetworkFailure(World, NetDriver, FailureType, ErrorString) end
---@param IPAddress FString
---@param JoinPassword FString
function UDFBaseGameInstance:JoinGameByIP(IPAddress, JoinPassword) end
---@param SearchResultIndex int32
---@param JoinPassword FString
function UDFBaseGameInstance:JoinGame(SearchResultIndex, JoinPassword) end
---@return boolean
function UDFBaseGameInstance:IsHibernating() end
---@param TravelURL FString
---@param bLANGame boolean
---@param MaxPlayers int32
---@param HostName FString
---@param Password FString
function UDFBaseGameInstance:HostGame(TravelURL, bLANGame, MaxPlayers, HostName, Password) end
function UDFBaseGameInstance:ForceUpdateSession() end
---@param SearchPresenceType ESessionSearchPresenceType
function UDFBaseGameInstance:FindGames(SearchPresenceType) end
function UDFBaseGameInstance:DumpOnlineSessionState() end


---@class UDFBlueprintFunctions : UBlueprintFunctionLibrary
UDFBlueprintFunctions = {}

---@param Counter FRepShotInfo
---@param OtherCounter FRepShotInfo
---@return boolean
function UDFBlueprintFunctions:WasShotFired(Counter, OtherCounter) end
---@param FromInv UDFInventoryComponent
---@param ToInv UDFInventoryComponent
---@param bKeepLoadedAmmo boolean
function UDFBlueprintFunctions:TransferInventoryItems(FromInv, ToInv, bKeepLoadedAmmo) end
---@param InText FText
---@return boolean
function UDFBlueprintFunctions:TextIsEmptyOrWhitespace(InText) end
---@param WorldContextObject UObject
---@param ImpactClass TSubclassOf<ADFBaseImpactEffect>
---@param Impact FHitResult
---@return ADFBaseImpactEffect
function UDFBlueprintFunctions:SpawnImpactFXFromHitResult(WorldContextObject, ImpactClass, Impact) end
---@param WorldContextObject UObject
---@param ImpactClass TSubclassOf<ADFBaseImpactEffect>
---@param DamageTaken float
---@param DamageEvent FDamageEvent
---@param HitActor AActor
---@param HitInstigator AActor
---@param DamageCauser AActor
---@return ADFBaseImpactEffect
function UDFBlueprintFunctions:SpawnImpactFXFromDamageEvent(WorldContextObject, ImpactClass, DamageTaken, DamageEvent, HitActor, HitInstigator, DamageCauser) end
---@param Target AActor
---@param NewTeamNum uint8
function UDFBlueprintFunctions:SetTeamNum(Target, NewTeamNum) end
---@param Controller AController
---@param NewStartSpot AActor
function UDFBlueprintFunctions:SetStartSpot(Controller, NewStartSpot) end
---@param ActorComp UActorComponent
function UDFBlueprintFunctions:SetNetAddressable(ActorComp) end
---@param PrimitiveComponent UPrimitiveComponent
---@param bCastStaticShadow boolean
function UDFBlueprintFunctions:SetCastStaticShadow(PrimitiveComponent, bCastStaticShadow) end
---@param InPlayerState APlayerState
function UDFBlueprintFunctions:ResetPlayerVoiceTalker(InPlayerState) end
function UDFBlueprintFunctions:ResetAllPlayerVoiceTalkers() end
---@param WorldContextObject UObject
---@param InText FText
---@param InLogVerbosity ELogVerbosityBP
---@param bPrintStackTrace boolean
function UDFBlueprintFunctions:PrintTextToLog(WorldContextObject, InText, InLogVerbosity, bPrintStackTrace) end
---@param WorldContextObject UObject
---@param inString FString
---@param InLogVerbosity ELogVerbosityBP
---@param bPrintStackTrace boolean
function UDFBlueprintFunctions:PrintStringToLog(WorldContextObject, inString, InLogVerbosity, bPrintStackTrace) end
---@param InTalker UVOIPTalker
---@return boolean
function UDFBlueprintFunctions:IsVOIPTalkerStillAlive(InTalker) end
---@param Actor AActor
---@return boolean
function UDFBlueprintFunctions:IsValidActor(Actor) end
---@param WorldContextObject UObject
---@return boolean
function UDFBlueprintFunctions:IsPlayInEditor(WorldContextObject) end
---@param PlayerPS APlayerState
---@return boolean
function UDFBlueprintFunctions:IsPlayerTalking(PlayerPS) end
---@param PC APlayerController
---@param PSToCheck APlayerState
---@return boolean
function UDFBlueprintFunctions:IsPlayerMuted(PC, PSToCheck) end
---@param Actor AActor
---@return boolean
function UDFBlueprintFunctions:IsPendingKillPending(Actor) end
---@param Pawn APawn
---@return boolean
function UDFBlueprintFunctions:IsLocallyPlayerControlled(Pawn) end
---@param inString FString
---@return boolean
function UDFBlueprintFunctions:IsEmptyOrWhitespace(inString) end
---@param Options FString
---@param Keys TArray<FString>
---@param bMatchAll boolean
---@return boolean
function UDFBlueprintFunctions:HasOptions(Options, Keys, bMatchAll) end
---@param Counter FRepShotInfo
---@return boolean
function UDFBlueprintFunctions:HasFiringStopped(Counter) end
---@param WorldContextObject UObject
---@return AWorldSettings
function UDFBlueprintFunctions:GetWorldSettings(WorldContextObject) end
---@param InPlayerState APlayerState
---@return UVOIPTalker
function UDFBlueprintFunctions:GetVOIPTalkerForPlayer(InPlayerState) end
---@param Widget UWidget
---@return ESlateVisibility
function UDFBlueprintFunctions:GetVisibilityDefault(Widget) end
---@param WorldContextObject UObject
---@param TeamIdNum uint8
---@return ADFTeamState
function UDFBlueprintFunctions:GetTeamStateFromTeamId(WorldContextObject, TeamIdNum) end
---@param Target AActor
---@return uint8
function UDFBlueprintFunctions:GetTeamNum(Target) end
---@param Actor AActor
---@param RequestedBy AActor
---@return FVector
function UDFBlueprintFunctions:GetTargetLocation(Actor, RequestedBy) end
---@param SurfaceType EPhysicalSurface
---@return FName
function UDFBlueprintFunctions:GetSurfaceName(SurfaceType) end
---@param Controller AController
---@return AActor
function UDFBlueprintFunctions:GetStartSpot(Controller) end
---@param Counter FRepShotInfo
---@return int32
function UDFBlueprintFunctions:GetShotCounterBPCompat(Counter) end
---@param PluginName FString
---@return FString
function UDFBlueprintFunctions:GetPluginFriendlyName(PluginName) end
---@param Counter FRepShotInfo
---@param PreviousCounter FRepShotInfo
---@return int32
function UDFBlueprintFunctions:GetNumShotsFiredBPCompat(Counter, PreviousCounter) end
---@param WorldContextObject UObject
---@return FText
function UDFBlueprintFunctions:GetMapNameForDisplay(WorldContextObject) end
---@param WorldContextObject UObject
---@return FString
function UDFBlueprintFunctions:GetMapName(WorldContextObject) end
---@param WorldAssetId FPrimaryAssetId
---@param bOutVisibleInMapSelectUI boolean
---@return boolean
function UDFBlueprintFunctions:GetMapAssetVisibleInMapSelectUI(WorldAssetId, bOutVisibleInMapSelectUI) end
---@param WorldAssetId FPrimaryAssetId
---@param OutSupportedGameModes TSet<TSoftClassPtr<AGameModeBase>>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetSupportedGameModes(WorldAssetId, OutSupportedGameModes) end
---@param WorldAssetId FPrimaryAssetId
---@param OutMapPreviewImgRef TSoftObjectPtr<UTexture2D>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetPreviewImg(WorldAssetId, OutMapPreviewImgRef) end
---@param WorldAssetId FPrimaryAssetId
---@param OutMapPreviewBannerImgRef TSoftObjectPtr<UTexture2D>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetPreviewBannerImg(WorldAssetId, OutMapPreviewBannerImgRef) end
---@param WorldAssetId FPrimaryAssetId
---@return FText
function UDFBlueprintFunctions:GetMapAssetNameForDisplay(WorldAssetId) end
---@param WorldAssetId FPrimaryAssetId
---@param OutGameRulesetClasses TSet<TSoftClassPtr<UDFGameRulesetBase>>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetGameRulesetClasses(WorldAssetId, OutGameRulesetClasses) end
---@param WorldAssetId FPrimaryAssetId
---@param OutMapDescription FString
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDescription(WorldAssetId, OutMapDescription) end
---@param WorldAssetId FPrimaryAssetId
---@param OutDefaultGameModeRef TSoftClassPtr<AGameModeBase>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDefaultGameMode(WorldAssetId, OutDefaultGameModeRef) end
---@param WorldAsset FAssetData
---@param OutSupportedGameModes TSet<TSoftClassPtr<AGameModeBase>>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataSupportedGameModes(WorldAsset, OutSupportedGameModes) end
---@param WorldAsset FAssetData
---@param OutMapPreviewImgRef TSoftObjectPtr<UTexture2D>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataPreviewImg(WorldAsset, OutMapPreviewImgRef) end
---@param WorldAsset FAssetData
---@param OutMapPreviewBannerImgRef TSoftObjectPtr<UTexture2D>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataPreviewBannerImg(WorldAsset, OutMapPreviewBannerImgRef) end
---@param WorldAsset FAssetData
---@return FText
function UDFBlueprintFunctions:GetMapAssetDataNameForDisplay(WorldAsset) end
---@param WorldAsset FAssetData
---@param OutGameRulesetClasses TSet<TSoftClassPtr<UDFGameRulesetBase>>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataGameRulesetClasses(WorldAsset, OutGameRulesetClasses) end
---@param WorldAsset FAssetData
---@param OutMapDisplayName FText
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataDisplayName(WorldAsset, OutMapDisplayName) end
---@param WorldAsset FAssetData
---@param OutMapDescription FString
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataDescription(WorldAsset, OutMapDescription) end
---@param WorldAsset FAssetData
---@param OutDefaultGameModeRef TSoftClassPtr<AGameModeBase>
---@return boolean
function UDFBlueprintFunctions:GetMapAssetDataDefaultGameMode(WorldAsset, OutDefaultGameModeRef) end
---@return FString
function UDFBlueprintFunctions:GetGlobalDefaultGameMode() end
---@return FString
function UDFBlueprintFunctions:GetGameVersion() end
---@param WorldContextObject UObject
---@return FText
function UDFBlueprintFunctions:GetGameNameForDisplay(WorldContextObject) end
---@param GameModeName FString
---@return FString
function UDFBlueprintFunctions:GetGameModeForName(GameModeName) end
---@param MapName FString
---@return FString
function UDFBlueprintFunctions:GetGameModeForMapName(MapName) end
---@return FString
function UDFBlueprintFunctions:GetGameDefaultMap() end
---@return FString
function UDFBlueprintFunctions:GetGameBuildInfo() end
---@param Actor AActor
---@return FVector
function UDFBlueprintFunctions:GetFocalPoint(Actor) end
---@param Actor AActor
---@param CylinderRadius float
---@param CylinderHalfHeight float
function UDFBlueprintFunctions:GetDefaultBoundingCylinder(Actor, CylinderRadius, CylinderHalfHeight) end
---@return FString
function UDFBlueprintFunctions:GetCopyrightNotice() end
---@return TArray<FString>
function UDFBlueprintFunctions:GetAllMapNames() end
---@param Controller AController
---@param EndGameFocus AActor
---@param bIsWinner boolean
function UDFBlueprintFunctions:GameHasEnded(Controller, EndGameFocus, bIsWinner) end
---@param PC APlayerController
function UDFBlueprintFunctions:FlushPressedKeys(PC) end
---@param MapDisplayName FText
---@param MapIds TArray<FPrimaryAssetId>
---@return FPrimaryAssetId
function UDFBlueprintFunctions:FindMapIdByDisplayName(MapDisplayName, MapIds) end
---@param A FWeaponSoundCollection
---@param B FWeaponSoundCollection
---@return boolean
function UDFBlueprintFunctions:EqualEqual_WeaponSoundCollection(A, B) end
---@param A FWeaponAnimSequence
---@param B FWeaponAnimSequence
---@return boolean
function UDFBlueprintFunctions:EqualEqual_WeaponAnimSequence(A, B) end
---@param A FWeaponAnimMontage
---@param B FWeaponAnimMontage
---@return boolean
function UDFBlueprintFunctions:EqualEqual_WeaponAnimMontage(A, B) end
---@param A FWeaponAnimCollection
---@param B FWeaponAnimCollection
---@return boolean
function UDFBlueprintFunctions:EqualEqual_WeaponAnimCollection(A, B) end
---@param A FWeaponAnim
---@param B FWeaponAnim
---@return boolean
function UDFBlueprintFunctions:EqualEqual_WeaponAnim(A, B) end
---@param A FPerspectiveSound
---@param B FPerspectiveSound
---@return boolean
function UDFBlueprintFunctions:EqualEqual_PerspectiveSound(A, B) end
---@param A FPerspectiveAnimSequence
---@param B FPerspectiveAnimSequence
---@return boolean
function UDFBlueprintFunctions:EqualEqual_PerspectiveAnimSequence(A, B) end
---@param A FPerspectiveAnim
---@param B FPerspectiveAnim
---@return boolean
function UDFBlueprintFunctions:EqualEqual_PerspectiveAnim(A, B) end
---@param A FCharacterSoundCollection
---@param B FCharacterSoundCollection
---@return boolean
function UDFBlueprintFunctions:EqualEqual_CharacterSoundCollection(A, B) end
---@param A FCharacterAnimCollection
---@param B FCharacterAnimCollection
---@return boolean
function UDFBlueprintFunctions:EqualEqual_CharacterAnimCollection(A, B) end
---@param MapId FPrimaryAssetId
---@param GMDef UDFGameModeDefinition
---@return boolean
function UDFBlueprintFunctions:DoesMapIDSupportGMDefinition(MapId, GMDef) end
---@param VariationData FDFCharacterVariationDataHandle
---@return boolean
function UDFBlueprintFunctions:CharacterVariationIsValid(VariationData) end
---@param VariationData FDFCharacterVariationDataHandle
---@return FDFCharacterVariationData
function UDFBlueprintFunctions:CharacterVariationGetData(VariationData) end
---@param WorldContextObject UObject
---@param RowHandle FDataTableRowHandle
---@return FDFCharacterVariationDataHandle
function UDFBlueprintFunctions:CharacterVariationDataFromTableRow(WorldContextObject, RowHandle) end
---@param ArrayToSort TArray<uint8>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_UInt8Sort(ArrayToSort, bDescending) end
---@param ArrayToSort TArray<FText>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_TextSort(ArrayToSort, bDescending) end
---@param ArrayToSort TArray<FString>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_StringSort(ArrayToSort, bDescending) end
---@param TargetArray TArray<int32>
function UDFBlueprintFunctions:Array_Reverse(TargetArray) end
---@param ArrayToSort TArray<FName>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_NameSort(ArrayToSort, bDescending) end
---@param ArrayToSort TArray<int64>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_Int64Sort(ArrayToSort, bDescending) end
---@param ArrayToSort TArray<int32>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_Int32Sort(ArrayToSort, bDescending) end
---@param ArrayToSort TArray<float>
---@param bDescending boolean
function UDFBlueprintFunctions:Array_FloatSort(ArrayToSort, bDescending) end
---@param ArrayToSort TArray<FAssetDescriptor>
---@param bDescending boolean
---@param bCompareDisplayText boolean
function UDFBlueprintFunctions:Array_AssetDescriptorSort(ArrayToSort, bDescending, bCompareDisplayText) end


---@class UDFCfgDataManager : UObject
UDFCfgDataManager = {}


---@class UDFCharacterLeanHandler : UObject
---@field StationaryStandLeanCurve FRuntimeFloatCurve
---@field MobileStandLeanCurve FRuntimeFloatCurve
---@field StationaryCrouchLeanCurve FRuntimeFloatCurve
---@field MobileCrouchLeanCurve FRuntimeFloatCurve
---@field LeanTransitionSpeed float
---@field StandLeanInYOffset float
---@field CrouchLeanInYOffset float
---@field LeanRollAmount float
---@field LeanDirection ELeanDirection
---@field LeanTarget float
---@field bAtFullLeanTarget boolean
---@field LeanAmount float
UDFCharacterLeanHandler = {}

---@param NewLeanDir ELeanDirection
function UDFCharacterLeanHandler:UpdateLeanDirection(NewLeanDir) end
---@param DeltaTime float
function UDFCharacterLeanHandler:ReceiveTick(DeltaTime) end
function UDFCharacterLeanHandler:ReceiveReset() end
---@return boolean
function UDFCharacterLeanHandler:IsMoving() end
---@return boolean
function UDFCharacterLeanHandler:IsLeaning() end
---@return ECharacterStance
function UDFCharacterLeanHandler:GetStance() end
---@return ECharacterStance
function UDFCharacterLeanHandler:GetPreviousStance() end
---@return UDFCharacterMovementComponent
function UDFCharacterLeanHandler:GetOwningCharacterMovement() end
---@return ADFBaseCharacter
function UDFCharacterLeanHandler:GetOwningCharacter() end
---@param NewLeanDir ELeanDirection
---@param LeanStance ECharacterStance
---@param bMoving boolean
---@return float
function UDFCharacterLeanHandler:GetMaxLeanXOffset(NewLeanDir, LeanStance, bMoving) end
---@param DesiredLeanAmt float
---@return float
function UDFCharacterLeanHandler:GetLeanYOffset(DesiredLeanAmt) end
---@param DesiredLeanAmt float
---@return float
function UDFCharacterLeanHandler:GetLeanXOffset(DesiredLeanAmt) end
---@param DesiredLeanAmt float
---@return float
function UDFCharacterLeanHandler:GetLeanRollRot(DesiredLeanAmt) end
---@param DesiredLeanDir ELeanDirection
---@param bMoving boolean
---@return float
function UDFCharacterLeanHandler:DetermineLeanTargetAmount(DesiredLeanDir, bMoving) end


---@class UDFCharacterMovementComponent : UCharacterMovementComponent
---@field DFCharacterOwner ADFBaseCharacter
---@field LastMovementMode EMovementMode
---@field LastCustomMovementMode uint8
---@field StandWalkSpeedMultiplierRange FFloatRange
---@field CrouchedWalkSpeedMultiplierRange FFloatRange
---@field ProneWalkSpeedMultiplierRange FFloatRange
---@field LeanSpeedMultiplier float
---@field bUseLeanSpeedMultiplierWhileAiming boolean
---@field bCanCrouchWhileFalling boolean
---@field bUseJumpStamina boolean
---@field JumpMaxStamina float
---@field JumpStaminaCost float
---@field JumpStaminaRecoveryRate float
---@field JumpStaminaThreshold float
---@field VaultOverVelocityCurve UCurveVector
---@field SprintVaultOverVelocityCurve UCurveVector
---@field ClimbOntoVelocityCurve UCurveVector
---@field SprintClimbOntoVelocityCurve UCurveVector
---@field VaultViewPitch float
---@field VaultReachDistance float
---@field SprintVaultReachDistance float
---@field VaultReachRadius float
---@field VaultCapsuleLOSRadius float
---@field MaxVaultObstacleVelocitySquared float
---@field VaultOverDisplacementXOffset float
---@field ClimbOntoDisplacementXOffset float
---@field VaultOverDisplacementZOffset float
---@field ClimbOntoDisplacementZOffset float
---@field VaultOverLedgeSurfaceThreshold float
---@field ClimbOntoLedgeSurfaceThreshold float
---@field MinVaultOverLedgeHeight float
---@field MaxVaultOverLedgeHeight float
---@field MinClimbOntoLedgeHeight float
---@field MaxClimbOntoLedgeHeight float
---@field bWantsToSprint boolean
---@field SprintSpeedMultiplier float
---@field SprintAccelerationMultiplier float
---@field SprintStrafingThreshold float
---@field bUseSprintStamina boolean
---@field SprintMaxStamina float
---@field SprintStaminaDelta float
---@field SprintStaminaThreshold float
---@field bWantsToAim boolean
---@field AimSpeedMultiplier float
---@field bWantsToLeanLeft boolean
---@field bWantsToLeanRight boolean
---@field ProneHalfHeight float
---@field bCanWalkOffLedgesWhenProne boolean
---@field bCanAimWhileCrawling boolean
---@field bProneMaintainsBaseLocation boolean
---@field MaxWalkSpeedProne float
---@field bWantsToBeProne boolean
---@field bCanSwimUnderwater boolean
---@field JumpStamina float
---@field bCanSprint boolean
---@field SprintStamina float
---@field bCanAim boolean
---@field bCanLean boolean
---@field bCanBeProne boolean
---@field bCanVault boolean
---@field bJustLeftWater boolean
UDFCharacterMovementComponent = {}

---@return FDFVaultTraceResult
function UDFCharacterMovementComponent:VaultTrace() end
---@return boolean
function UDFCharacterMovementComponent:IsVaulting() end
---@param Threshold float
---@return boolean
function UDFCharacterMovementComponent:IsStrafing(Threshold) end
---@return boolean
function UDFCharacterMovementComponent:IsStanding() end
---@return boolean
function UDFCharacterMovementComponent:IsSprinting() end
---@return boolean
function UDFCharacterMovementComponent:IsReloading() end
---@return boolean
function UDFCharacterMovementComponent:IsProne() end
---@return boolean
function UDFCharacterMovementComponent:IsMovingForward() end
---@param bIgnoreZVel boolean
---@return boolean
function UDFCharacterMovementComponent:IsMoving(bIgnoreZVel) end
---@return boolean
function UDFCharacterMovementComponent:IsLeaning() end
---@return boolean
function UDFCharacterMovementComponent:IsCrawling() end
---@return boolean
function UDFCharacterMovementComponent:IsAlive() end
---@return boolean
function UDFCharacterMovementComponent:IsAiming() end
---@return ECharacterStance
function UDFCharacterMovementComponent:GetStance() end
---@return ECharacterStance
function UDFCharacterMovementComponent:GetPreviousStance() end
---@return ELeanDirection
function UDFCharacterMovementComponent:GetLeanDirection() end
---@return float
function UDFCharacterMovementComponent:GetLeanAmount() end
---@return ADFBaseCharacter
function UDFCharacterMovementComponent:GetDFCharacterOwner() end
---@param MultValue float
---@return float
function UDFCharacterMovementComponent:ClampSpeedMultiplier(MultValue) end


---@class UDFCheatManager : UCheatManager
UDFCheatManager = {}

function UDFCheatManager:ToggleItemDebug() end
function UDFCheatManager:ToggleGunRecoil() end
function UDFCheatManager:ToggleGunInfiniteClipAmmo() end
function UDFCheatManager:ToggleGunInfiniteAmmo() end


---@class UDFDamageType : UDamageType
---@field ImpactFXClass TSubclassOf<ADFBaseImpactEffect>
UDFDamageType = {}



---@class UDFFactionInfo : UDFPrimaryDataAsset
---@field FactionType FPrimaryAssetType
---@field FactionName FName
---@field bVisibleInFactionSelectUI boolean
---@field DisplayName FText
---@field DisplayNameShort FText
---@field DisplayNameAcronym FText
UDFFactionInfo = {}



---@class UDFFunctionLibrary : UObject
UDFFunctionLibrary = {}

---@param AnimMontage UAnimMontage
---@param AnimSourceMesh USkeletalMeshComponent
---@param bNewEnableAutoBlendOut boolean
function UDFFunctionLibrary:SetEnableAutoBlendOutForActiveMontage(AnimMontage, AnimSourceMesh, bNewEnableAutoBlendOut) end
---@param MeshToClear USkeletalMeshComponent
function UDFFunctionLibrary:ClearMeshAnimInstance(MeshToClear) end


---@class UDFGameEngine : UGameEngine
UDFGameEngine = {}


---@class UDFGameModeDefinition : UPrimaryDataAsset
---@field bSupportsAllMaps boolean
---@field SpecificMapsToSupport TSet<FPrimaryAssetId>
---@field bShowInFrontEnd boolean
---@field Title FText
---@field Description FText
---@field PreviewBannerImg TSoftObjectPtr<UTexture2D>
UDFGameModeDefinition = {}



---@class UDFGameRulesetBase : UObject
---@field bTickable boolean
---@field DisplayName FText
---@field Priority int32
UDFGameRulesetBase = {}

---@param UnregisteredActor AActor
function UDFGameRulesetBase:UnregisterActor(UnregisteredActor) end
---@param RegisteredActor AActor
function UDFGameRulesetBase:RegisterActor(RegisteredActor) end
---@param DeltaTime float
function UDFGameRulesetBase:ReceiveTick(DeltaTime) end
---@param Victim AController
---@param DamageAmount float
---@param DamageType UDamageType
---@param InstigatedBy AController
---@param DamageCauser AActor
function UDFGameRulesetBase:PlayerWounded(Victim, DamageAmount, DamageType, InstigatedBy, DamageCauser) end
---@param Victim AController
function UDFGameRulesetBase:PlayerSuicide(Victim) end
---@param Player AController
---@param NewPlayerPawn APawn
function UDFGameRulesetBase:PlayerSpawn(Player, NewPlayerPawn) end
---@param ExitingPlayer AController
function UDFGameRulesetBase:PlayerPostLogout(ExitingPlayer) end
---@param NewPlayer APlayerController
function UDFGameRulesetBase:PlayerPostLogin(NewPlayer) end
---@param Killer AController
---@param Victim AController
function UDFGameRulesetBase:PlayerKilled(Killer, Victim) end
---@param JoiningPlayer AController
---@param TeamNum uint8
function UDFGameRulesetBase:PlayerJoinedTeam(JoiningPlayer, TeamNum) end
---@param NewPlayer APlayerController
function UDFGameRulesetBase:PlayerJoined(NewPlayer) end
---@param Victim AController
function UDFGameRulesetBase:PlayerDied(Victim) end
function UDFGameRulesetBase:MatchHasEnded() end
function UDFGameRulesetBase:Init() end
---@return ADFBaseGameState
function UDFGameRulesetBase:GetGameState() end
---@return ADFBaseGameMode
function UDFGameRulesetBase:GetGameMode() end


---@class UDFGunRecoilHandler : UObject
UDFGunRecoilHandler = {}

function UDFGunRecoilHandler:OnWeaponStopFire() end
function UDFGunRecoilHandler:OnWeaponStartFire() end
function UDFGunRecoilHandler:OnWeaponFire() end
---@param DeltaTime float
function UDFGunRecoilHandler:OnTick(DeltaTime) end
---@return boolean
function UDFGunRecoilHandler:IsFiring() end
---@return APawn
function UDFGunRecoilHandler:GetOwningPawn() end
---@return ADFBaseGun
function UDFGunRecoilHandler:GetOwningGun() end
---@return FVector
function UDFGunRecoilHandler:GetConeOfFireOffset() end


---@class UDFInventoryComponent : UActorComponent
---@field OnItemAdded FDFInventoryComponentOnItemAdded
---@field OnItemRemoved FDFInventoryComponentOnItemRemoved
---@field Items TArray<ADFBaseItem>
---@field DefaultItemClasses TArray<TSubclassOf<ADFBaseItem>>
UDFInventoryComponent = {}

---@return int32
function UDFInventoryComponent:Size() end
---@param Index int32
---@param OutRemovedItem ADFBaseItem
---@param bDestroyItem boolean
---@return boolean
function UDFInventoryComponent:RemoveItemAt(Index, OutRemovedItem, bDestroyItem) end
---@param Item ADFBaseItem
---@param bDestroyItem boolean
---@return boolean
function UDFInventoryComponent:Remove(Item, bDestroyItem) end
---@param Index int32
---@return boolean
function UDFInventoryComponent:IsValidIndex(Index) end
---@param Index int32
---@param OutItem ADFBaseItem
---@return boolean
function UDFInventoryComponent:GetItem(Index, OutItem) end
---@param ItemClass TSubclassOf<ADFBaseItem>
---@param OutItem ADFBaseItem
---@return boolean
function UDFInventoryComponent:FindItemByClass(ItemClass, OutItem) end
---@param ItemToCompare ADFBaseItem
---@param OutIndex int32
---@return boolean
function UDFInventoryComponent:Find(ItemToCompare, OutIndex) end
---@param bDestroyItems boolean
function UDFInventoryComponent:Clear(bDestroyItems) end
function UDFInventoryComponent:AddDefaultInventoryItems() end
---@param Item ADFBaseItem
---@return boolean
function UDFInventoryComponent:Add(Item) end


---@class UDFLoadout : UDataAsset
---@field ItemClasses TArray<TSubclassOf<ADFBaseItem>>
UDFLoadout = {}



---@class UDFLocalPlayer : ULocalPlayer
UDFLocalPlayer = {}


---@class UDFMapRotationManager : UDFCfgDataManager
UDFMapRotationManager = {}


---@class UDFNavigationSystem : UNavigationSystemV1
UDFNavigationSystem = {}


---@class UDFNavigationSystemConfig : UNavigationSystemModuleConfig
---@field bGenerateNavigationOnlyAroundNavigationInvokers boolean
UDFNavigationSystemConfig = {}



---@class UDFNetworkEventSubsystem : UWorldSubsystem
---@field OnPlayersUpdatedDynamic FDFNetworkEventSubsystemOnPlayersUpdatedDynamic
---@field OnTeamsUpdatedDynamic FDFNetworkEventSubsystemOnTeamsUpdatedDynamic
UDFNetworkEventSubsystem = {}

---@param GameState AGameStateBase
function UDFNetworkEventSubsystem:OnGameStateEventDynamic__DelegateSignature(GameState) end
---@param WorldContextObject UObject
---@return UDFNetworkEventSubsystem
function UDFNetworkEventSubsystem:Get(WorldContextObject) end


---@class UDFOnlineSessionClient : UOnlineSessionClient
UDFOnlineSessionClient = {}


---@class UDFPhysicalMaterial : UPhysicalMaterial
---@field CollisionFX UParticleSystem
---@field CollisionSound USoundCue
UDFPhysicalMaterial = {}



---@class UDFPhysicsCollisionHandler : UPhysicsCollisionHandler
UDFPhysicsCollisionHandler = {}


---@class UDFPlayerAdminList : UDFCfgDataManager
UDFPlayerAdminList = {}


---@class UDFPlayerBanList : UDFCfgDataManager
UDFPlayerBanList = {}


---@class UDFPlayerComponent : UActorComponent
---@field ControllerOwner AController
---@field bWantsToRestart boolean
UDFPlayerComponent = {}

function UDFPlayerComponent:RestartPlayer() end
---@param NewC AController
---@param NewCPlayerComp UDFPlayerComponent
function UDFPlayerComponent:ReceiveSeamlessTravelToCommon(NewC, NewCPlayerComp) end
---@param OldC AController
---@param OldCPlayerComp UDFPlayerComponent
function UDFPlayerComponent:ReceiveSeamlessTravelFromCommon(OldC, OldCPlayerComp) end
function UDFPlayerComponent:ReceivePawnLeavingGame() end
---@param EndGameFocus AActor
---@param bIsWinner boolean
function UDFPlayerComponent:ReceiveGameHasEnded(EndGameFocus, bIsWinner) end
---@return boolean
function UDFPlayerComponent:IsPendingRestart() end
---@return ADFTeamState
function UDFPlayerComponent:GetTeamState() end
---@return APlayerState
function UDFPlayerComponent:GetPlayerState() end
---@return APawn
function UDFPlayerComponent:GetPawnOwner() end
---@return float
function UDFPlayerComponent:GetMinRestartDelay() end
---@return boolean
function UDFPlayerComponent:CanRestartPlayer() end


---@class UDFPlayerWhitelist : UDFCfgDataManager
UDFPlayerWhitelist = {}


---@class UDFPrimaryDataAsset : UPrimaryDataAsset
UDFPrimaryDataAsset = {}


---@class UDFProjectileSubsystem : UWorldSubsystem
---@field PredictedProjectiles TArray<ADFBaseProjectile>
---@field MaxFiredShots int32
UDFProjectileSubsystem = {}



---@class UDFServerAdminSubsystem : UEngineSubsystem
---@field DataMgrs TArray<UDFCfgDataManager>
UDFServerAdminSubsystem = {}



---@class UDFTableLibrary : UBlueprintFunctionLibrary
UDFTableLibrary = {}

---@param Index int32
---@param TableHeight int32
---@return int32
function UDFTableLibrary:GetRowInvFromIndex(Index, TableHeight) end
---@param Index int32
---@param TableWidth int32
---@return int32
function UDFTableLibrary:GetRowFromIndex(Index, TableWidth) end
---@param Row int32
---@param Column int32
---@param TableWidth int32
---@return int32
function UDFTableLibrary:GetIndexFromRowColumnPair(Row, Column, TableWidth) end
---@param Column int32
---@param Row int32
---@param TableHeight int32
---@return int32
function UDFTableLibrary:GetIndexFromColumnRowPair(Column, Row, TableHeight) end
---@param Index int32
---@param TableHeight int32
---@return int32
function UDFTableLibrary:GetColumnInvFromIndex(Index, TableHeight) end
---@param Index int32
---@param TableWidth int32
---@return int32
function UDFTableLibrary:GetColumnFromIndex(Index, TableWidth) end


---@class UDFTeamDefinition : UObject
---@field TeamName FName
---@field FactionInfoClass TSoftClassPtr<UDFFactionInfo>
UDFTeamDefinition = {}



---@class UDFTokenStore : UDFCfgDataManager
UDFTokenStore = {}


---@class UDFVoteIssue : UObject
---@field PassRatio float
---@field Duration float
---@field PassedVoteCooldown float
---@field FailedVoteCooldown float
---@field bDenyVACBannedUsersFromVoting boolean
---@field bDisableVACBanCheckWhileAdminIsOnline boolean
---@field bOnlyAdminsCanInitiateVote boolean
---@field IssueDisplayNameText FText
---@field VotePromptFormatText FText
---@field NumEligibleVoters int32
---@field Votes TArray<FDFPlayerVote>
---@field VoteStartTime float
---@field VoteEndTime float
---@field VoteEndStatus EDFVoteStatus
---@field VoteOwner APlayerState
---@field IssueContext FDFVoteIssueContext
UDFVoteIssue = {}

function UDFVoteIssue:VotePassed() end
function UDFVoteIssue:VoteFailed() end
function UDFVoteIssue:ResetVote() end
function UDFVoteIssue:ReceiveVoteReset() end
function UDFVoteIssue:ReceiveVoteInit() end
---@param OutYesVotes int32
---@param OutNoVotes int32
function UDFVoteIssue:GetYesNoVoteCounts(OutYesVotes, OutNoVotes) end
---@param OutVoteSelections TArray<FDFPlayerVoteSelection>
function UDFVoteIssue:GetVoteSelections(OutVoteSelections) end
---@return int32
function UDFVoteIssue:GetRequiredVoteCountToPass() end
---@return UDFVotingComponent
function UDFVoteIssue:GetOwningVotingComponent() end
---@param OutEligibleVoters TArray<APlayerState>
function UDFVoteIssue:GetEligibleVoters(OutEligibleVoters) end
---@return int32
function UDFVoteIssue:GetEligibleVoterCount() end
---@return EDFVoteStatus
function UDFVoteIssue:DetermineVoteStatus() end
---@param VoterPS APlayerState
---@return boolean
function UDFVoteIssue:CanVoteOn(VoterPS) end
---@param InvokingPlayer APlayerState
---@return boolean
function UDFVoteIssue:CanStartVote(InvokingPlayer) end
---@param VoterPS APlayerState
---@return boolean
function UDFVoteIssue:AllowsVoteFrom(VoterPS) end
---@param InvokingPlayer APlayerState
---@return boolean
function UDFVoteIssue:AllowsStartVoteBy(InvokingPlayer) end


---@class UDFVoteIssuePlayer : UDFVoteIssue
---@field bAllowAdminTargets boolean
UDFVoteIssuePlayer = {}

---@param TargetPS APlayerState
---@return boolean
function UDFVoteIssuePlayer:CanInitiateVoteWithTarget(TargetPS) end


---@class UDFVoteIssuePlayerKick : UDFVoteIssuePlayer
---@field BanDuration float
UDFVoteIssuePlayerKick = {}



---@class UDFVotingComponent : UActorComponent
---@field OnPlayerVoteInitiatedDynamic FDFVotingComponentOnPlayerVoteInitiatedDynamic
---@field OnPlayerVoteEndedDynamic FDFVotingComponentOnPlayerVoteEndedDynamic
---@field OnPlayerVoteStateUpdatedDynamic FDFVotingComponentOnPlayerVoteStateUpdatedDynamic
---@field ActiveVoteInfo FDFActiveVoteInfo
---@field ActiveVoteIssue UDFVoteIssue
---@field VoteIssues TArray<UDFVoteIssue>
---@field VoteIssueDefinitions TArray<FDFVoteIssueDefinition>
UDFVotingComponent = {}

---@param PreviousValue FDFActiveVoteInfo
function UDFVotingComponent:OnRep_ActiveVoteInfo(PreviousValue) end
---@param SourceVotingComponent UDFVotingComponent
function UDFVotingComponent:OnPlayerVoteIssueEventDynamic__DelegateSignature(SourceVotingComponent) end
---@return boolean
function UDFVotingComponent:IsVotingInProgress() end
---@param InvokingPlayer APlayerState
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@param IssueContext FDFVoteIssueContext
---@return boolean
function UDFVotingComponent:InitiateVote(InvokingPlayer, IssueClass, IssueContext) end
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@return UDFVoteIssue
function UDFVotingComponent:GetVoteIssueForClass(IssueClass) end
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@param OutIssueDefinition FDFVoteIssueDefinition
---@return boolean
function UDFVotingComponent:GetVoteIssueDefinitionForClass(IssueClass, OutIssueDefinition) end
---@param InvokingPlayer APlayerState
---@param VoteSelectionID int32
---@return boolean
function UDFVotingComponent:CastVote(InvokingPlayer, VoteSelectionID) end
---@param TargetPS APlayerState
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@return boolean
function UDFVotingComponent:CanVoteTargetPlayer(TargetPS, IssueClass) end
---@param InvokingPlayer APlayerState
---@param IssueClass TSubclassOf<UDFVoteIssue>
---@return boolean
function UDFVotingComponent:CanInitiateVote(InvokingPlayer, IssueClass) end
---@param VotingPlayer APlayerState
---@param VoteSelectionID int32
---@return boolean
function UDFVotingComponent:CanCastVote(VotingPlayer, VoteSelectionID) end


---@class UDFVotingStatics : UBlueprintFunctionLibrary
UDFVotingStatics = {}

---@param VoteInfo FDFActiveVoteInfo
---@return FText
function UDFVotingStatics:VoteInfoGetPromptTextForDisplay(VoteInfo) end
---@param TargetPlayer APlayerState
---@return FDFVoteIssueContext
function UDFVotingStatics:MakeVoteContext(TargetPlayer) end
---@param PlayerState APlayerState
---@return boolean
function UDFVotingStatics:IsValidVotingPlayer(PlayerState) end
---@param WorldContextObject UObject
---@return UDFVotingComponent
function UDFVotingStatics:GetGameStateVotingComponent(WorldContextObject) end


---@class UGameSessionBlueprintLibrary : UBlueprintFunctionLibrary
UGameSessionBlueprintLibrary = {}

---@param WorldContextObj UObject
---@param AdminPlayer APlayerController
function UGameSessionBlueprintLibrary:RemoveAdmin(WorldContextObj, AdminPlayer) end
---@param WorldContextObj UObject
---@return int32
function UGameSessionBlueprintLibrary:GetMinPlayers(WorldContextObj) end
---@param WorldContextObj UObject
---@return int32
function UGameSessionBlueprintLibrary:GetMaxSpectators(WorldContextObj) end
---@param WorldContextObj UObject
---@return int32
function UGameSessionBlueprintLibrary:GetMaxPlayers(WorldContextObj) end
---@param WorldContextObj UObject
---@param AdminPlayer APlayerController
function UGameSessionBlueprintLibrary:AddAdmin(WorldContextObj, AdminPlayer) end


---@class USpawnPointStatics : UBlueprintFunctionLibrary
USpawnPointStatics = {}

---@param Target UObject
---@param SpawnPointID int32
---@return boolean
function USpawnPointStatics:SpawnPointExists(Target, SpawnPointID) end
---@param Target UObject
---@param SpawnPoint FSpawnPointDef
---@param OutSpawnCollisionMethod ESpawnActorCollisionHandlingMethod
---@return boolean
function USpawnPointStatics:GetSpawnPointCollisionHandlingOverride(Target, SpawnPoint, OutSpawnCollisionMethod) end
---@param Target UObject
---@param SpawnPointTransforms TArray<FTransform>
---@return int32
function USpawnPointStatics:GetAllSpawnPointTransforms(Target, SpawnPointTransforms) end
---@param Target UObject
---@param SpawnPoints TArray<FSpawnPointDef>
---@return int32
function USpawnPointStatics:GetAllSpawnPoints(Target, SpawnPoints) end
---@param Target UObject
---@param SpawnPointID int32
---@param FoundSpawnPoint FSpawnPointDef
---@return boolean
function USpawnPointStatics:FindSpawnPoint(Target, SpawnPointID, FoundSpawnPoint) end
---@param Target UObject
---@param SpawnPoint FSpawnPointDef
---@param SpawnActorClass TSubclassOf<AActor>
---@return boolean
function USpawnPointStatics:CanSpawnActorFromSpawnPoint(Target, SpawnPoint, SpawnActorClass) end
---@param Target UObject
---@param SpawnActorClass TSubclassOf<AActor>
---@return boolean
function USpawnPointStatics:CanSpawnActorFromAnySpawnPoint(Target, SpawnActorClass) end
---@param Target UObject
---@param SpawnPoint FSpawnPointDef
---@param Player AController
---@param PlayerPawnClass TSubclassOf<APawn>
---@return boolean
function USpawnPointStatics:CanRestartPlayerFromSpawnPoint(Target, SpawnPoint, Player, PlayerPawnClass) end
---@param Target UObject
---@param Player AController
---@param PlayerPawnClass TSubclassOf<APawn>
---@return boolean
function USpawnPointStatics:CanRestartPlayerFromAnySpawnPoint(Target, Player, PlayerPawnClass) end


