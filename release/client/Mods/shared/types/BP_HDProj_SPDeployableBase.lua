---@meta

---@class ABP_HDProj_SPDeployableBase_C : AHDProj_SpawnPointDeployable
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HitDetectionSphere USphereComponent
---@field SpawnSphere USphereComponent
---@field ProjectileCollision UStaticMeshComponent
---@field POI UDFPOIComponent
---@field bOnlySquadMembersCanSpawn boolean
---@field PostTriggerLifeSpan float
---@field PlacementRestrictionDistance float
---@field bSpawnable boolean
---@field OnSpawnPointActivationChanged FBP_HDProj_SPDeployableBase_COnSpawnPointActivationChanged
---@field SpawnPointLocOffsets TArray<FVector>
---@field GeneratedSpawnPoints TArray<FSpawnPointDef>
---@field bIgnoreFriendlyFire boolean
---@field Health float
---@field bDisableWhenOverrun boolean
---@field NumberOfEnemiesToDisable int32
---@field bDestroyWhenOverrun boolean
---@field NumberOfEnemiesToDestroy int32
---@field CurrentNumberOfEnemies int32
---@field OwnerSquadState AHDSquadState
---@field bDestroyWhenSquadDisbands boolean
---@field bOnlyOnePerSquad boolean
---@field MaxNumberOfInstances int32
---@field EnemyTolerance_Radius float
---@field EnemyTolerance_MaxNumberOfChars int32
ABP_HDProj_SPDeployableBase_C = {}

---@param SpawnPoint FSpawnPointDef
---@param OutSpawnCollisionMethod ESpawnActorCollisionHandlingMethod
---@return boolean
function ABP_HDProj_SPDeployableBase_C:GetSpawnPointCollisionHandlingOverrideBP(SpawnPoint, OutSpawnCollisionMethod) end
---@param SpawnPoint FSpawnPointDef
---@param Player AController
---@param PlayerPawnClass TSubclassOf<APawn>
---@return boolean
function ABP_HDProj_SPDeployableBase_C:CanRestartPlayerFromSpawnPointBP(SpawnPoint, Player, PlayerPawnClass) end
---@param SpawnPoint FSpawnPointDef
---@param SpawnActorClass TSubclassOf<AActor>
---@return boolean
function ABP_HDProj_SPDeployableBase_C:CanSpawnActorFromSpawnPointBP(SpawnPoint, SpawnActorClass) end
---@param SpawnPointID int32
---@param FoundSpawnPoint FSpawnPointDef
---@return boolean
function ABP_HDProj_SPDeployableBase_C:FindSpawnPointBP(SpawnPointID, FoundSpawnPoint) end
---@param SpawnPoints TArray<FSpawnPointDef>
---@return int32
function ABP_HDProj_SPDeployableBase_C:GetAllSpawnPointsBP(SpawnPoints) end
---@param InPlayer AController
---@param bPlayerCanSpawn boolean
function ABP_HDProj_SPDeployableBase_C:CanPlayerSpawnHere(InPlayer, bPlayerCanSpawn) end
function ABP_HDProj_SPDeployableBase_C:InitDeployable() end
function ABP_HDProj_SPDeployableBase_C:CheckEnemyOverrun() end
---@param InProjectile ADFBaseProjectile
---@param InDamage float
function ABP_HDProj_SPDeployableBase_C:HandleTakeDamageFromProjectile(InProjectile, InDamage) end
function ABP_HDProj_SPDeployableBase_C:GenerateSpawnPointList() end
---@param SpawnIdx int32
---@param Transform FTransform
---@param NewTransform FTransform
function ABP_HDProj_SPDeployableBase_C:GetTransformOffsetBySpawnIndex(SpawnIdx, Transform, NewTransform) end
---@param OffsetActorWorldXForm FTransform
function ABP_HDProj_SPDeployableBase_C:GetActorTransformOffsetByMeshZBounds(OffsetActorWorldXForm) end
function ABP_HDProj_SPDeployableBase_C:CheckForEnemyChars() end
---@param bNewEnabled boolean
function ABP_HDProj_SPDeployableBase_C:SetIsSpawnable(bNewEnabled) end
---@param bSpawnPointEnabled boolean
function ABP_HDProj_SPDeployableBase_C:IsSpawnable(bSpawnPointEnabled) end
---@param SpawnPointOne FSpawnPointDef
---@param SpawnPointTwo FSpawnPointDef
---@param bEqual boolean
function ABP_HDProj_SPDeployableBase_C:AreSpawnPointsEqual(SpawnPointOne, SpawnPointTwo, bEqual) end
---@param bMeshZOffset boolean
---@param SpawnPointIdx int32
---@param SpawnPoint FSpawnPointDef
function ABP_HDProj_SPDeployableBase_C:GetSpawnPoint(bMeshZOffset, SpawnPointIdx, SpawnPoint) end
---@param Char ADFBaseCharacter
---@param bEnemyChar boolean
function ABP_HDProj_SPDeployableBase_C:IsEnemyChar(Char, bEnemyChar) end
---@param bAuthority boolean
function ABP_HDProj_SPDeployableBase_C:HasServerAuthority(bAuthority) end
---@param ImpactHitResult FHitResult
function ABP_HDProj_SPDeployableBase_C:ReceivePayloadActivated(ImpactHitResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_HDProj_SPDeployableBase_C:BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_HDProj_SPDeployableBase_C:BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param LastTeamNum uint8
---@param NewTeamNum uint8
function ABP_HDProj_SPDeployableBase_C:OverlappingPawnTeamNumUpdated(LastTeamNum, NewTeamNum) end
---@param Damage float
---@param DamageType UDamageType
---@param InstigatedBy AController
---@param DamageCauser AActor
function ABP_HDProj_SPDeployableBase_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser) end
---@param Squad AHDSquadState
---@param MemberPS AHDPlayerState
function ABP_HDProj_SPDeployableBase_C:MemberPreUnregisteredFromOwnerSquad(Squad, MemberPS) end
---@param EntryPoint int32
function ABP_HDProj_SPDeployableBase_C:ExecuteUbergraph_BP_HDProj_SPDeployableBase(EntryPoint) end
---@param Deployable ABP_HDProj_SPDeployableBase_C
---@param bSpawnPointEnabled boolean
function ABP_HDProj_SPDeployableBase_C:OnSpawnPointActivationChanged__DelegateSignature(Deployable, bSpawnPointEnabled) end


