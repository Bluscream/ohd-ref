---@meta

---@class AActor : UObject
---@field PrimaryActorTick FActorTickFunction
---@field bNetTemporary boolean
---@field bNetStartup boolean
---@field bOnlyRelevantToOwner boolean
---@field bAlwaysRelevant boolean
---@field bReplicateMovement boolean
---@field bHidden boolean
---@field bTearOff boolean
---@field bExchangedRoles boolean
---@field bNetLoadOnClient boolean
---@field bNetUseOwnerRelevancy boolean
---@field bRelevantForNetworkReplays boolean
---@field bRelevantForLevelBounds boolean
---@field bReplayRewindable boolean
---@field bAllowTickBeforeBeginPlay boolean
---@field bAutoDestroyWhenFinished boolean
---@field bCanBeDamaged boolean
---@field bBlockInput boolean
---@field bCollideWhenPlacing boolean
---@field bFindCameraComponentWhenViewTarget boolean
---@field bGenerateOverlapEventsDuringLevelStreaming boolean
---@field bIgnoresOriginShifting boolean
---@field bEnableAutoLODGeneration boolean
---@field bIsEditorOnlyActor boolean
---@field bActorSeamlessTraveled boolean
---@field bReplicates boolean
---@field bCanBeInCluster boolean
---@field bAllowReceiveTickEventOnDedicatedServer boolean
---@field bActorEnableCollision boolean
---@field bActorIsBeingDestroyed boolean
---@field UpdateOverlapsMethodDuringLevelStreaming EActorUpdateOverlapsMethod
---@field DefaultUpdateOverlapsMethodDuringLevelStreaming EActorUpdateOverlapsMethod
---@field RemoteRole ENetRole
---@field ReplicatedMovement FRepMovement
---@field InitialLifeSpan float
---@field CustomTimeDilation float
---@field AttachmentReplication FRepAttachment
---@field Owner AActor
---@field NetDriverName FName
---@field Role ENetRole
---@field NetDormancy ENetDormancy
---@field SpawnCollisionHandlingMethod ESpawnActorCollisionHandlingMethod
---@field AutoReceiveInput EAutoReceiveInput::Type
---@field InputPriority int32
---@field InputComponent UInputComponent
---@field NetCullDistanceSquared float
---@field NetTag int32
---@field NetUpdateFrequency float
---@field MinNetUpdateFrequency float
---@field NetPriority float
---@field Instigator APawn
---@field Children TArray<AActor>
---@field RootComponent USceneComponent
---@field ControllingMatineeActors TArray<AMatineeActor>
---@field Layers TArray<FName>
---@field ParentComponent TWeakObjectPtr<UChildActorComponent>
---@field Tags TArray<FName>
---@field OnTakeAnyDamage FActorOnTakeAnyDamage
---@field OnTakePointDamage FActorOnTakePointDamage
---@field OnTakeRadialDamage FActorOnTakeRadialDamage
---@field OnActorBeginOverlap FActorOnActorBeginOverlap
---@field OnActorEndOverlap FActorOnActorEndOverlap
---@field OnBeginCursorOver FActorOnBeginCursorOver
---@field OnEndCursorOver FActorOnEndCursorOver
---@field OnClicked FActorOnClicked
---@field OnReleased FActorOnReleased
---@field OnInputTouchBegin FActorOnInputTouchBegin
---@field OnInputTouchEnd FActorOnInputTouchEnd
---@field OnInputTouchEnter FActorOnInputTouchEnter
---@field OnInputTouchLeave FActorOnInputTouchLeave
---@field OnActorHit FActorOnActorHit
---@field OnDestroyed FActorOnDestroyed
---@field OnEndPlay FActorOnEndPlay
---@field InstanceComponents TArray<UActorComponent>
---@field BlueprintCreatedComponents TArray<UActorComponent>
AActor = {}

---@param Tolerance float
---@return boolean
function AActor:WasRecentlyRendered(Tolerance) end
function AActor:UserConstructionScript() end
function AActor:TearOff() end
---@param InParentActor AActor
---@param InSocketName FName
function AActor:SnapRootComponentTo(InParentActor, InSocketName) end
---@param NewTickGroup ETickingGroup
function AActor:SetTickGroup(NewTickGroup) end
---@param bTickableWhenPaused boolean
function AActor:SetTickableWhenPaused(bTickableWhenPaused) end
---@param bInReplicates boolean
function AActor:SetReplicates(bInReplicates) end
---@param bInReplicateMovement boolean
function AActor:SetReplicateMovement(bInReplicateMovement) end
---@param NewOwner AActor
function AActor:SetOwner(NewOwner) end
---@param NewDormancy ENetDormancy
function AActor:SetNetDormancy(NewDormancy) end
---@param InLifespan float
function AActor:SetLifeSpan(InLifespan) end
---@param bVal boolean
function AActor:SetAutoDestroyWhenFinished(bVal) end
---@param TickInterval float
function AActor:SetActorTickInterval(TickInterval) end
---@param bEnabled boolean
function AActor:SetActorTickEnabled(bEnabled) end
---@param NewScale3D FVector
function AActor:SetActorScale3D(NewScale3D) end
---@param NewRelativeScale FVector
function AActor:SetActorRelativeScale3D(NewRelativeScale) end
---@param bNewHidden boolean
function AActor:SetActorHiddenInGame(bNewHidden) end
---@param bNewActorEnableCollision boolean
function AActor:SetActorEnableCollision(bNewActorEnableCollision) end
---@param PrerequisiteComponent UActorComponent
function AActor:RemoveTickPrerequisiteComponent(PrerequisiteComponent) end
---@param PrerequisiteActor AActor
function AActor:RemoveTickPrerequisiteActor(PrerequisiteActor) end
---@param DeltaSeconds float
function AActor:ReceiveTick(DeltaSeconds) end
---@param DamageReceived float
---@param DamageType UDamageType
---@param Origin FVector
---@param HitInfo FHitResult
---@param InstigatedBy AController
---@param DamageCauser AActor
function AActor:ReceiveRadialDamage(DamageReceived, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser) end
---@param Damage float
---@param DamageType UDamageType
---@param HitLocation FVector
---@param HitNormal FVector
---@param HitComponent UPrimitiveComponent
---@param BoneName FName
---@param ShotFromDirection FVector
---@param InstigatedBy AController
---@param DamageCauser AActor
---@param HitInfo FHitResult
function AActor:ReceivePointDamage(Damage, DamageType, HitLocation, HitNormal, HitComponent, BoneName, ShotFromDirection, InstigatedBy, DamageCauser, HitInfo) end
---@param MyComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param bSelfMoved boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param NormalImpulse FVector
---@param Hit FHitResult
function AActor:ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit) end
---@param EndPlayReason EEndPlayReason::Type
function AActor:ReceiveEndPlay(EndPlayReason) end
function AActor:ReceiveDestroyed() end
function AActor:ReceiveBeginPlay() end
---@param Damage float
---@param DamageType UDamageType
---@param InstigatedBy AController
---@param DamageCauser AActor
function AActor:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser) end
---@param ButtonReleased FKey
function AActor:ReceiveActorOnReleased(ButtonReleased) end
---@param FingerIndex ETouchIndex::Type
function AActor:ReceiveActorOnInputTouchLeave(FingerIndex) end
---@param FingerIndex ETouchIndex::Type
function AActor:ReceiveActorOnInputTouchEnter(FingerIndex) end
---@param FingerIndex ETouchIndex::Type
function AActor:ReceiveActorOnInputTouchEnd(FingerIndex) end
---@param FingerIndex ETouchIndex::Type
function AActor:ReceiveActorOnInputTouchBegin(FingerIndex) end
---@param ButtonPressed FKey
function AActor:ReceiveActorOnClicked(ButtonPressed) end
---@param OtherActor AActor
function AActor:ReceiveActorEndOverlap(OtherActor) end
function AActor:ReceiveActorEndCursorOver() end
---@param OtherActor AActor
function AActor:ReceiveActorBeginOverlap(OtherActor) end
function AActor:ReceiveActorBeginCursorOver() end
---@param Seconds float
---@param bEnableStreaming boolean
---@param CinematicTextureGroups int32
function AActor:PrestreamTextures(Seconds, bEnableStreaming, CinematicTextureGroups) end
function AActor:OnRep_ReplicateMovement() end
function AActor:OnRep_ReplicatedMovement() end
function AActor:OnRep_Owner() end
function AActor:OnRep_Instigator() end
function AActor:OnRep_AttachmentReplication() end
---@param Loudness float
---@param NoiseInstigator APawn
---@param NoiseLocation FVector
---@param MaxRange float
---@param Tag FName
function AActor:MakeNoise(Loudness, NoiseInstigator, NoiseLocation, MaxRange, Tag) end
---@param Parent UMaterialInterface
---@return UMaterialInstanceDynamic
function AActor:MakeMIDForMaterial(Parent) end
---@param DestLocation FVector
---@param DestRotation FRotator
---@return boolean
function AActor:K2_TeleportTo(DestLocation, DestRotation) end
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
---@return boolean
function AActor:K2_SetActorTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end
---@param NewRotation FRotator
---@param bTeleportPhysics boolean
---@return boolean
function AActor:K2_SetActorRotation(NewRotation, bTeleportPhysics) end
---@param NewRelativeTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_SetActorRelativeTransform(NewRelativeTransform, bSweep, SweepHitResult, bTeleport) end
---@param NewRelativeRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_SetActorRelativeRotation(NewRelativeRotation, bSweep, SweepHitResult, bTeleport) end
---@param NewRelativeLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_SetActorRelativeLocation(NewRelativeLocation, bSweep, SweepHitResult, bTeleport) end
---@param NewLocation FVector
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
---@return boolean
function AActor:K2_SetActorLocationAndRotation(NewLocation, NewRotation, bSweep, SweepHitResult, bTeleport) end
---@param NewLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
---@return boolean
function AActor:K2_SetActorLocation(NewLocation, bSweep, SweepHitResult, bTeleport) end
function AActor:K2_OnReset() end
---@param PC APlayerController
function AActor:K2_OnEndViewTarget(PC) end
---@param PC APlayerController
function AActor:K2_OnBecomeViewTarget(PC) end
---@return USceneComponent
function AActor:K2_GetRootComponent() end
---@param ComponentClass TSubclassOf<UActorComponent>
---@return TArray<UActorComponent>
function AActor:K2_GetComponentsByClass(ComponentClass) end
---@return FRotator
function AActor:K2_GetActorRotation() end
---@return FVector
function AActor:K2_GetActorLocation() end
---@param LocationRule EDetachmentRule
---@param RotationRule EDetachmentRule
---@param ScaleRule EDetachmentRule
function AActor:K2_DetachFromActor(LocationRule, RotationRule, ScaleRule) end
---@param Component UActorComponent
function AActor:K2_DestroyComponent(Component) end
function AActor:K2_DestroyActor() end
---@param Parent USceneComponent
---@param SocketName FName
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
---@param bWeldSimulatedBodies boolean
function AActor:K2_AttachToComponent(Parent, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies) end
---@param ParentActor AActor
---@param SocketName FName
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
---@param bWeldSimulatedBodies boolean
function AActor:K2_AttachToActor(ParentActor, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies) end
---@param InParentActor AActor
---@param InSocketName FName
---@param AttachLocationType EAttachLocation::Type
---@param bWeldSimulatedBodies boolean
function AActor:K2_AttachRootComponentToActor(InParentActor, InSocketName, AttachLocationType, bWeldSimulatedBodies) end
---@param InParent USceneComponent
---@param InSocketName FName
---@param AttachLocationType EAttachLocation::Type
---@param bWeldSimulatedBodies boolean
function AActor:K2_AttachRootComponentTo(InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies) end
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_AddActorWorldTransform(DeltaTransform, bSweep, SweepHitResult, bTeleport) end
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_AddActorWorldRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_AddActorWorldOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_AddActorLocalTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_AddActorLocalRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function AActor:K2_AddActorLocalOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end
---@param Other AActor
---@return boolean
function AActor:IsOverlappingActor(Other) end
---@return boolean
function AActor:IsChildActor() end
---@return boolean
function AActor:IsActorTickEnabled() end
---@return boolean
function AActor:IsActorBeingDestroyed() end
---@return boolean
function AActor:HasAuthority() end
---@param OtherActor AActor
---@return float
function AActor:GetVerticalDistanceTo(OtherActor) end
---@return FVector
function AActor:GetVelocity() end
---@return FTransform
function AActor:GetTransform() end
---@return boolean
function AActor:GetTickableWhenPaused() end
---@param OtherActor AActor
---@return float
function AActor:GetSquaredDistanceTo(OtherActor) end
---@return ENetRole
function AActor:GetRemoteRole() end
---@return UChildActorComponent
function AActor:GetParentComponent() end
---@return AActor
function AActor:GetParentActor() end
---@return AActor
function AActor:GetOwner() end
---@param OverlappingComponents TArray<UPrimitiveComponent>
function AActor:GetOverlappingComponents(OverlappingComponents) end
---@param OverlappingActors TArray<AActor>
---@param ClassFilter TSubclassOf<AActor>
function AActor:GetOverlappingActors(OverlappingActors, ClassFilter) end
---@return ENetRole
function AActor:GetLocalRole() end
---@return float
function AActor:GetLifeSpan() end
---@return AController
function AActor:GetInstigatorController() end
---@return APawn
function AActor:GetInstigator() end
---@param InputAxisKey FKey
---@return FVector
function AActor:GetInputVectorAxisValue(InputAxisKey) end
---@param InputAxisName FName
---@return float
function AActor:GetInputAxisValue(InputAxisName) end
---@param InputAxisKey FKey
---@return float
function AActor:GetInputAxisKeyValue(InputAxisKey) end
---@param OtherActor AActor
---@return float
function AActor:GetHorizontalDotProductTo(OtherActor) end
---@param OtherActor AActor
---@return float
function AActor:GetHorizontalDistanceTo(OtherActor) end
---@return float
function AActor:GetGameTimeSinceCreation() end
---@param OtherActor AActor
---@return float
function AActor:GetDotProductTo(OtherActor) end
---@param OtherActor AActor
---@return float
function AActor:GetDistanceTo(OtherActor) end
---@param ComponentClass TSubclassOf<UActorComponent>
---@param Tag FName
---@return TArray<UActorComponent>
function AActor:GetComponentsByTag(ComponentClass, Tag) end
---@param Interface TSubclassOf<UInterface>
---@return TArray<UActorComponent>
function AActor:GetComponentsByInterface(Interface) end
---@param ComponentClass TSubclassOf<UActorComponent>
---@return UActorComponent
function AActor:GetComponentByClass(ComponentClass) end
---@return FName
function AActor:GetAttachParentSocketName() end
---@return AActor
function AActor:GetAttachParentActor() end
---@param OutActors TArray<AActor>
---@param bResetArray boolean
function AActor:GetAttachedActors(OutActors, bResetArray) end
---@param ChildActors TArray<AActor>
---@param bIncludeDescendants boolean
function AActor:GetAllChildActors(ChildActors, bIncludeDescendants) end
---@return FVector
function AActor:GetActorUpVector() end
---@return float
function AActor:GetActorTimeDilation() end
---@return float
function AActor:GetActorTickInterval() end
---@return FVector
function AActor:GetActorScale3D() end
---@return FVector
function AActor:GetActorRightVector() end
---@return FVector
function AActor:GetActorRelativeScale3D() end
---@return FVector
function AActor:GetActorForwardVector() end
---@param OutLocation FVector
---@param OutRotation FRotator
function AActor:GetActorEyesViewPoint(OutLocation, OutRotation) end
---@return boolean
function AActor:GetActorEnableCollision() end
---@param bOnlyCollidingComponents boolean
---@param Origin FVector
---@param BoxExtent FVector
---@param bIncludeFromChildActors boolean
function AActor:GetActorBounds(bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors) end
function AActor:ForceNetUpdate() end
function AActor:FlushNetDormancy() end
---@param PlayerController APlayerController
function AActor:EnableInput(PlayerController) end
---@param PlayerController APlayerController
function AActor:DisableInput(PlayerController) end
---@param bMaintainWorldPosition boolean
function AActor:DetachRootComponentFromParent(bMaintainWorldPosition) end
---@param PrerequisiteComponent UActorComponent
function AActor:AddTickPrerequisiteComponent(PrerequisiteComponent) end
---@param PrerequisiteActor AActor
function AActor:AddTickPrerequisiteActor(PrerequisiteActor) end
---@param TemplateName FName
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@param ComponentTemplateContext UObject
---@return UActorComponent
function AActor:AddComponent(TemplateName, bManualAttachment, RelativeTransform, ComponentTemplateContext) end
---@param Tag FName
---@return boolean
function AActor:ActorHasTag(Tag) end


---@class AAmbientSound : AActor
---@field AudioComponent UAudioComponent
AAmbientSound = {}

function AAmbientSound:Stop() end
---@param StartTime float
function AAmbientSound:Play(StartTime) end
---@param FadeOutDuration float
---@param FadeVolumeLevel float
function AAmbientSound:FadeOut(FadeOutDuration, FadeVolumeLevel) end
---@param FadeInDuration float
---@param FadeVolumeLevel float
function AAmbientSound:FadeIn(FadeInDuration, FadeVolumeLevel) end
---@param AdjustVolumeDuration float
---@param AdjustVolumeLevel float
function AAmbientSound:AdjustVolume(AdjustVolumeDuration, AdjustVolumeLevel) end


---@class AAtmosphericFog : AInfo
---@field AtmosphericFogComponent UAtmosphericFogComponent
AAtmosphericFog = {}



---@class AAudioVolume : AVolume
---@field Priority float
---@field bEnabled boolean
---@field Settings FReverbSettings
---@field AmbientZoneSettings FInteriorSettings
AAudioVolume = {}

---@param NewReverbSettings FReverbSettings
function AAudioVolume:SetReverbSettings(NewReverbSettings) end
---@param NewPriority float
function AAudioVolume:SetPriority(NewPriority) end
---@param NewInteriorSettings FInteriorSettings
function AAudioVolume:SetInteriorSettings(NewInteriorSettings) end
---@param bNewEnabled boolean
function AAudioVolume:SetEnabled(bNewEnabled) end
function AAudioVolume:OnRep_bEnabled() end


---@class ABandwidthTestActor : AActor
---@field BandwidthGenerator FBandwidthTestGenerator
ABandwidthTestActor = {}



---@class ABlockingVolume : AVolume
ABlockingVolume = {}


---@class ABoxReflectionCapture : AReflectionCapture
ABoxReflectionCapture = {}


---@class ABrush : AActor
---@field BrushType EBrushType
---@field BrushColor FColor
---@field PolyFlags int32
---@field bColored boolean
---@field bSolidWhenSelected boolean
---@field bPlaceableFromClassBrowser boolean
---@field bNotForClientOrServer boolean
---@field Brush UModel
---@field BrushComponent UBrushComponent
---@field bInManipulation boolean
---@field SavedSelections TArray<FGeomSelection>
ABrush = {}



---@class ABrushShape : ABrush
ABrushShape = {}


---@class ACameraActor : AActor
---@field AutoActivateForPlayer EAutoReceiveInput::Type
---@field CameraComponent UCameraComponent
---@field SceneComponent USceneComponent
---@field bConstrainAspectRatio boolean
---@field AspectRatio float
---@field FOVAngle float
---@field PostProcessBlendWeight float
---@field PostProcessSettings FPostProcessSettings
ACameraActor = {}

---@return int32
function ACameraActor:GetAutoActivatePlayerIndex() end


---@class ACameraBlockingVolume : AVolume
ACameraBlockingVolume = {}


---@class ACameraShakeSourceActor : AActor
---@field CameraShakeSourceComponent UCameraShakeSourceComponent
ACameraShakeSourceActor = {}



---@class ACharacter : APawn
---@field Mesh USkeletalMeshComponent
---@field CharacterMovement UCharacterMovementComponent
---@field CapsuleComponent UCapsuleComponent
---@field BasedMovement FBasedMovementInfo
---@field ReplicatedBasedMovement FBasedMovementInfo
---@field AnimRootMotionTranslationScale float
---@field BaseTranslationOffset FVector
---@field BaseRotationOffset FQuat
---@field ReplicatedServerLastTransformUpdateTimeStamp float
---@field ReplayLastTransformUpdateTimeStamp float
---@field ReplicatedMovementMode uint8
---@field bInBaseReplication boolean
---@field CrouchedEyeHeight float
---@field bIsCrouched boolean
---@field bProxyIsJumpForceApplied boolean
---@field bPressedJump boolean
---@field bClientUpdating boolean
---@field bClientWasFalling boolean
---@field bClientResimulateRootMotion boolean
---@field bClientResimulateRootMotionSources boolean
---@field bSimGravityDisabled boolean
---@field bClientCheckEncroachmentOnNetUpdate boolean
---@field bServerMoveIgnoreRootMotion boolean
---@field bWasJumping boolean
---@field JumpKeyHoldTime float
---@field JumpForceTimeRemaining float
---@field ProxyJumpForceStartedTime float
---@field JumpMaxHoldTime float
---@field JumpMaxCount int32
---@field JumpCurrentCount int32
---@field OnReachedJumpApex FCharacterOnReachedJumpApex
---@field MovementModeChangedDelegate FCharacterMovementModeChangedDelegate
---@field OnCharacterMovementUpdated FCharacterOnCharacterMovementUpdated
---@field SavedRootMotion FRootMotionSourceGroup
---@field ClientRootMotionParams FRootMotionMovementParams
---@field RootMotionRepMoves TArray<FSimulatedRootMotionReplicatedMove>
---@field RepRootMotion FRepRootMotionMontage
ACharacter = {}

---@param bClientSimulation boolean
function ACharacter:UnCrouch(bClientSimulation) end
function ACharacter:StopJumping() end
---@param AnimMontage UAnimMontage
function ACharacter:StopAnimMontage(AnimMontage) end
---@param OldTimeStamp float
---@param OldAccel FVector_NetQuantize10
---@param OldMoveFlags uint8
function ACharacter:ServerMoveOld(OldTimeStamp, OldAccel, OldMoveFlags) end
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param CompressedMoveFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementMode uint8
function ACharacter:ServerMoveNoBase(Timestamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementMode) end
---@param TimeStamp0 float
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags uint8
---@param View0 uint32
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementMode uint8
function ACharacter:ServerMoveDualNoBase(TimeStamp0, InAccel0, PendingFlags, View0, Timestamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementMode) end
---@param TimeStamp0 float
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags uint8
---@param View0 uint32
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName FName
---@param ClientMovementMode uint8
function ACharacter:ServerMoveDualHybridRootMotion(TimeStamp0, InAccel0, PendingFlags, View0, Timestamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end
---@param TimeStamp0 float
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags uint8
---@param View0 uint32
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName FName
---@param ClientMovementMode uint8
function ACharacter:ServerMoveDual(TimeStamp0, InAccel0, PendingFlags, View0, Timestamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param CompressedMoveFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName FName
---@param ClientMovementMode uint8
function ACharacter:ServerMove(Timestamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end
---@param inString FString
function ACharacter:RootMotionDebugClientPrintOnScreen(inString) end
---@param AnimMontage UAnimMontage
---@param InPlayRate float
---@param StartSectionName FName
---@return float
function ACharacter:PlayAnimMontage(AnimMontage, InPlayRate, StartSectionName) end
---@param PreviousFloorImpactNormal FVector
---@param PreviousFloorContactNormal FVector
---@param PreviousLocation FVector
---@param TimeDelta float
function ACharacter:OnWalkingOffLedge(PreviousFloorImpactNormal, PreviousFloorContactNormal, PreviousLocation, TimeDelta) end
function ACharacter:OnRep_RootMotion() end
function ACharacter:OnRep_ReplicatedBasedMovement() end
function ACharacter:OnRep_ReplayLastTransformUpdateTimeStamp() end
function ACharacter:OnRep_IsCrouched() end
---@param LaunchVelocity FVector
---@param bXYOverride boolean
---@param bZOverride boolean
function ACharacter:OnLaunched(LaunchVelocity, bXYOverride, bZOverride) end
---@param Hit FHitResult
function ACharacter:OnLanded(Hit) end
function ACharacter:OnJumped() end
---@param LaunchVelocity FVector
---@param bXYOverride boolean
---@param bZOverride boolean
function ACharacter:LaunchCharacter(LaunchVelocity, bXYOverride, bZOverride) end
---@param DeltaTime float
function ACharacter:K2_UpdateCustomMovement(DeltaTime) end
---@param HalfHeightAdjust float
---@param ScaledHalfHeightAdjust float
function ACharacter:K2_OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust) end
---@param PrevMovementMode EMovementMode
---@param NewMovementMode EMovementMode
---@param PrevCustomMode uint8
---@param NewCustomMode uint8
function ACharacter:K2_OnMovementModeChanged(PrevMovementMode, NewMovementMode, PrevCustomMode, NewCustomMode) end
---@param HalfHeightAdjust float
---@param ScaledHalfHeightAdjust float
function ACharacter:K2_OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust) end
function ACharacter:Jump() end
---@return boolean
function ACharacter:IsPlayingRootMotion() end
---@return boolean
function ACharacter:IsPlayingNetworkedRootMotionMontage() end
---@return boolean
function ACharacter:IsJumpProvidingForce() end
---@return boolean
function ACharacter:HasAnyRootMotion() end
---@return UAnimMontage
function ACharacter:GetCurrentMontage() end
---@return FVector
function ACharacter:GetBaseTranslationOffset() end
---@return FRotator
function ACharacter:GetBaseRotationOffsetRotator() end
---@return float
function ACharacter:GetAnimRootMotionTranslationScale() end
---@param bClientSimulation boolean
function ACharacter:Crouch(bClientSimulation) end
---@param Timestamp float
---@param NewLoc FVector
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode uint8
function ACharacter:ClientVeryShortAdjustPosition(Timestamp, NewLoc, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end
function ACharacter:ClientCheatWalk() end
function ACharacter:ClientCheatGhost() end
function ACharacter:ClientCheatFly() end
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
function ACharacter:ClientAdjustRootMotionSourcePosition(Timestamp, ServerRootMotion, bHasAnimRootMotion, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end
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
function ACharacter:ClientAdjustRootMotionPosition(Timestamp, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end
---@param Timestamp float
---@param NewLoc FVector
---@param NewVel FVector
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode uint8
function ACharacter:ClientAdjustPosition(Timestamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end
---@param Timestamp float
function ACharacter:ClientAckGoodMove(Timestamp) end
---@return boolean
function ACharacter:CanJumpInternal() end
---@return boolean
function ACharacter:CanJump() end
---@return boolean
function ACharacter:CanCrouch() end
---@param MeshRelativeLocation FVector
---@param MeshRelativeRotation FRotator
function ACharacter:CacheInitialMeshOffset(MeshRelativeLocation, MeshRelativeRotation) end


---@class AController : AActor
---@field PlayerState APlayerState
---@field OnInstigatedAnyDamage FControllerOnInstigatedAnyDamage
---@field StateName FName
---@field Pawn APawn
---@field Character ACharacter
---@field TransformComponent USceneComponent
---@field ControlRotation FRotator
---@field bAttachToPawn boolean
AController = {}

function AController:UnPossess() end
function AController:StopMovement() end
---@param NewLocation FVector
---@param NewRotation FRotator
function AController:SetInitialLocationAndRotation(NewLocation, NewRotation) end
---@param bNewMoveInput boolean
function AController:SetIgnoreMoveInput(bNewMoveInput) end
---@param bNewLookInput boolean
function AController:SetIgnoreLookInput(bNewLookInput) end
---@param NewRotation FRotator
function AController:SetControlRotation(NewRotation) end
function AController:ResetIgnoreMoveInput() end
function AController:ResetIgnoreLookInput() end
function AController:ResetIgnoreInputFlags() end
---@param UnpossessedPawn APawn
function AController:ReceiveUnPossess(UnpossessedPawn) end
---@param PossessedPawn APawn
function AController:ReceivePossess(PossessedPawn) end
---@param Damage float
---@param DamageType UDamageType
---@param DamagedActor AActor
---@param DamageCauser AActor
function AController:ReceiveInstigatedAnyDamage(Damage, DamageType, DamagedActor, DamageCauser) end
---@param InPawn APawn
function AController:Possess(InPawn) end
function AController:OnRep_PlayerState() end
function AController:OnRep_Pawn() end
---@param Other AActor
---@param ViewPoint FVector
---@param bAlternateChecks boolean
---@return boolean
function AController:LineOfSightTo(Other, ViewPoint, bAlternateChecks) end
---@return APawn
function AController:K2_GetPawn() end
---@return boolean
function AController:IsPlayerController() end
---@return boolean
function AController:IsMoveInputIgnored() end
---@return boolean
function AController:IsLookInputIgnored() end
---@return boolean
function AController:IsLocalPlayerController() end
---@return boolean
function AController:IsLocalController() end
---@return AActor
function AController:GetViewTarget() end
---@return FRotator
function AController:GetDesiredRotation() end
---@return FRotator
function AController:GetControlRotation() end
---@param NewRotation FRotator
---@param bResetCamera boolean
function AController:ClientSetRotation(NewRotation, bResetCamera) end
---@param NewLocation FVector
---@param NewRotation FRotator
function AController:ClientSetLocation(NewLocation, NewRotation) end
---@return APlayerController
function AController:CastToPlayerController() end


---@class ACullDistanceVolume : AVolume
---@field CullDistances TArray<FCullDistanceSizePair>
---@field bEnabled boolean
ACullDistanceVolume = {}



---@class ADebugCameraController : APlayerController
---@field bShowSelectedInfo boolean
---@field bIsFrozenRendering boolean
---@field bIsOrbitingSelectedActor boolean
---@field bOrbitPivotUseCenter boolean
---@field bEnableBufferVisualization boolean
---@field bEnableBufferVisualizationFullMode boolean
---@field bIsBufferVisualizationInputSetup boolean
---@field bLastDisplayEnabled boolean
---@field DrawFrustum UDrawFrustumComponent
---@field SelectedActor AActor
---@field SelectedComponent UPrimitiveComponent
---@field SelectedHitPoint FHitResult
---@field OriginalControllerRef APlayerController
---@field OriginalPlayer UPlayer
---@field SpeedScale float
---@field InitialMaxSpeed float
---@field InitialAccel float
---@field InitialDecel float
ADebugCameraController = {}

function ADebugCameraController:ToggleDisplay() end
function ADebugCameraController:ShowDebugSelectedInfo() end
---@param NewSpeedScale float
function ADebugCameraController:SetPawnMovementSpeedScale(NewSpeedScale) end
---@param RestoredPC APlayerController
function ADebugCameraController:ReceiveOnDeactivate(RestoredPC) end
---@param NewSelectedActor AActor
---@param SelectHitLocation FVector
---@param SelectHitNormal FVector
---@param Hit FHitResult
function ADebugCameraController:ReceiveOnActorSelected(NewSelectedActor, SelectHitLocation, SelectHitNormal, Hit) end
---@param OriginalPC APlayerController
function ADebugCameraController:ReceiveOnActivate(OriginalPC) end
---@return AActor
function ADebugCameraController:GetSelectedActor() end


---@class ADebugCameraHUD : AHUD
ADebugCameraHUD = {}


---@class ADecalActor : AActor
---@field Decal UDecalComponent
ADecalActor = {}

---@param NewDecalMaterial UMaterialInterface
function ADecalActor:SetDecalMaterial(NewDecalMaterial) end
---@return UMaterialInterface
function ADecalActor:GetDecalMaterial() end
---@return UMaterialInstanceDynamic
function ADecalActor:CreateDynamicMaterialInstance() end


---@class ADefaultPawn : APawn
---@field BaseTurnRate float
---@field BaseLookUpRate float
---@field MovementComponent UPawnMovementComponent
---@field CollisionComponent USphereComponent
---@field MeshComponent UStaticMeshComponent
---@field bAddDefaultMovementBindings boolean
ADefaultPawn = {}

---@param Rate float
function ADefaultPawn:TurnAtRate(Rate) end
---@param Val float
function ADefaultPawn:MoveUp_World(Val) end
---@param Val float
function ADefaultPawn:MoveRight(Val) end
---@param Val float
function ADefaultPawn:MoveForward(Val) end
---@param Rate float
function ADefaultPawn:LookUpAtRate(Rate) end


---@class ADefaultPhysicsVolume : APhysicsVolume
ADefaultPhysicsVolume = {}


---@class ADirectionalLight : ALight
ADirectionalLight = {}


---@class ADocumentationActor : AActor
ADocumentationActor = {}


---@class AEmitter : AActor
---@field ParticleSystemComponent UParticleSystemComponent
---@field bDestroyOnSystemFinish boolean
---@field bPostUpdateTickGroup boolean
---@field bCurrentlyActive boolean
---@field OnParticleSpawn FEmitterOnParticleSpawn
---@field OnParticleBurst FEmitterOnParticleBurst
---@field OnParticleDeath FEmitterOnParticleDeath
---@field OnParticleCollide FEmitterOnParticleCollide
AEmitter = {}

function AEmitter:ToggleActive() end
---@param ParameterName FName
---@param Param FVector
function AEmitter:SetVectorParameter(ParameterName, Param) end
---@param NewTemplate UParticleSystem
function AEmitter:SetTemplate(NewTemplate) end
---@param ParameterName FName
---@param Param UMaterialInterface
function AEmitter:SetMaterialParameter(ParameterName, Param) end
---@param ParameterName FName
---@param Param float
function AEmitter:SetFloatParameter(ParameterName, Param) end
---@param ParameterName FName
---@param Param FLinearColor
function AEmitter:SetColorParameter(ParameterName, Param) end
---@param ParameterName FName
---@param Param AActor
function AEmitter:SetActorParameter(ParameterName, Param) end
function AEmitter:OnRep_bCurrentlyActive() end
---@param FinishedComponent UParticleSystemComponent
function AEmitter:OnParticleSystemFinished(FinishedComponent) end
---@return boolean
function AEmitter:IsActive() end
function AEmitter:Deactivate() end
function AEmitter:Activate() end


---@class AEmitterCameraLensEffectBase : AEmitter
---@field PS_CameraEffect UParticleSystem
---@field PS_CameraEffectNonExtremeContent UParticleSystem
---@field BaseCamera APlayerCameraManager
---@field RelativeTransform FTransform
---@field BaseFOV float
---@field bAllowMultipleInstances boolean
---@field bResetWhenRetriggered boolean
---@field EmittersToTreatAsSame TArray<TSubclassOf<AEmitterCameraLensEffectBase>>
---@field DistFromCamera float
AEmitterCameraLensEffectBase = {}



---@class AExponentialHeightFog : AInfo
---@field Component UExponentialHeightFogComponent
---@field bEnabled boolean
AExponentialHeightFog = {}

function AExponentialHeightFog:OnRep_bEnabled() end


---@class AGameMode : AGameModeBase
---@field MatchState FName
---@field bDelayedStart boolean
---@field NumSpectators int32
---@field NumPlayers int32
---@field NumBots int32
---@field MinRespawnDelay float
---@field NumTravellingPlayers int32
---@field EngineMessageClass TSubclassOf<ULocalMessage>
---@field InactivePlayerArray TArray<APlayerState>
---@field InactivePlayerStateLifeSpan float
---@field MaxInactivePlayers int32
---@field bHandleDedicatedServerReplays boolean
AGameMode = {}

function AGameMode:StartMatch() end
---@param AsyncIOBandwidthLimit float
function AGameMode:SetBandwidthLimit(AsyncIOBandwidthLimit) end
---@param Msg FString
function AGameMode:Say(Msg) end
function AGameMode:RestartGame() end
---@return boolean
function AGameMode:ReadyToStartMatch() end
---@return boolean
function AGameMode:ReadyToEndMatch() end
---@param NewState FName
function AGameMode:K2_OnSetMatchState(NewState) end
---@return boolean
function AGameMode:IsMatchInProgress() end
---@return boolean
function AGameMode:HasMatchEnded() end
---@return FName
function AGameMode:GetMatchState() end
function AGameMode:EndMatch() end
function AGameMode:AbortMatch() end


---@class AGameModeBase : AInfo
---@field OptionsString FString
---@field GameSessionClass TSubclassOf<AGameSession>
---@field GameStateClass TSubclassOf<AGameStateBase>
---@field PlayerControllerClass TSubclassOf<APlayerController>
---@field PlayerStateClass TSubclassOf<APlayerState>
---@field HUDClass TSubclassOf<AHUD>
---@field DefaultPawnClass TSubclassOf<APawn>
---@field SpectatorClass TSubclassOf<ASpectatorPawn>
---@field ReplaySpectatorPlayerControllerClass TSubclassOf<APlayerController>
---@field ServerStatReplicatorClass TSubclassOf<AServerStatReplicator>
---@field GameSession AGameSession
---@field GameState AGameStateBase
---@field ServerStatReplicator AServerStatReplicator
---@field DefaultPlayerName FText
---@field bUseSeamlessTravel boolean
---@field bStartPlayersAsSpectators boolean
---@field bPauseable boolean
AGameModeBase = {}

function AGameModeBase:StartPlay() end
---@param NewPlayer AController
---@param StartSpot AActor
---@return APawn
function AGameModeBase:SpawnDefaultPawnFor(NewPlayer, StartSpot) end
---@param NewPlayer AController
---@param SpawnTransform FTransform
---@return APawn
function AGameModeBase:SpawnDefaultPawnAtTransform(NewPlayer, SpawnTransform) end
---@param ActorToReset AActor
---@return boolean
function AGameModeBase:ShouldReset(ActorToReset) end
function AGameModeBase:ReturnToMainMenuHost() end
---@param NewPlayer AController
---@param SpawnTransform FTransform
function AGameModeBase:RestartPlayerAtTransform(NewPlayer, SpawnTransform) end
---@param NewPlayer AController
---@param StartSpot AActor
function AGameModeBase:RestartPlayerAtPlayerStart(NewPlayer, StartSpot) end
---@param NewPlayer AController
function AGameModeBase:RestartPlayer(NewPlayer) end
function AGameModeBase:ResetLevel() end
---@param Player APlayerController
---@return boolean
function AGameModeBase:PlayerCanRestart(Player) end
---@param NewPlayerController APlayerController
---@return boolean
function AGameModeBase:MustSpectate(NewPlayerController) end
---@param NewPlayer APlayerController
function AGameModeBase:K2_PostLogin(NewPlayer) end
---@param OldPC APlayerController
---@param NewPC APlayerController
function AGameModeBase:K2_OnSwapPlayerControllers(OldPC, NewPC) end
---@param NewPlayer AController
function AGameModeBase:K2_OnRestartPlayer(NewPlayer) end
---@param ExitingController AController
function AGameModeBase:K2_OnLogout(ExitingController) end
---@param Other AController
---@param NewName FString
---@param bNameChange boolean
function AGameModeBase:K2_OnChangeName(Other, NewName, bNameChange) end
---@param Player AController
---@param IncomingName FString
---@return AActor
function AGameModeBase:K2_FindPlayerStart(Player, IncomingName) end
---@param StartSpot AActor
---@param NewPlayer AController
function AGameModeBase:InitStartSpot(StartSpot, NewPlayer) end
---@param NewPlayer APlayerController
function AGameModeBase:InitializeHUDForPlayer(NewPlayer) end
---@return boolean
function AGameModeBase:HasMatchStarted() end
---@param NewPlayer APlayerController
function AGameModeBase:HandleStartingNewPlayer(NewPlayer) end
---@return int32
function AGameModeBase:GetNumSpectators() end
---@return int32
function AGameModeBase:GetNumPlayers() end
---@param InController AController
---@return UClass
function AGameModeBase:GetDefaultPawnClassForController(InController) end
---@param Player AController
---@param IncomingName FString
---@return AActor
function AGameModeBase:FindPlayerStart(Player, IncomingName) end
---@param Player AController
---@return AActor
function AGameModeBase:ChoosePlayerStart(Player) end
---@param Controller AController
---@param NewName FString
---@param bNameChange boolean
function AGameModeBase:ChangeName(Controller, NewName, bNameChange) end
---@param Viewer APlayerController
---@param ViewTarget APlayerState
---@return boolean
function AGameModeBase:CanSpectate(Viewer, ViewTarget) end


---@class AGameNetworkManager : AInfo
---@field BadPacketLossThreshold float
---@field SeverePacketLossThreshold float
---@field BadPingThreshold int32
---@field SeverePingThreshold int32
---@field AdjustedNetSpeed int32
---@field LastNetSpeedUpdateTime float
---@field TotalNetBandwidth int32
---@field MinDynamicBandwidth int32
---@field MaxDynamicBandwidth int32
---@field bIsStandbyCheckingEnabled boolean
---@field bHasStandbyCheatTriggered boolean
---@field StandbyRxCheatTime float
---@field StandbyTxCheatTime float
---@field PercentMissingForRxStandby float
---@field PercentMissingForTxStandby float
---@field PercentForBadPing float
---@field JoinInProgressStandbyWaitTime float
---@field MoveRepSize float
---@field MAXPOSITIONERRORSQUARED float
---@field MAXNEARZEROVELOCITYSQUARED float
---@field CLIENTADJUSTUPDATECOST float
---@field MAXCLIENTUPDATEINTERVAL float
---@field MaxClientForcedUpdateDuration float
---@field ServerForcedUpdateHitchThreshold float
---@field ServerForcedUpdateHitchCooldown float
---@field MaxMoveDeltaTime float
---@field MaxClientSmoothingDeltaTime float
---@field ClientNetSendMoveDeltaTime float
---@field ClientNetSendMoveDeltaTimeThrottled float
---@field ClientNetSendMoveDeltaTimeStationary float
---@field ClientNetSendMoveThrottleAtNetSpeed int32
---@field ClientNetSendMoveThrottleOverPlayerCount int32
---@field ClientAuthorativePosition boolean
---@field ClientErrorUpdateRateLimit float
---@field ClientNetCamUpdateDeltaTime float
---@field ClientNetCamUpdatePositionLimit float
---@field bMovementTimeDiscrepancyDetection boolean
---@field bMovementTimeDiscrepancyResolution boolean
---@field MovementTimeDiscrepancyMaxTimeMargin float
---@field MovementTimeDiscrepancyMinTimeMargin float
---@field MovementTimeDiscrepancyResolutionRate float
---@field MovementTimeDiscrepancyDriftAllowance float
---@field bMovementTimeDiscrepancyForceCorrectionsDuringResolution boolean
---@field bUseDistanceBasedRelevancy boolean
AGameNetworkManager = {}



---@class AGameSession : AInfo
---@field MaxSpectators int32
---@field MaxPlayers int32
---@field MaxPartySize int32
---@field MaxSplitscreensPerConnection uint8
---@field bRequiresPushToTalk boolean
---@field SessionName FName
AGameSession = {}



---@class AGameState : AGameStateBase
---@field MatchState FName
---@field PreviousMatchState FName
---@field ElapsedTime int32
AGameState = {}

function AGameState:OnRep_MatchState() end
function AGameState:OnRep_ElapsedTime() end


---@class AGameStateBase : AInfo
---@field GameModeClass TSubclassOf<AGameModeBase>
---@field AuthorityGameMode AGameModeBase
---@field SpectatorClass TSubclassOf<ASpectatorPawn>
---@field PlayerArray TArray<APlayerState>
---@field bReplicatedHasBegunPlay boolean
---@field ReplicatedWorldTimeSeconds float
---@field ServerWorldTimeSecondsDelta float
---@field ServerWorldTimeSecondsUpdateFrequency float
AGameStateBase = {}

function AGameStateBase:OnRep_SpectatorClass() end
function AGameStateBase:OnRep_ReplicatedWorldTimeSeconds() end
function AGameStateBase:OnRep_ReplicatedHasBegunPlay() end
function AGameStateBase:OnRep_GameModeClass() end
---@return boolean
function AGameStateBase:HasMatchStarted() end
---@return boolean
function AGameStateBase:HasBegunPlay() end
---@return float
function AGameStateBase:GetServerWorldTimeSeconds() end
---@param Controller AController
---@return float
function AGameStateBase:GetPlayerStartTime(Controller) end
---@param Controller AController
---@return float
function AGameStateBase:GetPlayerRespawnDelay(Controller) end


---@class AGeneratedMeshAreaLight : ASpotLight
AGeneratedMeshAreaLight = {}


---@class AHUD : AActor
---@field PlayerOwner APlayerController
---@field bLostFocusPaused boolean
---@field bShowHUD boolean
---@field bShowDebugInfo boolean
---@field CurrentTargetIndex int32
---@field bShowHitBoxDebugInfo boolean
---@field bShowOverlays boolean
---@field bEnableDebugTextShadow boolean
---@field PostRenderedActors TArray<AActor>
---@field DebugDisplay TArray<FName>
---@field ToggledDebugCategories TArray<FName>
---@field Canvas UCanvas
---@field DebugCanvas UCanvas
---@field DebugTextList TArray<FDebugTextInfo>
---@field ShowDebugTargetDesiredClass TSubclassOf<AActor>
---@field ShowDebugTargetActor AActor
AHUD = {}

function AHUD:ShowHUD() end
---@param Category FName
function AHUD:ShowDebugToggleSubCategory(Category) end
---@param DesiredClass TSubclassOf<AActor>
function AHUD:ShowDebugForReticleTargetToggle(DesiredClass) end
---@param DebugType FName
function AHUD:ShowDebug(DebugType) end
---@param SrcActor AActor
---@param bLeaveDurationText boolean
function AHUD:RemoveDebugText(SrcActor, bLeaveDurationText) end
function AHUD:RemoveAllDebugStrings() end
---@param BoxName FName
function AHUD:ReceiveHitBoxRelease(BoxName) end
---@param BoxName FName
function AHUD:ReceiveHitBoxEndCursorOver(BoxName) end
---@param BoxName FName
function AHUD:ReceiveHitBoxClick(BoxName) end
---@param BoxName FName
function AHUD:ReceiveHitBoxBeginCursorOver(BoxName) end
---@param SizeX int32
---@param SizeY int32
function AHUD:ReceiveDrawHUD(SizeX, SizeY) end
---@param Location FVector
---@return FVector
function AHUD:Project(Location) end
function AHUD:PreviousDebugTarget() end
function AHUD:NextDebugTarget() end
---@param Text FString
---@param OutWidth float
---@param OutHeight float
---@param Font UFont
---@param Scale float
function AHUD:GetTextSize(Text, OutWidth, OutHeight, Font, Scale) end
---@return APlayerController
function AHUD:GetOwningPlayerController() end
---@return APawn
function AHUD:GetOwningPawn() end
---@param ClassFilter TSubclassOf<AActor>
---@param FirstPoint FVector2D
---@param SecondPoint FVector2D
---@param OutActors TArray<AActor>
---@param bIncludeNonCollidingComponents boolean
---@param bActorMustBeFullyEnclosed boolean
function AHUD:GetActorsInSelectionRectangle(ClassFilter, FirstPoint, SecondPoint, OutActors, bIncludeNonCollidingComponents, bActorMustBeFullyEnclosed) end
---@param Texture UTexture
---@param ScreenX float
---@param ScreenY float
---@param Scale float
---@param bScalePosition boolean
function AHUD:DrawTextureSimple(Texture, ScreenX, ScreenY, Scale, bScalePosition) end
---@param Texture UTexture
---@param ScreenX float
---@param ScreenY float
---@param ScreenW float
---@param ScreenH float
---@param TextureU float
---@param TextureV float
---@param TextureUWidth float
---@param TextureVHeight float
---@param TintColor FLinearColor
---@param BlendMode EBlendMode
---@param Scale float
---@param bScalePosition boolean
---@param Rotation float
---@param RotPivot FVector2D
function AHUD:DrawTexture(Texture, ScreenX, ScreenY, ScreenW, ScreenH, TextureU, TextureV, TextureUWidth, TextureVHeight, TintColor, BlendMode, Scale, bScalePosition, Rotation, RotPivot) end
---@param Text FString
---@param TextColor FLinearColor
---@param ScreenX float
---@param ScreenY float
---@param Font UFont
---@param Scale float
---@param bScalePosition boolean
function AHUD:DrawText(Text, TextColor, ScreenX, ScreenY, Font, Scale, bScalePosition) end
---@param RectColor FLinearColor
---@param ScreenX float
---@param ScreenY float
---@param ScreenW float
---@param ScreenH float
function AHUD:DrawRect(RectColor, ScreenX, ScreenY, ScreenW, ScreenH) end
---@param Material UMaterialInterface
---@param V0_Pos FVector2D
---@param V1_Pos FVector2D
---@param V2_Pos FVector2D
---@param V0_UV FVector2D
---@param V1_UV FVector2D
---@param V2_UV FVector2D
---@param V0_Color FLinearColor
---@param V1_Color FLinearColor
---@param V2_Color FLinearColor
function AHUD:DrawMaterialTriangle(Material, V0_Pos, V1_Pos, V2_Pos, V0_UV, V1_UV, V2_UV, V0_Color, V1_Color, V2_Color) end
---@param Material UMaterialInterface
---@param ScreenX float
---@param ScreenY float
---@param ScreenW float
---@param ScreenH float
---@param Scale float
---@param bScalePosition boolean
function AHUD:DrawMaterialSimple(Material, ScreenX, ScreenY, ScreenW, ScreenH, Scale, bScalePosition) end
---@param Material UMaterialInterface
---@param ScreenX float
---@param ScreenY float
---@param ScreenW float
---@param ScreenH float
---@param MaterialU float
---@param MaterialV float
---@param MaterialUWidth float
---@param MaterialVHeight float
---@param Scale float
---@param bScalePosition boolean
---@param Rotation float
---@param RotPivot FVector2D
function AHUD:DrawMaterial(Material, ScreenX, ScreenY, ScreenW, ScreenH, MaterialU, MaterialV, MaterialUWidth, MaterialVHeight, Scale, bScalePosition, Rotation, RotPivot) end
---@param StartScreenX float
---@param StartScreenY float
---@param EndScreenX float
---@param EndScreenY float
---@param LineColor FLinearColor
---@param LineThickness float
function AHUD:DrawLine(StartScreenX, StartScreenY, EndScreenX, EndScreenY, LineColor, LineThickness) end
---@param ScreenX float
---@param ScreenY float
---@param WorldPosition FVector
---@param WorldDirection FVector
function AHUD:Deproject(ScreenX, ScreenY, WorldPosition, WorldDirection) end
---@param Position FVector2D
---@param Size FVector2D
---@param InName FName
---@param bConsumesInput boolean
---@param Priority int32
function AHUD:AddHitBox(Position, Size, InName, bConsumesInput, Priority) end
---@param DebugText FString
---@param SrcActor AActor
---@param Duration float
---@param Offset FVector
---@param DesiredOffset FVector
---@param TextColor FColor
---@param bSkipOverwriteCheck boolean
---@param bAbsoluteLocation boolean
---@param bKeepAttachedToActor boolean
---@param InFont UFont
---@param FontScale float
---@param bDrawShadow boolean
function AHUD:AddDebugText(DebugText, SrcActor, Duration, Offset, DesiredOffset, TextColor, bSkipOverwriteCheck, bAbsoluteLocation, bKeepAttachedToActor, InFont, FontScale, bDrawShadow) end


---@class AInfo : AActor
AInfo = {}


---@class AKillZVolume : APhysicsVolume
AKillZVolume = {}


---@class ALODActor : AActor
---@field StaticMeshComponent UStaticMeshComponent
---@field ImpostersStaticMeshComponents TMap<UMaterialInterface, UInstancedStaticMeshComponent>
---@field Proxy UHLODProxy
---@field Key FName
---@field LODDrawDistance float
---@field LODLevel int32
---@field SubActors TArray<AActor>
---@field CachedNumHLODLevels uint8
ALODActor = {}



---@class ALevelBounds : AActor
---@field BoxComponent UBoxComponent
---@field bAutoUpdateBounds boolean
ALevelBounds = {}



---@class ALevelScriptActor : AActor
---@field bInputEnabled boolean
ALevelScriptActor = {}

---@param OldOriginLocation FIntVector
---@param NewOriginLocation FIntVector
function ALevelScriptActor:WorldOriginLocationChanged(OldOriginLocation, NewOriginLocation) end
---@param bCinematicMode boolean
---@param bHidePlayer boolean
---@param bAffectsHUD boolean
---@param bAffectsMovement boolean
---@param bAffectsTurning boolean
function ALevelScriptActor:SetCinematicMode(bCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning) end
---@param EventName FName
---@return boolean
function ALevelScriptActor:RemoteEvent(EventName) end
function ALevelScriptActor:LevelReset() end


---@class ALevelStreamingVolume : AVolume
---@field StreamingLevelNames TArray<FName>
---@field bEditorPreVisOnly boolean
---@field bDisabled boolean
---@field StreamingUsage EStreamingVolumeUsage
ALevelStreamingVolume = {}



---@class ALight : AActor
---@field LightComponent ULightComponent
---@field bEnabled boolean
ALight = {}

function ALight:ToggleEnabled() end
---@param NewLightFunctionScale FVector
function ALight:SetLightFunctionScale(NewLightFunctionScale) end
---@param NewLightFunctionMaterial UMaterialInterface
function ALight:SetLightFunctionMaterial(NewLightFunctionMaterial) end
---@param NewLightFunctionFadeDistance float
function ALight:SetLightFunctionFadeDistance(NewLightFunctionFadeDistance) end
---@param NewLightColor FLinearColor
function ALight:SetLightColor(NewLightColor) end
---@param bSetEnabled boolean
function ALight:SetEnabled(bSetEnabled) end
---@param bNewValue boolean
function ALight:SetCastShadows(bNewValue) end
---@param NewBrightness float
function ALight:SetBrightness(NewBrightness) end
---@param bNewValue boolean
function ALight:SetAffectTranslucentLighting(bNewValue) end
function ALight:OnRep_bEnabled() end
---@return boolean
function ALight:IsEnabled() end
---@return FLinearColor
function ALight:GetLightColor() end
---@return float
function ALight:GetBrightness() end


---@class ALightmassCharacterIndirectDetailVolume : AVolume
ALightmassCharacterIndirectDetailVolume = {}


---@class ALightmassImportanceVolume : AVolume
ALightmassImportanceVolume = {}


---@class ALightmassPortal : AActor
---@field PortalComponent ULightmassPortalComponent
ALightmassPortal = {}



---@class AMaterialInstanceActor : AActor
---@field TargetActors TArray<AActor>
AMaterialInstanceActor = {}



---@class AMatineeActor : AActor
---@field MatineeData UInterpData
---@field MatineeControllerName FName
---@field PlayRate float
---@field bPlayOnLevelLoad boolean
---@field bForceStartPos boolean
---@field ForceStartPosition float
---@field bLooping boolean
---@field bRewindOnPlay boolean
---@field bNoResetOnRewind boolean
---@field bRewindIfAlreadyPlaying boolean
---@field bDisableRadioFilter boolean
---@field bClientSideOnly boolean
---@field bSkipUpdateIfNotVisible boolean
---@field bIsSkippable boolean
---@field PreferredSplitScreenNum int32
---@field bDisableMovementInput boolean
---@field bDisableLookAtInput boolean
---@field bHidePlayer boolean
---@field bHideHud boolean
---@field GroupActorInfos TArray<FInterpGroupActorInfo>
---@field bShouldShowGore boolean
---@field GroupInst TArray<UInterpGroupInst>
---@field CameraCuts TArray<FCameraCutInfo>
---@field bIsPlaying boolean
---@field bReversePlayback boolean
---@field bPaused boolean
---@field bPendingStop boolean
---@field InterpPosition float
---@field ReplicationForceIsPlaying uint8
---@field OnPlay FMatineeActorOnPlay
---@field OnStop FMatineeActorOnStop
---@field OnPause FMatineeActorOnPause
AMatineeActor = {}

function AMatineeActor:Stop() end
---@param NewPosition float
---@param bJump boolean
function AMatineeActor:SetPosition(NewPosition, bJump) end
---@param bNewLooping boolean
function AMatineeActor:SetLoopingState(bNewLooping) end
function AMatineeActor:Reverse() end
function AMatineeActor:Play() end
function AMatineeActor:Pause() end
---@param GroupName FString
---@param bEnable boolean
function AMatineeActor:EnableGroupByName(GroupName, bEnable) end
function AMatineeActor:ChangePlaybackDirection() end


---@class AMatineeActorCameraAnim : AMatineeActor
---@field CameraAnim UCameraAnim
AMatineeActorCameraAnim = {}



---@class AMeshMergeCullingVolume : AVolume
AMeshMergeCullingVolume = {}


---@class ANavigationObjectBase : AActor
---@field CapsuleComponent UCapsuleComponent
---@field GoodSprite UBillboardComponent
---@field BadSprite UBillboardComponent
---@field bIsPIEPlayerStart boolean
ANavigationObjectBase = {}



---@class ANote : AActor
ANote = {}


---@class APainCausingVolume : APhysicsVolume
---@field bPainCausing boolean
---@field DamagePerSec float
---@field DamageType TSubclassOf<UDamageType>
---@field PainInterval float
---@field bEntryPain boolean
---@field BACKUP_bPainCausing boolean
---@field DamageInstigator AController
APainCausingVolume = {}



---@class AParticleEventManager : AActor
AParticleEventManager = {}


---@class APawn : AActor
---@field bUseControllerRotationPitch boolean
---@field bUseControllerRotationYaw boolean
---@field bUseControllerRotationRoll boolean
---@field bCanAffectNavigationGeneration boolean
---@field BaseEyeHeight float
---@field AutoPossessPlayer EAutoReceiveInput::Type
---@field AutoPossessAI EAutoPossessAI
---@field RemoteViewPitch uint8
---@field AIControllerClass TSubclassOf<AController>
---@field PlayerState APlayerState
---@field LastHitBy AController
---@field Controller AController
---@field ControlInputVector FVector
---@field LastControlInputVector FVector
APawn = {}

function APawn:SpawnDefaultController() end
---@param bNewValue boolean
---@param bForceUpdate boolean
function APawn:SetCanAffectNavigationGeneration(bNewValue, bForceUpdate) end
---@param OldController AController
function APawn:ReceiveUnpossessed(OldController) end
---@param NewController AController
function APawn:ReceivePossessed(NewController) end
---@param Loudness float
---@param NoiseLocation FVector
---@param bUseNoiseMakerLocation boolean
---@param NoiseMaker AActor
function APawn:PawnMakeNoise(Loudness, NoiseLocation, bUseNoiseMakerLocation, NoiseMaker) end
function APawn:OnRep_PlayerState() end
function APawn:OnRep_Controller() end
---@param LaunchVelocity FVector
---@param bXYOverride boolean
---@param bZOverride boolean
function APawn:LaunchPawn(LaunchVelocity, bXYOverride, bZOverride) end
---@return FVector
function APawn:K2_GetMovementInputVector() end
---@return boolean
function APawn:IsPlayerControlled() end
---@return boolean
function APawn:IsPawnControlled() end
---@return boolean
function APawn:IsMoveInputIgnored() end
---@return boolean
function APawn:IsLocallyControlled() end
---@return boolean
function APawn:IsControlled() end
---@return boolean
function APawn:IsBotControlled() end
---@return FVector
function APawn:GetPendingMovementInputVector() end
---@return FVector
function APawn:GetNavAgentLocation() end
---@return UPawnMovementComponent
function APawn:GetMovementComponent() end
---@param Pawn APawn
---@return AActor
function APawn:GetMovementBaseActor(Pawn) end
---@return FVector
function APawn:GetLastMovementInputVector() end
---@return FRotator
function APawn:GetControlRotation() end
---@return AController
function APawn:GetController() end
---@return FRotator
function APawn:GetBaseAimRotation() end
function APawn:DetachFromControllerPendingDestroy() end
---@return FVector
function APawn:ConsumeMovementInputVector() end
---@param WorldDirection FVector
---@param ScaleValue float
---@param bForce boolean
function APawn:AddMovementInput(WorldDirection, ScaleValue, bForce) end
---@param Val float
function APawn:AddControllerYawInput(Val) end
---@param Val float
function APawn:AddControllerRollInput(Val) end
---@param Val float
function APawn:AddControllerPitchInput(Val) end


---@class APhysicsConstraintActor : ARigidBodyBase
---@field ConstraintComp UPhysicsConstraintComponent
---@field ConstraintActor1 AActor
---@field ConstraintActor2 AActor
---@field bDisableCollision boolean
APhysicsConstraintActor = {}



---@class APhysicsThruster : ARigidBodyBase
---@field ThrusterComponent UPhysicsThrusterComponent
APhysicsThruster = {}



---@class APhysicsVolume : AVolume
---@field TerminalVelocity float
---@field Priority int32
---@field FluidFriction float
---@field bWaterVolume boolean
---@field bPhysicsOnContact boolean
APhysicsVolume = {}



---@class APlanarReflection : ASceneCapture
---@field PlanarReflectionComponent UPlanarReflectionComponent
---@field bShowPreviewPlane boolean
APlanarReflection = {}

---@param bEnable boolean
function APlanarReflection:OnInterpToggle(bEnable) end


---@class APlaneReflectionCapture : AReflectionCapture
APlaneReflectionCapture = {}


---@class APlayerCameraManager : AActor
---@field PCOwner APlayerController
---@field TransformComponent USceneComponent
---@field DefaultFOV float
---@field DefaultOrthoWidth float
---@field DefaultAspectRatio float
---@field CameraCache FCameraCacheEntry
---@field LastFrameCameraCache FCameraCacheEntry
---@field ViewTarget FTViewTarget
---@field PendingViewTarget FTViewTarget
---@field CameraCachePrivate FCameraCacheEntry
---@field LastFrameCameraCachePrivate FCameraCacheEntry
---@field ModifierList TArray<UCameraModifier>
---@field DefaultModifiers TArray<TSubclassOf<UCameraModifier>>
---@field FreeCamDistance float
---@field FreeCamOffset FVector
---@field ViewTargetOffset FVector
---@field CameraLensEffects TArray<AEmitterCameraLensEffectBase>
---@field CachedCameraShakeMod UCameraModifier_CameraShake
---@field AnimInstPool UCameraAnimInst
---@field PostProcessBlendCache TArray<FPostProcessSettings>
---@field ActiveAnims TArray<UCameraAnimInst>
---@field FreeAnims TArray<UCameraAnimInst>
---@field AnimCameraActor ACameraActor
---@field bIsOrthographic boolean
---@field bDefaultConstrainAspectRatio boolean
---@field bClientSimulatingViewTarget boolean
---@field bUseClientSideCameraUpdates boolean
---@field bGameCameraCutThisFrame boolean
---@field ViewPitchMin float
---@field ViewPitchMax float
---@field ViewYawMin float
---@field ViewYawMax float
---@field ViewRollMin float
---@field ViewRollMax float
---@field ServerUpdateCameraTimeout float
APlayerCameraManager = {}

---@param ShakeInstance UCameraShake
---@param bImmediately boolean
function APlayerCameraManager:StopCameraShake(ShakeInstance, bImmediately) end
function APlayerCameraManager:StopCameraFade() end
---@param AnimInst UCameraAnimInst
---@param bImmediate boolean
function APlayerCameraManager:StopCameraAnimInst(AnimInst, bImmediate) end
---@param SourceComponent UCameraShakeSourceComponent
---@param bImmediately boolean
function APlayerCameraManager:StopAllInstancesOfCameraShakeFromSource(SourceComponent, bImmediately) end
---@param Shake TSubclassOf<UCameraShake>
---@param bImmediately boolean
function APlayerCameraManager:StopAllInstancesOfCameraShake(Shake, bImmediately) end
---@param Anim UCameraAnim
---@param bImmediate boolean
function APlayerCameraManager:StopAllInstancesOfCameraAnim(Anim, bImmediate) end
---@param bImmediately boolean
function APlayerCameraManager:StopAllCameraShakes(bImmediately) end
---@param bImmediate boolean
function APlayerCameraManager:StopAllCameraAnims(bImmediate) end
---@param FromAlpha float
---@param ToAlpha float
---@param Duration float
---@param Color FLinearColor
---@param bShouldFadeAudio boolean
---@param bHoldWhenFinished boolean
function APlayerCameraManager:StartCameraFade(FromAlpha, ToAlpha, Duration, Color, bShouldFadeAudio, bHoldWhenFinished) end
---@param InFadeAmount float
---@param Color FLinearColor
---@param bInFadeAudio boolean
function APlayerCameraManager:SetManualCameraFade(InFadeAmount, Color, bInFadeAudio) end
function APlayerCameraManager:SetGameCameraCutThisFrame() end
---@param ModifierToRemove UCameraModifier
---@return boolean
function APlayerCameraManager:RemoveCameraModifier(ModifierToRemove) end
---@param Emitter AEmitterCameraLensEffectBase
function APlayerCameraManager:RemoveCameraLensEffect(Emitter) end
---@param ShakeClass TSubclassOf<UCameraShake>
---@param SourceComponent UCameraShakeSourceComponent
---@return UCameraShake
function APlayerCameraManager:PlayCameraShakeFromSource(ShakeClass, SourceComponent) end
---@param ShakeClass TSubclassOf<UCameraShake>
---@param Scale float
---@param PlaySpace ECameraAnimPlaySpace::Type
---@param UserPlaySpaceRot FRotator
---@return UCameraShake
function APlayerCameraManager:PlayCameraShake(ShakeClass, Scale, PlaySpace, UserPlaySpaceRot) end
---@param Anim UCameraAnim
---@param Rate float
---@param Scale float
---@param BlendInTime float
---@param BlendOutTime float
---@param bLoop boolean
---@param bRandomStartTime boolean
---@param Duration float
---@param PlaySpace ECameraAnimPlaySpace::Type
---@param UserPlaySpaceRot FRotator
---@return UCameraAnimInst
function APlayerCameraManager:PlayCameraAnim(Anim, Rate, Scale, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Duration, PlaySpace, UserPlaySpaceRot) end
---@param NewCameraLocation FVector
---@param PreviousCameraLocation FVector
---@param OriginalCameraLocation FVector
---@param ResultCameraLocation FVector
function APlayerCameraManager:PhotographyCameraModify(NewCameraLocation, PreviousCameraLocation, OriginalCameraLocation, ResultCameraLocation) end
function APlayerCameraManager:OnPhotographySessionStart() end
function APlayerCameraManager:OnPhotographySessionEnd() end
function APlayerCameraManager:OnPhotographyMultiPartCaptureStart() end
function APlayerCameraManager:OnPhotographyMultiPartCaptureEnd() end
---@return APlayerController
function APlayerCameraManager:GetOwningPlayerController() end
---@return float
function APlayerCameraManager:GetFOVAngle() end
---@return FRotator
function APlayerCameraManager:GetCameraRotation() end
---@return FVector
function APlayerCameraManager:GetCameraLocation() end
---@param ModifierClass TSubclassOf<UCameraModifier>
---@return UCameraModifier
function APlayerCameraManager:FindCameraModifierByClass(ModifierClass) end
function APlayerCameraManager:ClearCameraLensEffects() end
---@param CameraTarget AActor
---@param NewCameraLocation FVector
---@param NewCameraRotation FRotator
---@param NewCameraFOV float
---@return boolean
function APlayerCameraManager:BlueprintUpdateCamera(CameraTarget, NewCameraLocation, NewCameraRotation, NewCameraFOV) end
---@param ModifierClass TSubclassOf<UCameraModifier>
---@return UCameraModifier
function APlayerCameraManager:AddNewCameraModifier(ModifierClass) end
---@param LensEffectEmitterClass TSubclassOf<AEmitterCameraLensEffectBase>
---@return AEmitterCameraLensEffectBase
function APlayerCameraManager:AddCameraLensEffect(LensEffectEmitterClass) end


---@class APlayerController : AController
---@field Player UPlayer
---@field AcknowledgedPawn APawn
---@field ControllingDirTrackInst UInterpTrackInstDirector
---@field MyHUD AHUD
---@field PlayerCameraManager APlayerCameraManager
---@field PlayerCameraManagerClass TSubclassOf<APlayerCameraManager>
---@field bAutoManageActiveCameraTarget boolean
---@field TargetViewRotation FRotator
---@field SmoothTargetViewRotationSpeed float
---@field HiddenActors TArray<AActor>
---@field HiddenPrimitiveComponents TArray<TWeakObjectPtr<UPrimitiveComponent>>
---@field LastSpectatorStateSynchTime float
---@field LastSpectatorSyncLocation FVector
---@field LastSpectatorSyncRotation FRotator
---@field ClientCap int32
---@field CheatManager UCheatManager
---@field CheatClass TSubclassOf<UCheatManager>
---@field PlayerInput UPlayerInput
---@field ActiveForceFeedbackEffects TArray<FActiveForceFeedbackEffect>
---@field bPlayerIsWaiting boolean
---@field NetPlayerIndex uint8
---@field PendingSwapConnection UNetConnection
---@field NetConnection UNetConnection
---@field InputYawScale float
---@field InputPitchScale float
---@field InputRollScale float
---@field bShowMouseCursor boolean
---@field bEnableClickEvents boolean
---@field bEnableTouchEvents boolean
---@field bEnableMouseOverEvents boolean
---@field bEnableTouchOverEvents boolean
---@field bForceFeedbackEnabled boolean
---@field ForceFeedbackScale float
---@field ClickEventKeys TArray<FKey>
---@field DefaultMouseCursor EMouseCursor::Type
---@field CurrentMouseCursor EMouseCursor::Type
---@field DefaultClickTraceChannel ECollisionChannel
---@field CurrentClickTraceChannel ECollisionChannel
---@field HitResultTraceDistance float
---@field SeamlessTravelCount uint16
---@field LastCompletedSeamlessTravelCount uint16
---@field InactiveStateInputComponent UInputComponent
---@field bShouldPerformFullTickWhenPaused boolean
---@field CurrentTouchInterface UTouchInterface
---@field SpectatorPawn ASpectatorPawn
---@field bIsLocalPlayerController boolean
---@field SpawnLocation FVector
APlayerController = {}

---@param Key FKey
---@return boolean
function APlayerController:WasInputKeyJustReleased(Key) end
---@param Key FKey
---@return boolean
function APlayerController:WasInputKeyJustPressed(Key) end
---@param bInSpeaking boolean
function APlayerController:ToggleSpeaking(bInSpeaking) end
---@param PackageName FName
---@param Filename FName
function APlayerController:TestServerLevelVisibilityChange(PackageName, Filename) end
---@param URL FString
function APlayerController:SwitchLevel(URL) end
---@param Hand EControllerHand
function APlayerController:StopHapticEffect(Hand) end
---@param FireModeNum uint8
function APlayerController:StartFire(FireModeNum) end
---@param bVisible boolean
function APlayerController:SetVirtualJoystickVisibility(bVisible) end
---@param NewViewTarget AActor
---@param BlendTime float
---@param BlendFunc EViewTargetBlendFunction
---@param BlendExp float
---@param bLockOutgoing boolean
function APlayerController:SetViewTargetWithBlend(NewViewTarget, BlendTime, BlendFunc, BlendExp, bLockOutgoing) end
---@param S FString
function APlayerController:SetName(S) end
---@param X int32
---@param Y int32
function APlayerController:SetMouseLocation(X, Y) end
---@param Cursor EMouseCursor::Type
---@param CursorWidget UUserWidget
function APlayerController:SetMouseCursorWidget(Cursor, CursorWidget) end
---@param Frequency float
---@param Amplitude float
---@param Hand EControllerHand
function APlayerController:SetHapticsByValue(Frequency, Amplitude, Hand) end
---@param bNewDisabled boolean
function APlayerController:SetDisableHaptics(bNewDisabled) end
---@param Color FColor
function APlayerController:SetControllerLightColor(Color) end
---@param bInCinematicMode boolean
---@param bHidePlayer boolean
---@param bAffectsHUD boolean
---@param bAffectsMovement boolean
---@param bAffectsTurning boolean
function APlayerController:SetCinematicMode(bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning) end
---@param AttachToComponent USceneComponent
---@param Location FVector
---@param Rotation FRotator
function APlayerController:SetAudioListenerOverride(AttachToComponent, Location, Rotation) end
---@param AttachToComponent USceneComponent
---@param AttenuationLocationOVerride FVector
function APlayerController:SetAudioListenerAttenuationOverride(AttachToComponent, AttenuationLocationOVerride) end
---@param TransitionParams FViewTargetTransitionParams
function APlayerController:ServerViewSelf(TransitionParams) end
function APlayerController:ServerViewPrevPlayer() end
function APlayerController:ServerViewNextPlayer() end
function APlayerController:ServerVerifyViewTarget() end
---@param LevelVisibilities TArray<FUpdateLevelVisibilityLevelInfo>
function APlayerController:ServerUpdateMultipleLevelsVisibility(LevelVisibilities) end
---@param LevelVisibility FUpdateLevelVisibilityLevelInfo
function APlayerController:ServerUpdateLevelVisibility(LevelVisibility) end
---@param CamLoc FVector_NetQuantize
---@param CamPitchAndYaw int32
function APlayerController:ServerUpdateCamera(CamLoc, CamPitchAndYaw) end
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ServerUnmutePlayer(PlayerId) end
function APlayerController:ServerToggleAILogging() end
function APlayerController:ServerShortTimeout() end
---@param bWaiting boolean
function APlayerController:ServerSetSpectatorWaiting(bWaiting) end
---@param NewLoc FVector
---@param NewRot FRotator
function APlayerController:ServerSetSpectatorLocation(NewLoc, NewRot) end
function APlayerController:ServerRestartPlayer() end
function APlayerController:ServerPause() end
---@param WorldPackageName FName
function APlayerController:ServerNotifyLoadedWorld(WorldPackageName) end
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ServerMutePlayer(PlayerId) end
---@param Msg FString
function APlayerController:ServerExecRPC(Msg) end
---@param Msg FString
function APlayerController:ServerExec(Msg) end
function APlayerController:ServerCheckClientPossessionReliable() end
function APlayerController:ServerCheckClientPossession() end
---@param S FString
function APlayerController:ServerChangeName(S) end
---@param NewMode FName
function APlayerController:ServerCamera(NewMode) end
---@param P APawn
function APlayerController:ServerAcknowledgePossession(P) end
---@param Command FString
function APlayerController:SendToConsole(Command) end
function APlayerController:RestartLevel() end
function APlayerController:ResetControllerLightColor() end
---@param WorldLocation FVector
---@param ScreenLocation FVector2D
---@param bPlayerViewportRelative boolean
---@return boolean
function APlayerController:ProjectWorldLocationToScreen(WorldLocation, ScreenLocation, bPlayerViewportRelative) end
---@param HapticEffect UHapticFeedbackEffect_Base
---@param Hand EControllerHand
---@param Scale float
---@param bLoop boolean
function APlayerController:PlayHapticEffect(HapticEffect, Hand, Scale, bLoop) end
---@param Intensity float
---@param Duration float
---@param bAffectsLeftLarge boolean
---@param bAffectsLeftSmall boolean
---@param bAffectsRightLarge boolean
---@param bAffectsRightSmall boolean
---@param Action EDynamicForceFeedbackAction::Type
---@param LatentInfo FLatentActionInfo
function APlayerController:PlayDynamicForceFeedback(Intensity, Duration, bAffectsLeftLarge, bAffectsLeftSmall, bAffectsRightLarge, bAffectsRightSmall, Action, LatentInfo) end
function APlayerController:Pause() end
---@param bIsLogging boolean
function APlayerController:OnServerStartedVisualLogger(bIsLogging) end
---@param URL FString
function APlayerController:LocalTravel(URL) end
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Tag FName
---@param bLooping boolean
---@param bIgnoreTimeDilation boolean
---@param bPlayWhilePaused boolean
function APlayerController:K2_ClientPlayForceFeedback(ForceFeedbackEffect, Tag, bLooping, bIgnoreTimeDilation, bPlayWhilePaused) end
---@param Key FKey
---@return boolean
function APlayerController:IsInputKeyDown(Key) end
---@param SizeX int32
---@param SizeY int32
function APlayerController:GetViewportSize(SizeX, SizeY) end
---@return ASpectatorPawn
function APlayerController:GetSpectatorPawn() end
---@param LocationX float
---@param LocationY float
---@return boolean
function APlayerController:GetMousePosition(LocationX, LocationY) end
---@param Key FKey
---@return FVector
function APlayerController:GetInputVectorKeyState(Key) end
---@param FingerIndex ETouchIndex::Type
---@param LocationX float
---@param LocationY float
---@param bIsCurrentlyPressed boolean
function APlayerController:GetInputTouchState(FingerIndex, LocationX, LocationY, bIsCurrentlyPressed) end
---@param DeltaX float
---@param DeltaY float
function APlayerController:GetInputMouseDelta(DeltaX, DeltaY) end
---@param Tilt FVector
---@param RotationRate FVector
---@param Gravity FVector
---@param Acceleration FVector
function APlayerController:GetInputMotionState(Tilt, RotationRate, Gravity, Acceleration) end
---@param Key FKey
---@return float
function APlayerController:GetInputKeyTimeDown(Key) end
---@param WhichStick EControllerAnalogStick::Type
---@param StickX float
---@param StickY float
function APlayerController:GetInputAnalogStickState(WhichStick, StickX, StickY) end
---@param Key FKey
---@return float
function APlayerController:GetInputAnalogKeyState(Key) end
---@return AHUD
function APlayerController:GetHUD() end
---@param FingerIndex ETouchIndex::Type
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param HitResult FHitResult
---@return boolean
function APlayerController:GetHitResultUnderFingerForObjects(FingerIndex, ObjectTypes, bTraceComplex, HitResult) end
---@param FingerIndex ETouchIndex::Type
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param HitResult FHitResult
---@return boolean
function APlayerController:GetHitResultUnderFingerByChannel(FingerIndex, TraceChannel, bTraceComplex, HitResult) end
---@param FingerIndex ETouchIndex::Type
---@param TraceChannel ECollisionChannel
---@param bTraceComplex boolean
---@param HitResult FHitResult
---@return boolean
function APlayerController:GetHitResultUnderFinger(FingerIndex, TraceChannel, bTraceComplex, HitResult) end
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param HitResult FHitResult
---@return boolean
function APlayerController:GetHitResultUnderCursorForObjects(ObjectTypes, bTraceComplex, HitResult) end
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param HitResult FHitResult
---@return boolean
function APlayerController:GetHitResultUnderCursorByChannel(TraceChannel, bTraceComplex, HitResult) end
---@param TraceChannel ECollisionChannel
---@param bTraceComplex boolean
---@param HitResult FHitResult
---@return boolean
function APlayerController:GetHitResultUnderCursor(TraceChannel, bTraceComplex, HitResult) end
---@return FVector
function APlayerController:GetFocalLocation() end
---@param NewFOV float
function APlayerController:FOV(NewFOV) end
function APlayerController:EnableCheats() end
---@param ScreenX float
---@param ScreenY float
---@param WorldLocation FVector
---@param WorldDirection FVector
---@return boolean
function APlayerController:DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldLocation, WorldDirection) end
---@param WorldLocation FVector
---@param WorldDirection FVector
---@return boolean
function APlayerController:DeprojectMousePositionToWorld(WorldLocation, WorldDirection) end
---@param Key FKey
function APlayerController:ConsoleKey(Key) end
---@param KickReason FText
function APlayerController:ClientWasKicked(KickReason) end
function APlayerController:ClientVoiceHandshakeComplete() end
---@param LevelStatuses TArray<FUpdateLevelStreamingLevelStatus>
function APlayerController:ClientUpdateMultipleLevelsStreamingStatus(LevelStatuses) end
---@param PackageName FName
---@param bNewShouldBeLoaded boolean
---@param bNewShouldBeVisible boolean
---@param bNewShouldBlockOnLoad boolean
---@param LODIndex int32
function APlayerController:ClientUpdateLevelStreamingStatus(PackageName, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad, LODIndex) end
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ClientUnmutePlayer(PlayerId) end
---@param URL FString
---@param TravelType ETravelType
---@param bSeamless boolean
---@param MapPackageGuid FGuid
function APlayerController:ClientTravelInternal(URL, TravelType, bSeamless, MapPackageGuid) end
---@param URL FString
---@param TravelType ETravelType
---@param bSeamless boolean
---@param MapPackageGuid FGuid
function APlayerController:ClientTravel(URL, TravelType, bSeamless, MapPackageGuid) end
---@param SenderPlayerState APlayerState
---@param S FString
---@param Type FName
---@param MsgLifeTime float
function APlayerController:ClientTeamMessage(SenderPlayerState, S, Type, MsgLifeTime) end
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Tag FName
function APlayerController:ClientStopForceFeedback(ForceFeedbackEffect, Tag) end
---@param SourceComponent UCameraShakeSourceComponent
---@param bImmediately boolean
function APlayerController:ClientStopCameraShakesFromSource(SourceComponent, bImmediately) end
---@param Shake TSubclassOf<UCameraShake>
---@param bImmediately boolean
function APlayerController:ClientStopCameraShake(Shake, bImmediately) end
---@param AnimToStop UCameraAnim
function APlayerController:ClientStopCameraAnim(AnimToStop) end
function APlayerController:ClientStartOnlineSession() end
---@param LensEffectEmitterClass TSubclassOf<AEmitterCameraLensEffectBase>
function APlayerController:ClientSpawnCameraLensEffect(LensEffectEmitterClass) end
---@param A AActor
---@param TransitionParams FViewTargetTransitionParams
function APlayerController:ClientSetViewTarget(A, TransitionParams) end
---@param bWaiting boolean
function APlayerController:ClientSetSpectatorWaiting(bWaiting) end
---@param NewHUDClass TSubclassOf<AHUD>
function APlayerController:ClientSetHUD(NewHUDClass) end
---@param Material UMaterialInterface
---@param ForceDuration float
---@param CinematicTextureGroups int32
function APlayerController:ClientSetForceMipLevelsToBeResident(Material, ForceDuration, CinematicTextureGroups) end
---@param bInCinematicMode boolean
---@param bAffectsMovement boolean
---@param bAffectsTurning boolean
---@param bAffectsHUD boolean
function APlayerController:ClientSetCinematicMode(bInCinematicMode, bAffectsMovement, bAffectsTurning, bAffectsHUD) end
---@param NewCamMode FName
function APlayerController:ClientSetCameraMode(NewCamMode) end
---@param bEnableFading boolean
---@param FadeColor FColor
---@param FadeAlpha FVector2D
---@param FadeTime float
---@param bFadeAudio boolean
function APlayerController:ClientSetCameraFade(bEnableFading, FadeColor, FadeAlpha, FadeTime, bFadeAudio) end
function APlayerController:ClientSetBlockOnAsyncLoading() end
---@param ReturnReason FText
function APlayerController:ClientReturnToMainMenuWithTextReason(ReturnReason) end
---@param ReturnReason FString
function APlayerController:ClientReturnToMainMenu(ReturnReason) end
---@param NewPawn APawn
function APlayerController:ClientRetryClientRestart(NewPawn) end
---@param NewPawn APawn
function APlayerController:ClientRestart(NewPawn) end
function APlayerController:ClientReset() end
---@param Object UObject
function APlayerController:ClientRepObjRef(Object) end
---@param Message TSubclassOf<ULocalMessage>
---@param Switch int32
---@param RelatedPlayerState_1 APlayerState
---@param RelatedPlayerState_2 APlayerState
---@param OptionalObject UObject
function APlayerController:ClientReceiveLocalizedMessage(Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject) end
---@param ForcedActor AActor
---@param ForceDuration float
---@param bEnableStreaming boolean
---@param CinematicTextureGroups int32
function APlayerController:ClientPrestreamTextures(ForcedActor, ForceDuration, bEnableStreaming, CinematicTextureGroups) end
---@param LevelName FName
---@param bFirst boolean
---@param bLast boolean
function APlayerController:ClientPrepareMapChange(LevelName, bFirst, bLast) end
---@param Sound USoundBase
---@param Location FVector
---@param VolumeMultiplier float
---@param PitchMultiplier float
function APlayerController:ClientPlaySoundAtLocation(Sound, Location, VolumeMultiplier, PitchMultiplier) end
---@param Sound USoundBase
---@param VolumeMultiplier float
---@param PitchMultiplier float
function APlayerController:ClientPlaySound(Sound, VolumeMultiplier, PitchMultiplier) end
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Params FForceFeedbackParameters
function APlayerController:ClientPlayForceFeedback_Internal(ForceFeedbackEffect, Params) end
---@param Shake TSubclassOf<UCameraShake>
---@param SourceComponent UCameraShakeSourceComponent
function APlayerController:ClientPlayCameraShakeFromSource(Shake, SourceComponent) end
---@param Shake TSubclassOf<UCameraShake>
---@param Scale float
---@param PlaySpace ECameraAnimPlaySpace::Type
---@param UserPlaySpaceRot FRotator
function APlayerController:ClientPlayCameraShake(Shake, Scale, PlaySpace, UserPlaySpaceRot) end
---@param AnimToPlay UCameraAnim
---@param Scale float
---@param Rate float
---@param BlendInTime float
---@param BlendOutTime float
---@param bLoop boolean
---@param bRandomStartTime boolean
---@param Space ECameraAnimPlaySpace::Type
---@param CustomPlaySpace FRotator
function APlayerController:ClientPlayCameraAnim(AnimToPlay, Scale, Rate, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Space, CustomPlaySpace) end
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ClientMutePlayer(PlayerId) end
---@param S FString
---@param Type FName
---@param MsgLifeTime float
function APlayerController:ClientMessage(S, Type, MsgLifeTime) end
---@param bIgnore boolean
function APlayerController:ClientIgnoreMoveInput(bIgnore) end
---@param bIgnore boolean
function APlayerController:ClientIgnoreLookInput(bIgnore) end
---@param NewState FName
function APlayerController:ClientGotoState(NewState) end
---@param EndGameFocus AActor
---@param bIsWinner boolean
function APlayerController:ClientGameEnded(EndGameFocus, bIsWinner) end
function APlayerController:ClientForceGarbageCollection() end
function APlayerController:ClientFlushLevelStreaming() end
function APlayerController:ClientEndOnlineSession() end
---@param bEnable boolean
function APlayerController:ClientEnableNetworkVoice(bEnable) end
function APlayerController:ClientCommitMapChange() end
function APlayerController:ClientClearCameraLensEffects() end
---@param Cap int32
function APlayerController:ClientCapBandwidth(Cap) end
function APlayerController:ClientCancelPendingMapChange() end
---@param InLoc FVector
---@param Duration float
---@param bOverrideLocation boolean
function APlayerController:ClientAddTextureStreamingLoc(InLoc, Duration, bOverrideLocation) end
function APlayerController:ClearAudioListenerOverride() end
function APlayerController:ClearAudioListenerAttenuationOverride() end
---@return boolean
function APlayerController:CanRestartPlayer() end
---@param NewMode FName
function APlayerController:Camera(NewMode) end
---@param Val float
function APlayerController:AddYawInput(Val) end
---@param Val float
function APlayerController:AddRollInput(Val) end
---@param Val float
function APlayerController:AddPitchInput(Val) end
---@param NewTouchInterface UTouchInterface
function APlayerController:ActivateTouchInterface(NewTouchInterface) end


---@class APlayerStart : ANavigationObjectBase
---@field PlayerStartTag FName
APlayerStart = {}



---@class APlayerStartPIE : APlayerStart
APlayerStartPIE = {}


---@class APlayerState : AInfo
---@field Score float
---@field PlayerId int32
---@field Ping uint8
---@field bShouldUpdateReplicatedPing boolean
---@field bIsSpectator boolean
---@field bOnlySpectator boolean
---@field bIsABot boolean
---@field bIsInactive boolean
---@field bFromPreviousLevel boolean
---@field StartTime int32
---@field EngineMessageClass TSubclassOf<ULocalMessage>
---@field SavedNetworkAddress FString
---@field UniqueId FUniqueNetIdRepl
---@field PawnPrivate APawn
---@field PlayerNamePrivate FString
APlayerState = {}

---@param OldPlayerState APlayerState
function APlayerState:ReceiveOverrideWith(OldPlayerState) end
---@param NewPlayerState APlayerState
function APlayerState:ReceiveCopyProperties(NewPlayerState) end
function APlayerState:OnRep_UniqueId() end
function APlayerState:OnRep_Score() end
function APlayerState:OnRep_PlayerName() end
function APlayerState:OnRep_PlayerId() end
function APlayerState:OnRep_bIsInactive() end
---@return FString
function APlayerState:GetPlayerName() end


---@class APointLight : ALight
---@field PointLightComponent UPointLightComponent
APointLight = {}

---@param NewRadius float
function APointLight:SetRadius(NewRadius) end
---@param NewLightFalloffExponent float
function APointLight:SetLightFalloffExponent(NewLightFalloffExponent) end


---@class APostProcessVolume : AVolume
---@field Settings FPostProcessSettings
---@field Priority float
---@field BlendRadius float
---@field BlendWeight float
---@field bEnabled boolean
---@field bUnbound boolean
APostProcessVolume = {}

---@param InBlendableObject TScriptInterface<IBlendableInterface>
---@param InWeight float
function APostProcessVolume:AddOrUpdateBlendable(InBlendableObject, InWeight) end


---@class APrecomputedVisibilityOverrideVolume : AVolume
---@field OverrideVisibleActors TArray<AActor>
---@field OverrideInvisibleActors TArray<AActor>
---@field OverrideInvisibleLevels TArray<FName>
APrecomputedVisibilityOverrideVolume = {}



---@class APrecomputedVisibilityVolume : AVolume
APrecomputedVisibilityVolume = {}


---@class ARadialForceActor : ARigidBodyBase
---@field ForceComponent URadialForceComponent
ARadialForceActor = {}

function ARadialForceActor:ToggleForce() end
function ARadialForceActor:FireImpulse() end
function ARadialForceActor:EnableForce() end
function ARadialForceActor:DisableForce() end


---@class ARectLight : ALight
---@field RectLightComponent URectLightComponent
ARectLight = {}



---@class AReflectionCapture : AActor
---@field CaptureComponent UReflectionCaptureComponent
AReflectionCapture = {}



---@class ARigidBodyBase : AActor
ARigidBodyBase = {}


---@class ARuntimeVirtualTextureVolume : AActor
---@field VirtualTextureComponent URuntimeVirtualTextureComponent
ARuntimeVirtualTextureVolume = {}



---@class ASceneCapture : AActor
---@field MeshComp UStaticMeshComponent
---@field SceneComponent USceneComponent
ASceneCapture = {}



---@class ASceneCapture2D : ASceneCapture
---@field CaptureComponent2D USceneCaptureComponent2D
ASceneCapture2D = {}

---@param bEnable boolean
function ASceneCapture2D:OnInterpToggle(bEnable) end


---@class ASceneCaptureCube : ASceneCapture
---@field CaptureComponentCube USceneCaptureComponentCube
ASceneCaptureCube = {}

---@param bEnable boolean
function ASceneCaptureCube:OnInterpToggle(bEnable) end


---@class AServerStatReplicator : AInfo
---@field bUpdateStatNet boolean
---@field bOverwriteClientStats boolean
---@field Channels uint32
---@field InRate uint32
---@field OutRate uint32
---@field MaxPacketOverhead uint32
---@field InRateClientMax uint32
---@field InRateClientMin uint32
---@field InRateClientAvg uint32
---@field InPacketsClientMax uint32
---@field InPacketsClientMin uint32
---@field InPacketsClientAvg uint32
---@field OutRateClientMax uint32
---@field OutRateClientMin uint32
---@field OutRateClientAvg uint32
---@field OutPacketsClientMax uint32
---@field OutPacketsClientMin uint32
---@field OutPacketsClientAvg uint32
---@field NetNumClients uint32
---@field InPackets uint32
---@field OutPackets uint32
---@field InBunches uint32
---@field OutBunches uint32
---@field OutLoss uint32
---@field InLoss uint32
---@field VoiceBytesSent uint32
---@field VoiceBytesRecv uint32
---@field VoicePacketsSent uint32
---@field VoicePacketsRecv uint32
---@field PercentInVoice uint32
---@field PercentOutVoice uint32
---@field NumActorChannels uint32
---@field NumConsideredActors uint32
---@field PrioritizedActors uint32
---@field NumRelevantActors uint32
---@field NumRelevantDeletedActors uint32
---@field NumReplicatedActorAttempts uint32
---@field NumReplicatedActors uint32
---@field NumActors uint32
---@field NumNetActors uint32
---@field NumDormantActors uint32
---@field NumInitiallyDormantActors uint32
---@field NumNetGUIDsAckd uint32
---@field NumNetGUIDsPending uint32
---@field NumNetGUIDsUnAckd uint32
---@field ObjPathBytes uint32
---@field NetGUIDOutRate uint32
---@field NetGUIDInRate uint32
---@field NetSaturated uint32
AServerStatReplicator = {}



---@class ASkeletalMeshActor : AActor
---@field bShouldDoAnimNotifies boolean
---@field bWakeOnLevelStart boolean
---@field SkeletalMeshComponent USkeletalMeshComponent
---@field ReplicatedMesh USkeletalMesh
---@field ReplicatedPhysAsset UPhysicsAsset
---@field ReplicatedMaterial0 UMaterialInterface
---@field ReplicatedMaterial1 UMaterialInterface
ASkeletalMeshActor = {}

function ASkeletalMeshActor:OnRep_ReplicatedPhysAsset() end
function ASkeletalMeshActor:OnRep_ReplicatedMesh() end
function ASkeletalMeshActor:OnRep_ReplicatedMaterial1() end
function ASkeletalMeshActor:OnRep_ReplicatedMaterial0() end


---@class ASkyAtmosphere : AInfo
---@field SkyAtmosphereComponent USkyAtmosphereComponent
ASkyAtmosphere = {}



---@class ASkyLight : AInfo
---@field LightComponent USkyLightComponent
---@field bEnabled boolean
ASkyLight = {}

function ASkyLight:OnRep_bEnabled() end


---@class ASpectatorPawn : ADefaultPawn
ASpectatorPawn = {}


---@class ASphereReflectionCapture : AReflectionCapture
---@field DrawCaptureRadius UDrawSphereComponent
ASphereReflectionCapture = {}



---@class ASplineMeshActor : AActor
---@field SplineMeshComponent USplineMeshComponent
ASplineMeshActor = {}



---@class ASpotLight : ALight
---@field SpotLightComponent USpotLightComponent
ASpotLight = {}

---@param NewOuterConeAngle float
function ASpotLight:SetOuterConeAngle(NewOuterConeAngle) end
---@param NewInnerConeAngle float
function ASpotLight:SetInnerConeAngle(NewInnerConeAngle) end


---@class AStaticMeshActor : AActor
---@field StaticMeshComponent UStaticMeshComponent
---@field bStaticMeshReplicateMovement boolean
---@field NavigationGeometryGatheringMode ENavDataGatheringMode
AStaticMeshActor = {}

---@param InMobility EComponentMobility::Type
function AStaticMeshActor:SetMobility(InMobility) end


---@class ATargetPoint : AActor
ATargetPoint = {}


---@class ATextRenderActor : AActor
---@field TextRender UTextRenderComponent
ATextRenderActor = {}



---@class ATriggerBase : AActor
---@field CollisionComponent UShapeComponent
ATriggerBase = {}



---@class ATriggerBox : ATriggerBase
ATriggerBox = {}


---@class ATriggerCapsule : ATriggerBase
ATriggerCapsule = {}


---@class ATriggerSphere : ATriggerBase
ATriggerSphere = {}


---@class ATriggerVolume : AVolume
ATriggerVolume = {}


---@class AVectorFieldVolume : AActor
---@field VectorFieldComponent UVectorFieldComponent
AVectorFieldVolume = {}



---@class AVolume : ABrush
AVolume = {}


---@class AVolumetricLightmapDensityVolume : AVolume
---@field AllowedMipLevelRange FInt32Interval
AVolumetricLightmapDensityVolume = {}



---@class AWindDirectionalSource : AInfo
---@field Component UWindDirectionalSourceComponent
AWindDirectionalSource = {}



---@class AWorldSettings : AInfo
---@field VisibilityCellSize int32
---@field VisibilityAggressiveness EVisibilityAggressiveness
---@field bPrecomputeVisibility boolean
---@field bPlaceCellsOnlyAlongCameraTracks boolean
---@field bEnableWorldBoundsChecks boolean
---@field bEnableNavigationSystem boolean
---@field bEnableAISystem boolean
---@field bEnableWorldComposition boolean
---@field bUseClientSideLevelStreamingVolumes boolean
---@field bEnableWorldOriginRebasing boolean
---@field bWorldGravitySet boolean
---@field bGlobalGravitySet boolean
---@field bMinimizeBSPSections boolean
---@field bForceNoPrecomputedLighting boolean
---@field bHighPriorityLoading boolean
---@field bHighPriorityLoadingLocal boolean
---@field bOverrideDefaultBroadphaseSettings boolean
---@field NavigationSystemConfig UNavigationSystemConfig
---@field NavigationSystemConfigOverride UNavigationSystemConfig
---@field WorldToMeters float
---@field KillZ float
---@field KillZDamageType TSubclassOf<UDamageType>
---@field WorldGravityZ float
---@field GlobalGravityZ float
---@field DefaultPhysicsVolumeClass TSubclassOf<ADefaultPhysicsVolume>
---@field PhysicsCollisionHandlerClass TSubclassOf<UPhysicsCollisionHandler>
---@field DefaultGameMode TSubclassOf<AGameModeBase>
---@field GameNetworkManagerClass TSubclassOf<AGameNetworkManager>
---@field PackedLightAndShadowMapTextureSize int32
---@field DefaultColorScale FVector
---@field DefaultMaxDistanceFieldOcclusionDistance float
---@field GlobalDistanceFieldViewDistance float
---@field DynamicIndirectShadowsSelfShadowingIntensity float
---@field DefaultReverbSettings FReverbSettings
---@field DefaultAmbientZoneSettings FInteriorSettings
---@field MonoCullingDistance float
---@field DefaultBaseSoundMix USoundMix
---@field TimeDilation float
---@field MatineeTimeDilation float
---@field DemoPlayTimeDilation float
---@field MinGlobalTimeDilation float
---@field MaxGlobalTimeDilation float
---@field MinUndilatedFrameTime float
---@field MaxUndilatedFrameTime float
---@field BroadphaseSettings FBroadphaseSettings
---@field Pauser APlayerState
---@field ReplicationViewers TArray<FNetViewer>
---@field AssetUserData TArray<UAssetUserData>
---@field PauserPlayerState APlayerState
---@field MaxNumberOfBookmarks int32
---@field DefaultBookmarkClass TSubclassOf<UBookmarkBase>
---@field BookmarkArray TArray<UBookmarkBase>
---@field LastBookmarkClass TSubclassOf<UBookmarkBase>
AWorldSettings = {}

function AWorldSettings:OnRep_WorldGravityZ() end


---@class FA2CSPose : FA2Pose
---@field ComponentSpaceFlags TArray<uint8>
FA2CSPose = {}



---@class FA2Pose
---@field Bones TArray<FTransform>
FA2Pose = {}



---@class FActiveCameraShakeInfo
---@field ShakeInstance UCameraShake
---@field ShakeSource TWeakObjectPtr<UCameraShakeSourceComponent>
FActiveCameraShakeInfo = {}



---@class FActiveForceFeedbackEffect
---@field ForceFeedbackEffect UForceFeedbackEffect
FActiveForceFeedbackEffect = {}



---@class FActiveHapticFeedbackEffect
---@field HapticEffect UHapticFeedbackEffect_Base
FActiveHapticFeedbackEffect = {}



---@class FActorComponentDuplicatedObjectData
FActorComponentDuplicatedObjectData = {}


---@class FActorComponentInstanceData
---@field SourceComponentTemplate UObject
---@field SourceComponentCreationMethod EComponentCreationMethod
---@field SourceComponentTypeSerializedIndex int32
---@field SavedProperties TArray<uint8>
---@field DuplicatedObjects TArray<FActorComponentDuplicatedObjectData>
---@field ReferencedObjects TArray<UObject>
---@field ReferencedNames TArray<FName>
FActorComponentInstanceData = {}



---@class FActorComponentTickFunction : FTickFunction
FActorComponentTickFunction = {}


---@class FActorTickFunction : FTickFunction
FActorTickFunction = {}


---@class FAlphaBlend
---@field CustomCurve UCurveFloat
---@field BlendTime float
---@field BlendOption EAlphaBlendOption
FAlphaBlend = {}



---@class FAngularDriveConstraint
---@field TwistDrive FConstraintDrive
---@field SwingDrive FConstraintDrive
---@field SlerpDrive FConstraintDrive
---@field OrientationTarget FRotator
---@field AngularVelocityTarget FVector
---@field AngularDriveMode EAngularDriveMode::Type
FAngularDriveConstraint = {}



---@class FAnimBlueprintDebugData
FAnimBlueprintDebugData = {}


---@class FAnimBlueprintFunction
---@field Name FName
---@field Group FName
---@field OutputPoseNodeIndex int32
---@field InputPoseNames TArray<FName>
---@field InputPoseNodeIndices TArray<int32>
---@field bImplemented boolean
FAnimBlueprintFunction = {}



---@class FAnimBlueprintFunctionData
---@field OutputPoseNodeProperty TFieldPath<FStructProperty>
---@field InputPoseNodeProperties TArray<TFieldPath<FStructProperty>>
---@field InputProperties TArray<TFieldPath<FProperty>>
FAnimBlueprintFunctionData = {}



---@class FAnimControlTrackKey
---@field StartTime float
---@field AnimSeq UAnimSequence
---@field AnimStartOffset float
---@field AnimEndOffset float
---@field AnimPlayRate float
---@field bLooping boolean
---@field bReverse boolean
FAnimControlTrackKey = {}



---@class FAnimCurveBase
---@field LastObservedName FName
---@field Name FSmartName
---@field CurveTypeFlags int32
FAnimCurveBase = {}



---@class FAnimCurveParam
---@field Name FName
FAnimCurveParam = {}



---@class FAnimCurveType
FAnimCurveType = {}


---@class FAnimGraphBlendOptions
---@field BlendInTime float
---@field BlendOutTime float
FAnimGraphBlendOptions = {}



---@class FAnimGroupInfo
---@field Name FName
---@field Color FLinearColor
FAnimGroupInfo = {}



---@class FAnimGroupInstance
FAnimGroupInstance = {}


---@class FAnimInstanceProxy
FAnimInstanceProxy = {}


---@class FAnimLinkableElement
---@field LinkedMontage UAnimMontage
---@field SlotIndex int32
---@field SegmentIndex int32
---@field LinkMethod EAnimLinkMethod::Type
---@field CachedLinkMethod EAnimLinkMethod::Type
---@field SegmentBeginTime float
---@field SegmentLength float
---@field LinkValue float
---@field LinkedSequence UAnimSequenceBase
FAnimLinkableElement = {}



---@class FAnimMontageInstance
---@field Montage UAnimMontage
---@field bPlaying boolean
---@field DefaultBlendTimeMultiplier float
---@field NextSections TArray<int32>
---@field PrevSections TArray<int32>
---@field ActiveStateBranchingPoints TArray<FAnimNotifyEvent>
---@field Position float
---@field PlayRate float
---@field Blend FAlphaBlend
---@field DisableRootMotionCount int32
FAnimMontageInstance = {}



---@class FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base
---@field Base FPoseLink
---@field Additive FPoseLink
---@field AlphaInputType EAnimAlphaInputType
---@field Alpha float
---@field bAlphaBoolEnabled boolean
---@field AlphaBoolBlend FInputAlphaBoolBlend
---@field AlphaCurveName FName
---@field AlphaScaleBias FInputScaleBias
---@field AlphaScaleBiasClamp FInputScaleBiasClamp
---@field LODThreshold int32
FAnimNode_ApplyMeshSpaceAdditive = {}



---@class FAnimNode_AssetPlayerBase : FAnimNode_Base
---@field GroupIndex int32
---@field GroupRole EAnimGroupRole::Type
---@field bIgnoreForRelevancyTest boolean
---@field BlendWeight float
---@field InternalTimeAccumulator float
FAnimNode_AssetPlayerBase = {}



---@class FAnimNode_Base
FAnimNode_Base = {}


---@class FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base
---@field ComponentPose FComponentSpacePoseLink
FAnimNode_ConvertComponentToLocalSpace = {}



---@class FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base
---@field LocalPose FPoseLink
FAnimNode_ConvertLocalToComponentSpace = {}



---@class FAnimNode_CustomProperty : FAnimNode_Base
---@field SourcePropertyNames TArray<FName>
---@field DestPropertyNames TArray<FName>
---@field TargetInstance UObject
FAnimNode_CustomProperty = {}



---@class FAnimNode_Inertialization : FAnimNode_Base
---@field Source FPoseLink
FAnimNode_Inertialization = {}



---@class FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty
---@field InputPoses TArray<FPoseLink>
---@field InputPoseNames TArray<FName>
---@field InstanceClass TSubclassOf<UAnimInstance>
---@field Tag FName
---@field bReceiveNotifiesFromLinkedInstances boolean
---@field bPropagateNotifiesToLinkedInstances boolean
FAnimNode_LinkedAnimGraph = {}



---@class FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph
---@field Interface TSubclassOf<UAnimLayerInterface>
---@field Layer FName
FAnimNode_LinkedAnimLayer = {}



---@class FAnimNode_LinkedInputPose : FAnimNode_Base
---@field Name FName
---@field Graph FName
---@field InputPose FPoseLink
FAnimNode_LinkedInputPose = {}



---@class FAnimNode_Root : FAnimNode_Base
---@field Result FPoseLink
---@field Name FName
---@field Group FName
FAnimNode_Root = {}



---@class FAnimNode_SaveCachedPose : FAnimNode_Base
---@field Pose FPoseLink
---@field CachePoseName FName
FAnimNode_SaveCachedPose = {}



---@class FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase
---@field Sequence UAnimSequenceBase
---@field PlayRateBasis float
---@field PlayRate float
---@field PlayRateScaleBiasClamp FInputScaleBiasClamp
---@field StartPosition float
---@field bLoopAnimation boolean
FAnimNode_SequencePlayer = {}



---@class FAnimNode_SingleNode : FAnimNode_Base
---@field SourcePose FPoseLink
FAnimNode_SingleNode = {}



---@class FAnimNode_StateMachine : FAnimNode_Base
---@field StateMachineIndexInClass int32
---@field MaxTransitionsPerFrame int32
---@field bSkipFirstUpdateTransition boolean
---@field bReinitializeOnBecomingRelevant boolean
FAnimNode_StateMachine = {}



---@class FAnimNode_TransitionPoseEvaluator : FAnimNode_Base
---@field FramesToCachePose int32
---@field DataSource EEvaluatorDataSource::Type
---@field EvaluatorMode EEvaluatorMode::Type
FAnimNode_TransitionPoseEvaluator = {}



---@class FAnimNode_TransitionResult : FAnimNode_Base
---@field bCanEnterTransition boolean
FAnimNode_TransitionResult = {}



---@class FAnimNode_UseCachedPose : FAnimNode_Base
---@field LinkToCachingNode FPoseLink
---@field CachePoseName FName
FAnimNode_UseCachedPose = {}



---@class FAnimNotifyArray
---@field Notifies TArray<FAnimNotifyEventReference>
FAnimNotifyArray = {}



---@class FAnimNotifyEvent : FAnimLinkableElement
---@field DisplayTime float
---@field TriggerTimeOffset float
---@field EndTriggerTimeOffset float
---@field TriggerWeightThreshold float
---@field NotifyName FName
---@field Notify UAnimNotify
---@field NotifyStateClass UAnimNotifyState
---@field Duration float
---@field EndLink FAnimLinkableElement
---@field bConvertedFromBranchingPoint boolean
---@field MontageTickType EMontageNotifyTickType::Type
---@field NotifyTriggerChance float
---@field NotifyFilterType ENotifyFilterType::Type
---@field NotifyFilterLOD int32
---@field bTriggerOnDedicatedServer boolean
---@field bTriggerOnFollower boolean
---@field TrackIndex int32
FAnimNotifyEvent = {}



---@class FAnimNotifyEventReference
---@field NotifySource UObject
FAnimNotifyEventReference = {}



---@class FAnimNotifyQueue
---@field AnimNotifies TArray<FAnimNotifyEventReference>
---@field UnfilteredMontageAnimNotifies TMap<FName, FAnimNotifyArray>
FAnimNotifyQueue = {}



---@class FAnimNotifyTrack
---@field TrackName FName
---@field TrackColor FLinearColor
FAnimNotifyTrack = {}



---@class FAnimParentNodeAssetOverride
---@field NewAsset UAnimationAsset
---@field ParentNodeGuid FGuid
FAnimParentNodeAssetOverride = {}



---@class FAnimSegment
---@field AnimReference UAnimSequenceBase
---@field StartPos float
---@field AnimStartTime float
---@field AnimEndTime float
---@field AnimPlayRate float
---@field LoopingCount int32
FAnimSegment = {}



---@class FAnimSequenceTrackContainer
---@field AnimationTracks TArray<FRawAnimSequenceTrack>
---@field TrackNames TArray<FName>
FAnimSequenceTrackContainer = {}



---@class FAnimSetMeshLinkup
---@field BoneToTrackTable TArray<int32>
FAnimSetMeshLinkup = {}



---@class FAnimSingleNodeInstanceProxy : FAnimInstanceProxy
FAnimSingleNodeInstanceProxy = {}


---@class FAnimSlotDesc
---@field SlotName FName
---@field NumChannels int32
FAnimSlotDesc = {}



---@class FAnimSlotGroup
---@field GroupName FName
---@field SlotNames TArray<FName>
FAnimSlotGroup = {}



---@class FAnimSlotInfo
---@field SlotName FName
---@field ChannelWeights TArray<float>
FAnimSlotInfo = {}



---@class FAnimSyncMarker
---@field MarkerName FName
---@field Time float
FAnimSyncMarker = {}



---@class FAnimTickRecord
---@field SourceAsset UAnimationAsset
FAnimTickRecord = {}



---@class FAnimTrack
---@field AnimSegments TArray<FAnimSegment>
FAnimTrack = {}



---@class FAnimUpdateRateParameters
---@field ShiftBucket EUpdateRateShiftBucket
---@field bInterpolateSkippedFrames boolean
---@field bShouldUseLodMap boolean
---@field bShouldUseMinLod boolean
---@field bSkipUpdate boolean
---@field bSkipEvaluation boolean
---@field UpdateRate int32
---@field EvaluationRate int32
---@field TickedPoseOffestTime float
---@field AdditionalTime float
---@field BaseNonRenderedUpdateRate int32
---@field MaxEvalRateForInterpolation int32
---@field BaseVisibleDistanceFactorThesholds TArray<float>
---@field LODToFrameSkipMap TMap<int32, int32>
---@field SkippedUpdateFrames int32
---@field SkippedEvalFrames int32
FAnimUpdateRateParameters = {}



---@class FAnimationActiveTransitionEntry
---@field BlendProfile UBlendProfile
FAnimationActiveTransitionEntry = {}



---@class FAnimationErrorStats
FAnimationErrorStats = {}


---@class FAnimationFrameSnapshot
FAnimationFrameSnapshot = {}


---@class FAnimationGroupReference
---@field GroupName FName
---@field GroupRole EAnimGroupRole::Type
FAnimationGroupReference = {}



---@class FAnimationPotentialTransition
FAnimationPotentialTransition = {}


---@class FAnimationRecordingSettings
---@field bRecordInWorldSpace boolean
---@field bRemoveRootAnimation boolean
---@field bAutoSaveAsset boolean
---@field SampleRate float
---@field Length float
---@field InterpMode ERichCurveInterpMode
---@field TangentMode ERichCurveTangentMode
FAnimationRecordingSettings = {}



---@class FAnimationState : FAnimationStateBase
---@field Transitions TArray<FAnimationTransitionRule>
---@field StateRootNodeIndex int32
---@field StartNotify int32
---@field EndNotify int32
---@field FullyBlendedNotify int32
FAnimationState = {}



---@class FAnimationStateBase
---@field StateName FName
FAnimationStateBase = {}



---@class FAnimationTransitionBetweenStates : FAnimationStateBase
---@field PreviousState int32
---@field NextState int32
---@field CrossfadeDuration float
---@field StartNotify int32
---@field EndNotify int32
---@field InterruptNotify int32
---@field BlendMode EAlphaBlendOption
---@field CustomCurve UCurveFloat
---@field BlendProfile UBlendProfile
---@field LogicType ETransitionLogicType::Type
FAnimationTransitionBetweenStates = {}



---@class FAnimationTransitionRule
---@field RuleToExecute FName
---@field TransitionReturnVal boolean
---@field TransitionIndex int32
FAnimationTransitionRule = {}



---@class FAssetEditorOrbitCameraPosition
---@field bIsSet boolean
---@field CamOrbitPoint FVector
---@field CamOrbitZoom FVector
---@field CamOrbitRotation FRotator
FAssetEditorOrbitCameraPosition = {}



---@class FAssetImportInfo
FAssetImportInfo = {}


---@class FAssetManagerRedirect
---@field Old FString
---@field New FString
FAssetManagerRedirect = {}



---@class FAssetMapping
---@field SourceAsset UAnimationAsset
---@field TargetAsset UAnimationAsset
FAssetMapping = {}



---@class FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData
FAtmospherePrecomputeInstanceData = {}


---@class FAtmospherePrecomputeParameters
---@field DensityHeight float
---@field DecayHeight float
---@field MaxScatteringOrder int32
---@field TransmittanceTexWidth int32
---@field TransmittanceTexHeight int32
---@field IrradianceTexWidth int32
---@field IrradianceTexHeight int32
---@field InscatterAltitudeSampleNum int32
---@field InscatterMuNum int32
---@field InscatterMuSNum int32
---@field InscatterNuNum int32
FAtmospherePrecomputeParameters = {}



---@class FAttenuationSubmixSendSettings
---@field Submix USoundSubmix
---@field SubmixSendMethod ESubmixSendMethod
---@field SubmixSendLevelMin float
---@field SubmixSendLevelMax float
---@field SubmixSendDistanceMin float
---@field SubmixSendDistanceMax float
---@field ManualSubmixSendLevel float
---@field CustomSubmixSendCurve FRuntimeFloatCurve
FAttenuationSubmixSendSettings = {}



---@class FAudioComponentParam
---@field ParamName FName
---@field FloatParam float
---@field BoolParam boolean
---@field IntParam int32
---@field SoundWaveParam USoundWave
FAudioComponentParam = {}



---@class FAudioEQEffect : FAudioEffectParameters
---@field FrequencyCenter0 float
---@field Gain0 float
---@field Bandwidth0 float
---@field FrequencyCenter1 float
---@field Gain1 float
---@field Bandwidth1 float
---@field FrequencyCenter2 float
---@field Gain2 float
---@field Bandwidth2 float
---@field FrequencyCenter3 float
---@field Gain3 float
---@field Bandwidth3 float
FAudioEQEffect = {}



---@class FAudioEffectParameters
FAudioEffectParameters = {}


---@class FAudioQualitySettings
---@field DisplayName FText
---@field MaxChannels int32
FAudioQualitySettings = {}



---@class FAudioReverbEffect : FAudioEffectParameters
FAudioReverbEffect = {}


---@class FAutoCompleteNode
---@field IndexChar int32
---@field AutoCompleteListIndices TArray<int32>
FAutoCompleteNode = {}



---@class FBPComponentClassOverride
---@field ComponentName FName
---@field ComponentClass UClass
FBPComponentClassOverride = {}



---@class FBPEditorBookmarkNode
---@field NodeGuid FGuid
---@field ParentGuid FGuid
---@field DisplayName FText
FBPEditorBookmarkNode = {}



---@class FBPInterfaceDescription
---@field Interface TSubclassOf<UInterface>
---@field Graphs TArray<UEdGraph>
FBPInterfaceDescription = {}



---@class FBPVariableDescription
---@field VarName FName
---@field VarGuid FGuid
---@field VarType FEdGraphPinType
---@field FriendlyName FString
---@field Category FText
---@field PropertyFlags uint64
---@field RepNotifyFunc FName
---@field ReplicationCondition ELifetimeCondition
---@field MetaDataArray TArray<FBPVariableMetaDataEntry>
---@field DefaultValue FString
FBPVariableDescription = {}



---@class FBPVariableMetaDataEntry
---@field DataKey FName
---@field DataValue FString
FBPVariableMetaDataEntry = {}



---@class FBakedAnimationState
---@field StateName FName
---@field Transitions TArray<FBakedStateExitTransition>
---@field StateRootNodeIndex int32
---@field StartNotify int32
---@field EndNotify int32
---@field FullyBlendedNotify int32
---@field bIsAConduit boolean
---@field EntryRuleNodeIndex int32
---@field PlayerNodeIndices TArray<int32>
---@field LayerNodeIndices TArray<int32>
---@field bAlwaysResetOnEntry boolean
FBakedAnimationState = {}



---@class FBakedAnimationStateMachine
---@field MachineName FName
---@field InitialState int32
---@field States TArray<FBakedAnimationState>
---@field Transitions TArray<FAnimationTransitionBetweenStates>
FBakedAnimationStateMachine = {}



---@class FBakedStateExitTransition
---@field CanTakeDelegateIndex int32
---@field CustomResultNodeIndex int32
---@field TransitionIndex int32
---@field bDesiredTransitionReturnValue boolean
---@field bAutomaticRemainingTimeRule boolean
---@field PoseEvaluatorLinks TArray<int32>
FBakedStateExitTransition = {}



---@class FBandwidthTestGenerator
---@field ReplicatedBuffers TArray<FBandwidthTestItem>
FBandwidthTestGenerator = {}



---@class FBandwidthTestItem
---@field Kilobyte TArray<uint8>
FBandwidthTestItem = {}



---@class FBaseAttenuationSettings
---@field DistanceAlgorithm EAttenuationDistanceModel
---@field AttenuationShape EAttenuationShape::Type
---@field dBAttenuationAtMax float
---@field FalloffMode ENaturalSoundFalloffMode
---@field AttenuationShapeExtents FVector
---@field ConeOffset float
---@field FalloffDistance float
---@field CustomAttenuationCurve FRuntimeFloatCurve
FBaseAttenuationSettings = {}



---@class FBasedMovementInfo
---@field MovementBase UPrimitiveComponent
---@field BoneName FName
---@field Location FVector_NetQuantize100
---@field Rotation FRotator
---@field bServerHasBaseComponent boolean
---@field bRelativeRotation boolean
---@field bServerHasVelocity boolean
FBasedMovementInfo = {}



---@class FBasedPosition
---@field Base AActor
---@field Position FVector
---@field CachedBaseLocation FVector
---@field CachedBaseRotation FRotator
---@field CachedTransPosition FVector
FBasedPosition = {}



---@class FBatchedLine
---@field Start FVector
---@field End FVector
---@field Color FLinearColor
---@field Thickness float
---@field RemainingLifeTime float
---@field DepthPriority uint8
FBatchedLine = {}



---@class FBatchedPoint
---@field Position FVector
---@field Color FLinearColor
---@field PointSize float
---@field RemainingLifeTime float
---@field DepthPriority uint8
FBatchedPoint = {}



---@class FBeamModifierOptions
---@field bModify boolean
---@field bScale boolean
---@field bLock boolean
FBeamModifierOptions = {}



---@class FBeamTargetData
---@field TargetName FName
---@field TargetPercentage float
FBeamTargetData = {}



---@class FBlendFilter
FBlendFilter = {}


---@class FBlendParameter
---@field DisplayName FString
---@field Min float
---@field Max float
---@field GridNum int32
FBlendParameter = {}



---@class FBlendProfileBoneEntry
---@field BoneReference FBoneReference
---@field BlendScale float
FBlendProfileBoneEntry = {}



---@class FBlendSample
---@field Animation UAnimSequence
---@field SampleValue FVector
---@field RateScale float
FBlendSample = {}



---@class FBlendSampleData
---@field SampleDataIndex int32
---@field Animation UAnimSequence
---@field TotalWeight float
---@field Time float
---@field PreviousTime float
---@field SamplePlayRate float
FBlendSampleData = {}



---@class FBlueprintComponentChangedPropertyInfo
---@field PropertyName FName
---@field ArrayIndex int32
---@field PropertyScope UStruct
FBlueprintComponentChangedPropertyInfo = {}



---@class FBlueprintComponentDelegateBinding
---@field ComponentPropertyName FName
---@field DelegatePropertyName FName
---@field FunctionNameToBind FName
FBlueprintComponentDelegateBinding = {}



---@class FBlueprintCookedComponentInstancingData
---@field ChangedPropertyList TArray<FBlueprintComponentChangedPropertyInfo>
---@field bHasValidCookedData boolean
FBlueprintCookedComponentInstancingData = {}



---@class FBlueprintDebugData
FBlueprintDebugData = {}


---@class FBlueprintEditorPromotionSettings
---@field FirstMeshPath FFilePath
---@field SecondMeshPath FFilePath
---@field DefaultParticleAsset FFilePath
FBlueprintEditorPromotionSettings = {}



---@class FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding
---@field InputActionName FName
---@field InputKeyEvent EInputEvent
---@field FunctionNameToBind FName
FBlueprintInputActionDelegateBinding = {}



---@class FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding
---@field InputAxisName FName
---@field FunctionNameToBind FName
FBlueprintInputAxisDelegateBinding = {}



---@class FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding
---@field AxisKey FKey
---@field FunctionNameToBind FName
FBlueprintInputAxisKeyDelegateBinding = {}



---@class FBlueprintInputDelegateBinding
---@field bConsumeInput boolean
---@field bExecuteWhenPaused boolean
---@field bOverrideParentBinding boolean
FBlueprintInputDelegateBinding = {}



---@class FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding
---@field InputChord FInputChord
---@field InputKeyEvent EInputEvent
---@field FunctionNameToBind FName
FBlueprintInputKeyDelegateBinding = {}



---@class FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding
---@field InputKeyEvent EInputEvent
---@field FunctionNameToBind FName
FBlueprintInputTouchDelegateBinding = {}



---@class FBlueprintMacroCosmeticInfo
FBlueprintMacroCosmeticInfo = {}


---@class FBodyInstance
---@field ObjectType ECollisionChannel
---@field CollisionEnabled ECollisionEnabled::Type
---@field SleepFamily ESleepFamily
---@field DOFMode EDOFMode::Type
---@field bUseCCD boolean
---@field bIgnoreAnalyticCollisions boolean
---@field bNotifyRigidBodyCollision boolean
---@field bSimulatePhysics boolean
---@field bOverrideMass boolean
---@field bEnableGravity boolean
---@field bAutoWeld boolean
---@field bStartAwake boolean
---@field bGenerateWakeEvents boolean
---@field bUpdateMassWhenScaleChanges boolean
---@field bLockTranslation boolean
---@field bLockRotation boolean
---@field bLockXTranslation boolean
---@field bLockYTranslation boolean
---@field bLockZTranslation boolean
---@field bLockXRotation boolean
---@field bLockYRotation boolean
---@field bLockZRotation boolean
---@field bOverrideMaxAngularVelocity boolean
---@field bOverrideMaxDepenetrationVelocity boolean
---@field bOverrideWalkableSlopeOnInstance boolean
---@field bInterpolateWhenSubStepping boolean
---@field CollisionProfileName FName
---@field PositionSolverIterationCount uint8
---@field VelocitySolverIterationCount uint8
---@field CollisionResponses FCollisionResponse
---@field MaxDepenetrationVelocity float
---@field MassInKgOverride float
---@field LinearDamping float
---@field AngularDamping float
---@field CustomDOFPlaneNormal FVector
---@field COMNudge FVector
---@field MassScale float
---@field InertiaTensorScale FVector
---@field WalkableSlopeOverride FWalkableSlopeOverride
---@field PhysMaterialOverride UPhysicalMaterial
---@field MaxAngularVelocity float
---@field CustomSleepThresholdMultiplier float
---@field StabilizationThresholdMultiplier float
---@field PhysicsBlendWeight float
FBodyInstance = {}



---@class FBoneFilter
---@field bExcludeSelf boolean
---@field BoneName FName
FBoneFilter = {}



---@class FBoneMirrorExport
---@field BoneName FName
---@field SourceBoneName FName
---@field BoneFlipAxis EAxis::Type
FBoneMirrorExport = {}



---@class FBoneMirrorInfo
---@field SourceIndex int32
---@field BoneFlipAxis EAxis::Type
FBoneMirrorInfo = {}



---@class FBoneNode
---@field Name FName
---@field ParentIndex int32
---@field TranslationRetargetingMode EBoneTranslationRetargetingMode::Type
FBoneNode = {}



---@class FBoneReductionSetting
---@field BonesToRemove TArray<FName>
FBoneReductionSetting = {}



---@class FBoneReference
---@field BoneName FName
FBoneReference = {}



---@class FBookmark2DJumpToSettings
FBookmark2DJumpToSettings = {}


---@class FBookmarkBaseJumpToSettings
FBookmarkBaseJumpToSettings = {}


---@class FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings
FBookmarkJumpToSettings = {}


---@class FBoolTrackKey
---@field Time float
---@field Value boolean
FBoolTrackKey = {}



---@class FBranchFilter
---@field BoneName FName
---@field BlendDepth int32
FBranchFilter = {}



---@class FBranchingPoint : FAnimLinkableElement
---@field EventName FName
---@field DisplayTime float
---@field TriggerTimeOffset float
FBranchingPoint = {}



---@class FBranchingPointMarker
---@field NotifyIndex int32
---@field TriggerTime float
---@field NotifyEventType EAnimNotifyEventType::Type
FBranchingPointMarker = {}



---@class FBranchingPointNotifyPayload
FBranchingPointNotifyPayload = {}


---@class FBroadphaseSettings
---@field bUseMBPOnClient boolean
---@field bUseMBPOnServer boolean
---@field bUseMBPOuterBounds boolean
---@field MBPBounds FBox
---@field MBPOuterBounds FBox
---@field MBPNumSubdivs uint32
FBroadphaseSettings = {}



---@class FBuildPromotionImportWorkflowSettings
---@field Diffuse FEditorImportWorkflowDefinition
---@field Normal FEditorImportWorkflowDefinition
---@field StaticMesh FEditorImportWorkflowDefinition
---@field ReimportStaticMesh FEditorImportWorkflowDefinition
---@field BlendShapeMesh FEditorImportWorkflowDefinition
---@field MorphMesh FEditorImportWorkflowDefinition
---@field SkeletalMesh FEditorImportWorkflowDefinition
---@field Animation FEditorImportWorkflowDefinition
---@field Sound FEditorImportWorkflowDefinition
---@field SurroundSound FEditorImportWorkflowDefinition
---@field OtherAssetsToImport TArray<FEditorImportWorkflowDefinition>
FBuildPromotionImportWorkflowSettings = {}



---@class FBuildPromotionNewProjectSettings
---@field NewProjectFolderOverride FDirectoryPath
---@field NewProjectNameOverride FString
FBuildPromotionNewProjectSettings = {}



---@class FBuildPromotionOpenAssetSettings
---@field BlueprintAsset FFilePath
---@field MaterialAsset FFilePath
---@field ParticleSystemAsset FFilePath
---@field SkeletalMeshAsset FFilePath
---@field StaticMeshAsset FFilePath
---@field TextureAsset FFilePath
FBuildPromotionOpenAssetSettings = {}



---@class FBuildPromotionTestSettings
---@field DefaultStaticMeshAsset FFilePath
---@field ImportWorkflow FBuildPromotionImportWorkflowSettings
---@field OpenAssets FBuildPromotionOpenAssetSettings
---@field NewProjectSettings FBuildPromotionNewProjectSettings
---@field SourceControlMaterial FFilePath
FBuildPromotionTestSettings = {}



---@class FBuilderPoly
---@field VertexIndices TArray<int32>
---@field Direction int32
---@field ItemName FName
---@field PolyFlags int32
FBuilderPoly = {}



---@class FCachedAnimAssetPlayerData
---@field StateMachineName FName
---@field StateName FName
FCachedAnimAssetPlayerData = {}



---@class FCachedAnimRelevancyData
---@field StateMachineName FName
---@field StateName FName
FCachedAnimRelevancyData = {}



---@class FCachedAnimStateArray
---@field States TArray<FCachedAnimStateData>
FCachedAnimStateArray = {}



---@class FCachedAnimStateData
---@field StateMachineName FName
---@field StateName FName
FCachedAnimStateData = {}



---@class FCachedAnimTransitionData
---@field StateMachineName FName
---@field FromStateName FName
---@field ToStateName FName
FCachedAnimTransitionData = {}



---@class FCachedKeyToActionInfo
---@field PlayerInput UPlayerInput
FCachedKeyToActionInfo = {}



---@class FCachedPoseIndices
---@field OrderedSavedPoseNodeIndices TArray<int32>
FCachedPoseIndices = {}



---@class FCameraCacheEntry
---@field Timestamp float
---@field POV FMinimalViewInfo
FCameraCacheEntry = {}



---@class FCameraCutInfo
---@field Location FVector
---@field Timestamp float
FCameraCutInfo = {}



---@class FCameraExposureSettings
---@field Method EAutoExposureMethod
---@field LowPercent float
---@field HighPercent float
---@field MinBrightness float
---@field MaxBrightness float
---@field SpeedUp float
---@field SpeedDown float
---@field Bias float
---@field BiasCurve UCurveFloat
---@field MeterMask UTexture
---@field HistogramLogMin float
---@field HistogramLogMax float
---@field CalibrationConstant float
---@field ApplyPhysicalCameraExposure boolean
FCameraExposureSettings = {}



---@class FCameraPreviewInfo
---@field PawnClass TSubclassOf<APawn>
---@field AnimSeq UAnimSequence
---@field Location FVector
---@field Rotation FRotator
---@field PawnInst APawn
FCameraPreviewInfo = {}



---@class FCanvasIcon
---@field Texture UTexture
---@field U float
---@field V float
---@field UL float
---@field VL float
FCanvasIcon = {}



---@class FCanvasUVTri
---@field V0_Pos FVector2D
---@field V0_UV FVector2D
---@field V0_Color FLinearColor
---@field V1_Pos FVector2D
---@field V1_UV FVector2D
---@field V1_Color FLinearColor
---@field V2_Pos FVector2D
---@field V2_UV FVector2D
---@field V2_Color FLinearColor
FCanvasUVTri = {}



---@class FChannelDefinition
---@field ChannelName FName
---@field ClassName FName
---@field ChannelClass UClass
---@field StaticChannelIndex int32
---@field bTickOnCreate boolean
---@field bServerOpen boolean
---@field bClientOpen boolean
---@field bInitialServer boolean
---@field bInitialClient boolean
FChannelDefinition = {}



---@class FChaosPhysicsSettings
---@field DefaultThreadingModel EChaosThreadingMode
---@field DedicatedThreadTickMode EChaosSolverTickMode
---@field DedicatedThreadBufferMode EChaosBufferMode
FChaosPhysicsSettings = {}



---@class FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction
FCharacterMovementComponentPostPhysicsTickFunction = {}


---@class FChildActorAttachedActorInfo
---@field Actor TWeakObjectPtr<AActor>
---@field SocketName FName
---@field RelativeTransform FTransform
FChildActorAttachedActorInfo = {}



---@class FChildActorComponentInstanceData : FSceneComponentInstanceData
---@field ChildActorClass TSubclassOf<AActor>
---@field ChildActorName FName
---@field AttachedActors TArray<FChildActorAttachedActorInfo>
FChildActorComponentInstanceData = {}



---@class FClassRedirect
---@field ObjectName FName
---@field OldClassName FName
---@field NewClassName FName
---@field OldSubobjName FName
---@field NewSubobjName FName
---@field NewClassClass FName
---@field NewClassPackage FName
---@field InstanceOnly boolean
FClassRedirect = {}



---@class FClientReceiveData
---@field LocalPC APlayerController
---@field MessageType FName
---@field MessageIndex int32
---@field MessageString FString
---@field RelatedPlayerState_1 APlayerState
---@field RelatedPlayerState_2 APlayerState
---@field OptionalObject UObject
FClientReceiveData = {}



---@class FClothPhysicsProperties_Legacy
---@field VerticalResistance float
---@field HorizontalResistance float
---@field BendResistance float
---@field ShearResistance float
---@field Friction float
---@field Damping float
---@field TetherStiffness float
---@field TetherLimit float
---@field Drag float
---@field StiffnessFrequency float
---@field GravityScale float
---@field MassScale float
---@field InertiaBlend float
---@field SelfCollisionThickness float
---@field SelfCollisionSquashScale float
---@field SelfCollisionStiffness float
---@field SolverFrequency float
---@field FiberCompression float
---@field FiberExpansion float
---@field FiberResistance float
FClothPhysicsProperties_Legacy = {}



---@class FClothingAssetData_Legacy
---@field AssetName FName
---@field ApexFileName FString
---@field bClothPropertiesChanged boolean
---@field PhysicsProperties FClothPhysicsProperties_Legacy
FClothingAssetData_Legacy = {}



---@class FClusterNode
---@field BoundMin FVector
---@field FirstChild int32
---@field BoundMax FVector
---@field LastChild int32
---@field FirstInstance int32
---@field LastInstance int32
---@field MinInstanceScale FVector
---@field MaxInstanceScale FVector
FClusterNode = {}



---@class FClusterNode_DEPRECATED
---@field BoundMin FVector
---@field FirstChild int32
---@field BoundMax FVector
---@field LastChild int32
---@field FirstInstance int32
---@field LastInstance int32
FClusterNode_DEPRECATED = {}



---@class FCollectionParameterBase
---@field ParameterName FName
---@field ID FGuid
FCollectionParameterBase = {}



---@class FCollectionReference
---@field CollectionName FName
FCollectionReference = {}



---@class FCollectionScalarParameter : FCollectionParameterBase
---@field DefaultValue float
FCollectionScalarParameter = {}



---@class FCollectionVectorParameter : FCollectionParameterBase
---@field DefaultValue FLinearColor
FCollectionVectorParameter = {}



---@class FCollisionImpactData
---@field ContactInfos TArray<FRigidBodyContactInfo>
---@field TotalNormalImpulse FVector
---@field TotalFrictionImpulse FVector
FCollisionImpactData = {}



---@class FCollisionProfileName
---@field Name FName
FCollisionProfileName = {}



---@class FCollisionResponse
---@field ResponseToChannels FCollisionResponseContainer
---@field ResponseArray TArray<FResponseChannel>
FCollisionResponse = {}



---@class FCollisionResponseContainer
---@field WorldStatic ECollisionResponse
---@field WorldDynamic ECollisionResponse
---@field Pawn ECollisionResponse
---@field Visibility ECollisionResponse
---@field Camera ECollisionResponse
---@field PhysicsBody ECollisionResponse
---@field Vehicle ECollisionResponse
---@field Destructible ECollisionResponse
---@field EngineTraceChannel1 ECollisionResponse
---@field EngineTraceChannel2 ECollisionResponse
---@field EngineTraceChannel3 ECollisionResponse
---@field EngineTraceChannel4 ECollisionResponse
---@field EngineTraceChannel5 ECollisionResponse
---@field EngineTraceChannel6 ECollisionResponse
---@field GameTraceChannel1 ECollisionResponse
---@field GameTraceChannel2 ECollisionResponse
---@field GameTraceChannel3 ECollisionResponse
---@field GameTraceChannel4 ECollisionResponse
---@field GameTraceChannel5 ECollisionResponse
---@field GameTraceChannel6 ECollisionResponse
---@field GameTraceChannel7 ECollisionResponse
---@field GameTraceChannel8 ECollisionResponse
---@field GameTraceChannel9 ECollisionResponse
---@field GameTraceChannel10 ECollisionResponse
---@field GameTraceChannel11 ECollisionResponse
---@field GameTraceChannel12 ECollisionResponse
---@field GameTraceChannel13 ECollisionResponse
---@field GameTraceChannel14 ECollisionResponse
---@field GameTraceChannel15 ECollisionResponse
---@field GameTraceChannel16 ECollisionResponse
---@field GameTraceChannel17 ECollisionResponse
---@field GameTraceChannel18 ECollisionResponse
FCollisionResponseContainer = {}



---@class FCollisionResponseTemplate
---@field Name FName
---@field CollisionEnabled ECollisionEnabled::Type
---@field bCanModify boolean
---@field ObjectTypeName FName
---@field CustomResponses TArray<FResponseChannel>
FCollisionResponseTemplate = {}



---@class FColorGradePerRangeSettings
---@field Saturation FVector4
---@field Contrast FVector4
---@field Gamma FVector4
---@field Gain FVector4
---@field Offset FVector4
FColorGradePerRangeSettings = {}



---@class FColorGradingSettings
---@field Global FColorGradePerRangeSettings
---@field Shadows FColorGradePerRangeSettings
---@field Midtones FColorGradePerRangeSettings
---@field Highlights FColorGradePerRangeSettings
---@field ShadowsMax float
---@field HighlightsMin float
FColorGradingSettings = {}



---@class FColorMaterialInput : FMaterialInput
FColorMaterialInput = {}


---@class FCompilerNativizationOptions
---@field PlatformName FName
---@field ServerOnlyPlatform boolean
---@field ClientOnlyPlatform boolean
---@field bExcludeMonolithicHeaders boolean
---@field ExcludedModules TArray<FName>
---@field ExcludedAssets TSet<FSoftObjectPath>
---@field ExcludedFolderPaths TArray<FString>
FCompilerNativizationOptions = {}



---@class FComponentKey
---@field OwnerClass UClass
---@field SCSVariableName FName
---@field AssociatedGuid FGuid
FComponentKey = {}



---@class FComponentOverrideRecord
---@field ComponentClass UClass
---@field ComponentTemplate UActorComponent
---@field ComponentKey FComponentKey
---@field CookedComponentInstancingData FBlueprintCookedComponentInstancingData
FComponentOverrideRecord = {}



---@class FComponentReference
---@field OtherActor AActor
---@field ComponentProperty FName
---@field PathToComponent FString
FComponentReference = {}



---@class FComponentSpacePose
---@field Transforms TArray<FTransform>
---@field Names TArray<FName>
FComponentSpacePose = {}



---@class FComponentSpacePoseLink : FPoseLinkBase
FComponentSpacePoseLink = {}


---@class FCompositeSection : FAnimLinkableElement
---@field SectionName FName
---@field StartTime float
---@field NextSectionName FName
---@field MetaData TArray<UAnimMetaData>
FCompositeSection = {}



---@class FCompressedRichCurve
FCompressedRichCurve = {}


---@class FCompressedTrack
---@field ByteStream TArray<uint8>
---@field Times TArray<float>
---@field Mins float
---@field Ranges float
FCompressedTrack = {}



---@class FConeConstraint : FConstraintBaseParams
---@field Swing1LimitDegrees float
---@field Swing2LimitDegrees float
---@field Swing1Motion EAngularConstraintMotion
---@field Swing2Motion EAngularConstraintMotion
FConeConstraint = {}



---@class FConstrainComponentPropName
---@field ComponentName FName
FConstrainComponentPropName = {}



---@class FConstraintBaseParams
---@field Stiffness float
---@field Damping float
---@field Restitution float
---@field ContactDistance float
---@field bSoftConstraint boolean
FConstraintBaseParams = {}



---@class FConstraintDrive
---@field Stiffness float
---@field Damping float
---@field MaxForce float
---@field bEnablePositionDrive boolean
---@field bEnableVelocityDrive boolean
FConstraintDrive = {}



---@class FConstraintInstance
---@field JointName FName
---@field ConstraintBone1 FName
---@field ConstraintBone2 FName
---@field Pos1 FVector
---@field PriAxis1 FVector
---@field SecAxis1 FVector
---@field Pos2 FVector
---@field PriAxis2 FVector
---@field SecAxis2 FVector
---@field AngularRotationOffset FRotator
---@field bScaleLinearLimits boolean
---@field ProfileInstance FConstraintProfileProperties
FConstraintInstance = {}



---@class FConstraintProfileProperties
---@field ProjectionLinearTolerance float
---@field ProjectionAngularTolerance float
---@field LinearBreakThreshold float
---@field AngularBreakThreshold float
---@field LinearLimit FLinearConstraint
---@field ConeLimit FConeConstraint
---@field TwistLimit FTwistConstraint
---@field LinearDrive FLinearDriveConstraint
---@field AngularDrive FAngularDriveConstraint
---@field bDisableCollision boolean
---@field bParentDominates boolean
---@field bEnableProjection boolean
---@field bAngularBreakable boolean
---@field bLinearBreakable boolean
FConstraintProfileProperties = {}



---@class FConvolutionBloomSettings
---@field Texture UTexture2D
---@field Size float
---@field CenterUV FVector2D
---@field PreFilterMin float
---@field PreFilterMax float
---@field PreFilterMult float
---@field BufferScale float
FConvolutionBloomSettings = {}



---@class FCullDistanceSizePair
---@field Size float
---@field CullDistance float
FCullDistanceSizePair = {}



---@class FCurveEdEntry
---@field CurveObject UObject
---@field CurveColor FColor
---@field CurveName FString
---@field bHideCurve int32
---@field bColorCurve int32
---@field bFloatingPointColorCurve int32
---@field bClamp int32
---@field ClampLow float
---@field ClampHigh float
FCurveEdEntry = {}



---@class FCurveEdTab
---@field TabName FString
---@field Curves TArray<FCurveEdEntry>
---@field ViewStartInput float
---@field ViewEndInput float
---@field ViewStartOutput float
---@field ViewEndOutput float
FCurveEdTab = {}



---@class FCurveMetaData
FCurveMetaData = {}


---@class FCurveTableRowHandle
---@field CurveTable UCurveTable
---@field RowName FName
FCurveTableRowHandle = {}



---@class FCurveTrack
---@field CurveName FName
---@field CurveWeights TArray<float>
FCurveTrack = {}



---@class FCustomChannelSetup
---@field Channel ECollisionChannel
---@field DefaultResponse ECollisionResponse
---@field bTraceType boolean
---@field bStaticObject boolean
---@field Name FName
FCustomChannelSetup = {}



---@class FCustomDefine
---@field DefineName FString
---@field DefineValue FString
FCustomDefine = {}



---@class FCustomInput
---@field InputName FName
---@field Input FExpressionInput
FCustomInput = {}



---@class FCustomPrimitiveData
---@field Data TArray<float>
FCustomPrimitiveData = {}



---@class FCustomProfile
---@field Name FName
---@field CustomResponses TArray<FResponseChannel>
FCustomProfile = {}



---@class FDamageEvent
---@field DamageTypeClass TSubclassOf<UDamageType>
FDamageEvent = {}



---@class FDataTableCategoryHandle
---@field DataTable UDataTable
---@field ColumnName FName
---@field RowContents FName
FDataTableCategoryHandle = {}



---@class FDataTableRowHandle
---@field DataTable UDataTable
---@field RowName FName
FDataTableRowHandle = {}



---@class FDebugCameraControllerSettingsViewModeIndex
---@field ViewModeIndex EViewModeIndex
FDebugCameraControllerSettingsViewModeIndex = {}



---@class FDebugDisplayProperty
---@field Obj UObject
---@field WithinClass UClass
FDebugDisplayProperty = {}



---@class FDebugFloatHistory
---@field Samples TArray<float>
---@field MaxSamples float
---@field MinValue float
---@field MaxValue float
---@field bAutoAdjustMinMax boolean
FDebugFloatHistory = {}



---@class FDebugTextInfo
---@field SrcActor AActor
---@field SrcActorOffset FVector
---@field SrcActorDesiredOffset FVector
---@field DebugText FString
---@field TimeRemaining float
---@field Duration float
---@field TextColor FColor
---@field bAbsoluteLocation boolean
---@field bKeepAttachedToActor boolean
---@field bDrawShadow boolean
---@field OrigActorLocation FVector
---@field Font UFont
---@field FontScale float
FDebugTextInfo = {}



---@class FDebuggingInfoForSingleFunction
FDebuggingInfoForSingleFunction = {}


---@class FDefault__UserDefinedStruct
FDefault__UserDefinedStruct = {}


---@class FDelegateArray
---@field Delegates TArray<FDelegateArrayDelegates>
FDelegateArray = {}



---@class FDepthFieldGlowInfo
---@field bEnableGlow boolean
---@field GlowColor FLinearColor
---@field GlowOuterRadius FVector2D
---@field GlowInnerRadius FVector2D
FDepthFieldGlowInfo = {}



---@class FDialogueContext
---@field Speaker UDialogueVoice
---@field Targets TArray<UDialogueVoice>
FDialogueContext = {}



---@class FDialogueContextMapping
---@field Context FDialogueContext
---@field SoundWave USoundWave
---@field LocalizationKeyFormat FString
---@field Proxy UDialogueSoundWaveProxy
FDialogueContextMapping = {}



---@class FDialogueWaveParameter
---@field DialogueWave UDialogueWave
---@field Context FDialogueContext
FDialogueWaveParameter = {}



---@class FDirectorTrackCut
---@field Time float
---@field TransitionTime float
---@field TargetCamGroup FName
---@field ShotNumber int32
FDirectorTrackCut = {}



---@class FDirectoryPath
---@field Path FString
FDirectoryPath = {}



---@class FDistanceDatum
---@field FadeInDistanceStart float
---@field FadeInDistanceEnd float
---@field FadeOutDistanceStart float
---@field FadeOutDistanceEnd float
---@field Volume float
FDistanceDatum = {}



---@class FDistributionLookupTable
---@field TimeScale float
---@field TimeBias float
---@field Values TArray<float>
---@field Op uint8
---@field EntryCount uint8
---@field EntryStride uint8
---@field SubEntryStride uint8
---@field LockFlag uint8
FDistributionLookupTable = {}



---@class FDrawToRenderTargetContext
---@field RenderTarget UTextureRenderTarget2D
FDrawToRenderTargetContext = {}



---@class FDropNoteInfo
---@field Location FVector
---@field Rotation FRotator
---@field Comment FString
FDropNoteInfo = {}



---@class FDummySpacerCameraTypes
FDummySpacerCameraTypes = {}


---@class FDynamicTextureInstance : FStreamableTextureInstance
---@field Texture UTexture2D
---@field bAttached boolean
---@field OriginalRadius float
FDynamicTextureInstance = {}



---@class FEdGraphPinReference
---@field OwningNode TWeakObjectPtr<UEdGraphNode>
---@field PinID FGuid
FEdGraphPinReference = {}



---@class FEdGraphPinType
---@field PinCategory FName
---@field PinSubCategory FName
---@field PinSubCategoryObject TWeakObjectPtr<UObject>
---@field PinSubCategoryMemberReference FSimpleMemberReference
---@field PinValueType FEdGraphTerminalType
---@field ContainerType EPinContainerType
---@field bIsArray boolean
---@field bIsReference boolean
---@field bIsConst boolean
---@field bIsWeakPointer boolean
FEdGraphPinType = {}



---@class FEdGraphSchemaAction
---@field MenuDescription FText
---@field TooltipDescription FText
---@field Category FText
---@field Keywords FText
---@field Grouping int32
---@field SectionID int32
---@field MenuDescriptionArray TArray<FString>
---@field FullSearchTitlesArray TArray<FString>
---@field FullSearchKeywordsArray TArray<FString>
---@field FullSearchCategoryArray TArray<FString>
---@field LocalizedMenuDescriptionArray TArray<FString>
---@field LocalizedFullSearchTitlesArray TArray<FString>
---@field LocalizedFullSearchKeywordsArray TArray<FString>
---@field LocalizedFullSearchCategoryArray TArray<FString>
---@field SearchText FString
FEdGraphSchemaAction = {}



---@class FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction
---@field NodeTemplate UEdGraphNode
FEdGraphSchemaAction_NewNode = {}



---@class FEdGraphTerminalType
---@field TerminalCategory FName
---@field TerminalSubCategory FName
---@field TerminalSubCategoryObject TWeakObjectPtr<UObject>
---@field bTerminalIsConst boolean
---@field bTerminalIsWeakPointer boolean
FEdGraphTerminalType = {}



---@class FEditedDocumentInfo
---@field EditedObjectPath FSoftObjectPath
---@field SavedViewOffset FVector2D
---@field SavedZoomAmount float
---@field EditedObject UObject
FEditedDocumentInfo = {}



---@class FEditorElement
---@field Indices int32
---@field Weights float
FEditorElement = {}



---@class FEditorImportExportTestDefinition
---@field ImportFilePath FFilePath
---@field ExportFileExtension FString
---@field bSkipExport boolean
---@field FactorySettings TArray<FImportFactorySettingValues>
FEditorImportExportTestDefinition = {}



---@class FEditorImportWorkflowDefinition
---@field ImportFilePath FFilePath
---@field FactorySettings TArray<FImportFactorySettingValues>
FEditorImportWorkflowDefinition = {}



---@class FEditorMapPerformanceTestDefinition
---@field PerformanceTestmap FSoftObjectPath
---@field TestTimer int32
FEditorMapPerformanceTestDefinition = {}



---@class FEmitterDynamicParameter
---@field ParamName FName
---@field bUseEmitterTime boolean
---@field bSpawnTimeOnly boolean
---@field ValueMethod EEmitterDynamicParameterValue
---@field bScaleVelocityByParamValue boolean
---@field ParamValue FRawDistributionFloat
FEmitterDynamicParameter = {}



---@class FEndPhysicsTickFunction : FTickFunction
FEndPhysicsTickFunction = {}


---@class FEngineShowFlagsSetting
---@field ShowFlagName FString
---@field Enabled boolean
FEngineShowFlagsSetting = {}



---@class FEquirectProps
---@field LeftUVRect FBox2D
---@field RightUVRect FBox2D
---@field LeftScale FVector2D
---@field RightScale FVector2D
---@field LeftBias FVector2D
---@field RightBias FVector2D
FEquirectProps = {}



---@class FEventGraphFastCallPair
---@field FunctionToPatch UFunction
---@field EventGraphCallOffset int32
FEventGraphFastCallPair = {}



---@class FEventTrackKey
---@field Time float
---@field EventName FName
FEventTrackKey = {}



---@class FExponentialHeightFogData
---@field FogDensity float
---@field FogHeightFalloff float
---@field FogHeightOffset float
FExponentialHeightFogData = {}



---@class FExposedValueCopyRecord
---@field SourcePropertyName FName
---@field SourceSubPropertyName FName
---@field SourceArrayIndex int32
---@field bInstanceIsTarget boolean
---@field PostCopyOperation EPostCopyOperation
---@field CopyType ECopyType
---@field DestProperty TFieldPath<FProperty>
---@field DestArrayIndex int32
---@field Size int32
---@field CachedSourceProperty TFieldPath<FProperty>
---@field CachedSourceStructSubProperty TFieldPath<FProperty>
FExposedValueCopyRecord = {}



---@class FExposedValueHandler
---@field BoundFunction FName
---@field CopyRecords TArray<FExposedValueCopyRecord>
---@field Function UFunction
---@field ValueHandlerNodeProperty TFieldPath<FStructProperty>
FExposedValueHandler = {}



---@class FExposureSettings
---@field FixedEV100 float
---@field bFixed boolean
FExposureSettings = {}



---@class FExpressionInput
---@field OutputIndex int32
---@field ExpressionName FName
FExpressionInput = {}



---@class FExpressionOutput
---@field OutputName FName
FExpressionOutput = {}



---@class FExternalToolDefinition
---@field ToolName FString
---@field ExecutablePath FFilePath
---@field CommandLineOptions FString
---@field WorkingDirectory FDirectoryPath
---@field ScriptExtension FString
---@field ScriptDirectory FDirectoryPath
FExternalToolDefinition = {}



---@class FFOscillator
---@field Amplitude float
---@field Frequency float
---@field InitialOffset EInitialOscillatorOffset
---@field Waveform EOscillatorWaveform
FFOscillator = {}



---@class FFastArraySerializer
---@field ArrayReplicationKey int32
---@field DeltaFlags EFastArraySerializerDeltaFlags
FFastArraySerializer = {}



---@class FFastArraySerializerItem
---@field ReplicationID int32
---@field ReplicationKey int32
---@field MostRecentArrayReplicationKey int32
FFastArraySerializerItem = {}



---@class FFilePath
---@field FilePath FString
FFilePath = {}



---@class FFilmStockSettings
---@field Slope float
---@field Toe float
---@field Shoulder float
---@field BlackClip float
---@field WhiteClip float
FFilmStockSettings = {}



---@class FFindFloorResult
---@field bBlockingHit boolean
---@field bWalkableFloor boolean
---@field bLineTrace boolean
---@field FloorDist float
---@field LineDist float
---@field HitResult FHitResult
FFindFloorResult = {}



---@class FFloatCurve : FAnimCurveBase
---@field FloatCurve FRichCurve
FFloatCurve = {}



---@class FFloatDistribution
---@field Table FDistributionLookupTable
FFloatDistribution = {}



---@class FFloatRK4SpringInterpolator
---@field StiffnessConstant float
---@field DampeningRatio float
FFloatRK4SpringInterpolator = {}



---@class FFloatSpringState
FFloatSpringState = {}


---@class FFontCharacter
---@field StartU int32
---@field StartV int32
---@field USize int32
---@field VSize int32
---@field TextureIndex uint8
---@field VerticalOffset int32
FFontCharacter = {}



---@class FFontImportOptionsData
---@field FontName FString
---@field Height float
---@field bEnableAntialiasing boolean
---@field bEnableBold boolean
---@field bEnableItalic boolean
---@field bEnableUnderline boolean
---@field bAlphaOnly boolean
---@field CharacterSet EFontImportCharacterSet
---@field Chars FString
---@field UnicodeRange FString
---@field CharsFilePath FString
---@field CharsFileWildcard FString
---@field bCreatePrintableOnly boolean
---@field bIncludeASCIIRange boolean
---@field ForegroundColor FLinearColor
---@field bEnableDropShadow boolean
---@field TexturePageWidth int32
---@field TexturePageMaxHeight int32
---@field XPadding int32
---@field YPadding int32
---@field ExtendBoxTop int32
---@field ExtendBoxBottom int32
---@field ExtendBoxRight int32
---@field ExtendBoxLeft int32
---@field bEnableLegacyMode boolean
---@field Kerning int32
---@field bUseDistanceFieldAlpha boolean
---@field DistanceFieldScaleFactor int32
---@field DistanceFieldScanRadiusScale float
FFontImportOptionsData = {}



---@class FFontParameterValue
---@field ParameterInfo FMaterialParameterInfo
---@field FontValue UFont
---@field FontPage int32
---@field ExpressionGUID FGuid
FFontParameterValue = {}



---@class FFontRenderInfo
---@field bClipText boolean
---@field bEnableShadow boolean
---@field GlowInfo FDepthFieldGlowInfo
FFontRenderInfo = {}



---@class FForceFeedbackAttenuationSettings : FBaseAttenuationSettings
FForceFeedbackAttenuationSettings = {}


---@class FForceFeedbackChannelDetails
---@field bAffectsLeftLarge boolean
---@field bAffectsLeftSmall boolean
---@field bAffectsRightLarge boolean
---@field bAffectsRightSmall boolean
---@field Curve FRuntimeFloatCurve
FForceFeedbackChannelDetails = {}



---@class FForceFeedbackParameters
---@field Tag FName
---@field bLooping boolean
---@field bIgnoreTimeDilation boolean
---@field bPlayWhilePaused boolean
FForceFeedbackParameters = {}



---@class FFormatArgumentData
---@field ArgumentName FString
---@field ArgumentValueType EFormatArgumentType::Type
---@field ArgumentValue FText
---@field ArgumentValueInt int32
---@field ArgumentValueFloat float
---@field ArgumentValueGender ETextGender
FFormatArgumentData = {}



---@class FFractureEffect
---@field ParticleSystem UParticleSystem
---@field Sound USoundBase
FFractureEffect = {}



---@class FFreezablePerPlatformInt
FFreezablePerPlatformInt = {}


---@class FFullyLoadedPackagesInfo
---@field FullyLoadType EFullyLoadPackageType
---@field Tag FString
---@field PackagesToLoad TArray<FName>
---@field LoadedObjects TArray<UObject>
FFullyLoadedPackagesInfo = {}



---@class FFunctionExpressionInput
---@field ExpressionInput UMaterialExpressionFunctionInput
---@field ExpressionInputId FGuid
---@field Input FExpressionInput
FFunctionExpressionInput = {}



---@class FFunctionExpressionOutput
---@field ExpressionOutput UMaterialExpressionFunctionOutput
---@field ExpressionOutputId FGuid
---@field Output FExpressionOutput
FFunctionExpressionOutput = {}



---@class FGPUSpriteEmitterInfo
---@field RequiredModule UParticleModuleRequired
---@field SpawnModule UParticleModuleSpawn
---@field SpawnPerUnitModule UParticleModuleSpawnPerUnit
---@field SpawnModules TArray<UParticleModule>
---@field LocalVectorField FGPUSpriteLocalVectorFieldInfo
---@field VectorFieldScale FFloatDistribution
---@field DragCoefficient FFloatDistribution
---@field PointAttractorStrength FFloatDistribution
---@field Resilience FFloatDistribution
---@field ConstantAcceleration FVector
---@field PointAttractorPosition FVector
---@field PointAttractorRadiusSq float
---@field OrbitOffsetBase FVector
---@field OrbitOffsetRange FVector
---@field InvMaxSize FVector2D
---@field InvRotationRateScale float
---@field MaxLifetime float
---@field MaxParticleCount int32
---@field ScreenAlignment EParticleScreenAlignment
---@field LockAxisFlag EParticleAxisLock
---@field bEnableCollision boolean
---@field CollisionMode EParticleCollisionMode::Type
---@field bRemoveHMDRoll boolean
---@field MinFacingCameraBlendDistance float
---@field MaxFacingCameraBlendDistance float
---@field DynamicColor FRawDistributionVector
---@field DynamicAlpha FRawDistributionFloat
---@field DynamicColorScale FRawDistributionVector
---@field DynamicAlphaScale FRawDistributionFloat
FGPUSpriteEmitterInfo = {}



---@class FGPUSpriteLocalVectorFieldInfo
---@field Field UVectorField
---@field Transform FTransform
---@field MinInitialRotation FRotator
---@field MaxInitialRotation FRotator
---@field RotationRate FRotator
---@field Intensity float
---@field Tightness float
---@field bIgnoreComponentTransform boolean
---@field bTileX boolean
---@field bTileY boolean
---@field bTileZ boolean
---@field bUseFixDT boolean
FGPUSpriteLocalVectorFieldInfo = {}



---@class FGPUSpriteResourceData
---@field QuantizedColorSamples TArray<FColor>
---@field QuantizedMiscSamples TArray<FColor>
---@field QuantizedSimulationAttrSamples TArray<FColor>
---@field ColorScale FVector4
---@field ColorBias FVector4
---@field MiscScale FVector4
---@field MiscBias FVector4
---@field SimulationAttrCurveScale FVector4
---@field SimulationAttrCurveBias FVector4
---@field SubImageSize FVector4
---@field SizeBySpeed FVector4
---@field ConstantAcceleration FVector
---@field OrbitOffsetBase FVector
---@field OrbitOffsetRange FVector
---@field OrbitFrequencyBase FVector
---@field OrbitFrequencyRange FVector
---@field OrbitPhaseBase FVector
---@field OrbitPhaseRange FVector
---@field GlobalVectorFieldScale float
---@field GlobalVectorFieldTightness float
---@field PerParticleVectorFieldScale float
---@field PerParticleVectorFieldBias float
---@field DragCoefficientScale float
---@field DragCoefficientBias float
---@field ResilienceScale float
---@field ResilienceBias float
---@field CollisionRadiusScale float
---@field CollisionRadiusBias float
---@field CollisionTimeBias float
---@field CollisionRandomSpread float
---@field CollisionRandomDistribution float
---@field OneMinusFriction float
---@field RotationRateScale float
---@field CameraMotionBlurAmount float
---@field ScreenAlignment EParticleScreenAlignment
---@field LockAxisFlag EParticleAxisLock
---@field PivotOffset FVector2D
---@field bRemoveHMDRoll boolean
---@field MinFacingCameraBlendDistance float
---@field MaxFacingCameraBlendDistance float
FGPUSpriteResourceData = {}



---@class FGameNameRedirect
---@field OldGameName FName
---@field NewGameName FName
FGameNameRedirect = {}



---@class FGaussianSumBloomSettings
---@field Intensity float
---@field Threshold float
---@field SizeScale float
---@field Filter1Size float
---@field Filter2Size float
---@field Filter3Size float
---@field Filter4Size float
---@field Filter5Size float
---@field Filter6Size float
---@field Filter1Tint FLinearColor
---@field Filter2Tint FLinearColor
---@field Filter3Tint FLinearColor
---@field Filter4Tint FLinearColor
---@field Filter5Tint FLinearColor
---@field Filter6Tint FLinearColor
FGaussianSumBloomSettings = {}



---@class FGenericStruct
---@field Data int32
FGenericStruct = {}



---@class FGeomSelection
---@field Type int32
---@field Index int32
---@field SelectionIndex int32
FGeomSelection = {}



---@class FGraphAssetPlayerInformation
---@field PlayerNodeIndices TArray<int32>
FGraphAssetPlayerInformation = {}



---@class FGraphReference
---@field MacroGraph UEdGraph
---@field GraphBlueprint UBlueprint
---@field GraphGuid FGuid
FGraphReference = {}



---@class FGridBlendSample
---@field GridElement FEditorElement
---@field BlendWeight float
FGridBlendSample = {}



---@class FHLODProxyMesh
---@field LODActor TLazyObjectPtr<ALODActor>
---@field StaticMesh UStaticMesh
---@field Key FName
FHLODProxyMesh = {}



---@class FHapticFeedbackDetails_Curve
---@field Frequency FRuntimeFloatCurve
---@field Amplitude FRuntimeFloatCurve
FHapticFeedbackDetails_Curve = {}



---@class FHardwareCursorReference
---@field CursorPath FName
---@field HotSpot FVector2D
FHardwareCursorReference = {}



---@class FHierarchicalSimplification
---@field TransitionScreenSize float
---@field OverrideDrawDistance float
---@field bUseOverrideDrawDistance boolean
---@field bAllowSpecificExclusion boolean
---@field bSimplifyMesh boolean
---@field bOnlyGenerateClustersForVolumes boolean
---@field bReusePreviousLevelClusters boolean
---@field ProxySetting FMeshProxySettings
---@field MergeSetting FMeshMergingSettings
---@field DesiredBoundRadius float
---@field DesiredFillingPercentage float
---@field MinNumberOfActorsToBuild int32
FHierarchicalSimplification = {}



---@class FHitResult
---@field bBlockingHit boolean
---@field bStartPenetrating boolean
---@field FaceIndex int32
---@field Time float
---@field Distance float
---@field Location FVector_NetQuantize
---@field ImpactPoint FVector_NetQuantize
---@field Normal FVector_NetQuantizeNormal
---@field ImpactNormal FVector_NetQuantizeNormal
---@field TraceStart FVector_NetQuantize
---@field TraceEnd FVector_NetQuantize
---@field PenetrationDepth float
---@field Item int32
---@field PhysMaterial TWeakObjectPtr<UPhysicalMaterial>
---@field Actor TWeakObjectPtr<AActor>
---@field Component TWeakObjectPtr<UPrimitiveComponent>
---@field BoneName FName
---@field MyBoneName FName
FHitResult = {}



---@class FImportFactorySettingValues
---@field SettingName FString
---@field Value FString
FImportFactorySettingValues = {}



---@class FImportanceTexture
---@field Size FIntPoint
---@field NumMips int32
---@field MarginalCDF TArray<float>
---@field ConditionalCDF TArray<float>
---@field TextureData TArray<FColor>
---@field Texture TWeakObjectPtr<UTexture2D>
---@field Weighting EImportanceWeight::Type
FImportanceTexture = {}



---@class FIndexedCurve
---@field KeyHandlesToIndices FKeyHandleMap
FIndexedCurve = {}



---@class FInertializationBoneDiff
FInertializationBoneDiff = {}


---@class FInertializationCurveDiff
FInertializationCurveDiff = {}


---@class FInertializationPose
FInertializationPose = {}


---@class FInertializationPoseDiff
FInertializationPoseDiff = {}


---@class FInputActionKeyMapping
---@field ActionName FName
---@field bShift boolean
---@field bCtrl boolean
---@field bAlt boolean
---@field bCmd boolean
---@field Key FKey
FInputActionKeyMapping = {}



---@class FInputActionSpeechMapping
---@field ActionName FName
---@field SpeechKeyword FName
FInputActionSpeechMapping = {}



---@class FInputAlphaBoolBlend
---@field BlendInTime float
---@field BlendOutTime float
---@field BlendOption EAlphaBlendOption
---@field bInitialized boolean
---@field CustomCurve UCurveFloat
---@field AlphaBlend FAlphaBlend
FInputAlphaBoolBlend = {}



---@class FInputAxisConfigEntry
---@field AxisKeyName FName
---@field AxisProperties FInputAxisProperties
FInputAxisConfigEntry = {}



---@class FInputAxisKeyMapping
---@field AxisName FName
---@field Scale float
---@field Key FKey
FInputAxisKeyMapping = {}



---@class FInputAxisProperties
---@field DeadZone float
---@field Sensitivity float
---@field Exponent float
---@field bInvert boolean
FInputAxisProperties = {}



---@class FInputBlendPose
---@field BranchFilters TArray<FBranchFilter>
FInputBlendPose = {}



---@class FInputRange
---@field Min float
---@field Max float
FInputRange = {}



---@class FInputScaleBias
---@field Scale float
---@field Bias float
FInputScaleBias = {}



---@class FInputScaleBiasClamp
---@field bMapRange boolean
---@field bClampResult boolean
---@field bInterpResult boolean
---@field InRange FInputRange
---@field OutRange FInputRange
---@field Scale float
---@field Bias float
---@field ClampMin float
---@field ClampMax float
---@field InterpSpeedIncreasing float
---@field InterpSpeedDecreasing float
FInputScaleBiasClamp = {}



---@class FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData
---@field StaticMesh UStaticMesh
---@field CachedStaticLighting FInstancedStaticMeshLightMapInstanceData
---@field PerInstanceSMData TArray<FInstancedStaticMeshInstanceData>
---@field PerInstanceSMCustomData TArray<float>
---@field InstancingRandomSeed int32
FInstancedStaticMeshComponentInstanceData = {}



---@class FInstancedStaticMeshInstanceData
---@field Transform FMatrix
FInstancedStaticMeshInstanceData = {}



---@class FInstancedStaticMeshLightMapInstanceData
---@field Transform FTransform
---@field MapBuildDataIds TArray<FGuid>
FInstancedStaticMeshLightMapInstanceData = {}



---@class FInstancedStaticMeshMappingInfo
FInstancedStaticMeshMappingInfo = {}


---@class FIntegralCurve : FIndexedCurve
---@field Keys TArray<FIntegralKey>
---@field DefaultValue int32
---@field bUseDefaultValueBeforeFirstKey boolean
FIntegralCurve = {}



---@class FIntegralKey
---@field Time float
---@field Value int32
FIntegralKey = {}



---@class FInteriorSettings
---@field bIsWorldSettings boolean
---@field ExteriorVolume float
---@field ExteriorTime float
---@field ExteriorLPF float
---@field ExteriorLPFTime float
---@field InteriorVolume float
---@field InteriorTime float
---@field InteriorLPF float
---@field InteriorLPFTime float
FInteriorSettings = {}



---@class FInterpControlPoint
---@field PositionControlPoint FVector
---@field bPositionIsRelative boolean
FInterpControlPoint = {}



---@class FInterpEdSelKey
---@field Group UInterpGroup
---@field Track UInterpTrack
---@field KeyIndex int32
---@field UnsnappedPosition float
FInterpEdSelKey = {}



---@class FInterpGroupActorInfo
---@field ObjectName FName
---@field Actors TArray<AActor>
FInterpGroupActorInfo = {}



---@class FInterpLookupPoint
---@field GroupName FName
---@field Time float
FInterpLookupPoint = {}



---@class FInterpLookupTrack
---@field Points TArray<FInterpLookupPoint>
FInterpLookupTrack = {}



---@class FInterpolationParameter
---@field InterpolationTime float
---@field InterpolationType EFilterInterpolationType
FInterpolationParameter = {}



---@class FKAggregateGeom
---@field SphereElems TArray<FKSphereElem>
---@field BoxElems TArray<FKBoxElem>
---@field SphylElems TArray<FKSphylElem>
---@field ConvexElems TArray<FKConvexElem>
---@field TaperedCapsuleElems TArray<FKTaperedCapsuleElem>
FKAggregateGeom = {}



---@class FKBoxElem : FKShapeElem
---@field Center FVector
---@field Rotation FRotator
---@field X float
---@field Y float
---@field Z float
FKBoxElem = {}



---@class FKConvexElem : FKShapeElem
---@field VertexData TArray<FVector>
---@field IndexData TArray<int32>
---@field ElemBox FBox
---@field Transform FTransform
FKConvexElem = {}



---@class FKShapeElem
---@field RestOffset float
---@field Name FName
---@field bContributeToMass boolean
FKShapeElem = {}



---@class FKSphereElem : FKShapeElem
---@field Center FVector
---@field Radius float
FKSphereElem = {}



---@class FKSphylElem : FKShapeElem
---@field Center FVector
---@field Rotation FRotator
---@field Radius float
---@field Length float
FKSphylElem = {}



---@class FKTaperedCapsuleElem : FKShapeElem
---@field Center FVector
---@field Rotation FRotator
---@field Radius0 float
---@field Radius1 float
---@field Length float
FKTaperedCapsuleElem = {}



---@class FKeyBind
---@field Key FKey
---@field Command FString
---@field Control boolean
---@field Shift boolean
---@field Alt boolean
---@field Cmd boolean
---@field bIgnoreCtrl boolean
---@field bIgnoreShift boolean
---@field bIgnoreAlt boolean
---@field bIgnoreCmd boolean
---@field bDisabled boolean
FKeyBind = {}



---@class FKeyHandleLookupTable
FKeyHandleLookupTable = {}


---@class FKeyHandleMap
FKeyHandleMap = {}


---@class FLODSoloTrack
---@field SoloEnableSetting TArray<uint8>
FLODSoloTrack = {}



---@class FLatentActionInfo
---@field Linkage int32
---@field UUID int32
---@field ExecutionFunction FName
---@field CallbackTarget UObject
FLatentActionInfo = {}



---@class FLatentActionManager
FLatentActionManager = {}


---@class FLaunchOnTestSettings
---@field LaunchOnTestmap FFilePath
---@field DeviceID FString
FLaunchOnTestSettings = {}



---@class FLayerActorStats
---@field Type UClass
---@field Total int32
FLayerActorStats = {}



---@class FLensBloomSettings
---@field GaussianSum FGaussianSumBloomSettings
---@field Convolution FConvolutionBloomSettings
---@field Method EBloomMethod
FLensBloomSettings = {}



---@class FLensImperfectionSettings
---@field DirtMask UTexture
---@field DirtMaskIntensity float
---@field DirtMaskTint FLinearColor
FLensImperfectionSettings = {}



---@class FLensSettings
---@field Bloom FLensBloomSettings
---@field Imperfections FLensImperfectionSettings
---@field ChromaticAberration float
FLensSettings = {}



---@class FLevelCollection
---@field GameState AGameStateBase
---@field NetDriver UNetDriver
---@field DemoNetDriver UDemoNetDriver
---@field PersistentLevel ULevel
---@field Levels TSet<ULevel>
FLevelCollection = {}



---@class FLevelNameAndTime
---@field LevelName FString
---@field LevelChangeTimeInMS uint32
FLevelNameAndTime = {}



---@class FLevelSimplificationDetails
---@field bCreatePackagePerAsset boolean
---@field DetailsPercentage float
---@field StaticMeshMaterialSettings FMaterialProxySettings
---@field bOverrideLandscapeExportLOD boolean
---@field LandscapeExportLOD int32
---@field LandscapeMaterialSettings FMaterialProxySettings
---@field bBakeFoliageToLandscape boolean
---@field bBakeGrassToLandscape boolean
---@field bGenerateMeshNormalMap boolean
---@field bGenerateMeshMetallicMap boolean
---@field bGenerateMeshRoughnessMap boolean
---@field bGenerateMeshSpecularMap boolean
---@field bGenerateLandscapeNormalMap boolean
---@field bGenerateLandscapeMetallicMap boolean
---@field bGenerateLandscapeRoughnessMap boolean
---@field bGenerateLandscapeSpecularMap boolean
FLevelSimplificationDetails = {}



---@class FLevelStreamingStatus
---@field PackageName FName
---@field bShouldBeLoaded boolean
---@field bShouldBeVisible boolean
---@field LODIndex uint32
FLevelStreamingStatus = {}



---@class FLevelStreamingWrapper
---@field StreamingLevel ULevelStreaming
FLevelStreamingWrapper = {}



---@class FLevelViewportInfo
---@field CamPosition FVector
---@field CamRotation FRotator
---@field CamOrthoZoom float
---@field CamUpdated boolean
FLevelViewportInfo = {}



---@class FLightingChannels
---@field bChannel0 boolean
---@field bChannel1 boolean
---@field bChannel2 boolean
FLightingChannels = {}



---@class FLightmassDebugOptions
---@field bDebugMode boolean
---@field bStatsEnabled boolean
---@field bGatherBSPSurfacesAcrossComponents boolean
---@field CoplanarTolerance float
---@field bUseImmediateImport boolean
---@field bImmediateProcessMappings boolean
---@field bSortMappings boolean
---@field bDumpBinaryFiles boolean
---@field bDebugMaterials boolean
---@field bPadMappings boolean
---@field bDebugPaddings boolean
---@field bOnlyCalcDebugTexelMappings boolean
---@field bUseRandomColors boolean
---@field bColorBordersGreen boolean
---@field bColorByExecutionTime boolean
---@field ExecutionTimeDivisor float
FLightmassDebugOptions = {}



---@class FLightmassDirectionalLightSettings : FLightmassLightSettings
---@field LightSourceAngle float
FLightmassDirectionalLightSettings = {}



---@class FLightmassLightSettings
---@field IndirectLightingSaturation float
---@field ShadowExponent float
---@field bUseAreaShadowsForStationaryLight boolean
FLightmassLightSettings = {}



---@class FLightmassMaterialInterfaceSettings
---@field EmissiveBoost float
---@field DiffuseBoost float
---@field ExportResolutionScale float
---@field bCastShadowAsMasked boolean
---@field bOverrideCastShadowAsMasked boolean
---@field bOverrideEmissiveBoost boolean
---@field bOverrideDiffuseBoost boolean
---@field bOverrideExportResolutionScale boolean
FLightmassMaterialInterfaceSettings = {}



---@class FLightmassPointLightSettings : FLightmassLightSettings
FLightmassPointLightSettings = {}


---@class FLightmassPrimitiveSettings
---@field bUseTwoSidedLighting boolean
---@field bShadowIndirectOnly boolean
---@field bUseEmissiveForStaticLighting boolean
---@field bUseVertexNormalForHemisphereGather boolean
---@field EmissiveLightFalloffExponent float
---@field EmissiveLightExplicitInfluenceRadius float
---@field EmissiveBoost float
---@field DiffuseBoost float
---@field FullyOccludedSamplesFraction float
FLightmassPrimitiveSettings = {}



---@class FLightmassWorldInfoSettings
---@field StaticLightingLevelScale float
---@field NumIndirectLightingBounces int32
---@field NumSkyLightingBounces int32
---@field IndirectLightingQuality float
---@field IndirectLightingSmoothness float
---@field EnvironmentColor FColor
---@field EnvironmentIntensity float
---@field EmissiveBoost float
---@field DiffuseBoost float
---@field VolumeLightingMethod EVolumeLightingMethod
---@field bUseAmbientOcclusion boolean
---@field bGenerateAmbientOcclusionMaterialMask boolean
---@field bVisualizeMaterialDiffuse boolean
---@field bVisualizeAmbientOcclusion boolean
---@field bCompressLightmaps boolean
---@field VolumetricLightmapDetailCellSize float
---@field VolumetricLightmapMaximumBrickMemoryMb float
---@field VolumetricLightmapSphericalHarmonicSmoothing float
---@field VolumeLightSamplePlacementScale float
---@field DirectIlluminationOcclusionFraction float
---@field IndirectIlluminationOcclusionFraction float
---@field OcclusionExponent float
---@field FullyOccludedSamplesFraction float
---@field MaxOcclusionDistance float
FLightmassWorldInfoSettings = {}



---@class FLinearConstraint : FConstraintBaseParams
---@field Limit float
---@field XMotion ELinearConstraintMotion
---@field YMotion ELinearConstraintMotion
---@field ZMotion ELinearConstraintMotion
FLinearConstraint = {}



---@class FLinearDriveConstraint
---@field PositionTarget FVector
---@field VelocityTarget FVector
---@field XDrive FConstraintDrive
---@field YDrive FConstraintDrive
---@field ZDrive FConstraintDrive
---@field bEnablePositionDrive boolean
FLinearDriveConstraint = {}



---@class FLocalSpacePose
---@field Transforms TArray<FTransform>
---@field Names TArray<FName>
FLocalSpacePose = {}



---@class FLocationBoneSocketInfo
---@field BoneSocketName FName
---@field Offset FVector
FLocationBoneSocketInfo = {}



---@class FMTDResult
---@field Direction FVector
---@field Distance float
FMTDResult = {}



---@class FMarkerSyncAnimPosition
---@field PreviousMarkerName FName
---@field NextMarkerName FName
---@field PositionBetweenMarkers float
FMarkerSyncAnimPosition = {}



---@class FMarkerSyncData
---@field AuthoredSyncMarkers TArray<FAnimSyncMarker>
FMarkerSyncData = {}



---@class FMaterialAttributesInput : FExpressionInput
---@field PropertyConnectedBitmask int32
FMaterialAttributesInput = {}



---@class FMaterialCachedExpressionData
---@field Parameters FMaterialCachedParameters
---@field ReferencedTextures TArray<UObject>
---@field FunctionInfos TArray<FMaterialFunctionInfo>
---@field ParameterCollectionInfos TArray<FMaterialParameterCollectionInfo>
---@field DefaultLayers TArray<UMaterialFunctionInterface>
---@field DefaultLayerBlends TArray<UMaterialFunctionInterface>
---@field GrassTypes TArray<ULandscapeGrassType>
---@field DynamicParameterNames TArray<FName>
---@field QualityLevelsUsed TArray<boolean>
---@field bHasRuntimeVirtualTextureOutput boolean
---@field bHasSceneColor boolean
FMaterialCachedExpressionData = {}



---@class FMaterialCachedParameterEntry
---@field NameHashes TArray<uint64>
---@field ParameterInfos TArray<FMaterialParameterInfo>
---@field ExpressionGuids TArray<FGuid>
---@field Overrides TArray<boolean>
FMaterialCachedParameterEntry = {}



---@class FMaterialCachedParameters
---@field Entries FMaterialCachedParameterEntry
---@field ScalarValues TArray<float>
---@field VectorValues TArray<FLinearColor>
---@field TextureValues TArray<UTexture>
---@field FontValues TArray<UFont>
---@field FontPageValues TArray<int32>
---@field RuntimeVirtualTextureValues TArray<URuntimeVirtualTexture>
FMaterialCachedParameters = {}



---@class FMaterialEditorPromotionSettings
---@field DefaultMaterialAsset FFilePath
---@field DefaultDiffuseTexture FFilePath
---@field DefaultNormalTexture FFilePath
FMaterialEditorPromotionSettings = {}



---@class FMaterialFunctionInfo
---@field StateId FGuid
---@field Function UMaterialFunctionInterface
FMaterialFunctionInfo = {}



---@class FMaterialInput
---@field OutputIndex int32
---@field ExpressionName FName
FMaterialInput = {}



---@class FMaterialInstanceBasePropertyOverrides
---@field bOverride_OpacityMaskClipValue boolean
---@field bOverride_BlendMode boolean
---@field bOverride_ShadingModel boolean
---@field bOverride_DitheredLODTransition boolean
---@field bOverride_CastDynamicShadowAsMasked boolean
---@field bOverride_TwoSided boolean
---@field TwoSided boolean
---@field DitheredLODTransition boolean
---@field bCastDynamicShadowAsMasked boolean
---@field BlendMode EBlendMode
---@field ShadingModel EMaterialShadingModel
---@field OpacityMaskClipValue float
FMaterialInstanceBasePropertyOverrides = {}



---@class FMaterialLayersFunctions
---@field Layers TArray<UMaterialFunctionInterface>
---@field Blends TArray<UMaterialFunctionInterface>
---@field LayerStates TArray<boolean>
---@field KeyString FString
FMaterialLayersFunctions = {}



---@class FMaterialParameterCollectionInfo
---@field StateId FGuid
---@field ParameterCollection UMaterialParameterCollection
FMaterialParameterCollectionInfo = {}



---@class FMaterialParameterInfo
---@field Name FName
---@field Association EMaterialParameterAssociation
---@field Index int32
FMaterialParameterInfo = {}



---@class FMaterialProxySettings
---@field TextureSize FIntPoint
---@field GutterSpace float
---@field MetallicConstant float
---@field RoughnessConstant float
---@field AnisotropyConstant float
---@field SpecularConstant float
---@field OpacityConstant float
---@field OpacityMaskConstant float
---@field AmbientOcclusionConstant float
---@field TextureSizingType ETextureSizingType
---@field MaterialMergeType EMaterialMergeType
---@field BlendMode EBlendMode
---@field bAllowTwoSidedMaterial boolean
---@field bNormalMap boolean
---@field bTangentMap boolean
---@field bMetallicMap boolean
---@field bRoughnessMap boolean
---@field bAnisotropyMap boolean
---@field bSpecularMap boolean
---@field bEmissiveMap boolean
---@field bOpacityMap boolean
---@field bOpacityMaskMap boolean
---@field bAmbientOcclusionMap boolean
---@field DiffuseTextureSize FIntPoint
---@field NormalTextureSize FIntPoint
---@field TangentTextureSize FIntPoint
---@field MetallicTextureSize FIntPoint
---@field RoughnessTextureSize FIntPoint
---@field AnisotropyTextureSize FIntPoint
---@field SpecularTextureSize FIntPoint
---@field EmissiveTextureSize FIntPoint
---@field OpacityTextureSize FIntPoint
---@field OpacityMaskTextureSize FIntPoint
---@field AmbientOcclusionTextureSize FIntPoint
FMaterialProxySettings = {}



---@class FMaterialRemapIndex
---@field ImportVersionKey uint32
---@field MaterialRemap TArray<int32>
FMaterialRemapIndex = {}



---@class FMaterialShadingModelField
---@field ShadingModelField uint16
FMaterialShadingModelField = {}



---@class FMaterialSpriteElement
---@field Material UMaterialInterface
---@field DistanceToOpacityCurve UCurveFloat
---@field bSizeIsInScreenSpace boolean
---@field BaseSizeX float
---@field BaseSizeY float
---@field DistanceToSizeCurve UCurveFloat
FMaterialSpriteElement = {}



---@class FMaterialTextureInfo
---@field SamplingScale float
---@field UVChannelIndex int32
---@field TextureName FName
FMaterialTextureInfo = {}



---@class FMemberReference
---@field MemberParent UObject
---@field MemberScope FString
---@field MemberName FName
---@field MemberGuid FGuid
---@field bSelfContext boolean
---@field bWasDeprecated boolean
FMemberReference = {}



---@class FMeshBuildSettings
---@field bUseMikkTSpace boolean
---@field bRecomputeNormals boolean
---@field bRecomputeTangents boolean
---@field bComputeWeightedNormals boolean
---@field bRemoveDegenerates boolean
---@field bBuildAdjacencyBuffer boolean
---@field bBuildReversedIndexBuffer boolean
---@field bUseHighPrecisionTangentBasis boolean
---@field bUseFullPrecisionUVs boolean
---@field bGenerateLightmapUVs boolean
---@field bGenerateDistanceFieldAsIfTwoSided boolean
---@field bSupportFaceRemap boolean
---@field MinLightmapResolution int32
---@field SrcLightmapIndex int32
---@field DstLightmapIndex int32
---@field BuildScale float
---@field BuildScale3D FVector
---@field DistanceFieldResolutionScale float
---@field DistanceFieldReplacementMesh UStaticMesh
FMeshBuildSettings = {}



---@class FMeshInstancingSettings
---@field ActorClassToUse TSubclassOf<AActor>
---@field InstanceReplacementThreshold int32
---@field MeshReplacementMethod EMeshInstancingReplacementMethod
---@field bSkipMeshesWithVertexColors boolean
---@field bUseHLODVolumes boolean
---@field ISMComponentToUse TSubclassOf<UInstancedStaticMeshComponent>
FMeshInstancingSettings = {}



---@class FMeshMergingSettings
---@field TargetLightMapResolution int32
---@field OutputUVs EUVOutput
---@field MaterialSettings FMaterialProxySettings
---@field GutterSize int32
---@field SpecificLOD int32
---@field LODSelectionType EMeshLODSelectionType
---@field bGenerateLightMapUV boolean
---@field bComputedLightMapResolution boolean
---@field bPivotPointAtZero boolean
---@field bMergePhysicsData boolean
---@field bMergeMaterials boolean
---@field bCreateMergedMaterial boolean
---@field bBakeVertexDataToMesh boolean
---@field bUseVertexDataForBakingMaterial boolean
---@field bUseTextureBinning boolean
---@field bReuseMeshLightmapUVs boolean
---@field bMergeEquivalentMaterials boolean
---@field bUseLandscapeCulling boolean
---@field bIncludeImposters boolean
---@field bAllowDistanceField boolean
FMeshMergingSettings = {}



---@class FMeshProxySettings
---@field ScreenSize int32
---@field VoxelSize float
---@field MaterialSettings FMaterialProxySettings
---@field MergeDistance float
---@field UnresolvedGeometryColor FColor
---@field MaxRayCastDist float
---@field HardAngleThreshold float
---@field LightMapResolution int32
---@field NormalCalculationMethod EProxyNormalComputationMethod::Type
---@field LandscapeCullingPrecision ELandscapeCullingPrecision::Type
---@field bCalculateCorrectLODModel boolean
---@field bOverrideVoxelSize boolean
---@field bOverrideTransferDistance boolean
---@field bUseHardAngleThreshold boolean
---@field bComputeLightMapResolution boolean
---@field bRecalculateNormals boolean
---@field bUseLandscapeCulling boolean
---@field bAllowAdjacency boolean
---@field bAllowDistanceField boolean
---@field bReuseMeshLightmapUVs boolean
---@field bCreateCollision boolean
---@field bAllowVertexColors boolean
---@field bGenerateLightmapUVs boolean
FMeshProxySettings = {}



---@class FMeshReductionSettings
---@field PercentTriangles float
---@field PercentVertices float
---@field MaxDeviation float
---@field PixelError float
---@field WeldingThreshold float
---@field HardAngleThreshold float
---@field BaseLODModel int32
---@field SilhouetteImportance EMeshFeatureImportance::Type
---@field TextureImportance EMeshFeatureImportance::Type
---@field ShadingImportance EMeshFeatureImportance::Type
---@field bRecalculateNormals boolean
---@field bGenerateUniqueLightmapUVs boolean
---@field bKeepSymmetry boolean
---@field bVisibilityAided boolean
---@field bCullOccluded boolean
---@field TerminationCriterion EStaticMeshReductionTerimationCriterion
---@field VisibilityAggressiveness EMeshFeatureImportance::Type
---@field VertexColorImportance EMeshFeatureImportance::Type
FMeshReductionSettings = {}



---@class FMeshSectionInfo
---@field MaterialIndex int32
---@field bEnableCollision boolean
---@field bCastShadow boolean
---@field bForceOpaque boolean
FMeshSectionInfo = {}



---@class FMeshSectionInfoMap
---@field Map TMap<uint32, FMeshSectionInfo>
FMeshSectionInfoMap = {}



---@class FMeshUVChannelInfo
---@field bInitialized boolean
---@field bOverrideDensities boolean
---@field LocalUVDensities float
FMeshUVChannelInfo = {}



---@class FMinimalViewInfo
---@field Location FVector
---@field Rotation FRotator
---@field FOV float
---@field DesiredFOV float
---@field OrthoWidth float
---@field OrthoNearClipPlane float
---@field OrthoFarClipPlane float
---@field AspectRatio float
---@field bConstrainAspectRatio boolean
---@field bUseFieldOfViewForLOD boolean
---@field ProjectionMode ECameraProjectionMode::Type
---@field PostProcessBlendWeight float
---@field PostProcessSettings FPostProcessSettings
---@field OffCenterProjectionOffset FVector2D
FMinimalViewInfo = {}



---@class FModulatorContinuousParams
---@field ParameterName FName
---@field Default float
---@field MinInput float
---@field MaxInput float
---@field MinOutput float
---@field MaxOutput float
---@field ParamMode ModulationParamMode
FModulatorContinuousParams = {}



---@class FMovementProperties
---@field bCanCrouch boolean
---@field bCanJump boolean
---@field bCanWalk boolean
---@field bCanSwim boolean
---@field bCanFly boolean
FMovementProperties = {}



---@class FMulticastRecordOptions
---@field FuncPathName FString
---@field bServerSkip boolean
---@field bClientSkip boolean
FMulticastRecordOptions = {}



---@class FNameCurve : FIndexedCurve
---@field Keys TArray<FNameCurveKey>
FNameCurve = {}



---@class FNameCurveKey
---@field Time float
---@field Value FName
FNameCurveKey = {}



---@class FNameMapping
---@field NodeName FName
---@field BoneName FName
FNameMapping = {}



---@class FNamedColor
---@field Value FColor
---@field Name FName
FNamedColor = {}



---@class FNamedCurveValue
---@field Name FName
---@field Value float
FNamedCurveValue = {}



---@class FNamedEmitterMaterial
---@field Name FName
---@field Material UMaterialInterface
FNamedEmitterMaterial = {}



---@class FNamedFloat
---@field Value float
---@field Name FName
FNamedFloat = {}



---@class FNamedNetDriver
---@field NetDriver UNetDriver
FNamedNetDriver = {}



---@class FNamedTransform
---@field Value FTransform
---@field Name FName
FNamedTransform = {}



---@class FNamedVector
---@field Value FVector
---@field Name FName
FNamedVector = {}



---@class FNavAgentProperties : FMovementProperties
---@field AgentRadius float
---@field AgentHeight float
---@field AgentStepHeight float
---@field NavWalkingSearchHeightScale float
---@field PreferredNavData FSoftClassPath
FNavAgentProperties = {}



---@class FNavAgentSelector
---@field bSupportsAgent0 boolean
---@field bSupportsAgent1 boolean
---@field bSupportsAgent2 boolean
---@field bSupportsAgent3 boolean
---@field bSupportsAgent4 boolean
---@field bSupportsAgent5 boolean
---@field bSupportsAgent6 boolean
---@field bSupportsAgent7 boolean
---@field bSupportsAgent8 boolean
---@field bSupportsAgent9 boolean
---@field bSupportsAgent10 boolean
---@field bSupportsAgent11 boolean
---@field bSupportsAgent12 boolean
---@field bSupportsAgent13 boolean
---@field bSupportsAgent14 boolean
---@field bSupportsAgent15 boolean
FNavAgentSelector = {}



---@class FNavAvoidanceData
FNavAvoidanceData = {}


---@class FNavAvoidanceMask
---@field bGroup0 boolean
---@field bGroup1 boolean
---@field bGroup2 boolean
---@field bGroup3 boolean
---@field bGroup4 boolean
---@field bGroup5 boolean
---@field bGroup6 boolean
---@field bGroup7 boolean
---@field bGroup8 boolean
---@field bGroup9 boolean
---@field bGroup10 boolean
---@field bGroup11 boolean
---@field bGroup12 boolean
---@field bGroup13 boolean
---@field bGroup14 boolean
---@field bGroup15 boolean
---@field bGroup16 boolean
---@field bGroup17 boolean
---@field bGroup18 boolean
---@field bGroup19 boolean
---@field bGroup20 boolean
---@field bGroup21 boolean
---@field bGroup22 boolean
---@field bGroup23 boolean
---@field bGroup24 boolean
---@field bGroup25 boolean
---@field bGroup26 boolean
---@field bGroup27 boolean
---@field bGroup28 boolean
---@field bGroup29 boolean
---@field bGroup30 boolean
---@field bGroup31 boolean
FNavAvoidanceMask = {}



---@class FNavDataConfig : FNavAgentProperties
---@field Name FName
---@field Color FColor
---@field DefaultQueryExtent FVector
---@field NavigationDataClass TSubclassOf<AActor>
---@field NavDataClass TSoftClassPtr<AActor>
FNavDataConfig = {}



---@class FNavigationLink : FNavigationLinkBase
---@field Left FVector
---@field Right FVector
FNavigationLink = {}



---@class FNavigationLinkBase
---@field LeftProjectHeight float
---@field MaxFallDownLength float
---@field SnapRadius float
---@field SnapHeight float
---@field SupportedAgents FNavAgentSelector
---@field bSupportsAgent0 boolean
---@field bSupportsAgent1 boolean
---@field bSupportsAgent2 boolean
---@field bSupportsAgent3 boolean
---@field bSupportsAgent4 boolean
---@field bSupportsAgent5 boolean
---@field bSupportsAgent6 boolean
---@field bSupportsAgent7 boolean
---@field bSupportsAgent8 boolean
---@field bSupportsAgent9 boolean
---@field bSupportsAgent10 boolean
---@field bSupportsAgent11 boolean
---@field bSupportsAgent12 boolean
---@field bSupportsAgent13 boolean
---@field bSupportsAgent14 boolean
---@field bSupportsAgent15 boolean
---@field Direction ENavLinkDirection::Type
---@field bUseSnapHeight boolean
---@field bSnapToCheapestArea boolean
---@field bCustomFlag0 boolean
---@field bCustomFlag1 boolean
---@field bCustomFlag2 boolean
---@field bCustomFlag3 boolean
---@field bCustomFlag4 boolean
---@field bCustomFlag5 boolean
---@field bCustomFlag6 boolean
---@field bCustomFlag7 boolean
---@field AreaClass TSubclassOf<UNavAreaBase>
FNavigationLinkBase = {}



---@class FNavigationSegmentLink : FNavigationLinkBase
---@field LeftStart FVector
---@field LeftEnd FVector
---@field RightStart FVector
---@field RightEnd FVector
FNavigationSegmentLink = {}



---@class FNetDriverDefinition
---@field DefName FName
---@field DriverClassName FName
---@field DriverClassNameFallback FName
FNetDriverDefinition = {}



---@class FNetViewer
---@field Connection UNetConnection
---@field InViewer AActor
---@field ViewTarget AActor
---@field ViewLocation FVector
---@field ViewDir FVector
FNetViewer = {}



---@class FNetworkEmulationProfileDescription
---@field ProfileName FString
---@field Tooltip FString
FNetworkEmulationProfileDescription = {}



---@class FNode
---@field Name FName
---@field ParentName FName
---@field Transform FTransform
---@field DisplayName FString
---@field bAdvanced boolean
FNode = {}



---@class FNodeItem
---@field ParentName FName
---@field Transform FTransform
FNodeItem = {}



---@class FNodeToCodeAssociation
FNodeToCodeAssociation = {}


---@class FOrbitOptions
---@field bProcessDuringSpawn boolean
---@field bProcessDuringUpdate boolean
---@field bUseEmitterTime boolean
FOrbitOptions = {}



---@class FOverlapResult
---@field Actor TWeakObjectPtr<AActor>
---@field Component TWeakObjectPtr<UPrimitiveComponent>
---@field bBlockingHit boolean
FOverlapResult = {}



---@class FPOV
---@field Location FVector
---@field Rotation FRotator
---@field FOV float
FPOV = {}



---@class FPSCPool
---@field FreeElements TArray<FPSCPoolElem>
---@field InUseComponents_Auto TArray<UParticleSystemComponent>
---@field InUseComponents_Manual TArray<UParticleSystemComponent>
FPSCPool = {}



---@class FPSCPoolElem
---@field PSC UParticleSystemComponent
FPSCPoolElem = {}



---@class FPacketSimulationSettings
---@field PktLoss int32
---@field PktLossMaxSize int32
---@field PktLossMinSize int32
---@field PktOrder int32
---@field PktDup int32
---@field PktLag int32
---@field PktLagVariance int32
---@field PktLagMin int32
---@field PktLagMax int32
---@field PktIncomingLagMin int32
---@field PktIncomingLagMax int32
---@field PktIncomingLoss int32
---@field PktJitter int32
FPacketSimulationSettings = {}



---@class FPaintedVertex
---@field Position FVector
---@field Color FColor
---@field Normal FVector4
FPaintedVertex = {}



---@class FParameterChannelNames
---@field R FText
---@field G FText
---@field B FText
---@field A FText
FParameterChannelNames = {}



---@class FParameterGroupData
---@field GroupName FString
---@field GroupSortPriority int32
FParameterGroupData = {}



---@class FParticleBurst
---@field Count int32
---@field CountLow int32
---@field Time float
FParticleBurst = {}



---@class FParticleCurvePair
---@field CurveName FString
---@field CurveObject UObject
FParticleCurvePair = {}



---@class FParticleEditorPromotionSettings
---@field DefaultParticleAsset FFilePath
FParticleEditorPromotionSettings = {}



---@class FParticleEmitterReplayFrame
FParticleEmitterReplayFrame = {}


---@class FParticleEvent_GenerateInfo
---@field Type EParticleEventType
---@field Frequency int32
---@field ParticleFrequency int32
---@field FirstTimeOnly boolean
---@field LastTimeOnly boolean
---@field UseReflectedImpactVector boolean
---@field bUseOrbitOffset boolean
---@field CustomName FName
---@field ParticleModuleEventsToSendToGame TArray<UParticleModuleEventSendToGame>
FParticleEvent_GenerateInfo = {}



---@class FParticleRandomSeedInfo
---@field ParameterName FName
---@field bGetSeedFromInstance boolean
---@field bInstanceSeedIsIndex boolean
---@field bResetSeedOnEmitterLooping boolean
---@field bRandomlySelectSeedArray boolean
---@field RandomSeeds TArray<int32>
FParticleRandomSeedInfo = {}



---@class FParticleReplayTrackKey
---@field Time float
---@field Duration float
---@field ClipIDNumber int32
FParticleReplayTrackKey = {}



---@class FParticleSysParam
---@field Name FName
---@field ParamType EParticleSysParamType
---@field Scalar float
---@field Scalar_Low float
---@field Vector FVector
---@field Vector_Low FVector
---@field Color FColor
---@field Actor AActor
---@field Material UMaterialInterface
FParticleSysParam = {}



---@class FParticleSystemLOD
FParticleSystemLOD = {}


---@class FParticleSystemReplayFrame
FParticleSystemReplayFrame = {}


---@class FParticleSystemWorldManagerTickFunction : FTickFunction
FParticleSystemWorldManagerTickFunction = {}


---@class FPassiveSoundMixModifier
---@field SoundMix USoundMix
---@field MinVolumeThreshold float
---@field MaxVolumeThreshold float
FPassiveSoundMixModifier = {}



---@class FPerBoneBlendWeight
---@field SourceIndex int32
---@field BlendWeight float
FPerBoneBlendWeight = {}



---@class FPerBoneBlendWeights
---@field BoneBlendWeights TArray<FPerBoneBlendWeight>
FPerBoneBlendWeights = {}



---@class FPerBoneInterpolation
---@field BoneReference FBoneReference
---@field InterpolationSpeedPerSec float
FPerBoneInterpolation = {}



---@class FPerPlatformBool
---@field Default boolean
FPerPlatformBool = {}



---@class FPerPlatformFloat
---@field Default float
FPerPlatformFloat = {}



---@class FPerPlatformInt
---@field Default int32
FPerPlatformInt = {}



---@class FPhysicalAnimationData
---@field BodyName FName
---@field bIsLocalSimulation boolean
---@field OrientationStrength float
---@field AngularVelocityStrength float
---@field PositionStrength float
---@field VelocityStrength float
---@field MaxLinearForce float
---@field MaxAngularForce float
FPhysicalAnimationData = {}



---@class FPhysicalAnimationProfile
---@field ProfileName FName
---@field PhysicalAnimationData FPhysicalAnimationData
FPhysicalAnimationProfile = {}



---@class FPhysicalSurfaceName
---@field Type EPhysicalSurface
---@field Name FName
FPhysicalSurfaceName = {}



---@class FPhysicsConstraintProfileHandle
---@field ProfileProperties FConstraintProfileProperties
---@field ProfileName FName
FPhysicsConstraintProfileHandle = {}



---@class FPlatformInterfaceData
---@field DataName FName
---@field Type EPlatformInterfaceDataType
---@field IntValue int32
---@field FloatValue float
---@field StringValue FString
---@field ObjectValue UObject
FPlatformInterfaceData = {}



---@class FPlatformInterfaceDelegateResult
---@field bSuccessful boolean
---@field Data FPlatformInterfaceData
FPlatformInterfaceDelegateResult = {}



---@class FPlayerMuteList
---@field bHasVoiceHandshakeCompleted boolean
---@field VoiceChannelIdx int32
FPlayerMuteList = {}



---@class FPluginRedirect
---@field OldPluginName FString
---@field NewPluginName FString
FPluginRedirect = {}



---@class FPointDamageEvent : FDamageEvent
---@field Damage float
---@field ShotDirection FVector_NetQuantizeNormal
---@field HitInfo FHitResult
FPointDamageEvent = {}



---@class FPointerToUberGraphFrame
FPointerToUberGraphFrame = {}


---@class FPooledCameraShakes
---@field PooledShakes TArray<UCameraShake>
FPooledCameraShakes = {}



---@class FPoseData
---@field LocalSpacePose TArray<FTransform>
---@field TrackToBufferIndex TMap<int32, int32>
---@field CurveData TArray<float>
FPoseData = {}



---@class FPoseDataContainer
---@field PoseNames TArray<FSmartName>
---@field Tracks TArray<FName>
---@field TrackMap TMap<FName, int32>
---@field Poses TArray<FPoseData>
---@field Curves TArray<FAnimCurveBase>
FPoseDataContainer = {}



---@class FPoseLink : FPoseLinkBase
FPoseLink = {}


---@class FPoseLinkBase
---@field LinkID int32
FPoseLinkBase = {}



---@class FPoseSnapshot
---@field LocalTransforms TArray<FTransform>
---@field BoneNames TArray<FName>
---@field SkeletalMeshName FName
---@field SnapshotName FName
---@field bIsValid boolean
FPoseSnapshot = {}



---@class FPostProcessSettings
---@field bOverride_WhiteTemp boolean
---@field bOverride_WhiteTint boolean
---@field bOverride_ColorSaturation boolean
---@field bOverride_ColorContrast boolean
---@field bOverride_ColorGamma boolean
---@field bOverride_ColorGain boolean
---@field bOverride_ColorOffset boolean
---@field bOverride_ColorSaturationShadows boolean
---@field bOverride_ColorContrastShadows boolean
---@field bOverride_ColorGammaShadows boolean
---@field bOverride_ColorGainShadows boolean
---@field bOverride_ColorOffsetShadows boolean
---@field bOverride_ColorSaturationMidtones boolean
---@field bOverride_ColorContrastMidtones boolean
---@field bOverride_ColorGammaMidtones boolean
---@field bOverride_ColorGainMidtones boolean
---@field bOverride_ColorOffsetMidtones boolean
---@field bOverride_ColorSaturationHighlights boolean
---@field bOverride_ColorContrastHighlights boolean
---@field bOverride_ColorGammaHighlights boolean
---@field bOverride_ColorGainHighlights boolean
---@field bOverride_ColorOffsetHighlights boolean
---@field bOverride_ColorCorrectionShadowsMax boolean
---@field bOverride_ColorCorrectionHighlightsMin boolean
---@field bOverride_BlueCorrection boolean
---@field bOverride_ExpandGamut boolean
---@field bOverride_FilmWhitePoint boolean
---@field bOverride_FilmSaturation boolean
---@field bOverride_FilmChannelMixerRed boolean
---@field bOverride_FilmChannelMixerGreen boolean
---@field bOverride_FilmChannelMixerBlue boolean
---@field bOverride_FilmContrast boolean
---@field bOverride_FilmDynamicRange boolean
---@field bOverride_FilmHealAmount boolean
---@field bOverride_FilmToeAmount boolean
---@field bOverride_FilmShadowTint boolean
---@field bOverride_FilmShadowTintBlend boolean
---@field bOverride_FilmShadowTintAmount boolean
---@field bOverride_FilmSlope boolean
---@field bOverride_FilmToe boolean
---@field bOverride_FilmShoulder boolean
---@field bOverride_FilmBlackClip boolean
---@field bOverride_FilmWhiteClip boolean
---@field bOverride_SceneColorTint boolean
---@field bOverride_SceneFringeIntensity boolean
---@field bOverride_ChromaticAberrationStartOffset boolean
---@field bOverride_AmbientCubemapTint boolean
---@field bOverride_AmbientCubemapIntensity boolean
---@field bOverride_BloomMethod boolean
---@field bOverride_BloomIntensity boolean
---@field bOverride_BloomThreshold boolean
---@field bOverride_Bloom1Tint boolean
---@field bOverride_Bloom1Size boolean
---@field bOverride_Bloom2Size boolean
---@field bOverride_Bloom2Tint boolean
---@field bOverride_Bloom3Tint boolean
---@field bOverride_Bloom3Size boolean
---@field bOverride_Bloom4Tint boolean
---@field bOverride_Bloom4Size boolean
---@field bOverride_Bloom5Tint boolean
---@field bOverride_Bloom5Size boolean
---@field bOverride_Bloom6Tint boolean
---@field bOverride_Bloom6Size boolean
---@field bOverride_BloomSizeScale boolean
---@field bOverride_BloomConvolutionTexture boolean
---@field bOverride_BloomConvolutionSize boolean
---@field bOverride_BloomConvolutionCenterUV boolean
---@field bOverride_BloomConvolutionPreFilter boolean
---@field bOverride_BloomConvolutionPreFilterMin boolean
---@field bOverride_BloomConvolutionPreFilterMax boolean
---@field bOverride_BloomConvolutionPreFilterMult boolean
---@field bOverride_BloomConvolutionBufferScale boolean
---@field bOverride_BloomDirtMaskIntensity boolean
---@field bOverride_BloomDirtMaskTint boolean
---@field bOverride_BloomDirtMask boolean
---@field bOverride_CameraShutterSpeed boolean
---@field bOverride_CameraISO boolean
---@field bOverride_AutoExposureMethod boolean
---@field bOverride_AutoExposureLowPercent boolean
---@field bOverride_AutoExposureHighPercent boolean
---@field bOverride_AutoExposureMinBrightness boolean
---@field bOverride_AutoExposureMaxBrightness boolean
---@field bOverride_AutoExposureCalibrationConstant boolean
---@field bOverride_AutoExposureSpeedUp boolean
---@field bOverride_AutoExposureSpeedDown boolean
---@field bOverride_AutoExposureBias boolean
---@field bOverride_AutoExposureBiasCurve boolean
---@field bOverride_AutoExposureMeterMask boolean
---@field bOverride_AutoExposureApplyPhysicalCameraExposure boolean
---@field bOverride_HistogramLogMin boolean
---@field bOverride_HistogramLogMax boolean
---@field bOverride_LensFlareIntensity boolean
---@field bOverride_LensFlareTint boolean
---@field bOverride_LensFlareTints boolean
---@field bOverride_LensFlareBokehSize boolean
---@field bOverride_LensFlareBokehShape boolean
---@field bOverride_LensFlareThreshold boolean
---@field bOverride_VignetteIntensity boolean
---@field bOverride_GrainIntensity boolean
---@field bOverride_GrainJitter boolean
---@field bOverride_AmbientOcclusionIntensity boolean
---@field bOverride_AmbientOcclusionStaticFraction boolean
---@field bOverride_AmbientOcclusionRadius boolean
---@field bOverride_AmbientOcclusionFadeDistance boolean
---@field bOverride_AmbientOcclusionFadeRadius boolean
---@field bOverride_AmbientOcclusionDistance boolean
---@field bOverride_AmbientOcclusionRadiusInWS boolean
---@field bOverride_AmbientOcclusionPower boolean
---@field bOverride_AmbientOcclusionBias boolean
---@field bOverride_AmbientOcclusionQuality boolean
---@field bOverride_AmbientOcclusionMipBlend boolean
---@field bOverride_AmbientOcclusionMipScale boolean
---@field bOverride_AmbientOcclusionMipThreshold boolean
---@field bOverride_RayTracingAO boolean
---@field bOverride_RayTracingAOSamplesPerPixel boolean
---@field bOverride_LPVIntensity boolean
---@field bOverride_LPVDirectionalOcclusionIntensity boolean
---@field bOverride_LPVDirectionalOcclusionRadius boolean
---@field bOverride_LPVDiffuseOcclusionExponent boolean
---@field bOverride_LPVSpecularOcclusionExponent boolean
---@field bOverride_LPVDiffuseOcclusionIntensity boolean
---@field bOverride_LPVSpecularOcclusionIntensity boolean
---@field bOverride_LPVSize boolean
---@field bOverride_LPVSecondaryOcclusionIntensity boolean
---@field bOverride_LPVSecondaryBounceIntensity boolean
---@field bOverride_LPVGeometryVolumeBias boolean
---@field bOverride_LPVVplInjectionBias boolean
---@field bOverride_LPVEmissiveInjectionIntensity boolean
---@field bOverride_LPVFadeRange boolean
---@field bOverride_LPVDirectionalOcclusionFadeRange boolean
---@field bOverride_IndirectLightingColor boolean
---@field bOverride_IndirectLightingIntensity boolean
---@field bOverride_ColorGradingIntensity boolean
---@field bOverride_ColorGradingLUT boolean
---@field bOverride_DepthOfFieldFocalDistance boolean
---@field bOverride_DepthOfFieldFstop boolean
---@field bOverride_DepthOfFieldMinFstop boolean
---@field bOverride_DepthOfFieldBladeCount boolean
---@field bOverride_DepthOfFieldSensorWidth boolean
---@field bOverride_DepthOfFieldDepthBlurRadius boolean
---@field bOverride_DepthOfFieldDepthBlurAmount boolean
---@field bOverride_DepthOfFieldFocalRegion boolean
---@field bOverride_DepthOfFieldNearTransitionRegion boolean
---@field bOverride_DepthOfFieldFarTransitionRegion boolean
---@field bOverride_DepthOfFieldScale boolean
---@field bOverride_DepthOfFieldNearBlurSize boolean
---@field bOverride_DepthOfFieldFarBlurSize boolean
---@field bOverride_MobileHQGaussian boolean
---@field bOverride_DepthOfFieldOcclusion boolean
---@field bOverride_DepthOfFieldSkyFocusDistance boolean
---@field bOverride_DepthOfFieldVignetteSize boolean
---@field bOverride_MotionBlurAmount boolean
---@field bOverride_MotionBlurMax boolean
---@field bOverride_MotionBlurTargetFPS boolean
---@field bOverride_MotionBlurPerObjectSize boolean
---@field bOverride_ScreenPercentage boolean
---@field bOverride_ScreenSpaceReflectionIntensity boolean
---@field bOverride_ScreenSpaceReflectionQuality boolean
---@field bOverride_ScreenSpaceReflectionMaxRoughness boolean
---@field bOverride_ScreenSpaceReflectionRoughnessScale boolean
---@field bOverride_ReflectionsType boolean
---@field bOverride_RayTracingReflectionsMaxRoughness boolean
---@field bOverride_RayTracingReflectionsMaxBounces boolean
---@field bOverride_RayTracingReflectionsSamplesPerPixel boolean
---@field bOverride_RayTracingReflectionsShadows boolean
---@field bOverride_RayTracingReflectionsTranslucency boolean
---@field bOverride_TranslucencyType boolean
---@field bOverride_RayTracingTranslucencyMaxRoughness boolean
---@field bOverride_RayTracingTranslucencyRefractionRays boolean
---@field bOverride_RayTracingTranslucencySamplesPerPixel boolean
---@field bOverride_RayTracingTranslucencyShadows boolean
---@field bOverride_RayTracingTranslucencyRefraction boolean
---@field bOverride_RayTracingGI boolean
---@field bOverride_RayTracingGIMaxBounces boolean
---@field bOverride_RayTracingGISamplesPerPixel boolean
---@field bOverride_PathTracingMaxBounces boolean
---@field bOverride_PathTracingSamplesPerPixel boolean
---@field bMobileHQGaussian boolean
---@field BloomMethod EBloomMethod
---@field AutoExposureMethod EAutoExposureMethod
---@field WhiteTemp float
---@field WhiteTint float
---@field ColorSaturation FVector4
---@field ColorContrast FVector4
---@field ColorGamma FVector4
---@field ColorGain FVector4
---@field ColorOffset FVector4
---@field ColorSaturationShadows FVector4
---@field ColorContrastShadows FVector4
---@field ColorGammaShadows FVector4
---@field ColorGainShadows FVector4
---@field ColorOffsetShadows FVector4
---@field ColorSaturationMidtones FVector4
---@field ColorContrastMidtones FVector4
---@field ColorGammaMidtones FVector4
---@field ColorGainMidtones FVector4
---@field ColorOffsetMidtones FVector4
---@field ColorSaturationHighlights FVector4
---@field ColorContrastHighlights FVector4
---@field ColorGammaHighlights FVector4
---@field ColorGainHighlights FVector4
---@field ColorOffsetHighlights FVector4
---@field ColorCorrectionHighlightsMin float
---@field ColorCorrectionShadowsMax float
---@field BlueCorrection float
---@field ExpandGamut float
---@field FilmSlope float
---@field FilmToe float
---@field FilmShoulder float
---@field FilmBlackClip float
---@field FilmWhiteClip float
---@field FilmWhitePoint FLinearColor
---@field FilmShadowTint FLinearColor
---@field FilmShadowTintBlend float
---@field FilmShadowTintAmount float
---@field FilmSaturation float
---@field FilmChannelMixerRed FLinearColor
---@field FilmChannelMixerGreen FLinearColor
---@field FilmChannelMixerBlue FLinearColor
---@field FilmContrast float
---@field FilmToeAmount float
---@field FilmHealAmount float
---@field FilmDynamicRange float
---@field SceneColorTint FLinearColor
---@field SceneFringeIntensity float
---@field ChromaticAberrationStartOffset float
---@field BloomIntensity float
---@field BloomThreshold float
---@field BloomSizeScale float
---@field Bloom1Size float
---@field Bloom2Size float
---@field Bloom3Size float
---@field Bloom4Size float
---@field Bloom5Size float
---@field Bloom6Size float
---@field Bloom1Tint FLinearColor
---@field Bloom2Tint FLinearColor
---@field Bloom3Tint FLinearColor
---@field Bloom4Tint FLinearColor
---@field Bloom5Tint FLinearColor
---@field Bloom6Tint FLinearColor
---@field BloomConvolutionSize float
---@field BloomConvolutionTexture UTexture2D
---@field BloomConvolutionCenterUV FVector2D
---@field BloomConvolutionPreFilterMin float
---@field BloomConvolutionPreFilterMax float
---@field BloomConvolutionPreFilterMult float
---@field BloomConvolutionBufferScale float
---@field BloomDirtMask UTexture
---@field BloomDirtMaskIntensity float
---@field BloomDirtMaskTint FLinearColor
---@field AmbientCubemapTint FLinearColor
---@field AmbientCubemapIntensity float
---@field AmbientCubemap UTextureCube
---@field CameraShutterSpeed float
---@field CameraISO float
---@field DepthOfFieldFstop float
---@field DepthOfFieldMinFstop float
---@field DepthOfFieldBladeCount int32
---@field AutoExposureBias float
---@field AutoExposureBiasBackup float
---@field bOverride_AutoExposureBiasBackup boolean
---@field AutoExposureApplyPhysicalCameraExposure boolean
---@field AutoExposureBiasCurve UCurveFloat
---@field AutoExposureMeterMask UTexture
---@field AutoExposureLowPercent float
---@field AutoExposureHighPercent float
---@field AutoExposureMinBrightness float
---@field AutoExposureMaxBrightness float
---@field AutoExposureSpeedUp float
---@field AutoExposureSpeedDown float
---@field HistogramLogMin float
---@field HistogramLogMax float
---@field AutoExposureCalibrationConstant float
---@field LensFlareIntensity float
---@field LensFlareTint FLinearColor
---@field LensFlareBokehSize float
---@field LensFlareThreshold float
---@field LensFlareBokehShape UTexture
---@field LensFlareTints FLinearColor
---@field VignetteIntensity float
---@field GrainJitter float
---@field GrainIntensity float
---@field AmbientOcclusionIntensity float
---@field AmbientOcclusionStaticFraction float
---@field AmbientOcclusionRadius float
---@field AmbientOcclusionRadiusInWS boolean
---@field AmbientOcclusionFadeDistance float
---@field AmbientOcclusionFadeRadius float
---@field AmbientOcclusionDistance float
---@field AmbientOcclusionPower float
---@field AmbientOcclusionBias float
---@field AmbientOcclusionQuality float
---@field AmbientOcclusionMipBlend float
---@field AmbientOcclusionMipScale float
---@field AmbientOcclusionMipThreshold float
---@field RayTracingAO boolean
---@field RayTracingAOSamplesPerPixel int32
---@field IndirectLightingColor FLinearColor
---@field IndirectLightingIntensity float
---@field RayTracingGIType ERayTracingGlobalIlluminationType
---@field RayTracingGIMaxBounces int32
---@field RayTracingGISamplesPerPixel int32
---@field ColorGradingIntensity float
---@field ColorGradingLUT UTexture
---@field DepthOfFieldSensorWidth float
---@field DepthOfFieldFocalDistance float
---@field DepthOfFieldDepthBlurAmount float
---@field DepthOfFieldDepthBlurRadius float
---@field DepthOfFieldFocalRegion float
---@field DepthOfFieldNearTransitionRegion float
---@field DepthOfFieldFarTransitionRegion float
---@field DepthOfFieldScale float
---@field DepthOfFieldNearBlurSize float
---@field DepthOfFieldFarBlurSize float
---@field DepthOfFieldOcclusion float
---@field DepthOfFieldSkyFocusDistance float
---@field DepthOfFieldVignetteSize float
---@field MotionBlurAmount float
---@field MotionBlurMax float
---@field MotionBlurTargetFPS int32
---@field MotionBlurPerObjectSize float
---@field LPVIntensity float
---@field LPVVplInjectionBias float
---@field LPVSize float
---@field LPVSecondaryOcclusionIntensity float
---@field LPVSecondaryBounceIntensity float
---@field LPVGeometryVolumeBias float
---@field LPVEmissiveInjectionIntensity float
---@field LPVDirectionalOcclusionIntensity float
---@field LPVDirectionalOcclusionRadius float
---@field LPVDiffuseOcclusionExponent float
---@field LPVSpecularOcclusionExponent float
---@field LPVDiffuseOcclusionIntensity float
---@field LPVSpecularOcclusionIntensity float
---@field ReflectionsType EReflectionsType
---@field ScreenSpaceReflectionIntensity float
---@field ScreenSpaceReflectionQuality float
---@field ScreenSpaceReflectionMaxRoughness float
---@field RayTracingReflectionsMaxRoughness float
---@field RayTracingReflectionsMaxBounces int32
---@field RayTracingReflectionsSamplesPerPixel int32
---@field RayTracingReflectionsShadows EReflectedAndRefractedRayTracedShadows
---@field RayTracingReflectionsTranslucency boolean
---@field TranslucencyType ETranslucencyType
---@field RayTracingTranslucencyMaxRoughness float
---@field RayTracingTranslucencyRefractionRays int32
---@field RayTracingTranslucencySamplesPerPixel int32
---@field RayTracingTranslucencyShadows EReflectedAndRefractedRayTracedShadows
---@field RayTracingTranslucencyRefraction boolean
---@field PathTracingMaxBounces int32
---@field PathTracingSamplesPerPixel int32
---@field LPVFadeRange float
---@field LPVDirectionalOcclusionFadeRange float
---@field ScreenPercentage float
---@field WeightedBlendables FWeightedBlendables
FPostProcessSettings = {}



---@class FPrecomputedLightInstanceData : FSceneComponentInstanceData
---@field Transform FTransform
---@field LightGuid FGuid
---@field PreviewShadowMapChannel int32
FPrecomputedLightInstanceData = {}



---@class FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData
---@field LightGuid FGuid
---@field AverageBrightness float
FPrecomputedSkyLightInstanceData = {}



---@class FPredictProjectilePathParams
---@field StartLocation FVector
---@field LaunchVelocity FVector
---@field bTraceWithCollision boolean
---@field ProjectileRadius float
---@field MaxSimTime float
---@field bTraceWithChannel boolean
---@field TraceChannel ECollisionChannel
---@field ObjectTypes TArray<EObjectTypeQuery>
---@field ActorsToIgnore TArray<AActor>
---@field SimFrequency float
---@field OverrideGravityZ float
---@field DrawDebugType EDrawDebugTrace::Type
---@field DrawDebugTime float
---@field bTraceComplex boolean
FPredictProjectilePathParams = {}



---@class FPredictProjectilePathPointData
---@field Location FVector
---@field Velocity FVector
---@field Time float
FPredictProjectilePathPointData = {}



---@class FPredictProjectilePathResult
---@field PathData TArray<FPredictProjectilePathPointData>
---@field LastTraceDestination FPredictProjectilePathPointData
---@field HitResult FHitResult
FPredictProjectilePathResult = {}



---@class FPreviewAssetAttachContainer
---@field AttachedObjects TArray<FPreviewAttachedObjectPair>
FPreviewAssetAttachContainer = {}



---@class FPreviewAttachedObjectPair
---@field AttachedObject TSoftObjectPtr<UObject>
---@field Object UObject
---@field AttachedTo FName
FPreviewAttachedObjectPair = {}



---@class FPreviewMeshCollectionEntry
---@field SkeletalMesh TSoftObjectPtr<USkeletalMesh>
FPreviewMeshCollectionEntry = {}



---@class FPrimaryAssetRules
---@field Priority int32
---@field ChunkId int32
---@field bApplyRecursively boolean
---@field CookRule EPrimaryAssetCookRule
FPrimaryAssetRules = {}



---@class FPrimaryAssetRulesCustomOverride
---@field PrimaryAssetType FPrimaryAssetType
---@field FilterDirectory FDirectoryPath
---@field FilterString FString
---@field Rules FPrimaryAssetRules
FPrimaryAssetRulesCustomOverride = {}



---@class FPrimaryAssetRulesOverride
---@field PrimaryAssetId FPrimaryAssetId
---@field Rules FPrimaryAssetRules
FPrimaryAssetRulesOverride = {}



---@class FPrimaryAssetTypeInfo
---@field PrimaryAssetType FName
---@field AssetBaseClass TSoftClassPtr<UObject>
---@field AssetBaseClassLoaded UClass
---@field bHasBlueprintClasses boolean
---@field bIsEditorOnly boolean
---@field Directories TArray<FDirectoryPath>
---@field SpecificAssets TArray<FSoftObjectPath>
---@field Rules FPrimaryAssetRules
---@field AssetScanPaths TArray<FString>
---@field bIsDynamicAsset boolean
---@field NumberOfAssets int32
FPrimaryAssetTypeInfo = {}



---@class FPrimitiveComponentInstanceData : FSceneComponentInstanceData
---@field ComponentTransform FTransform
---@field VisibilityId int32
---@field LODParent UPrimitiveComponent
FPrimitiveComponentInstanceData = {}



---@class FPrimitiveMaterialRef
---@field Primitive UPrimitiveComponent
---@field Decal UDecalComponent
---@field ElementIndex int32
FPrimitiveMaterialRef = {}



---@class FPurchaseInfo
---@field Identifier FString
---@field DisplayName FString
---@field DisplayDescription FString
---@field DisplayPrice FString
FPurchaseInfo = {}



---@class FQueuedDrawDebugItem
---@field ItemType EDrawDebugItemType::Type
---@field StartLoc FVector
---@field EndLoc FVector
---@field Center FVector
---@field Rotation FRotator
---@field Radius float
---@field Size float
---@field Segments int32
---@field Color FColor
---@field bPersistentLines boolean
---@field LifeTime float
---@field Thickness float
---@field Message FString
---@field TextScale FVector2D
FQueuedDrawDebugItem = {}



---@class FROscillator
---@field Pitch FFOscillator
---@field Yaw FFOscillator
---@field Roll FFOscillator
FROscillator = {}



---@class FRadialDamageEvent : FDamageEvent
---@field Params FRadialDamageParams
---@field Origin FVector
---@field ComponentHits TArray<FHitResult>
FRadialDamageEvent = {}



---@class FRadialDamageParams
---@field BaseDamage float
---@field MinimumDamage float
---@field InnerRadius float
---@field OuterRadius float
---@field DamageFalloff float
FRadialDamageParams = {}



---@class FRawAnimSequenceTrack
---@field PosKeys TArray<FVector>
---@field RotKeys TArray<FQuat>
---@field ScaleKeys TArray<FVector>
FRawAnimSequenceTrack = {}



---@class FRawCurveTracks
---@field FloatCurves TArray<FFloatCurve>
FRawCurveTracks = {}



---@class FRawDistribution
---@field Table FDistributionLookupTable
FRawDistribution = {}



---@class FRawDistributionFloat : FRawDistribution
---@field MinValue float
---@field MaxValue float
---@field Distribution UDistributionFloat
FRawDistributionFloat = {}



---@class FRawDistributionVector : FRawDistribution
---@field MinValue float
---@field MaxValue float
---@field MinValueVec FVector
---@field MaxValueVec FVector
---@field Distribution UDistributionVector
FRawDistributionVector = {}



---@class FRealCurve : FIndexedCurve
---@field DefaultValue float
---@field PreInfinityExtrap ERichCurveExtrapolation
---@field PostInfinityExtrap ERichCurveExtrapolation
FRealCurve = {}



---@class FRedirector
---@field OldName FName
---@field NewName FName
FRedirector = {}



---@class FReferencePose
---@field PoseName FName
---@field ReferencePose TArray<FTransform>
FReferencePose = {}



---@class FRepAttachment
---@field AttachParent AActor
---@field LocationOffset FVector_NetQuantize100
---@field RelativeScale3D FVector_NetQuantize100
---@field RotationOffset FRotator
---@field AttachSocket FName
---@field AttachComponent USceneComponent
FRepAttachment = {}



---@class FRepMovement
---@field LinearVelocity FVector
---@field AngularVelocity FVector
---@field Location FVector
---@field Rotation FRotator
---@field bSimulatedPhysicSleep boolean
---@field bRepPhysics boolean
---@field LocationQuantizationLevel EVectorQuantization
---@field VelocityQuantizationLevel EVectorQuantization
---@field RotationQuantizationLevel ERotatorQuantization
FRepMovement = {}



---@class FRepRootMotionMontage
---@field bIsActive boolean
---@field AnimMontage UAnimMontage
---@field Position float
---@field Location FVector_NetQuantize100
---@field Rotation FRotator
---@field MovementBase UPrimitiveComponent
---@field MovementBaseBoneName FName
---@field bRelativePosition boolean
---@field bRelativeRotation boolean
---@field AuthoritativeRootMotion FRootMotionSourceGroup
---@field Acceleration FVector_NetQuantize10
---@field LinearVelocity FVector_NetQuantize10
FRepRootMotionMontage = {}



---@class FReplicatedStaticActorDestructionInfo
---@field ObjClass UClass
FReplicatedStaticActorDestructionInfo = {}



---@class FResponseChannel
---@field Channel FName
---@field Response ECollisionResponse
FResponseChannel = {}



---@class FReverbSettings
---@field bApplyReverb boolean
---@field ReverbEffect UReverbEffect
---@field ReverbPluginEffect USoundEffectSubmixPreset
---@field Volume float
---@field FadeTime float
FReverbSettings = {}



---@class FRichCurve : FRealCurve
---@field Keys TArray<FRichCurveKey>
FRichCurve = {}



---@class FRichCurveKey
---@field InterpMode ERichCurveInterpMode
---@field TangentMode ERichCurveTangentMode
---@field TangentWeightMode ERichCurveTangentWeightMode
---@field Time float
---@field Value float
---@field ArriveTangent float
---@field ArriveTangentWeight float
---@field LeaveTangent float
---@field LeaveTangentWeight float
FRichCurveKey = {}



---@class FRigConfiguration
---@field Rig URig
---@field BoneMappingTable TArray<FNameMapping>
FRigConfiguration = {}



---@class FRigTransformConstraint
---@field TranformType EConstraintTransform::Type
---@field ParentSpace FName
---@field Weight float
FRigTransformConstraint = {}



---@class FRigidBodyContactInfo
---@field ContactPosition FVector
---@field ContactNormal FVector
---@field ContactPenetration float
---@field PhysMaterial UPhysicalMaterial
FRigidBodyContactInfo = {}



---@class FRigidBodyErrorCorrection
---@field PingExtrapolation float
---@field PingLimit float
---@field ErrorPerLinearDifference float
---@field ErrorPerAngularDifference float
---@field MaxRestoredStateError float
---@field MaxLinearHardSnapDistance float
---@field PositionLerp float
---@field AngleLerp float
---@field LinearVelocityCoefficient float
---@field AngularVelocityCoefficient float
---@field ErrorAccumulationSeconds float
---@field ErrorAccumulationDistanceSq float
---@field ErrorAccumulationSimilarity float
FRigidBodyErrorCorrection = {}



---@class FRigidBodyState
---@field Position FVector_NetQuantize100
---@field Quaternion FQuat
---@field LinVel FVector_NetQuantize100
---@field AngVel FVector_NetQuantize100
---@field Flags uint8
FRigidBodyState = {}



---@class FRollbackNetStartupActorInfo
---@field Archetype UObject
---@field Level ULevel
---@field ObjReferences TArray<UObject>
FRollbackNetStartupActorInfo = {}



---@class FRootMotionExtractionStep
---@field AnimSequence UAnimSequence
---@field StartPosition float
---@field EndPosition float
FRootMotionExtractionStep = {}



---@class FRootMotionFinishVelocitySettings
---@field Mode ERootMotionFinishVelocityMode
---@field SetVelocity FVector
---@field ClampVelocity float
FRootMotionFinishVelocitySettings = {}



---@class FRootMotionMovementParams
---@field bHasRootMotion boolean
---@field BlendWeight float
---@field RootMotionTransform FTransform
FRootMotionMovementParams = {}



---@class FRootMotionSource
---@field Priority uint16
---@field LocalID uint16
---@field AccumulateMode ERootMotionAccumulateMode
---@field InstanceName FName
---@field StartTime float
---@field CurrentTime float
---@field PreviousTime float
---@field Duration float
---@field Status FRootMotionSourceStatus
---@field Settings FRootMotionSourceSettings
---@field bInLocalSpace boolean
---@field RootMotionParams FRootMotionMovementParams
---@field FinishVelocityParams FRootMotionFinishVelocitySettings
FRootMotionSource = {}



---@class FRootMotionSourceGroup
---@field bHasAdditiveSources boolean
---@field bHasOverrideSources boolean
---@field bHasOverrideSourcesWithIgnoreZAccumulate boolean
---@field bIsAdditiveVelocityApplied boolean
---@field LastAccumulatedSettings FRootMotionSourceSettings
---@field LastPreAdditiveVelocity FVector_NetQuantize10
FRootMotionSourceGroup = {}



---@class FRootMotionSourceSettings
---@field Flags uint8
FRootMotionSourceSettings = {}



---@class FRootMotionSourceStatus
---@field Flags uint8
FRootMotionSourceStatus = {}



---@class FRootMotionSource_ConstantForce : FRootMotionSource
---@field Force FVector
---@field StrengthOverTime UCurveFloat
FRootMotionSource_ConstantForce = {}



---@class FRootMotionSource_JumpForce : FRootMotionSource
---@field Rotation FRotator
---@field Distance float
---@field Height float
---@field bDisableTimeout boolean
---@field PathOffsetCurve UCurveVector
---@field TimeMappingCurve UCurveFloat
FRootMotionSource_JumpForce = {}



---@class FRootMotionSource_MoveToDynamicForce : FRootMotionSource
---@field StartLocation FVector
---@field InitialTargetLocation FVector
---@field TargetLocation FVector
---@field bRestrictSpeedToExpected boolean
---@field PathOffsetCurve UCurveVector
---@field TimeMappingCurve UCurveFloat
FRootMotionSource_MoveToDynamicForce = {}



---@class FRootMotionSource_MoveToForce : FRootMotionSource
---@field StartLocation FVector
---@field TargetLocation FVector
---@field bRestrictSpeedToExpected boolean
---@field PathOffsetCurve UCurveVector
FRootMotionSource_MoveToForce = {}



---@class FRootMotionSource_RadialForce : FRootMotionSource
---@field Location FVector
---@field LocationActor AActor
---@field Radius float
---@field Strength float
---@field bIsPush boolean
---@field bNoZForce boolean
---@field StrengthDistanceFalloff UCurveFloat
---@field StrengthOverTime UCurveFloat
---@field bUseFixedWorldDirection boolean
---@field FixedWorldDirection FRotator
FRootMotionSource_RadialForce = {}



---@class FRotationTrack
---@field RotKeys TArray<FQuat>
---@field Times TArray<float>
FRotationTrack = {}



---@class FRuntimeCurveLinearColor
---@field ColorCurves FRichCurve
---@field ExternalCurve UCurveLinearColor
FRuntimeCurveLinearColor = {}



---@class FRuntimeFloatCurve
---@field EditorCurveData FRichCurve
---@field ExternalCurve UCurveFloat
FRuntimeFloatCurve = {}



---@class FRuntimeVirtualTextureParameterValue
---@field ParameterInfo FMaterialParameterInfo
---@field ParameterValue URuntimeVirtualTexture
---@field ExpressionGUID FGuid
FRuntimeVirtualTextureParameterValue = {}



---@class FScalarMaterialInput : FMaterialInput
FScalarMaterialInput = {}


---@class FScalarParameterAtlasInstanceData
---@field bIsUsedAsAtlasPosition boolean
---@field Curve TSoftObjectPtr<UCurveLinearColor>
---@field Atlas TSoftObjectPtr<UCurveLinearColorAtlas>
FScalarParameterAtlasInstanceData = {}



---@class FScalarParameterValue
---@field ParameterInfo FMaterialParameterInfo
---@field ParameterValue float
---@field ExpressionGUID FGuid
FScalarParameterValue = {}



---@class FScaleTrack
---@field ScaleKeys TArray<FVector>
---@field Times TArray<float>
FScaleTrack = {}



---@class FSceneComponentInstanceData : FActorComponentInstanceData
---@field AttachedInstanceComponents TMap<USceneComponent, FTransform>
FSceneComponentInstanceData = {}



---@class FScreenMessageString
---@field Key uint64
---@field ScreenMessage FString
---@field DisplayColor FColor
---@field TimeToDisplay float
---@field CurrentTimeDisplayed float
---@field TextScale FVector2D
FScreenMessageString = {}



---@class FShadingModelMaterialInput : FMaterialInput
FShadingModelMaterialInput = {}


---@class FSimpleCurve : FRealCurve
---@field InterpMode ERichCurveInterpMode
---@field Keys TArray<FSimpleCurveKey>
FSimpleCurve = {}



---@class FSimpleCurveKey
---@field Time float
---@field Value float
FSimpleCurveKey = {}



---@class FSimpleMemberReference
---@field MemberParent UObject
---@field MemberName FName
---@field MemberGuid FGuid
FSimpleMemberReference = {}



---@class FSimulatedRootMotionReplicatedMove
---@field Time float
---@field RootMotion FRepRootMotionMontage
FSimulatedRootMotionReplicatedMove = {}



---@class FSingleAnimationPlayData
---@field AnimToPlay UAnimationAsset
---@field bSavedLooping boolean
---@field bSavedPlaying boolean
---@field SavedPosition float
---@field SavedPlayRate float
FSingleAnimationPlayData = {}



---@class FSkelMeshComponentLODInfo
---@field HiddenMaterials TArray<boolean>
FSkelMeshComponentLODInfo = {}



---@class FSkelMeshSkinWeightInfo
---@field Bones int32
---@field Weights uint8
FSkelMeshSkinWeightInfo = {}



---@class FSkeletalMaterial
---@field MaterialInterface UMaterialInterface
---@field MaterialSlotName FName
---@field UVChannelData FMeshUVChannelInfo
FSkeletalMaterial = {}



---@class FSkeletalMeshBuildSettings
---@field bRecomputeNormals boolean
---@field bRecomputeTangents boolean
---@field bUseMikkTSpace boolean
---@field bComputeWeightedNormals boolean
---@field bRemoveDegenerates boolean
---@field bUseHighPrecisionTangentBasis boolean
---@field bUseFullPrecisionUVs boolean
---@field bBuildAdjacencyBuffer boolean
---@field ThresholdPosition float
---@field ThresholdTangentNormal float
---@field ThresholdUV float
---@field MorphThresholdPosition float
FSkeletalMeshBuildSettings = {}



---@class FSkeletalMeshClothBuildParams
---@field TargetAsset TWeakObjectPtr<UClothingAssetBase>
---@field TargetLod int32
---@field bRemapParameters boolean
---@field AssetName FString
---@field LODIndex int32
---@field SourceSection int32
---@field bRemoveFromMesh boolean
---@field PhysicsAsset TSoftObjectPtr<UPhysicsAsset>
FSkeletalMeshClothBuildParams = {}



---@class FSkeletalMeshComponentClothTickFunction : FTickFunction
FSkeletalMeshComponentClothTickFunction = {}


---@class FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction
FSkeletalMeshComponentEndPhysicsTickFunction = {}


---@class FSkeletalMeshLODGroupSettings
---@field ScreenSize FPerPlatformFloat
---@field LODHysteresis float
---@field BoneFilterActionOption EBoneFilterActionOption
---@field BoneList TArray<FBoneFilter>
---@field BonesToPrioritize TArray<FName>
---@field WeightOfPrioritization float
---@field BakePose UAnimSequence
---@field ReductionSettings FSkeletalMeshOptimizationSettings
FSkeletalMeshLODGroupSettings = {}



---@class FSkeletalMeshLODInfo
---@field ScreenSize FPerPlatformFloat
---@field LODHysteresis float
---@field LODMaterialMap TArray<int32>
---@field BuildSettings FSkeletalMeshBuildSettings
---@field ReductionSettings FSkeletalMeshOptimizationSettings
---@field BonesToRemove TArray<FBoneReference>
---@field BonesToPrioritize TArray<FBoneReference>
---@field WeightOfPrioritization float
---@field BakePose UAnimSequence
---@field BakePoseOverride UAnimSequence
---@field SourceImportFilename FString
---@field SkinCacheUsage ESkinCacheUsage
---@field bHasBeenSimplified boolean
---@field bHasPerLODVertexColors boolean
---@field bAllowCPUAccess boolean
---@field bSupportUniformlyDistributedSampling boolean
FSkeletalMeshLODInfo = {}



---@class FSkeletalMeshOptimizationSettings
---@field TerminationCriterion SkeletalMeshTerminationCriterion
---@field NumOfTrianglesPercentage float
---@field NumOfVertPercentage float
---@field MaxNumOfTriangles uint32
---@field MaxNumOfVerts uint32
---@field MaxDeviationPercentage float
---@field ReductionMethod SkeletalMeshOptimizationType
---@field SilhouetteImportance SkeletalMeshOptimizationImportance
---@field TextureImportance SkeletalMeshOptimizationImportance
---@field ShadingImportance SkeletalMeshOptimizationImportance
---@field SkinningImportance SkeletalMeshOptimizationImportance
---@field bRemapMorphTargets boolean
---@field bRecalcNormals boolean
---@field WeldingThreshold float
---@field NormalsThreshold float
---@field MaxBonesPerVertex int32
---@field bEnforceBoneBoundaries boolean
---@field VolumeImportance float
---@field bLockEdges boolean
---@field bLockColorBounaries boolean
---@field BaseLOD int32
FSkeletalMeshOptimizationSettings = {}



---@class FSkeletalMeshSamplingBuiltData
---@field WholeMeshBuiltData TArray<FSkeletalMeshSamplingLODBuiltData>
---@field RegionBuiltData TArray<FSkeletalMeshSamplingRegionBuiltData>
FSkeletalMeshSamplingBuiltData = {}



---@class FSkeletalMeshSamplingInfo
---@field Regions TArray<FSkeletalMeshSamplingRegion>
---@field BuiltData FSkeletalMeshSamplingBuiltData
FSkeletalMeshSamplingInfo = {}



---@class FSkeletalMeshSamplingLODBuiltData
FSkeletalMeshSamplingLODBuiltData = {}


---@class FSkeletalMeshSamplingRegion
---@field Name FName
---@field LODIndex int32
---@field bSupportUniformlyDistributedSampling boolean
---@field MaterialFilters TArray<FSkeletalMeshSamplingRegionMaterialFilter>
---@field BoneFilters TArray<FSkeletalMeshSamplingRegionBoneFilter>
FSkeletalMeshSamplingRegion = {}



---@class FSkeletalMeshSamplingRegionBoneFilter
---@field BoneName FName
---@field bIncludeOrExclude boolean
---@field bApplyToChildren boolean
FSkeletalMeshSamplingRegionBoneFilter = {}



---@class FSkeletalMeshSamplingRegionBuiltData
FSkeletalMeshSamplingRegionBuiltData = {}


---@class FSkeletalMeshSamplingRegionMaterialFilter
---@field MaterialName FName
FSkeletalMeshSamplingRegionMaterialFilter = {}



---@class FSkeletonToMeshLinkup
---@field SkeletonToMeshTable TArray<int32>
---@field MeshToSkeletonTable TArray<int32>
FSkeletonToMeshLinkup = {}



---@class FSkinWeightProfileInfo
---@field Name FName
---@field DefaultProfile FPerPlatformBool
---@field DefaultProfileFromLODIndex FPerPlatformInt
FSkinWeightProfileInfo = {}



---@class FSlotAnimationTrack
---@field SlotName FName
---@field AnimTrack FAnimTrack
FSlotAnimationTrack = {}



---@class FSlotEvaluationPose
---@field AdditiveType EAdditiveAnimationType
---@field Weight float
FSlotEvaluationPose = {}



---@class FSmartName
---@field DisplayName FName
FSmartName = {}



---@class FSmartNameContainer
FSmartNameContainer = {}


---@class FSmartNameMapping
FSmartNameMapping = {}


---@class FSolverIterations
---@field SolverIterations int32
---@field JointIterations int32
---@field CollisionIterations int32
---@field SolverPushOutIterations int32
---@field JointPushOutIterations int32
---@field CollisionPushOutIterations int32
FSolverIterations = {}



---@class FSoundAttenuationPluginSettings
---@field SpatializationPluginSettingsArray TArray<USpatializationPluginSourceSettingsBase>
---@field OcclusionPluginSettingsArray TArray<UOcclusionPluginSourceSettingsBase>
---@field ReverbPluginSettingsArray TArray<UReverbPluginSourceSettingsBase>
FSoundAttenuationPluginSettings = {}



---@class FSoundAttenuationSettings : FBaseAttenuationSettings
---@field bAttenuate boolean
---@field bSpatialize boolean
---@field bAttenuateWithLPF boolean
---@field bEnableListenerFocus boolean
---@field bEnableFocusInterpolation boolean
---@field bEnableOcclusion boolean
---@field bUseComplexCollisionForOcclusion boolean
---@field bEnableReverbSend boolean
---@field bEnablePriorityAttenuation boolean
---@field bApplyNormalizationToStereoSounds boolean
---@field bEnableLogFrequencyScaling boolean
---@field bEnableSubmixSends boolean
---@field SpatializationAlgorithm ESoundSpatializationAlgorithm
---@field BinauralRadius float
---@field AbsorptionMethod EAirAbsorptionMethod
---@field OcclusionTraceChannel ECollisionChannel
---@field ReverbSendMethod EReverbSendMethod
---@field PriorityAttenuationMethod EPriorityAttenuationMethod
---@field OmniRadius float
---@field StereoSpread float
---@field LPFRadiusMin float
---@field LPFRadiusMax float
---@field CustomLowpassAirAbsorptionCurve FRuntimeFloatCurve
---@field CustomHighpassAirAbsorptionCurve FRuntimeFloatCurve
---@field LPFFrequencyAtMin float
---@field LPFFrequencyAtMax float
---@field HPFFrequencyAtMin float
---@field HPFFrequencyAtMax float
---@field FocusAzimuth float
---@field NonFocusAzimuth float
---@field FocusDistanceScale float
---@field NonFocusDistanceScale float
---@field FocusPriorityScale float
---@field NonFocusPriorityScale float
---@field FocusVolumeAttenuation float
---@field NonFocusVolumeAttenuation float
---@field FocusAttackInterpSpeed float
---@field FocusReleaseInterpSpeed float
---@field OcclusionLowPassFilterFrequency float
---@field OcclusionVolumeAttenuation float
---@field OcclusionInterpolationTime float
---@field ReverbWetLevelMin float
---@field ReverbWetLevelMax float
---@field ReverbDistanceMin float
---@field ReverbDistanceMax float
---@field ManualReverbSendLevel float
---@field CustomReverbSendCurve FRuntimeFloatCurve
---@field SubmixSendSettings TArray<FAttenuationSubmixSendSettings>
---@field PriorityAttenuationMin float
---@field PriorityAttenuationMax float
---@field PriorityAttenuationDistanceMin float
---@field PriorityAttenuationDistanceMax float
---@field ManualPriorityAttenuation float
---@field CustomPriorityAttenuationCurve FRuntimeFloatCurve
---@field PluginSettings FSoundAttenuationPluginSettings
FSoundAttenuationSettings = {}



---@class FSoundClassAdjuster
---@field SoundClassObject USoundClass
---@field VolumeAdjuster float
---@field PitchAdjuster float
---@field LowPassFilterFrequency float
---@field bApplyToChildren boolean
---@field VoiceCenterChannelVolumeAdjuster float
FSoundClassAdjuster = {}



---@class FSoundClassEditorData
FSoundClassEditorData = {}


---@class FSoundClassProperties
---@field Volume float
---@field Pitch float
---@field LowPassFilterFrequency float
---@field AttenuationDistanceScale float
---@field StereoBleed float
---@field LFEBleed float
---@field VoiceCenterChannelVolume float
---@field RadioFilterVolume float
---@field RadioFilterVolumeThreshold float
---@field bApplyEffects boolean
---@field bAlwaysPlay boolean
---@field bIsUISound boolean
---@field bIsMusic boolean
---@field bCenterChannelOnly boolean
---@field bApplyAmbientVolumes boolean
---@field bReverb boolean
---@field Default2DReverbSendAmount float
---@field OutputTarget EAudioOutputTarget::Type
---@field LoadingBehavior ESoundWaveLoadingBehavior
---@field DefaultSubmix USoundSubmix
FSoundClassProperties = {}



---@class FSoundConcurrencySettings
---@field MaxCount int32
---@field bLimitToOwner boolean
---@field ResolutionRule EMaxConcurrentResolutionRule::Type
---@field VolumeScale float
---@field VolumeScaleAttackTime float
---@field bVolumeScaleCanRelease boolean
---@field VolumeScaleReleaseTime float
---@field VoiceStealReleaseTime float
FSoundConcurrencySettings = {}



---@class FSoundGroup
---@field SoundGroup ESoundGroup
---@field DisplayName FString
---@field bAlwaysDecompressOnLoad boolean
---@field DecompressedDuration float
FSoundGroup = {}



---@class FSoundNodeEditorData
FSoundNodeEditorData = {}


---@class FSoundSourceBusSendInfo
---@field SourceBusSendLevelControlMethod ESourceBusSendLevelControlMethod
---@field SoundSourceBus USoundSourceBus
---@field SendLevel float
---@field MinSendLevel float
---@field MaxSendLevel float
---@field MinSendDistance float
---@field MaxSendDistance float
---@field CustomSendLevelCurve FRuntimeFloatCurve
FSoundSourceBusSendInfo = {}



---@class FSoundSubmixSendInfo
---@field SendLevelControlMethod ESendLevelControlMethod
---@field SoundSubmix USoundSubmixBase
---@field SendLevel float
---@field MinSendLevel float
---@field MaxSendLevel float
---@field MinSendDistance float
---@field MaxSendDistance float
---@field CustomSendLevelCurve FRuntimeFloatCurve
FSoundSubmixSendInfo = {}



---@class FSoundTrackKey
---@field Time float
---@field Volume float
---@field Pitch float
---@field Sound USoundBase
FSoundTrackKey = {}



---@class FSoundWaveEnvelopeDataPerSound
---@field Envelope float
---@field PlaybackTime float
---@field SoundWave USoundWave
FSoundWaveEnvelopeDataPerSound = {}



---@class FSoundWaveEnvelopeTimeData
---@field Amplitude float
---@field TimeSec float
FSoundWaveEnvelopeTimeData = {}



---@class FSoundWaveSpectralData
---@field FrequencyHz float
---@field Magnitude float
---@field NormalizedMagnitude float
FSoundWaveSpectralData = {}



---@class FSoundWaveSpectralDataEntry
---@field Magnitude float
---@field NormalizedMagnitude float
FSoundWaveSpectralDataEntry = {}



---@class FSoundWaveSpectralDataPerSound
---@field SpectralData TArray<FSoundWaveSpectralData>
---@field PlaybackTime float
---@field SoundWave USoundWave
FSoundWaveSpectralDataPerSound = {}



---@class FSoundWaveSpectralTimeData
---@field Data TArray<FSoundWaveSpectralDataEntry>
---@field TimeSec float
FSoundWaveSpectralTimeData = {}



---@class FSourceEffectChainEntry
---@field Preset USoundEffectSourcePreset
---@field bBypass boolean
FSourceEffectChainEntry = {}



---@class FSplineCurves
---@field Position FInterpCurveVector
---@field Rotation FInterpCurveQuat
---@field Scale FInterpCurveVector
---@field ReparamTable FInterpCurveFloat
---@field MetaData USplineMetadata
FSplineCurves = {}



---@class FSplineInstanceData : FSceneComponentInstanceData
---@field bSplineHasBeenEdited boolean
---@field SplineCurves FSplineCurves
---@field SplineCurvesPreUCS FSplineCurves
FSplineInstanceData = {}



---@class FSplineMeshInstanceData : FSceneComponentInstanceData
---@field StartPos FVector
---@field EndPos FVector
---@field StartTangent FVector
---@field EndTangent FVector
FSplineMeshInstanceData = {}



---@class FSplineMeshParams
---@field StartPos FVector
---@field StartTangent FVector
---@field StartScale FVector2D
---@field StartRoll float
---@field StartOffset FVector2D
---@field EndPos FVector
---@field EndScale FVector2D
---@field EndTangent FVector
---@field EndRoll float
---@field EndOffset FVector2D
FSplineMeshParams = {}



---@class FSplinePoint
---@field InputKey float
---@field Position FVector
---@field ArriveTangent FVector
---@field LeaveTangent FVector
---@field Rotation FRotator
---@field Scale FVector
---@field Type ESplinePointType::Type
FSplinePoint = {}



---@class FSpriteCategoryInfo
---@field Category FName
---@field DisplayName FText
---@field Description FText
FSpriteCategoryInfo = {}



---@class FStartPhysicsTickFunction : FTickFunction
FStartPhysicsTickFunction = {}


---@class FStatColorMapEntry
---@field In float
---@field Out FColor
FStatColorMapEntry = {}



---@class FStatColorMapping
---@field StatName FString
---@field ColorMap TArray<FStatColorMapEntry>
---@field DisableBlend boolean
FStatColorMapping = {}



---@class FStateMachineDebugData
FStateMachineDebugData = {}


---@class FStateMachineStateDebugData
FStateMachineStateDebugData = {}


---@class FStaticComponentMaskParameter : FStaticParameterBase
---@field R boolean
---@field G boolean
---@field B boolean
---@field A boolean
FStaticComponentMaskParameter = {}



---@class FStaticMaterial
---@field MaterialInterface UMaterialInterface
---@field MaterialSlotName FName
---@field ImportedMaterialSlotName FName
---@field UVChannelData FMeshUVChannelInfo
FStaticMaterial = {}



---@class FStaticMaterialLayersParameter : FStaticParameterBase
---@field Value FMaterialLayersFunctions
FStaticMaterialLayersParameter = {}



---@class FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData
---@field StaticMesh UStaticMesh
---@field VertexColorLODs TArray<FStaticMeshVertexColorLODData>
---@field CachedStaticLighting TArray<FGuid>
---@field StreamingTextureData TArray<FStreamingTextureBuildInfo>
FStaticMeshComponentInstanceData = {}



---@class FStaticMeshComponentLODInfo
FStaticMeshComponentLODInfo = {}


---@class FStaticMeshOptimizationSettings
---@field ReductionMethod EOptimizationType
---@field NumOfTrianglesPercentage float
---@field MaxDeviationPercentage float
---@field WeldingThreshold float
---@field bRecalcNormals boolean
---@field NormalsThreshold float
---@field SilhouetteImportance uint8
---@field TextureImportance uint8
---@field ShadingImportance uint8
FStaticMeshOptimizationSettings = {}



---@class FStaticMeshSourceModel
---@field BuildSettings FMeshBuildSettings
---@field ReductionSettings FMeshReductionSettings
---@field LODDistance float
---@field ScreenSize FPerPlatformFloat
---@field SourceImportFilename FString
FStaticMeshSourceModel = {}



---@class FStaticMeshVertexColorLODData
---@field PaintedVertices TArray<FPaintedVertex>
---@field VertexBufferColors TArray<FColor>
---@field LODIndex uint32
FStaticMeshVertexColorLODData = {}



---@class FStaticParameterBase
---@field ParameterInfo FMaterialParameterInfo
---@field bOverride boolean
---@field ExpressionGUID FGuid
FStaticParameterBase = {}



---@class FStaticParameterSet
---@field StaticSwitchParameters TArray<FStaticSwitchParameter>
---@field StaticComponentMaskParameters TArray<FStaticComponentMaskParameter>
---@field TerrainLayerWeightParameters TArray<FStaticTerrainLayerWeightParameter>
---@field MaterialLayersParameters TArray<FStaticMaterialLayersParameter>
FStaticParameterSet = {}



---@class FStaticSwitchParameter : FStaticParameterBase
---@field Value boolean
FStaticSwitchParameter = {}



---@class FStaticTerrainLayerWeightParameter : FStaticParameterBase
---@field WeightmapIndex int32
---@field bWeightBasedBlend boolean
FStaticTerrainLayerWeightParameter = {}



---@class FStreamableTextureInstance
FStreamableTextureInstance = {}


---@class FStreamedAudioPlatformData
FStreamedAudioPlatformData = {}


---@class FStreamingLevelsToConsider
---@field StreamingLevels TArray<FLevelStreamingWrapper>
FStreamingLevelsToConsider = {}



---@class FStreamingRenderAssetPrimitiveInfo
---@field RenderAsset UStreamableRenderAsset
---@field Bounds FBoxSphereBounds
---@field TexelFactor float
---@field PackedRelativeBox uint32
---@field bAllowInvalidTexelFactorWhenUnregistered boolean
FStreamingRenderAssetPrimitiveInfo = {}



---@class FStreamingTextureBuildInfo
---@field PackedRelativeBox uint32
---@field TextureLevelIndex int32
---@field TexelFactor float
FStreamingTextureBuildInfo = {}



---@class FStringCurve : FIndexedCurve
---@field DefaultValue FString
---@field Keys TArray<FStringCurveKey>
FStringCurve = {}



---@class FStringCurveKey
---@field Time float
---@field Value FString
FStringCurveKey = {}



---@class FStructRedirect
---@field OldStructName FName
---@field NewStructName FName
FStructRedirect = {}



---@class FSubTrackGroup
---@field GroupName FString
---@field TrackIndices TArray<int32>
---@field bIsCollapsed boolean
---@field bIsSelected boolean
FSubTrackGroup = {}



---@class FSubsurfaceProfileStruct
---@field SurfaceAlbedo FLinearColor
---@field MeanFreePathColor FLinearColor
---@field MeanFreePathDistance float
---@field WorldUnitScale float
---@field bEnableBurley boolean
---@field ScatterRadius float
---@field SubsurfaceColor FLinearColor
---@field FalloffColor FLinearColor
---@field BoundaryColorBleed FLinearColor
---@field ExtinctionScale float
---@field NormalScale float
---@field ScatteringDistribution float
---@field IOR float
---@field Roughness0 float
---@field Roughness1 float
---@field LobeMix float
---@field TransmissionTintColor FLinearColor
FSubsurfaceProfileStruct = {}



---@class FSubtitleCue
---@field Text FText
---@field Time float
FSubtitleCue = {}



---@class FSupportedSubTrackInfo
---@field SupportedClass TSubclassOf<UInterpTrack>
---@field SubTrackName FString
---@field GroupIndex int32
FSupportedSubTrackInfo = {}



---@class FSwarmDebugOptions
---@field bDistributionEnabled boolean
---@field bForceContentExport boolean
---@field bInitialized boolean
FSwarmDebugOptions = {}



---@class FTTEventTrack : FTTTrackBase
---@field FunctionName FName
---@field CurveKeys UCurveFloat
FTTEventTrack = {}



---@class FTTFloatTrack : FTTPropertyTrack
---@field CurveFloat UCurveFloat
FTTFloatTrack = {}



---@class FTTLinearColorTrack : FTTPropertyTrack
---@field CurveLinearColor UCurveLinearColor
FTTLinearColorTrack = {}



---@class FTTPropertyTrack : FTTTrackBase
---@field PropertyName FName
FTTPropertyTrack = {}



---@class FTTTrackBase
---@field TrackName FName
---@field bIsExternalCurve boolean
FTTTrackBase = {}



---@class FTTVectorTrack : FTTPropertyTrack
---@field CurveVector UCurveVector
FTTVectorTrack = {}



---@class FTViewTarget
---@field Target AActor
---@field POV FMinimalViewInfo
---@field PlayerState APlayerState
FTViewTarget = {}



---@class FTableRowBase
FTableRowBase = {}


---@class FTentDistribution
---@field TipAltitude float
---@field TipValue float
---@field Width float
FTentDistribution = {}



---@class FTextSizingParameters
---@field DrawX float
---@field DrawY float
---@field DrawXL float
---@field DrawYL float
---@field Scaling FVector2D
---@field DrawFont UFont
---@field SpacingAdjust FVector2D
FTextSizingParameters = {}



---@class FTextureFormatSettings
---@field CompressionSettings TextureCompressionSettings
---@field CompressionNoAlpha boolean
---@field CompressionNone boolean
---@field CompressionYCoCg boolean
---@field SRGB boolean
FTextureFormatSettings = {}



---@class FTextureLODGroup
---@field Group TextureGroup
---@field LODBias int32
---@field LODBias_Smaller int32
---@field LODBias_Smallest int32
---@field NumStreamedMips int32
---@field MipGenSettings TextureMipGenSettings
---@field MinLODSize int32
---@field MaxLODSize int32
---@field MaxLODSize_Smaller int32
---@field MaxLODSize_Smallest int32
---@field OptionalLODBias int32
---@field OptionalMaxLODSize int32
---@field MinMagFilter FName
---@field MipFilter FName
---@field MipLoadOptions ETextureMipLoadOptions
---@field DuplicateNonOptionalMips boolean
FTextureLODGroup = {}



---@class FTextureParameterValue
---@field ParameterInfo FMaterialParameterInfo
---@field ParameterValue UTexture
---@field ExpressionGUID FGuid
FTextureParameterValue = {}



---@class FTexturePlatformData
FTexturePlatformData = {}


---@class FTextureSource
FTextureSource = {}


---@class FTextureSourceBlock
---@field BlockX int32
---@field BlockY int32
---@field SizeX int32
---@field SizeY int32
---@field NumSlices int32
---@field NumMips int32
FTextureSourceBlock = {}



---@class FTickFunction
---@field TickGroup ETickingGroup
---@field EndTickGroup ETickingGroup
---@field bTickEvenWhenPaused boolean
---@field bCanEverTick boolean
---@field bStartWithTickEnabled boolean
---@field bAllowTickOnDedicatedServer boolean
---@field TickInterval float
FTickFunction = {}



---@class FTickPrerequisite
FTickPrerequisite = {}


---@class FTimeStretchCurve
---@field SamplingRate float
---@field CurveValueMinPrecision float
---@field Markers TArray<FTimeStretchCurveMarker>
---@field Sum_dT_i_by_C_i float
FTimeStretchCurve = {}



---@class FTimeStretchCurveInstance
---@field bHasValidData boolean
FTimeStretchCurveInstance = {}



---@class FTimeStretchCurveMarker
---@field Time float
---@field Alpha float
FTimeStretchCurveMarker = {}



---@class FTimeline
---@field LengthMode ETimelineLengthMode
---@field bLooping boolean
---@field bReversePlayback boolean
---@field bPlaying boolean
---@field Length float
---@field PlayRate float
---@field Position float
---@field Events TArray<FTimelineEventEntry>
---@field InterpVectors TArray<FTimelineVectorTrack>
---@field InterpFloats TArray<FTimelineFloatTrack>
---@field InterpLinearColors TArray<FTimelineLinearColorTrack>
---@field TimelinePostUpdateFunc FTimelineTimelinePostUpdateFunc
---@field TimelineFinishedFunc FTimelineTimelineFinishedFunc
---@field PropertySetObject TWeakObjectPtr<UObject>
---@field DirectionPropertyName FName
FTimeline = {}



---@class FTimelineEventEntry
---@field Time float
---@field EventFunc FTimelineEventEntryEventFunc
FTimelineEventEntry = {}



---@class FTimelineFloatTrack
---@field FloatCurve UCurveFloat
---@field InterpFunc FTimelineFloatTrackInterpFunc
---@field TrackName FName
---@field FloatPropertyName FName
FTimelineFloatTrack = {}



---@class FTimelineLinearColorTrack
---@field LinearColorCurve UCurveLinearColor
---@field InterpFunc FTimelineLinearColorTrackInterpFunc
---@field TrackName FName
---@field LinearColorPropertyName FName
FTimelineLinearColorTrack = {}



---@class FTimelineVectorTrack
---@field VectorCurve UCurveVector
---@field InterpFunc FTimelineVectorTrackInterpFunc
---@field TrackName FName
---@field VectorPropertyName FName
FTimelineVectorTrack = {}



---@class FTimerHandle
---@field Handle uint64
FTimerHandle = {}



---@class FTireFrictionScalePair
---@field TireType UTireType
---@field FrictionScale float
FTireFrictionScalePair = {}



---@class FToggleTrackKey
---@field Time float
---@field ToggleAction ETrackToggleAction
FToggleTrackKey = {}



---@class FTouchInputControl
---@field Image1 UTexture2D
---@field Image2 UTexture2D
---@field Center FVector2D
---@field VisualSize FVector2D
---@field ThumbSize FVector2D
---@field InteractionSize FVector2D
---@field InputScale FVector2D
---@field MainInputKey FKey
---@field AltInputKey FKey
FTouchInputControl = {}



---@class FTrackToSkeletonMap
---@field BoneTreeIndex int32
FTrackToSkeletonMap = {}



---@class FTransformBase
---@field Node FName
---@field Constraints FTransformBaseConstraint
FTransformBase = {}



---@class FTransformBaseConstraint
---@field TransformConstraints TArray<FRigTransformConstraint>
FTransformBaseConstraint = {}



---@class FTransformCurve : FAnimCurveBase
---@field TranslationCurve FVectorCurve
---@field RotationCurve FVectorCurve
---@field ScaleCurve FVectorCurve
FTransformCurve = {}



---@class FTranslationTrack
---@field PosKeys TArray<FVector>
---@field Times TArray<float>
FTranslationTrack = {}



---@class FTwistConstraint : FConstraintBaseParams
---@field TwistLimitDegrees float
---@field TwistMotion EAngularConstraintMotion
FTwistConstraint = {}



---@class FURL
---@field Protocol FString
---@field Host FString
---@field Port int32
---@field Valid int32
---@field Map FString
---@field RedirectURL FString
---@field Op TArray<FString>
---@field Portal FString
FURL = {}



---@class FUniqueNetIdRepl : FUniqueNetIdWrapper
---@field ReplicationBytes TArray<uint8>
FUniqueNetIdRepl = {}



---@class FUpdateLevelStreamingLevelStatus
---@field PackageName FName
---@field LODIndex int32
---@field bNewShouldBeLoaded boolean
---@field bNewShouldBeVisible boolean
---@field bNewShouldBlockOnLoad boolean
FUpdateLevelStreamingLevelStatus = {}



---@class FUpdateLevelVisibilityLevelInfo
---@field PackageName FName
---@field Filename FName
---@field bIsVisible boolean
FUpdateLevelVisibilityLevelInfo = {}



---@class FUserActivity
---@field ActionName FString
FUserActivity = {}



---@class FVOscillator
---@field X FFOscillator
---@field Y FFOscillator
---@field Z FFOscillator
FVOscillator = {}



---@class FVector2MaterialInput : FMaterialInput
FVector2MaterialInput = {}


---@class FVector4Distribution
---@field Table FDistributionLookupTable
FVector4Distribution = {}



---@class FVectorCurve : FAnimCurveBase
---@field FloatCurves FRichCurve
FVectorCurve = {}



---@class FVectorDistribution
---@field Table FDistributionLookupTable
FVectorDistribution = {}



---@class FVectorMaterialInput : FMaterialInput
FVectorMaterialInput = {}


---@class FVectorParameterValue
---@field ParameterInfo FMaterialParameterInfo
---@field ParameterValue FLinearColor
---@field ExpressionGUID FGuid
FVectorParameterValue = {}



---@class FVectorRK4SpringInterpolator
---@field StiffnessConstant float
---@field DampeningRatio float
FVectorRK4SpringInterpolator = {}



---@class FVectorSpringState
FVectorSpringState = {}


---@class FVector_NetQuantize : FVector
FVector_NetQuantize = {}


---@class FVector_NetQuantize10 : FVector
FVector_NetQuantize10 = {}


---@class FVector_NetQuantize100 : FVector
FVector_NetQuantize100 = {}


---@class FVector_NetQuantizeNormal : FVector
FVector_NetQuantizeNormal = {}


---@class FViewTargetTransitionParams
---@field BlendTime float
---@field BlendFunction EViewTargetBlendFunction
---@field BlendExp float
---@field bLockOutgoing boolean
FViewTargetTransitionParams = {}



---@class FVirtualBone
---@field SourceBoneName FName
---@field TargetBoneName FName
---@field VirtualBoneName FName
FVirtualBone = {}



---@class FVirtualTextureBuildSettings
---@field TileSize int32
---@field TileBorderSize int32
---@field bEnableCompressCrunch boolean
---@field bEnableCompressZlib boolean
FVirtualTextureBuildSettings = {}



---@class FVirtualTextureSpacePoolConfig
---@field MinTileSize int32
---@field MaxTileSize int32
---@field Formats TArray<EPixelFormat>
---@field SizeInMegabyte int32
---@field bAllowSizeScale boolean
FVirtualTextureSpacePoolConfig = {}



---@class FVisibilityTrackKey
---@field Time float
---@field Action EVisibilityTrackAction
---@field ActiveCondition EVisibilityTrackCondition
FVisibilityTrackKey = {}



---@class FVoiceSettings
---@field ComponentToAttachTo USceneComponent
---@field AttenuationSettings USoundAttenuation
---@field SourceEffectChain USoundEffectSourcePresetChain
FVoiceSettings = {}



---@class FWalkableSlopeOverride
---@field WalkableSlopeBehavior EWalkableSlopeBehavior
---@field WalkableSlopeAngle float
FWalkableSlopeOverride = {}



---@class FWeightedBlendable
---@field Weight float
---@field Object UObject
FWeightedBlendable = {}



---@class FWeightedBlendables
---@field Array TArray<FWeightedBlendable>
FWeightedBlendables = {}



---@class FWorldContext
---@field LastURL FURL
---@field LastRemoteURL FURL
---@field PendingNetGame UPendingNetGame
---@field PackagesToFullyLoad TArray<FFullyLoadedPackagesInfo>
---@field LoadedLevelsForPendingMapChange TArray<ULevel>
---@field ObjectReferencers TArray<UObjectReferencer>
---@field PendingLevelStreamingStatusUpdates TArray<FLevelStreamingStatus>
---@field GameViewport UGameViewportClient
---@field OwningGameInstance UGameInstance
---@field ActiveNetDrivers TArray<FNamedNetDriver>
FWorldContext = {}



---@class FWorldPSCPool
---@field WorldParticleSystemPools TMap<UParticleSystem, FPSCPool>
FWorldPSCPool = {}



---@class FWrappedStringElement
---@field Value FString
---@field LineExtent FVector2D
FWrappedStringElement = {}



---@class IAnimClassInterface : IInterface
IAnimClassInterface = {}


---@class IAnimLayerInterface : IInterface
IAnimLayerInterface = {}


---@class IBlendableInterface : IInterface
IBlendableInterface = {}


---@class ICurveSourceInterface : IInterface
ICurveSourceInterface = {}

---@param CurveName FName
---@return float
function ICurveSourceInterface:GetCurveValue(CurveName) end
---@param OutValues TArray<FNamedCurveValue>
function ICurveSourceInterface:GetCurves(OutValues) end
---@return FName
function ICurveSourceInterface:GetBindingName() end


---@class IDestructibleInterface : IInterface
IDestructibleInterface = {}


---@class IImportantToggleSettingInterface : IInterface
IImportantToggleSettingInterface = {}


---@class IInterface_AssetUserData : IInterface
IInterface_AssetUserData = {}


---@class IInterface_CollisionDataProvider : IInterface
IInterface_CollisionDataProvider = {}


---@class IInterface_PostProcessVolume : IInterface
IInterface_PostProcessVolume = {}


---@class IInterface_PreviewMeshProvider : IInterface
IInterface_PreviewMeshProvider = {}


---@class ILevelPartitionInterface : IInterface
ILevelPartitionInterface = {}


---@class IMatineeAnimInterface : IInterface
IMatineeAnimInterface = {}


---@class IMatineeInterface : IInterface
IMatineeInterface = {}


---@class INavAgentInterface : IInterface
INavAgentInterface = {}


---@class INavEdgeProviderInterface : IInterface
INavEdgeProviderInterface = {}


---@class INavPathObserverInterface : IInterface
INavPathObserverInterface = {}


---@class INavRelevantInterface : IInterface
INavRelevantInterface = {}


---@class INavigationDataInterface : IInterface
INavigationDataInterface = {}


---@class INetworkPredictionInterface : IInterface
INetworkPredictionInterface = {}


---@class INodeMappingProviderInterface : IInterface
INodeMappingProviderInterface = {}


---@class IPathFollowingAgentInterface : IInterface
IPathFollowingAgentInterface = {}


---@class IPreviewCollectionInterface : IInterface
IPreviewCollectionInterface = {}


---@class IRVOAvoidanceInterface : IInterface
IRVOAvoidanceInterface = {}


---@class ISlateTextureAtlasInterface : IInterface
ISlateTextureAtlasInterface = {}


---@class IVisualLoggerDebugSnapshotInterface : IInterface
IVisualLoggerDebugSnapshotInterface = {}


---@class UAISystemBase : UObject
---@field AISystemClassName FSoftClassPath
---@field AISystemModuleName FName
---@field bInstantiateAISystemOnClient boolean
UAISystemBase = {}



---@class UActorChannel : UChannel
---@field Actor AActor
---@field CreateSubObjects TArray<UObject>
UActorChannel = {}



---@class UActorComponent : UObject
---@field PrimaryComponentTick FActorComponentTickFunction
---@field ComponentTags TArray<FName>
---@field AssetUserData TArray<UAssetUserData>
---@field UCSSerializationIndex int32
---@field bNetAddressable boolean
---@field bReplicates boolean
---@field bAutoActivate boolean
---@field bIsActive boolean
---@field bEditableWhenInherited boolean
---@field bCanEverAffectNavigation boolean
---@field bIsEditorOnly boolean
---@field CreationMethod EComponentCreationMethod
---@field OnComponentActivated FActorComponentOnComponentActivated
---@field OnComponentDeactivated FActorComponentOnComponentDeactivated
---@field UCSModifiedProperties TArray<FSimpleMemberReference>
UActorComponent = {}

function UActorComponent:ToggleActive() end
---@param NewTickGroup ETickingGroup
function UActorComponent:SetTickGroup(NewTickGroup) end
---@param bTickableWhenPaused boolean
function UActorComponent:SetTickableWhenPaused(bTickableWhenPaused) end
---@param ShouldReplicate boolean
function UActorComponent:SetIsReplicated(ShouldReplicate) end
---@param TickInterval float
function UActorComponent:SetComponentTickInterval(TickInterval) end
---@param bEnabled boolean
function UActorComponent:SetComponentTickEnabled(bEnabled) end
---@param bNewAutoActivate boolean
function UActorComponent:SetAutoActivate(bNewAutoActivate) end
---@param bNewActive boolean
---@param bReset boolean
function UActorComponent:SetActive(bNewActive, bReset) end
---@param PrerequisiteComponent UActorComponent
function UActorComponent:RemoveTickPrerequisiteComponent(PrerequisiteComponent) end
---@param PrerequisiteActor AActor
function UActorComponent:RemoveTickPrerequisiteActor(PrerequisiteActor) end
---@param DeltaSeconds float
function UActorComponent:ReceiveTick(DeltaSeconds) end
---@param EndPlayReason EEndPlayReason::Type
function UActorComponent:ReceiveEndPlay(EndPlayReason) end
function UActorComponent:ReceiveBeginPlay() end
function UActorComponent:OnRep_IsActive() end
---@param Object UObject
function UActorComponent:K2_DestroyComponent(Object) end
---@return boolean
function UActorComponent:IsComponentTickEnabled() end
---@return boolean
function UActorComponent:IsBeingDestroyed() end
---@return boolean
function UActorComponent:IsActive() end
---@return AActor
function UActorComponent:GetOwner() end
---@return float
function UActorComponent:GetComponentTickInterval() end
function UActorComponent:Deactivate() end
---@param Tag FName
---@return boolean
function UActorComponent:ComponentHasTag(Tag) end
---@param PrerequisiteComponent UActorComponent
function UActorComponent:AddTickPrerequisiteComponent(PrerequisiteComponent) end
---@param PrerequisiteActor AActor
function UActorComponent:AddTickPrerequisiteActor(PrerequisiteActor) end
---@param bReset boolean
function UActorComponent:Activate(bReset) end


---@class UAimOffsetBlendSpace : UBlendSpace
UAimOffsetBlendSpace = {}


---@class UAimOffsetBlendSpace1D : UBlendSpace1D
UAimOffsetBlendSpace1D = {}


---@class UAnimBlueprint : UBlueprint
---@field TargetSkeleton USkeleton
---@field Groups TArray<FAnimGroupInfo>
---@field bUseMultiThreadedAnimationUpdate boolean
---@field bWarnAboutBlueprintUsage boolean
UAnimBlueprint = {}



---@class UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass
---@field BakedStateMachines TArray<FBakedAnimationStateMachine>
---@field TargetSkeleton USkeleton
---@field AnimNotifies TArray<FAnimNotifyEvent>
---@field OrderedSavedPoseIndicesMap TMap<FName, FCachedPoseIndices>
---@field SyncGroupNames TArray<FName>
---@field EvaluateGraphExposedInputs TArray<FExposedValueHandler>
---@field GraphAssetPlayerInformation TMap<FName, FGraphAssetPlayerInformation>
---@field GraphBlendOptions TMap<FName, FAnimGraphBlendOptions>
UAnimBlueprintGeneratedClass = {}



---@class UAnimBoneCompressionCodec : UObject
---@field Description FString
UAnimBoneCompressionCodec = {}



---@class UAnimBoneCompressionSettings : UObject
---@field Codecs TArray<UAnimBoneCompressionCodec>
UAnimBoneCompressionSettings = {}



---@class UAnimClassData : UObject
---@field BakedStateMachines TArray<FBakedAnimationStateMachine>
---@field TargetSkeleton USkeleton
---@field AnimNotifies TArray<FAnimNotifyEvent>
---@field OrderedSavedPoseIndicesMap TMap<FName, FCachedPoseIndices>
---@field AnimBlueprintFunctions TArray<FAnimBlueprintFunction>
---@field AnimBlueprintFunctionData TArray<FAnimBlueprintFunctionData>
---@field AnimNodeProperties TArray<TFieldPath<FStructProperty>>
---@field LinkedAnimGraphNodeProperties TArray<TFieldPath<FStructProperty>>
---@field LinkedAnimLayerNodeProperties TArray<TFieldPath<FStructProperty>>
---@field PreUpdateNodeProperties TArray<TFieldPath<FStructProperty>>
---@field DynamicResetNodeProperties TArray<TFieldPath<FStructProperty>>
---@field StateMachineNodeProperties TArray<TFieldPath<FStructProperty>>
---@field InitializationNodeProperties TArray<TFieldPath<FStructProperty>>
---@field GraphNameAssetPlayers TMap<FName, FGraphAssetPlayerInformation>
---@field SyncGroupNames TArray<FName>
---@field EvaluateGraphExposedInputs TArray<FExposedValueHandler>
---@field GraphBlendOptions TMap<FName, FAnimGraphBlendOptions>
UAnimClassData = {}



---@class UAnimComposite : UAnimCompositeBase
---@field AnimationTrack FAnimTrack
UAnimComposite = {}



---@class UAnimCompositeBase : UAnimSequenceBase
UAnimCompositeBase = {}


---@class UAnimCompress : UAnimBoneCompressionCodec
---@field bNeedsSkeleton boolean
---@field TranslationCompressionFormat AnimationCompressionFormat
---@field RotationCompressionFormat AnimationCompressionFormat
---@field ScaleCompressionFormat AnimationCompressionFormat
UAnimCompress = {}



---@class UAnimCompress_BitwiseCompressOnly : UAnimCompress
UAnimCompress_BitwiseCompressOnly = {}


---@class UAnimCompress_LeastDestructive : UAnimCompress_BitwiseCompressOnly
UAnimCompress_LeastDestructive = {}


---@class UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys
---@field MaxZeroingThreshold float
---@field MaxPosDiffBitwise float
---@field MaxAngleDiffBitwise float
---@field MaxScaleDiffBitwise float
---@field AllowedRotationFormats TArray<AnimationCompressionFormat>
---@field AllowedTranslationFormats TArray<AnimationCompressionFormat>
---@field AllowedScaleFormats TArray<AnimationCompressionFormat>
---@field bResampleAnimation boolean
---@field ResampledFramerate float
---@field MinKeysForResampling int32
---@field bUseAdaptiveError boolean
---@field bUseOverrideForEndEffectors boolean
---@field TrackHeightBias int32
---@field ParentingDivisor float
---@field ParentingDivisorExponent float
---@field bUseAdaptiveError2 boolean
---@field RotationErrorSourceRatio float
---@field TranslationErrorSourceRatio float
---@field ScaleErrorSourceRatio float
---@field MaxErrorPerTrackRatio float
---@field PerturbationProbeSize float
UAnimCompress_PerTrackCompression = {}



---@class UAnimCompress_RemoveEverySecondKey : UAnimCompress
---@field MinKeys int32
---@field bStartAtSecondKey boolean
UAnimCompress_RemoveEverySecondKey = {}



---@class UAnimCompress_RemoveLinearKeys : UAnimCompress
---@field MaxPosDiff float
---@field MaxAngleDiff float
---@field MaxScaleDiff float
---@field MaxEffectorDiff float
---@field MinEffectorDiff float
---@field EffectorDiffSocket float
---@field ParentKeyScale float
---@field bRetarget boolean
---@field bActuallyFilterLinearKeys boolean
UAnimCompress_RemoveLinearKeys = {}



---@class UAnimCompress_RemoveTrivialKeys : UAnimCompress
---@field MaxPosDiff float
---@field MaxAngleDiff float
---@field MaxScaleDiff float
UAnimCompress_RemoveTrivialKeys = {}



---@class UAnimCurveCompressionCodec : UObject
UAnimCurveCompressionCodec = {}


---@class UAnimCurveCompressionCodec_CompressedRichCurve : UAnimCurveCompressionCodec
UAnimCurveCompressionCodec_CompressedRichCurve = {}


---@class UAnimCurveCompressionCodec_UniformIndexable : UAnimCurveCompressionCodec
UAnimCurveCompressionCodec_UniformIndexable = {}


---@class UAnimCurveCompressionCodec_UniformlySampled : UAnimCurveCompressionCodec
UAnimCurveCompressionCodec_UniformlySampled = {}


---@class UAnimCurveCompressionSettings : UObject
---@field Codec UAnimCurveCompressionCodec
UAnimCurveCompressionSettings = {}



---@class UAnimInstance : UObject
---@field CurrentSkeleton USkeleton
---@field RootMotionMode ERootMotionMode::Type
---@field bUseMultiThreadedAnimationUpdate boolean
---@field bUsingCopyPoseFromMesh boolean
---@field bReceiveNotifiesFromLinkedInstances boolean
---@field bPropagateNotifiesToLinkedInstances boolean
---@field bQueueMontageEvents boolean
---@field OnMontageBlendingOut FAnimInstanceOnMontageBlendingOut
---@field OnMontageStarted FAnimInstanceOnMontageStarted
---@field OnMontageEnded FAnimInstanceOnMontageEnded
---@field OnAllMontageInstancesEnded FAnimInstanceOnAllMontageInstancesEnded
---@field NotifyQueue FAnimNotifyQueue
---@field ActiveAnimNotifyState TArray<FAnimNotifyEvent>
UAnimInstance = {}

---@param bUnlockMovement boolean
---@param UnlockAILogic boolean
function UAnimInstance:UnlockAIResources(bUnlockMovement, UnlockAILogic) end
---@param InClass TSubclassOf<UAnimInstance>
function UAnimInstance:UnlinkAnimClassLayers(InClass) end
---@return APawn
function UAnimInstance:TryGetPawnOwner() end
---@param InBlendOutTime float
---@param SlotNodeName FName
function UAnimInstance:StopSlotAnimation(InBlendOutTime, SlotNodeName) end
---@param Snapshot FPoseSnapshot
function UAnimInstance:SnapshotPose(Snapshot) end
---@param Value ERootMotionMode::Type
function UAnimInstance:SetRootMotionMode(Value) end
---@param bSet boolean
function UAnimInstance:SetReceiveNotifiesFromLinkedInstances(bSet) end
---@param bSet boolean
function UAnimInstance:SetPropagateNotifiesToLinkedInstances(bSet) end
---@param MorphTargetName FName
---@param Value float
function UAnimInstance:SetMorphTarget(MorphTargetName, Value) end
---@param SnapshotName FName
function UAnimInstance:SavePoseSnapshot(SnapshotName) end
---@param InTeleportType ETeleportType
function UAnimInstance:ResetDynamics(InTeleportType) end
---@param Asset UAnimSequenceBase
---@param SlotNodeName FName
---@param BlendInTime float
---@param BlendOutTime float
---@param InPlayRate float
---@param LoopCount int32
---@param BlendOutTriggerTime float
---@param InTimeToStartMontageAt float
---@return UAnimMontage
function UAnimInstance:PlaySlotAnimationAsDynamicMontage(Asset, SlotNodeName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, InTimeToStartMontageAt) end
---@param Asset UAnimSequenceBase
---@param SlotNodeName FName
---@param BlendInTime float
---@param BlendOutTime float
---@param InPlayRate float
---@param LoopCount int32
---@return float
function UAnimInstance:PlaySlotAnimation(Asset, SlotNodeName, BlendInTime, BlendOutTime, InPlayRate, LoopCount) end
---@param InBlendOutTime float
---@param GroupName FName
function UAnimInstance:Montage_StopGroupByName(InBlendOutTime, GroupName) end
---@param InBlendOutTime float
---@param Montage UAnimMontage
function UAnimInstance:Montage_Stop(InBlendOutTime, Montage) end
---@param Montage UAnimMontage
---@param NewPosition float
function UAnimInstance:Montage_SetPosition(Montage, NewPosition) end
---@param Montage UAnimMontage
---@param NewPlayRate float
function UAnimInstance:Montage_SetPlayRate(Montage, NewPlayRate) end
---@param SectionNameToChange FName
---@param NextSection FName
---@param Montage UAnimMontage
function UAnimInstance:Montage_SetNextSection(SectionNameToChange, NextSection, Montage) end
---@param Montage UAnimMontage
function UAnimInstance:Montage_Resume(Montage) end
---@param MontageToPlay UAnimMontage
---@param InPlayRate float
---@param ReturnValueType EMontagePlayReturnType
---@param InTimeToStartMontageAt float
---@param bStopAllMontages boolean
---@return float
function UAnimInstance:Montage_Play(MontageToPlay, InPlayRate, ReturnValueType, InTimeToStartMontageAt, bStopAllMontages) end
---@param Montage UAnimMontage
function UAnimInstance:Montage_Pause(Montage) end
---@param SectionName FName
---@param Montage UAnimMontage
function UAnimInstance:Montage_JumpToSectionsEnd(SectionName, Montage) end
---@param SectionName FName
---@param Montage UAnimMontage
function UAnimInstance:Montage_JumpToSection(SectionName, Montage) end
---@param Montage UAnimMontage
---@return boolean
function UAnimInstance:Montage_IsPlaying(Montage) end
---@param Montage UAnimMontage
---@return boolean
function UAnimInstance:Montage_IsActive(Montage) end
---@param Montage UAnimMontage
---@return float
function UAnimInstance:Montage_GetPosition(Montage) end
---@param Montage UAnimMontage
---@return float
function UAnimInstance:Montage_GetPlayRate(Montage) end
---@param Montage UAnimMontage
---@return boolean
function UAnimInstance:Montage_GetIsStopped(Montage) end
---@param Montage UAnimMontage
---@return FName
function UAnimInstance:Montage_GetCurrentSection(Montage) end
---@param Montage UAnimMontage
---@return float
function UAnimInstance:Montage_GetBlendTime(Montage) end
---@param bLockMovement boolean
---@param LockAILogic boolean
function UAnimInstance:LockAIResources(bLockMovement, LockAILogic) end
---@param InTag FName
---@param InClass TSubclassOf<UAnimInstance>
function UAnimInstance:LinkAnimGraphByTag(InTag, InClass) end
---@param InClass TSubclassOf<UAnimInstance>
function UAnimInstance:LinkAnimClassLayers(InClass) end
---@param InSyncGroupName FName
---@param PreviousMarker FName
---@param NextMarker FName
---@param bRespectMarkerOrder boolean
---@return boolean
function UAnimInstance:IsSyncGroupBetweenMarkers(InSyncGroupName, PreviousMarker, NextMarker, bRespectMarkerOrder) end
---@param Asset UAnimSequenceBase
---@param SlotNodeName FName
---@return boolean
function UAnimInstance:IsPlayingSlotAnimation(Asset, SlotNodeName) end
---@return boolean
function UAnimInstance:IsAnyMontagePlaying() end
---@param SyncGroup FName
---@param MarkerName FName
---@return boolean
function UAnimInstance:HasMarkerBeenHitThisFrame(SyncGroup, MarkerName) end
---@param SyncGroup FName
---@param MarkerName FName
---@param OutMarkerTime float
---@return boolean
function UAnimInstance:GetTimeToClosestMarker(SyncGroup, MarkerName, OutMarkerTime) end
---@param InSyncGroupName FName
---@return FMarkerSyncAnimPosition
function UAnimInstance:GetSyncGroupPosition(InSyncGroupName) end
---@param MachineIndex int32
---@param StateIndex int32
---@return float
function UAnimInstance:GetRelevantAnimTimeRemainingFraction(MachineIndex, StateIndex) end
---@param MachineIndex int32
---@param StateIndex int32
---@return float
function UAnimInstance:GetRelevantAnimTimeRemaining(MachineIndex, StateIndex) end
---@param MachineIndex int32
---@param StateIndex int32
---@return float
function UAnimInstance:GetRelevantAnimTimeFraction(MachineIndex, StateIndex) end
---@param MachineIndex int32
---@param StateIndex int32
---@return float
function UAnimInstance:GetRelevantAnimTime(MachineIndex, StateIndex) end
---@param MachineIndex int32
---@param StateIndex int32
---@return float
function UAnimInstance:GetRelevantAnimLength(MachineIndex, StateIndex) end
---@return boolean
function UAnimInstance:GetReceiveNotifiesFromLinkedInstances() end
---@return boolean
function UAnimInstance:GetPropagateNotifiesToLinkedInstances() end
---@return USkeletalMeshComponent
function UAnimInstance:GetOwningComponent() end
---@return AActor
function UAnimInstance:GetOwningActor() end
---@param InGroup FName
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimLayerInstanceByGroup(InGroup) end
---@param InClass TSubclassOf<UAnimInstance>
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimLayerInstanceByClass(InClass) end
---@param InTag FName
---@param OutLinkedInstances TArray<UAnimInstance>
function UAnimInstance:GetLinkedAnimGraphInstancesByTag(InTag, OutLinkedInstances) end
---@param InTag FName
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimGraphInstanceByTag(InTag) end
---@param MachineIndex int32
---@param TransitionIndex int32
---@return float
function UAnimInstance:GetInstanceTransitionTimeElapsedFraction(MachineIndex, TransitionIndex) end
---@param MachineIndex int32
---@param TransitionIndex int32
---@return float
function UAnimInstance:GetInstanceTransitionTimeElapsed(MachineIndex, TransitionIndex) end
---@param MachineIndex int32
---@param TransitionIndex int32
---@return float
function UAnimInstance:GetInstanceTransitionCrossfadeDuration(MachineIndex, TransitionIndex) end
---@param MachineIndex int32
---@param StateIndex int32
---@return float
function UAnimInstance:GetInstanceStateWeight(MachineIndex, StateIndex) end
---@param MachineIndex int32
---@return float
function UAnimInstance:GetInstanceMachineWeight(MachineIndex) end
---@param MachineIndex int32
---@return float
function UAnimInstance:GetInstanceCurrentStateElapsedTime(MachineIndex) end
---@param AssetPlayerIndex int32
---@return float
function UAnimInstance:GetInstanceAssetPlayerTimeFromEndFraction(AssetPlayerIndex) end
---@param AssetPlayerIndex int32
---@return float
function UAnimInstance:GetInstanceAssetPlayerTimeFromEnd(AssetPlayerIndex) end
---@param AssetPlayerIndex int32
---@return float
function UAnimInstance:GetInstanceAssetPlayerTimeFraction(AssetPlayerIndex) end
---@param AssetPlayerIndex int32
---@return float
function UAnimInstance:GetInstanceAssetPlayerTime(AssetPlayerIndex) end
---@param AssetPlayerIndex int32
---@return float
function UAnimInstance:GetInstanceAssetPlayerLength(AssetPlayerIndex) end
---@param CurveName FName
---@return float
function UAnimInstance:GetCurveValue(CurveName) end
---@param MachineIndex int32
---@return FName
function UAnimInstance:GetCurrentStateName(MachineIndex) end
---@return UAnimMontage
function UAnimInstance:GetCurrentActiveMontage() end
---@param OutNames TArray<FName>
function UAnimInstance:GetAllCurveNames(OutNames) end
---@param CurveType EAnimCurveType
---@param OutNames TArray<FName>
function UAnimInstance:GetActiveCurveNames(CurveType, OutNames) end
function UAnimInstance:ClearMorphTargets() end
---@param Velocity FVector
---@param BaseRotation FRotator
---@return float
function UAnimInstance:CalculateDirection(Velocity, BaseRotation) end
---@param DeltaTimeX float
function UAnimInstance:BlueprintUpdateAnimation(DeltaTimeX) end
function UAnimInstance:BlueprintPostEvaluateAnimation() end
function UAnimInstance:BlueprintLinkedAnimationLayersInitialized() end
function UAnimInstance:BlueprintInitializeAnimation() end
function UAnimInstance:BlueprintBeginPlay() end


---@class UAnimMetaData : UObject
UAnimMetaData = {}


---@class UAnimMontage : UAnimCompositeBase
---@field BlendIn FAlphaBlend
---@field BlendInTime float
---@field BlendOut FAlphaBlend
---@field BlendOutTime float
---@field BlendOutTriggerTime float
---@field SyncGroup FName
---@field SyncSlotIndex int32
---@field MarkerData FMarkerSyncData
---@field CompositeSections TArray<FCompositeSection>
---@field SlotAnimTracks TArray<FSlotAnimationTrack>
---@field BranchingPoints TArray<FBranchingPoint>
---@field bEnableRootMotionTranslation boolean
---@field bEnableRootMotionRotation boolean
---@field bEnableAutoBlendOut boolean
---@field RootMotionRootLock ERootMotionRootLock::Type
---@field BranchingPointMarkers TArray<FBranchingPointMarker>
---@field BranchingPointStateNotifyIndices TArray<int32>
---@field TimeStretchCurve FTimeStretchCurve
---@field TimeStretchCurveName FName
UAnimMontage = {}

---@return float
function UAnimMontage:GetDefaultBlendOutTime() end


---@class UAnimNotify : UObject
UAnimNotify = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAnimNotify:Received_Notify(MeshComp, Animation) end
---@return FString
function UAnimNotify:GetNotifyName() end


---@class UAnimNotifyState : UObject
UAnimNotifyState = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UAnimNotifyState:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAnimNotifyState:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UAnimNotifyState:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end
---@return FString
function UAnimNotifyState:GetNotifyName() end


---@class UAnimNotifyState_DisableRootMotion : UAnimNotifyState
UAnimNotifyState_DisableRootMotion = {}


---@class UAnimNotifyState_TimedParticleEffect : UAnimNotifyState
---@field PSTemplate UParticleSystem
---@field SocketName FName
---@field LocationOffset FVector
---@field RotationOffset FRotator
---@field bDestroyAtEnd boolean
UAnimNotifyState_TimedParticleEffect = {}



---@class UAnimNotifyState_Trail : UAnimNotifyState
---@field PSTemplate UParticleSystem
---@field FirstSocketName FName
---@field SecondSocketName FName
---@field WidthScaleMode ETrailWidthMode
---@field WidthScaleCurve FName
---@field bRecycleSpawnedSystems boolean
UAnimNotifyState_Trail = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return UParticleSystem
function UAnimNotifyState_Trail:OverridePSTemplate(MeshComp, Animation) end


---@class UAnimNotify_PauseClothingSimulation : UAnimNotify
UAnimNotify_PauseClothingSimulation = {}


---@class UAnimNotify_PlayParticleEffect : UAnimNotify
---@field PSTemplate UParticleSystem
---@field LocationOffset FVector
---@field RotationOffset FRotator
---@field Scale FVector
---@field Attached boolean
---@field SocketName FName
UAnimNotify_PlayParticleEffect = {}



---@class UAnimNotify_PlaySound : UAnimNotify
---@field Sound USoundBase
---@field VolumeMultiplier float
---@field PitchMultiplier float
---@field bFollow boolean
---@field AttachName FName
UAnimNotify_PlaySound = {}



---@class UAnimNotify_ResetClothingSimulation : UAnimNotify
UAnimNotify_ResetClothingSimulation = {}


---@class UAnimNotify_ResetDynamics : UAnimNotify
UAnimNotify_ResetDynamics = {}


---@class UAnimNotify_ResumeClothingSimulation : UAnimNotify
UAnimNotify_ResumeClothingSimulation = {}


---@class UAnimSequence : UAnimSequenceBase
---@field NumFrames int32
---@field TrackToSkeletonMapTable TArray<FTrackToSkeletonMap>
---@field BoneCompressionSettings UAnimBoneCompressionSettings
---@field CurveCompressionSettings UAnimCurveCompressionSettings
---@field AdditiveAnimType EAdditiveAnimationType
---@field RefPoseType EAdditiveBasePoseType
---@field RefPoseSeq UAnimSequence
---@field RefFrameIndex int32
---@field RetargetSource FName
---@field Interpolation EAnimInterpolationType
---@field bEnableRootMotion boolean
---@field RootMotionRootLock ERootMotionRootLock::Type
---@field bForceRootLock boolean
---@field bUseNormalizedRootMotionScale boolean
---@field bRootMotionSettingsCopiedFromMontage boolean
---@field AuthoredSyncMarkers TArray<FAnimSyncMarker>
UAnimSequence = {}



---@class UAnimSequenceBase : UAnimationAsset
---@field Notifies TArray<FAnimNotifyEvent>
---@field SequenceLength float
---@field RateScale float
---@field RawCurveData FRawCurveTracks
UAnimSequenceBase = {}

---@return float
function UAnimSequenceBase:GetPlayLength() end


---@class UAnimSet : UObject
---@field bAnimRotationOnly boolean
---@field TrackBoneNames TArray<FName>
---@field LinkupCache TArray<FAnimSetMeshLinkup>
---@field BoneUseAnimTranslation TArray<uint8>
---@field ForceUseMeshTranslation TArray<uint8>
---@field UseTranslationBoneNames TArray<FName>
---@field ForceMeshTranslationBoneNames TArray<FName>
---@field PreviewSkelMeshName FName
---@field BestRatioSkelMeshName FName
UAnimSet = {}



---@class UAnimSingleNodeInstance : UAnimInstance
---@field CurrentAsset UAnimationAsset
---@field PostEvaluateAnimEvent FAnimSingleNodeInstancePostEvaluateAnimEvent
UAnimSingleNodeInstance = {}

function UAnimSingleNodeInstance:StopAnim() end
---@param bInReverse boolean
function UAnimSingleNodeInstance:SetReverse(bInReverse) end
---@param PoseName FName
---@param Value float
---@param bRemoveIfZero boolean
function UAnimSingleNodeInstance:SetPreviewCurveOverride(PoseName, Value, bRemoveIfZero) end
---@param InPosition float
---@param InPreviousTime float
---@param bFireNotifies boolean
function UAnimSingleNodeInstance:SetPositionWithPreviousTime(InPosition, InPreviousTime, bFireNotifies) end
---@param InPosition float
---@param bFireNotifies boolean
function UAnimSingleNodeInstance:SetPosition(InPosition, bFireNotifies) end
---@param InPlayRate float
function UAnimSingleNodeInstance:SetPlayRate(InPlayRate) end
---@param bIsPlaying boolean
function UAnimSingleNodeInstance:SetPlaying(bIsPlaying) end
---@param bIsLooping boolean
function UAnimSingleNodeInstance:SetLooping(bIsLooping) end
---@param InBlendInput FVector
function UAnimSingleNodeInstance:SetBlendSpaceInput(InBlendInput) end
---@param NewAsset UAnimationAsset
---@param bIsLooping boolean
---@param InPlayRate float
function UAnimSingleNodeInstance:SetAnimationAsset(NewAsset, bIsLooping, InPlayRate) end
---@param bIsLooping boolean
---@param InPlayRate float
---@param InStartPosition float
function UAnimSingleNodeInstance:PlayAnim(bIsLooping, InPlayRate, InStartPosition) end
---@return float
function UAnimSingleNodeInstance:GetLength() end
---@return UAnimationAsset
function UAnimSingleNodeInstance:GetAnimationAsset() end


---@class UAnimStateMachineTypes : UObject
UAnimStateMachineTypes = {}


---@class UAnimStreamable : UAnimSequenceBase
---@field NumFrames int32
---@field Interpolation EAnimInterpolationType
---@field RetargetSource FName
---@field BoneCompressionSettings UAnimBoneCompressionSettings
---@field CurveCompressionSettings UAnimCurveCompressionSettings
---@field bEnableRootMotion boolean
---@field RootMotionRootLock ERootMotionRootLock::Type
---@field bForceRootLock boolean
---@field bUseNormalizedRootMotionScale boolean
UAnimStreamable = {}



---@class UAnimationAsset : UObject
---@field Skeleton USkeleton
---@field MetaData TArray<UAnimMetaData>
---@field AssetUserData TArray<UAssetUserData>
UAnimationAsset = {}



---@class UAnimationSettings : UDeveloperSettings
---@field CompressCommandletVersion int32
---@field KeyEndEffectorsMatchNameArray TArray<FString>
---@field ForceRecompression boolean
---@field bOnlyCheckForMissingSkeletalMeshes boolean
---@field bForceBelowThreshold boolean
---@field bFirstRecompressUsingCurrentOrDefault boolean
---@field bRaiseMaxErrorToExisting boolean
---@field bEnablePerformanceLog boolean
---@field bStripAnimationDataOnDedicatedServer boolean
---@field bTickAnimationOnSkeletalMeshInit boolean
UAnimationSettings = {}



---@class UApplicationLifecycleComponent : UActorComponent
---@field ApplicationWillDeactivateDelegate FApplicationLifecycleComponentApplicationWillDeactivateDelegate
---@field ApplicationHasReactivatedDelegate FApplicationLifecycleComponentApplicationHasReactivatedDelegate
---@field ApplicationWillEnterBackgroundDelegate FApplicationLifecycleComponentApplicationWillEnterBackgroundDelegate
---@field ApplicationHasEnteredForegroundDelegate FApplicationLifecycleComponentApplicationHasEnteredForegroundDelegate
---@field ApplicationWillTerminateDelegate FApplicationLifecycleComponentApplicationWillTerminateDelegate
---@field ApplicationShouldUnloadResourcesDelegate FApplicationLifecycleComponentApplicationShouldUnloadResourcesDelegate
---@field ApplicationReceivedStartupArgumentsDelegate FApplicationLifecycleComponentApplicationReceivedStartupArgumentsDelegate
---@field OnTemperatureChangeDelegate FApplicationLifecycleComponentOnTemperatureChangeDelegate
---@field OnLowPowerModeDelegate FApplicationLifecycleComponentOnLowPowerModeDelegate
UApplicationLifecycleComponent = {}



---@class UArrowComponent : UPrimitiveComponent
---@field ArrowColor FColor
---@field ArrowSize float
---@field ScreenSize float
---@field bIsScreenSizeScaled boolean
---@field bTreatAsASprite boolean
UArrowComponent = {}

---@param NewColor FLinearColor
function UArrowComponent:SetArrowColor(NewColor) end


---@class UAssetExportTask : UObject
---@field Object UObject
---@field Exporter UExporter
---@field Filename FString
---@field bSelected boolean
---@field bReplaceIdentical boolean
---@field bPrompt boolean
---@field bAutomated boolean
---@field bUseFileArchive boolean
---@field bWriteEmptyFiles boolean
---@field IgnoreObjectList TArray<UObject>
---@field Options UObject
---@field Errors TArray<FString>
UAssetExportTask = {}



---@class UAssetImportData : UObject
UAssetImportData = {}


---@class UAssetManager : UObject
---@field ObjectReferenceList TArray<UObject>
---@field bIsGlobalAsyncScanEnvironment boolean
---@field bShouldGuessTypeAndName boolean
---@field bShouldUseSynchronousLoad boolean
---@field bIsLoadingFromPakFiles boolean
---@field bShouldAcquireMissingChunksOnLoad boolean
---@field bOnlyCookProductionAssets boolean
---@field bIsBulkScanning boolean
---@field bIsPrimaryAssetDirectoryCurrent boolean
---@field bIsManagementDatabaseCurrent boolean
---@field bUpdateManagementDatabaseAfterScan boolean
---@field bIncludeOnlyOnDiskAssets boolean
---@field NumberOfSpawnedNotifications int32
UAssetManager = {}



---@class UAssetManagerSettings : UDeveloperSettings
---@field PrimaryAssetTypesToScan TArray<FPrimaryAssetTypeInfo>
---@field DirectoriesToExclude TArray<FDirectoryPath>
---@field PrimaryAssetRules TArray<FPrimaryAssetRulesOverride>
---@field CustomPrimaryAssetRules TArray<FPrimaryAssetRulesCustomOverride>
---@field bOnlyCookProductionAssets boolean
---@field bShouldManagerDetermineTypeAndName boolean
---@field bShouldGuessTypeAndNameInEditor boolean
---@field bShouldAcquireMissingChunksOnLoad boolean
---@field PrimaryAssetIdRedirects TArray<FAssetManagerRedirect>
---@field PrimaryAssetTypeRedirects TArray<FAssetManagerRedirect>
---@field AssetPathRedirects TArray<FAssetManagerRedirect>
---@field MetaDataTagsForAssetRegistry TSet<FName>
UAssetManagerSettings = {}



---@class UAssetMappingTable : UObject
---@field MappedAssets TArray<FAssetMapping>
UAssetMappingTable = {}



---@class UAssetUserData : UObject
UAssetUserData = {}


---@class UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase
---@field Completed FAsyncActionChangePrimaryAssetBundlesCompleted
UAsyncActionChangePrimaryAssetBundles = {}

---@param WorldContextObject UObject
---@param PrimaryAssetList TArray<FPrimaryAssetId>
---@param AddBundles TArray<FName>
---@param RemoveBundles TArray<FName>
---@return UAsyncActionChangePrimaryAssetBundles
function UAsyncActionChangePrimaryAssetBundles:AsyncChangeBundleStateForPrimaryAssetList(WorldContextObject, PrimaryAssetList, AddBundles, RemoveBundles) end
---@param WorldContextObject UObject
---@param NewBundles TArray<FName>
---@param OldBundles TArray<FName>
---@return UAsyncActionChangePrimaryAssetBundles
function UAsyncActionChangePrimaryAssetBundles:AsyncChangeBundleStateForMatchingPrimaryAssets(WorldContextObject, NewBundles, OldBundles) end


---@class UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase
---@field Completed FAsyncActionHandleSaveGameCompleted
---@field SaveGameObject USaveGame
UAsyncActionHandleSaveGame = {}

---@param WorldContextObject UObject
---@param SaveGameObject USaveGame
---@param SlotName FString
---@param UserIndex int32
---@return UAsyncActionHandleSaveGame
function UAsyncActionHandleSaveGame:AsyncSaveGameToSlot(WorldContextObject, SaveGameObject, SlotName, UserIndex) end
---@param WorldContextObject UObject
---@param SlotName FString
---@param UserIndex int32
---@return UAsyncActionHandleSaveGame
function UAsyncActionHandleSaveGame:AsyncLoadGameFromSlot(WorldContextObject, SlotName, UserIndex) end


---@class UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase
---@field Completed FAsyncActionLoadPrimaryAssetCompleted
UAsyncActionLoadPrimaryAsset = {}

---@param WorldContextObject UObject
---@param PrimaryAsset FPrimaryAssetId
---@param LoadBundles TArray<FName>
---@return UAsyncActionLoadPrimaryAsset
function UAsyncActionLoadPrimaryAsset:AsyncLoadPrimaryAsset(WorldContextObject, PrimaryAsset, LoadBundles) end


---@class UAsyncActionLoadPrimaryAssetBase : UBlueprintAsyncActionBase
UAsyncActionLoadPrimaryAssetBase = {}


---@class UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase
---@field Completed FAsyncActionLoadPrimaryAssetClassCompleted
UAsyncActionLoadPrimaryAssetClass = {}

---@param WorldContextObject UObject
---@param PrimaryAsset FPrimaryAssetId
---@param LoadBundles TArray<FName>
---@return UAsyncActionLoadPrimaryAssetClass
function UAsyncActionLoadPrimaryAssetClass:AsyncLoadPrimaryAssetClass(WorldContextObject, PrimaryAsset, LoadBundles) end


---@class UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase
---@field Completed FAsyncActionLoadPrimaryAssetClassListCompleted
UAsyncActionLoadPrimaryAssetClassList = {}

---@param WorldContextObject UObject
---@param PrimaryAssetList TArray<FPrimaryAssetId>
---@param LoadBundles TArray<FName>
---@return UAsyncActionLoadPrimaryAssetClassList
function UAsyncActionLoadPrimaryAssetClassList:AsyncLoadPrimaryAssetClassList(WorldContextObject, PrimaryAssetList, LoadBundles) end


---@class UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase
---@field Completed FAsyncActionLoadPrimaryAssetListCompleted
UAsyncActionLoadPrimaryAssetList = {}

---@param WorldContextObject UObject
---@param PrimaryAssetList TArray<FPrimaryAssetId>
---@param LoadBundles TArray<FName>
---@return UAsyncActionLoadPrimaryAssetList
function UAsyncActionLoadPrimaryAssetList:AsyncLoadPrimaryAssetList(WorldContextObject, PrimaryAssetList, LoadBundles) end


---@class UAtmosphericFogComponent : USceneComponent
---@field SunMultiplier float
---@field FogMultiplier float
---@field DensityMultiplier float
---@field DensityOffset float
---@field DistanceScale float
---@field AltitudeScale float
---@field DistanceOffset float
---@field GroundOffset float
---@field StartDistance float
---@field SunDiscScale float
---@field DefaultBrightness float
---@field DefaultLightColor FColor
---@field bDisableSunDisk boolean
---@field bAtmosphereAffectsSunIlluminance boolean
---@field bDisableGroundScattering boolean
---@field PrecomputeParams FAtmospherePrecomputeParameters
---@field TransmittanceTexture UTexture2D
---@field IrradianceTexture UTexture2D
UAtmosphericFogComponent = {}

function UAtmosphericFogComponent:StartPrecompute() end
---@param NewSunMultiplier float
function UAtmosphericFogComponent:SetSunMultiplier(NewSunMultiplier) end
---@param NewStartDistance float
function UAtmosphericFogComponent:SetStartDistance(NewStartDistance) end
---@param DensityHeight float
---@param MaxScatteringOrder int32
---@param InscatterAltitudeSampleNum int32
function UAtmosphericFogComponent:SetPrecomputeParams(DensityHeight, MaxScatteringOrder, InscatterAltitudeSampleNum) end
---@param NewFogMultiplier float
function UAtmosphericFogComponent:SetFogMultiplier(NewFogMultiplier) end
---@param NewDistanceScale float
function UAtmosphericFogComponent:SetDistanceScale(NewDistanceScale) end
---@param NewDistanceOffset float
function UAtmosphericFogComponent:SetDistanceOffset(NewDistanceOffset) end
---@param NewDensityOffset float
function UAtmosphericFogComponent:SetDensityOffset(NewDensityOffset) end
---@param NewDensityMultiplier float
function UAtmosphericFogComponent:SetDensityMultiplier(NewDensityMultiplier) end
---@param NewLightColor FLinearColor
function UAtmosphericFogComponent:SetDefaultLightColor(NewLightColor) end
---@param NewBrightness float
function UAtmosphericFogComponent:SetDefaultBrightness(NewBrightness) end
---@param NewAltitudeScale float
function UAtmosphericFogComponent:SetAltitudeScale(NewAltitudeScale) end
---@param NewSunDisk boolean
function UAtmosphericFogComponent:DisableSunDisk(NewSunDisk) end
---@param NewGroundScattering boolean
function UAtmosphericFogComponent:DisableGroundScattering(NewGroundScattering) end


---@class UAudioComponent : USceneComponent
---@field Sound USoundBase
---@field InstanceParameters TArray<FAudioComponentParam>
---@field SoundClassOverride USoundClass
---@field bAutoDestroy boolean
---@field bStopWhenOwnerDestroyed boolean
---@field bShouldRemainActiveIfDropped boolean
---@field bAllowSpatialization boolean
---@field bOverrideAttenuation boolean
---@field bOverrideSubtitlePriority boolean
---@field bIsUISound boolean
---@field bEnableLowPassFilter boolean
---@field bOverridePriority boolean
---@field bSuppressSubtitles boolean
---@field bAutoManageAttachment boolean
---@field AudioComponentUserID FName
---@field PitchModulationMin float
---@field PitchModulationMax float
---@field VolumeModulationMin float
---@field VolumeModulationMax float
---@field VolumeMultiplier float
---@field EnvelopeFollowerAttackTime int32
---@field EnvelopeFollowerReleaseTime int32
---@field Priority float
---@field SubtitlePriority float
---@field SourceEffectChain USoundEffectSourcePresetChain
---@field PitchMultiplier float
---@field LowPassFilterFrequency float
---@field AttenuationSettings USoundAttenuation
---@field AttenuationOverrides FSoundAttenuationSettings
---@field ConcurrencySettings USoundConcurrency
---@field ConcurrencySet TSet<USoundConcurrency>
---@field AutoAttachLocationRule EAttachmentRule
---@field AutoAttachRotationRule EAttachmentRule
---@field AutoAttachScaleRule EAttachmentRule
---@field OnAudioFinished FAudioComponentOnAudioFinished
---@field OnAudioPlaybackPercent FAudioComponentOnAudioPlaybackPercent
---@field OnAudioSingleEnvelopeValue FAudioComponentOnAudioSingleEnvelopeValue
---@field OnAudioMultiEnvelopeValue FAudioComponentOnAudioMultiEnvelopeValue
---@field Modulation FSoundModulation
---@field OnQueueSubtitles FAudioComponentOnQueueSubtitles
---@field AutoAttachParent TWeakObjectPtr<USceneComponent>
---@field AutoAttachSocketName FName
UAudioComponent = {}

---@param DelayTime float
function UAudioComponent:StopDelayed(DelayTime) end
function UAudioComponent:Stop() end
---@param InName FName
---@param InWave USoundWave
function UAudioComponent:SetWaveParameter(InName, InWave) end
---@param NewVolumeMultiplier float
function UAudioComponent:SetVolumeMultiplier(NewVolumeMultiplier) end
---@param bInUISound boolean
function UAudioComponent:SetUISound(bInUISound) end
---@param Submix USoundSubmixBase
---@param SendLevel float
function UAudioComponent:SetSubmixSend(Submix, SendLevel) end
---@param SoundSourceBus USoundSourceBus
---@param SourceBusSendLevel float
function UAudioComponent:SetSourceBusSendPreEffect(SoundSourceBus, SourceBusSendLevel) end
---@param SoundSourceBus USoundSourceBus
---@param SourceBusSendLevel float
function UAudioComponent:SetSourceBusSendPostEffect(SoundSourceBus, SourceBusSendLevel) end
---@param NewSound USoundBase
function UAudioComponent:SetSound(NewSound) end
---@param NewPitchMultiplier float
function UAudioComponent:SetPitchMultiplier(NewPitchMultiplier) end
---@param bPause boolean
function UAudioComponent:SetPaused(bPause) end
---@param InLowPassFilterFrequency float
function UAudioComponent:SetLowPassFilterFrequency(InLowPassFilterFrequency) end
---@param InLowPassFilterEnabled boolean
function UAudioComponent:SetLowPassFilterEnabled(InLowPassFilterEnabled) end
---@param InName FName
---@param inInt int32
function UAudioComponent:SetIntParameter(InName, inInt) end
---@param InName FName
---@param InFloat float
function UAudioComponent:SetFloatParameter(InName, InFloat) end
---@param InName FName
---@param InBool boolean
function UAudioComponent:SetBoolParameter(InName, InBool) end
---@param StartTime float
function UAudioComponent:Play(StartTime) end
---@return boolean
function UAudioComponent:IsPlaying() end
---@return boolean
function UAudioComponent:HasCookedFFTData() end
---@return boolean
function UAudioComponent:HasCookedAmplitudeEnvelopeData() end
---@return EAudioComponentPlayState
function UAudioComponent:GetPlayState() end
---@param OutSoundWaveSpectralData TArray<FSoundWaveSpectralDataPerSound>
---@return boolean
function UAudioComponent:GetCookedFFTDataForAllPlayingSounds(OutSoundWaveSpectralData) end
---@param FrequenciesToGet TArray<float>
---@param OutSoundWaveSpectralData TArray<FSoundWaveSpectralData>
---@return boolean
function UAudioComponent:GetCookedFFTData(FrequenciesToGet, OutSoundWaveSpectralData) end
---@param OutEnvelopeData TArray<FSoundWaveEnvelopeDataPerSound>
---@return boolean
function UAudioComponent:GetCookedEnvelopeDataForAllPlayingSounds(OutEnvelopeData) end
---@param OutEnvelopeData float
---@return boolean
function UAudioComponent:GetCookedEnvelopeData(OutEnvelopeData) end
---@param FadeOutDuration float
---@param FadeVolumeLevel float
---@param FadeCurve EAudioFaderCurve
function UAudioComponent:FadeOut(FadeOutDuration, FadeVolumeLevel, FadeCurve) end
---@param FadeInDuration float
---@param FadeVolumeLevel float
---@param StartTime float
---@param FadeCurve EAudioFaderCurve
function UAudioComponent:FadeIn(FadeInDuration, FadeVolumeLevel, StartTime, FadeCurve) end
---@param OutAttenuationSettings FSoundAttenuationSettings
---@return boolean
function UAudioComponent:BP_GetAttenuationSettingsToApply(OutAttenuationSettings) end
---@param AdjustVolumeDuration float
---@param AdjustVolumeLevel float
---@param FadeCurve EAudioFaderCurve
function UAudioComponent:AdjustVolume(AdjustVolumeDuration, AdjustVolumeLevel, FadeCurve) end
---@param InAttenuationSettings FSoundAttenuationSettings
function UAudioComponent:AdjustAttenuation(InAttenuationSettings) end


---@class UAudioSettings : UDeveloperSettings
---@field DefaultSoundClassName FSoftObjectPath
---@field DefaultMediaSoundClassName FSoftObjectPath
---@field DefaultSoundConcurrencyName FSoftObjectPath
---@field DefaultBaseSoundMix FSoftObjectPath
---@field VoiPSoundClass FSoftObjectPath
---@field MasterSubmix FSoftObjectPath
---@field ReverbSubmix FSoftObjectPath
---@field EQSubmix FSoftObjectPath
---@field VoiPSampleRate EVoiceSampleRate
---@field DefaultReverbSendLevel float
---@field MaximumConcurrentStreams int32
---@field GlobalMinPitchScale float
---@field GlobalMaxPitchScale float
---@field QualityLevels TArray<FAudioQualitySettings>
---@field bAllowPlayWhenSilent boolean
---@field bDisableMasterEQ boolean
---@field bAllowCenterChannel3DPanning boolean
---@field NumStoppingSources uint32
---@field PanningMethod EPanningMethod
---@field MonoChannelUpmixMethod EMonoChannelUpmixMethod
---@field DialogueFilenameFormat FString
UAudioSettings = {}



---@class UAutoDestroySubsystem : UWorldSubsystem
---@field ActorsToPoll TArray<AActor>
UAutoDestroySubsystem = {}

---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function UAutoDestroySubsystem:OnActorEndPlay(Actor, EndPlayReason) end


---@class UAutomationTestSettings : UObject
---@field EngineTestModules TArray<FString>
---@field EditorTestModules TArray<FString>
---@field AutomationTestmap FSoftObjectPath
---@field EditorPerformanceTestMaps TArray<FEditorMapPerformanceTestDefinition>
---@field AssetsToOpen TArray<FSoftObjectPath>
---@field BuildPromotionTest FBuildPromotionTestSettings
---@field MaterialEditorPromotionTest FMaterialEditorPromotionSettings
---@field ParticleEditorPromotionTest FParticleEditorPromotionSettings
---@field BlueprintEditorPromotionTest FBlueprintEditorPromotionSettings
---@field TestLevelFolders TArray<FString>
---@field ExternalTools TArray<FExternalToolDefinition>
---@field ImportExportTestDefinitions TArray<FEditorImportExportTestDefinition>
---@field LaunchOnSettings TArray<FLaunchOnTestSettings>
---@field DefaultScreenshotResolution FIntPoint
UAutomationTestSettings = {}



---@class UAvoidanceManager : UObject
---@field DefaultTimeToLive float
---@field LockTimeAfterAvoid float
---@field LockTimeAfterClean float
---@field DeltaTimeToPredict float
---@field ArtificialRadiusExpansion float
---@field TestHeightDifference float
---@field HeightCheckMargin float
UAvoidanceManager = {}

---@param MovementComp UMovementComponent
---@param AvoidanceWeight float
---@return boolean
function UAvoidanceManager:RegisterMovementComponent(MovementComp, AvoidanceWeight) end
---@return int32
function UAvoidanceManager:GetObjectCount() end
---@return int32
function UAvoidanceManager:GetNewAvoidanceUID() end
---@param MovementComp UMovementComponent
---@return FVector
function UAvoidanceManager:GetAvoidanceVelocityForComponent(MovementComp) end


---@class UBillboardComponent : UPrimitiveComponent
---@field Sprite UTexture2D
---@field bIsScreenSizeScaled boolean
---@field ScreenSize float
---@field U float
---@field UL float
---@field V float
---@field VL float
UBillboardComponent = {}

---@param NewU int32
---@param NewUL int32
---@param NewV int32
---@param NewVL int32
function UBillboardComponent:SetUV(NewU, NewUL, NewV, NewVL) end
---@param NewSprite UTexture2D
---@param NewU int32
---@param NewUL int32
---@param NewV int32
---@param NewVL int32
function UBillboardComponent:SetSpriteAndUV(NewSprite, NewU, NewUL, NewV, NewVL) end
---@param NewSprite UTexture2D
function UBillboardComponent:SetSprite(NewSprite) end


---@class UBlendProfile : UObject
---@field OwningSkeleton USkeleton
---@field ProfileEntries TArray<FBlendProfileBoneEntry>
UBlendProfile = {}



---@class UBlendSpace : UBlendSpaceBase
---@field AxisToScaleAnimation EBlendSpaceAxis
UBlendSpace = {}



---@class UBlendSpace1D : UBlendSpaceBase
---@field bScaleAnimation boolean
UBlendSpace1D = {}



---@class UBlendSpaceBase : UAnimationAsset
---@field bRotationBlendInMeshSpace boolean
---@field AnimLength float
---@field InterpolationParam FInterpolationParameter
---@field TargetWeightInterpolationSpeedPerSec float
---@field NotifyTriggerMode ENotifyTriggerMode::Type
---@field PerBoneBlend TArray<FPerBoneInterpolation>
---@field SampleIndexWithMarkers int32
---@field SampleData TArray<FBlendSample>
---@field GridSamples TArray<FEditorElement>
---@field BlendParameters FBlendParameter
UBlendSpaceBase = {}



---@class UBlueprint : UBlueprintCore
---@field ParentClass UClass
---@field BlueprintType EBlueprintType
---@field bRecompileOnLoad boolean
---@field bHasBeenRegenerated boolean
---@field bIsRegeneratingOnLoad boolean
---@field BlueprintSystemVersion int32
---@field SimpleConstructionScript USimpleConstructionScript
---@field ComponentTemplates TArray<UActorComponent>
---@field Timelines TArray<UTimelineTemplate>
---@field ComponentClassOverrides TArray<FBPComponentClassOverride>
---@field InheritableComponentHandler UInheritableComponentHandler
UBlueprint = {}



---@class UBlueprintAsyncActionBase : UObject
UBlueprintAsyncActionBase = {}

function UBlueprintAsyncActionBase:Activate() end


---@class UBlueprintCore : UObject
---@field SkeletonGeneratedClass UClass
---@field GeneratedClass UClass
---@field bLegacyNeedToPurgeSkelRefs boolean
---@field BlueprintGuid FGuid
UBlueprintCore = {}



---@class UBlueprintExtension : UObject
UBlueprintExtension = {}


---@class UBlueprintFunctionLibrary : UObject
UBlueprintFunctionLibrary = {}


---@class UBlueprintGeneratedClass : UClass
---@field NumReplicatedProperties int32
---@field bHasNativizedParent boolean
---@field bHasCookedComponentInstancingData boolean
---@field DynamicBindingObjects TArray<UDynamicBlueprintBinding>
---@field ComponentTemplates TArray<UActorComponent>
---@field Timelines TArray<UTimelineTemplate>
---@field ComponentClassOverrides TArray<FBPComponentClassOverride>
---@field SimpleConstructionScript USimpleConstructionScript
---@field InheritableComponentHandler UInheritableComponentHandler
---@field UberGraphFramePointerProperty UStructProperty
---@field UberGraphFunction UFunction
---@field CookedComponentInstancingData TMap<FName, FBlueprintCookedComponentInstancingData>
UBlueprintGeneratedClass = {}



---@class UBlueprintMapLibrary : UBlueprintFunctionLibrary
UBlueprintMapLibrary = {}

---@param Object UObject
---@param PropertyName FName
---@param Value TMap<int32, int32>
function UBlueprintMapLibrary:SetMapPropertyByName(Object, PropertyName, Value) end
---@param TargetMap TMap<int32, int32>
---@param Values TArray<int32>
function UBlueprintMapLibrary:Map_Values(TargetMap, Values) end
---@param TargetMap TMap<int32, int32>
---@param Key int32
---@return boolean
function UBlueprintMapLibrary:Map_Remove(TargetMap, Key) end
---@param TargetMap TMap<int32, int32>
---@return int32
function UBlueprintMapLibrary:Map_Length(TargetMap) end
---@param TargetMap TMap<int32, int32>
---@param Keys TArray<int32>
function UBlueprintMapLibrary:Map_Keys(TargetMap, Keys) end
---@param TargetMap TMap<int32, int32>
---@param Key int32
---@param Value int32
---@return boolean
function UBlueprintMapLibrary:Map_Find(TargetMap, Key, Value) end
---@param TargetMap TMap<int32, int32>
---@param Key int32
---@return boolean
function UBlueprintMapLibrary:Map_Contains(TargetMap, Key) end
---@param TargetMap TMap<int32, int32>
function UBlueprintMapLibrary:Map_Clear(TargetMap) end
---@param TargetMap TMap<int32, int32>
---@param Key int32
---@param Value int32
function UBlueprintMapLibrary:Map_Add(TargetMap, Key, Value) end


---@class UBlueprintPathsLibrary : UBlueprintFunctionLibrary
UBlueprintPathsLibrary = {}

---@return FString
function UBlueprintPathsLibrary:VideoCaptureDir() end
---@param InPath FString
---@param bDidSucceed boolean
---@param OutReason FText
function UBlueprintPathsLibrary:ValidatePath(InPath, bDidSucceed, OutReason) end
---@param InPath FString
---@param PathPart FString
---@param FilenamePart FString
---@param ExtensionPart FString
function UBlueprintPathsLibrary:Split(InPath, PathPart, FilenamePart, ExtensionPart) end
---@return FString
function UBlueprintPathsLibrary:SourceConfigDir() end
---@return boolean
function UBlueprintPathsLibrary:ShouldSaveToUserDir() end
---@return FString
function UBlueprintPathsLibrary:ShaderWorkingDir() end
---@param NewGameProjectFilePath FString
function UBlueprintPathsLibrary:SetProjectFilePath(NewGameProjectFilePath) end
---@param InPath FString
---@param InNewExtension FString
---@return FString
function UBlueprintPathsLibrary:SetExtension(InPath, InNewExtension) end
---@return FString
function UBlueprintPathsLibrary:ScreenShotDir() end
---@return FString
function UBlueprintPathsLibrary:SandboxesDir() end
---@return FString
function UBlueprintPathsLibrary:RootDir() end
---@param InPath FString
---@param OutPath FString
function UBlueprintPathsLibrary:RemoveDuplicateSlashes(InPath, OutPath) end
---@return FString
function UBlueprintPathsLibrary:ProjectUserDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectSavedDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectPluginsDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectPersistentDownloadDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectModsDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectLogDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectIntermediateDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectContentDir() end
---@return FString
function UBlueprintPathsLibrary:ProjectConfigDir() end
---@return FString
function UBlueprintPathsLibrary:ProfilingDir() end
---@param InPath FString
---@param OutPath FString
function UBlueprintPathsLibrary:NormalizeFilename(InPath, OutPath) end
---@param InPath FString
---@param OutPath FString
function UBlueprintPathsLibrary:NormalizeDirectoryName(InPath, OutPath) end
---@param inString FString
---@param InReplacementChar FString
---@return FString
function UBlueprintPathsLibrary:MakeValidFileName(inString, InReplacementChar) end
---@param InPath FString
---@param OutPath FString
function UBlueprintPathsLibrary:MakeStandardFilename(InPath, OutPath) end
---@param InPath FString
---@param OutPath FString
function UBlueprintPathsLibrary:MakePlatformFilename(InPath, OutPath) end
---@param InPath FString
---@param InRelativeTo FString
---@param OutPath FString
---@return boolean
function UBlueprintPathsLibrary:MakePathRelativeTo(InPath, InRelativeTo, OutPath) end
---@return FString
function UBlueprintPathsLibrary:LaunchDir() end
---@param PathA FString
---@param PathB FString
---@return boolean
function UBlueprintPathsLibrary:IsSamePath(PathA, PathB) end
---@param InPath FString
---@return boolean
function UBlueprintPathsLibrary:IsRestrictedPath(InPath) end
---@param InPath FString
---@return boolean
function UBlueprintPathsLibrary:IsRelative(InPath) end
---@return boolean
function UBlueprintPathsLibrary:IsProjectFilePathSet() end
---@param InPath FString
---@return boolean
function UBlueprintPathsLibrary:IsDrive(InPath) end
---@return boolean
function UBlueprintPathsLibrary:HasProjectPersistentDownloadDir() end
---@return TArray<FString>
function UBlueprintPathsLibrary:GetToolTipLocalizationPaths() end
---@return TArray<FString>
function UBlueprintPathsLibrary:GetRestrictedFolderNames() end
---@return FString
function UBlueprintPathsLibrary:GetRelativePathToRoot() end
---@return TArray<FString>
function UBlueprintPathsLibrary:GetPropertyNameLocalizationPaths() end
---@return FString
function UBlueprintPathsLibrary:GetProjectFilePath() end
---@param InPath FString
---@return FString
function UBlueprintPathsLibrary:GetPath(InPath) end
---@return FString
function UBlueprintPathsLibrary:GetInvalidFileSystemChars() end
---@return TArray<FString>
function UBlueprintPathsLibrary:GetGameLocalizationPaths() end
---@param InPath FString
---@param bIncludeDot boolean
---@return FString
function UBlueprintPathsLibrary:GetExtension(InPath, bIncludeDot) end
---@return TArray<FString>
function UBlueprintPathsLibrary:GetEngineLocalizationPaths() end
---@return TArray<FString>
function UBlueprintPathsLibrary:GetEditorLocalizationPaths() end
---@param InPath FString
---@return FString
function UBlueprintPathsLibrary:GetCleanFilename(InPath) end
---@param InPath FString
---@param bRemovePath boolean
---@return FString
function UBlueprintPathsLibrary:GetBaseFilename(InPath, bRemovePath) end
---@return FString
function UBlueprintPathsLibrary:GeneratedConfigDir() end
---@return FString
function UBlueprintPathsLibrary:GameUserDeveloperDir() end
---@return FString
function UBlueprintPathsLibrary:GameSourceDir() end
---@return FString
function UBlueprintPathsLibrary:GameDevelopersDir() end
---@return FString
function UBlueprintPathsLibrary:GameAgnosticSavedDir() end
---@param InPath FString
---@return boolean
function UBlueprintPathsLibrary:FileExists(InPath) end
---@return FString
function UBlueprintPathsLibrary:FeaturePackDir() end
---@return FString
function UBlueprintPathsLibrary:EnterprisePluginsDir() end
---@return FString
function UBlueprintPathsLibrary:EnterpriseFeaturePackDir() end
---@return FString
function UBlueprintPathsLibrary:EnterpriseDir() end
---@return FString
function UBlueprintPathsLibrary:EngineVersionAgnosticUserDir() end
---@return FString
function UBlueprintPathsLibrary:EngineUserDir() end
---@return FString
function UBlueprintPathsLibrary:EngineSourceDir() end
---@return FString
function UBlueprintPathsLibrary:EngineSavedDir() end
---@return FString
function UBlueprintPathsLibrary:EnginePluginsDir() end
---@return FString
function UBlueprintPathsLibrary:EngineIntermediateDir() end
---@return FString
function UBlueprintPathsLibrary:EngineDir() end
---@return FString
function UBlueprintPathsLibrary:EngineContentDir() end
---@return FString
function UBlueprintPathsLibrary:EngineConfigDir() end
---@param InPath FString
---@return boolean
function UBlueprintPathsLibrary:DirectoryExists(InPath) end
---@return FString
function UBlueprintPathsLibrary:DiffDir() end
---@param Path FString
---@param Prefix FString
---@param Extension FString
---@return FString
function UBlueprintPathsLibrary:CreateTempFilename(Path, Prefix, Extension) end
---@param InPath FString
---@param InSandboxName FString
---@return FString
function UBlueprintPathsLibrary:ConvertToSandboxPath(InPath, InSandboxName) end
---@param InPath FString
---@param InBasePath FString
---@return FString
function UBlueprintPathsLibrary:ConvertRelativePathToFull(InPath, InBasePath) end
---@param InPath FString
---@param InSandboxName FString
---@return FString
function UBlueprintPathsLibrary:ConvertFromSandboxPath(InPath, InSandboxName) end
---@param InPaths TArray<FString>
---@return FString
function UBlueprintPathsLibrary:Combine(InPaths) end
---@param InPath FString
---@param OutPath FString
---@return boolean
function UBlueprintPathsLibrary:CollapseRelativeDirectories(InPath, OutPath) end
---@return FString
function UBlueprintPathsLibrary:CloudDir() end
---@param InPath FString
---@param InNewExtension FString
---@return FString
function UBlueprintPathsLibrary:ChangeExtension(InPath, InNewExtension) end
---@return FString
function UBlueprintPathsLibrary:BugItDir() end
---@return FString
function UBlueprintPathsLibrary:AutomationTransientDir() end
---@return FString
function UBlueprintPathsLibrary:AutomationLogDir() end
---@return FString
function UBlueprintPathsLibrary:AutomationDir() end


---@class UBlueprintPlatformLibrary : UBlueprintFunctionLibrary
UBlueprintPlatformLibrary = {}

---@param inSecondsFromNow int32
---@param Title FText
---@param Body FText
---@param Action FText
---@param ActivationEvent FString
---@return int32
function UBlueprintPlatformLibrary:ScheduleLocalNotificationFromNow(inSecondsFromNow, Title, Body, Action, ActivationEvent) end
---@param inSecondsFromNow int32
---@param ActivationEvent FString
function UBlueprintPlatformLibrary:ScheduleLocalNotificationBadgeFromNow(inSecondsFromNow, ActivationEvent) end
---@param FireDateTime FDateTime
---@param LocalTime boolean
---@param ActivationEvent FString
---@return int32
function UBlueprintPlatformLibrary:ScheduleLocalNotificationBadgeAtTime(FireDateTime, LocalTime, ActivationEvent) end
---@param FireDateTime FDateTime
---@param LocalTime boolean
---@param Title FText
---@param Body FText
---@param Action FText
---@param ActivationEvent FString
---@return int32
function UBlueprintPlatformLibrary:ScheduleLocalNotificationAtTime(FireDateTime, LocalTime, Title, Body, Action, ActivationEvent) end
---@param NotificationLaunchedApp boolean
---@param ActivationEvent FString
---@param FireDate int32
function UBlueprintPlatformLibrary:GetLaunchNotification(NotificationLaunchedApp, ActivationEvent, FireDate) end
---@return EScreenOrientation::Type
function UBlueprintPlatformLibrary:GetDeviceOrientation() end
function UBlueprintPlatformLibrary:ClearAllLocalNotifications() end
---@param NotificationId int32
function UBlueprintPlatformLibrary:CancelLocalNotificationById(NotificationId) end
---@param ActivationEvent FString
function UBlueprintPlatformLibrary:CancelLocalNotification(ActivationEvent) end


---@class UBlueprintSetLibrary : UBlueprintFunctionLibrary
UBlueprintSetLibrary = {}

---@param Object UObject
---@param PropertyName FName
---@param Value TSet<int32>
function UBlueprintSetLibrary:SetSetPropertyByName(Object, PropertyName, Value) end
---@param A TSet<int32>
---@param B TSet<int32>
---@param Result TSet<int32>
function UBlueprintSetLibrary:Set_Union(A, B, Result) end
---@param A TSet<int32>
---@param Result TArray<int32>
function UBlueprintSetLibrary:Set_ToArray(A, Result) end
---@param TargetSet TSet<int32>
---@param Items TArray<int32>
function UBlueprintSetLibrary:Set_RemoveItems(TargetSet, Items) end
---@param TargetSet TSet<int32>
---@param Item int32
---@return boolean
function UBlueprintSetLibrary:Set_Remove(TargetSet, Item) end
---@param TargetSet TSet<int32>
---@return int32
function UBlueprintSetLibrary:Set_Length(TargetSet) end
---@param A TSet<int32>
---@param B TSet<int32>
---@param Result TSet<int32>
function UBlueprintSetLibrary:Set_Intersection(A, B, Result) end
---@param A TSet<int32>
---@param B TSet<int32>
---@param Result TSet<int32>
function UBlueprintSetLibrary:Set_Difference(A, B, Result) end
---@param TargetSet TSet<int32>
---@param ItemToFind int32
---@return boolean
function UBlueprintSetLibrary:Set_Contains(TargetSet, ItemToFind) end
---@param TargetSet TSet<int32>
function UBlueprintSetLibrary:Set_Clear(TargetSet) end
---@param TargetSet TSet<int32>
---@param NewItems TArray<int32>
function UBlueprintSetLibrary:Set_AddItems(TargetSet, NewItems) end
---@param TargetSet TSet<int32>
---@param NewItem int32
function UBlueprintSetLibrary:Set_Add(TargetSet, NewItem) end


---@class UBodySetup : UObject
---@field AggGeom FKAggregateGeom
---@field BoneName FName
---@field PhysicsType EPhysicsType
---@field bAlwaysFullAnimWeight boolean
---@field bConsiderForBounds boolean
---@field bMeshCollideAll boolean
---@field bDoubleSidedGeometry boolean
---@field bGenerateNonMirroredCollision boolean
---@field bSharedCookedData boolean
---@field bGenerateMirroredCollision boolean
---@field bSupportUVsAndFaceRemap boolean
---@field CollisionReponse EBodyCollisionResponse::Type
---@field CollisionTraceFlag ECollisionTraceFlag
---@field PhysMaterial UPhysicalMaterial
---@field WalkableSlopeOverride FWalkableSlopeOverride
---@field DefaultInstance FBodyInstance
---@field BuildScale3D FVector
UBodySetup = {}



---@class UBoneMaskFilter : UObject
---@field BlendPoses TArray<FInputBlendPose>
UBoneMaskFilter = {}



---@class UBookMark : UBookmarkBase
---@field Location FVector
---@field Rotation FRotator
---@field HiddenLevels TArray<FString>
UBookMark = {}



---@class UBookMark2D : UBookmarkBase
---@field Zoom2D float
---@field Location FIntPoint
UBookMark2D = {}



---@class UBookmarkBase : UObject
UBookmarkBase = {}


---@class UBoxComponent : UShapeComponent
---@field BoxExtent FVector
---@field LineThickness float
UBoxComponent = {}

---@param InBoxExtent FVector
---@param bUpdateOverlaps boolean
function UBoxComponent:SetBoxExtent(InBoxExtent, bUpdateOverlaps) end
---@return FVector
function UBoxComponent:GetUnscaledBoxExtent() end
---@return FVector
function UBoxComponent:GetScaledBoxExtent() end


---@class UBoxReflectionCaptureComponent : UReflectionCaptureComponent
---@field BoxTransitionDistance float
---@field PreviewInfluenceBox UBoxComponent
---@field PreviewCaptureBox UBoxComponent
UBoxReflectionCaptureComponent = {}



---@class UBreakpoint : UObject
---@field bEnabled boolean
---@field Node UEdGraphNode
---@field bStepOnce boolean
---@field bStepOnce_WasPreviouslyDisabled boolean
---@field bStepOnce_RemoveAfterHit boolean
UBreakpoint = {}



---@class UBrushBuilder : UObject
---@field BitmapFilename FString
---@field Tooltip FString
---@field NotifyBadParams boolean
---@field Vertices TArray<FVector>
---@field Polys TArray<FBuilderPoly>
---@field Layer FName
---@field MergeCoplanars boolean
UBrushBuilder = {}



---@class UBrushComponent : UPrimitiveComponent
---@field Brush UModel
---@field BrushBodySetup UBodySetup
UBrushComponent = {}



---@class UButtonStyleAsset : UObject
---@field ButtonStyle FButtonStyle
UButtonStyleAsset = {}



---@class UCameraAnim : UObject
---@field CameraInterpGroup UInterpGroup
---@field AnimLength float
---@field BoundingBox FBox
---@field bRelativeToInitialTransform boolean
---@field bRelativeToInitialFOV boolean
---@field BaseFOV float
---@field BasePostProcessSettings FPostProcessSettings
---@field BasePostProcessBlendWeight float
UCameraAnim = {}



---@class UCameraAnimInst : UObject
---@field CamAnim UCameraAnim
---@field InterpGroupInst UInterpGroupInst
---@field PlayRate float
---@field MoveTrack UInterpTrackMove
---@field MoveInst UInterpTrackInstMove
---@field PlaySpace ECameraAnimPlaySpace::Type
UCameraAnimInst = {}

---@param bImmediate boolean
function UCameraAnimInst:Stop(bImmediate) end
---@param NewDuration float
function UCameraAnimInst:SetScale(NewDuration) end
---@param NewDuration float
function UCameraAnimInst:SetDuration(NewDuration) end


---@class UCameraComponent : USceneComponent
---@field FieldOfView float
---@field OrthoWidth float
---@field OrthoNearClipPlane float
---@field OrthoFarClipPlane float
---@field AspectRatio float
---@field bConstrainAspectRatio boolean
---@field bUseFieldOfViewForLOD boolean
---@field bLockToHmd boolean
---@field bUsePawnControlRotation boolean
---@field ProjectionMode ECameraProjectionMode::Type
---@field PostProcessBlendWeight float
---@field PostProcessSettings FPostProcessSettings
UCameraComponent = {}

---@param bInUseFieldOfViewForLOD boolean
function UCameraComponent:SetUseFieldOfViewForLOD(bInUseFieldOfViewForLOD) end
---@param InProjectionMode ECameraProjectionMode::Type
function UCameraComponent:SetProjectionMode(InProjectionMode) end
---@param InPostProcessBlendWeight float
function UCameraComponent:SetPostProcessBlendWeight(InPostProcessBlendWeight) end
---@param InOrthoWidth float
function UCameraComponent:SetOrthoWidth(InOrthoWidth) end
---@param InOrthoNearClipPlane float
function UCameraComponent:SetOrthoNearClipPlane(InOrthoNearClipPlane) end
---@param InOrthoFarClipPlane float
function UCameraComponent:SetOrthoFarClipPlane(InOrthoFarClipPlane) end
---@param InFieldOfView float
function UCameraComponent:SetFieldOfView(InFieldOfView) end
---@param bInConstrainAspectRatio boolean
function UCameraComponent:SetConstraintAspectRatio(bInConstrainAspectRatio) end
---@param InAspectRatio float
function UCameraComponent:SetAspectRatio(InAspectRatio) end
---@param InBlendableObject TScriptInterface<IBlendableInterface>
function UCameraComponent:RemoveBlendable(InBlendableObject) end
function UCameraComponent:OnCameraMeshHiddenChanged() end
---@param DeltaTime float
---@param DesiredView FMinimalViewInfo
function UCameraComponent:GetCameraView(DeltaTime, DesiredView) end
---@param InBlendableObject TScriptInterface<IBlendableInterface>
---@param InWeight float
function UCameraComponent:AddOrUpdateBlendable(InBlendableObject, InWeight) end


---@class UCameraModifier : UObject
---@field bDebug boolean
---@field bExclusive boolean
---@field Priority uint8
---@field CameraOwner APlayerCameraManager
---@field AlphaInTime float
---@field AlphaOutTime float
---@field Alpha float
UCameraModifier = {}

---@return boolean
function UCameraModifier:IsDisabled() end
---@return AActor
function UCameraModifier:GetViewTarget() end
function UCameraModifier:EnableModifier() end
---@param bImmediate boolean
function UCameraModifier:DisableModifier(bImmediate) end
---@param DeltaTime float
---@param PostProcessBlendWeight float
---@param PostProcessSettings FPostProcessSettings
function UCameraModifier:BlueprintModifyPostProcess(DeltaTime, PostProcessBlendWeight, PostProcessSettings) end
---@param DeltaTime float
---@param ViewLocation FVector
---@param ViewRotation FRotator
---@param FOV float
---@param NewViewLocation FVector
---@param NewViewRotation FRotator
---@param NewFOV float
function UCameraModifier:BlueprintModifyCamera(DeltaTime, ViewLocation, ViewRotation, FOV, NewViewLocation, NewViewRotation, NewFOV) end


---@class UCameraModifier_CameraShake : UCameraModifier
---@field ActiveShakes TArray<FActiveCameraShakeInfo>
---@field ExpiredPooledShakesMap TMap<TSubclassOf<UCameraShake>, FPooledCameraShakes>
---@field SplitScreenShakeScale float
UCameraModifier_CameraShake = {}



---@class UCameraShake : UObject
---@field bSingleInstance boolean
---@field OscillationDuration float
---@field OscillationBlendInTime float
---@field OscillationBlendOutTime float
---@field RotOscillation FROscillator
---@field LocOscillation FVOscillator
---@field FOVOscillation FFOscillator
---@field AnimPlayRate float
---@field AnimScale float
---@field AnimBlendInTime float
---@field AnimBlendOutTime float
---@field RandomAnimSegmentDuration float
---@field Anim UCameraAnim
---@field bRandomAnimSegment boolean
---@field CameraOwner APlayerCameraManager
---@field ShakeScale float
---@field OscillatorTimeRemaining float
---@field AnimInst UCameraAnimInst
UCameraShake = {}

---@param bImmediately boolean
function UCameraShake:ReceiveStopShake(bImmediately) end
---@param Scale float
function UCameraShake:ReceivePlayShake(Scale) end
---@return boolean
function UCameraShake:ReceiveIsFinished() end
---@param DeltaTime float
---@param Alpha float
---@param POV FMinimalViewInfo
---@param ModifiedPOV FMinimalViewInfo
function UCameraShake:BlueprintUpdateCameraShake(DeltaTime, Alpha, POV, ModifiedPOV) end


---@class UCameraShakeSourceComponent : USceneComponent
---@field Attenuation ECameraShakeAttenuation
---@field InnerAttenuationRadius float
---@field OuterAttenuationRadius float
---@field CameraShake TSubclassOf<UCameraShake>
---@field bAutoPlay boolean
UCameraShakeSourceComponent = {}

---@param bImmediately boolean
function UCameraShakeSourceComponent:StopAllCameraShakes(bImmediately) end
---@param InCameraShake TSubclassOf<UCameraShake>
function UCameraShakeSourceComponent:PlayCameraShake(InCameraShake) end
function UCameraShakeSourceComponent:Play() end
---@param Location FVector
---@return float
function UCameraShakeSourceComponent:GetAttenuationFactor(Location) end


---@class UCanvas : UObject
---@field OrgX float
---@field OrgY float
---@field ClipX float
---@field ClipY float
---@field DrawColor FColor
---@field bCenterX boolean
---@field bCenterY boolean
---@field bNoSmooth boolean
---@field SizeX int32
---@field SizeY int32
---@field ColorModulate FPlane
---@field DefaultTexture UTexture2D
---@field GradientTexture0 UTexture2D
---@field ReporterGraph UReporterGraph
UCanvas = {}

---@param RenderFont UFont
---@param RenderText FString
---@param Scale FVector2D
---@return FVector2D
function UCanvas:K2_TextSize(RenderFont, RenderText, Scale) end
---@param RenderFont UFont
---@param RenderText FString
---@return FVector2D
function UCanvas:K2_StrLen(RenderFont, RenderText) end
---@param WorldLocation FVector
---@return FVector
function UCanvas:K2_Project(WorldLocation) end
---@param RenderTexture UTexture
---@param Triangles TArray<FCanvasUVTri>
function UCanvas:K2_DrawTriangle(RenderTexture, Triangles) end
---@param RenderTexture UTexture
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param CoordinatePosition FVector2D
---@param CoordinateSize FVector2D
---@param RenderColor FLinearColor
---@param BlendMode EBlendMode
---@param Rotation float
---@param PivotPoint FVector2D
function UCanvas:K2_DrawTexture(RenderTexture, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, RenderColor, BlendMode, Rotation, PivotPoint) end
---@param RenderFont UFont
---@param RenderText FString
---@param ScreenPosition FVector2D
---@param Scale FVector2D
---@param RenderColor FLinearColor
---@param Kerning float
---@param ShadowColor FLinearColor
---@param ShadowOffset FVector2D
---@param bCentreX boolean
---@param bCentreY boolean
---@param bOutlined boolean
---@param OutlineColor FLinearColor
function UCanvas:K2_DrawText(RenderFont, RenderText, ScreenPosition, Scale, RenderColor, Kerning, ShadowColor, ShadowOffset, bCentreX, bCentreY, bOutlined, OutlineColor) end
---@param RenderTexture UTexture
---@param ScreenPosition FVector2D
---@param Radius FVector2D
---@param NumberOfSides int32
---@param RenderColor FLinearColor
function UCanvas:K2_DrawPolygon(RenderTexture, ScreenPosition, Radius, NumberOfSides, RenderColor) end
---@param RenderMaterial UMaterialInterface
---@param Triangles TArray<FCanvasUVTri>
function UCanvas:K2_DrawMaterialTriangle(RenderMaterial, Triangles) end
---@param RenderMaterial UMaterialInterface
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param CoordinatePosition FVector2D
---@param CoordinateSize FVector2D
---@param Rotation float
---@param PivotPoint FVector2D
function UCanvas:K2_DrawMaterial(RenderMaterial, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, Rotation, PivotPoint) end
---@param ScreenPositionA FVector2D
---@param ScreenPositionB FVector2D
---@param Thickness float
---@param RenderColor FLinearColor
function UCanvas:K2_DrawLine(ScreenPositionA, ScreenPositionB, Thickness, RenderColor) end
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param Thickness float
---@param RenderColor FLinearColor
function UCanvas:K2_DrawBox(ScreenPosition, ScreenSize, Thickness, RenderColor) end
---@param BorderTexture UTexture
---@param BackgroundTexture UTexture
---@param LeftBorderTexture UTexture
---@param RightBorderTexture UTexture
---@param TopBorderTexture UTexture
---@param BottomBorderTexture UTexture
---@param ScreenPosition FVector2D
---@param ScreenSize FVector2D
---@param CoordinatePosition FVector2D
---@param CoordinateSize FVector2D
---@param RenderColor FLinearColor
---@param BorderScale FVector2D
---@param BackgroundScale FVector2D
---@param Rotation float
---@param PivotPoint FVector2D
---@param CornerSize FVector2D
function UCanvas:K2_DrawBorder(BorderTexture, BackgroundTexture, LeftBorderTexture, RightBorderTexture, TopBorderTexture, BottomBorderTexture, ScreenPosition, ScreenSize, CoordinatePosition, CoordinateSize, RenderColor, BorderScale, BackgroundScale, Rotation, PivotPoint, CornerSize) end
---@param ScreenPosition FVector2D
---@param WorldOrigin FVector
---@param WorldDirection FVector
function UCanvas:K2_Deproject(ScreenPosition, WorldOrigin, WorldDirection) end


---@class UCanvasRenderTarget2D : UTextureRenderTarget2D
---@field OnCanvasRenderTargetUpdate FCanvasRenderTarget2DOnCanvasRenderTargetUpdate
---@field World TWeakObjectPtr<UWorld>
---@field bShouldClearRenderTargetOnReceiveUpdate boolean
UCanvasRenderTarget2D = {}

function UCanvasRenderTarget2D:UpdateResource() end
---@param Canvas UCanvas
---@param Width int32
---@param Height int32
function UCanvasRenderTarget2D:ReceiveUpdate(Canvas, Width, Height) end
---@param Width int32
---@param Height int32
function UCanvasRenderTarget2D:GetSize(Width, Height) end
---@param WorldContextObject UObject
---@param CanvasRenderTarget2DClass TSubclassOf<UCanvasRenderTarget2D>
---@param Width int32
---@param Height int32
---@return UCanvasRenderTarget2D
function UCanvasRenderTarget2D:CreateCanvasRenderTarget2D(WorldContextObject, CanvasRenderTarget2DClass, Width, Height) end


---@class UCapsuleComponent : UShapeComponent
---@field CapsuleHalfHeight float
---@field CapsuleRadius float
UCapsuleComponent = {}

---@param InRadius float
---@param InHalfHeight float
---@param bUpdateOverlaps boolean
function UCapsuleComponent:SetCapsuleSize(InRadius, InHalfHeight, bUpdateOverlaps) end
---@param Radius float
---@param bUpdateOverlaps boolean
function UCapsuleComponent:SetCapsuleRadius(Radius, bUpdateOverlaps) end
---@param HalfHeight float
---@param bUpdateOverlaps boolean
function UCapsuleComponent:SetCapsuleHalfHeight(HalfHeight, bUpdateOverlaps) end
---@param OutRadius float
---@param OutHalfHeightWithoutHemisphere float
function UCapsuleComponent:GetUnscaledCapsuleSize_WithoutHemisphere(OutRadius, OutHalfHeightWithoutHemisphere) end
---@param OutRadius float
---@param OutHalfHeight float
function UCapsuleComponent:GetUnscaledCapsuleSize(OutRadius, OutHalfHeight) end
---@return float
function UCapsuleComponent:GetUnscaledCapsuleRadius() end
---@return float
function UCapsuleComponent:GetUnscaledCapsuleHalfHeight_WithoutHemisphere() end
---@return float
function UCapsuleComponent:GetUnscaledCapsuleHalfHeight() end
---@return float
function UCapsuleComponent:GetShapeScale() end
---@param OutRadius float
---@param OutHalfHeightWithoutHemisphere float
function UCapsuleComponent:GetScaledCapsuleSize_WithoutHemisphere(OutRadius, OutHalfHeightWithoutHemisphere) end
---@param OutRadius float
---@param OutHalfHeight float
function UCapsuleComponent:GetScaledCapsuleSize(OutRadius, OutHalfHeight) end
---@return float
function UCapsuleComponent:GetScaledCapsuleRadius() end
---@return float
function UCapsuleComponent:GetScaledCapsuleHalfHeight_WithoutHemisphere() end
---@return float
function UCapsuleComponent:GetScaledCapsuleHalfHeight() end


---@class UChannel : UObject
---@field Connection UNetConnection
UChannel = {}



---@class UChaosPhysicalMaterial : UObject
---@field Friction float
---@field StaticFriction float
---@field Restitution float
---@field LinearEtherDrag float
---@field AngularEtherDrag float
---@field SleepingLinearVelocityThreshold float
---@field SleepingAngularVelocityThreshold float
UChaosPhysicalMaterial = {}



---@class UCharacterMovementComponent : UPawnMovementComponent
---@field CharacterOwner ACharacter
---@field GravityScale float
---@field MaxStepHeight float
---@field JumpZVelocity float
---@field JumpOffJumpZFactor float
---@field WalkableFloorAngle float
---@field WalkableFloorZ float
---@field MovementMode EMovementMode
---@field CustomMovementMode uint8
---@field NetworkSmoothingMode ENetworkSmoothingMode
---@field GroundFriction float
---@field MaxWalkSpeed float
---@field MaxWalkSpeedCrouched float
---@field MaxSwimSpeed float
---@field MaxFlySpeed float
---@field MaxCustomMovementSpeed float
---@field MaxAcceleration float
---@field MinAnalogWalkSpeed float
---@field BrakingFrictionFactor float
---@field BrakingFriction float
---@field BrakingSubStepTime float
---@field BrakingDecelerationWalking float
---@field BrakingDecelerationFalling float
---@field BrakingDecelerationSwimming float
---@field BrakingDecelerationFlying float
---@field AirControl float
---@field AirControlBoostMultiplier float
---@field AirControlBoostVelocityThreshold float
---@field FallingLateralFriction float
---@field CrouchedHalfHeight float
---@field Buoyancy float
---@field PerchRadiusThreshold float
---@field PerchAdditionalHeight float
---@field RotationRate FRotator
---@field bUseSeparateBrakingFriction boolean
---@field bApplyGravityWhileJumping boolean
---@field bUseControllerDesiredRotation boolean
---@field bOrientRotationToMovement boolean
---@field bSweepWhileNavWalking boolean
---@field bMovementInProgress boolean
---@field bEnableScopedMovementUpdates boolean
---@field bEnableServerDualMoveScopedMovementUpdates boolean
---@field bForceMaxAccel boolean
---@field bRunPhysicsWithNoController boolean
---@field bForceNextFloorCheck boolean
---@field bShrinkProxyCapsule boolean
---@field bCanWalkOffLedges boolean
---@field bCanWalkOffLedgesWhenCrouching boolean
---@field bNetworkSkipProxyPredictionOnNetUpdate boolean
---@field bNetworkAlwaysReplicateTransformUpdateTimestamp boolean
---@field bDeferUpdateMoveComponent boolean
---@field bEnablePhysicsInteraction boolean
---@field bTouchForceScaledToMass boolean
---@field bPushForceScaledToMass boolean
---@field bPushForceUsingZOffset boolean
---@field bScalePushForceToVelocity boolean
---@field DeferredUpdatedMoveComponent USceneComponent
---@field MaxOutOfWaterStepHeight float
---@field OutofWaterZ float
---@field Mass float
---@field StandingDownwardForceScale float
---@field InitialPushForceFactor float
---@field PushForceFactor float
---@field PushForcePointZOffsetFactor float
---@field TouchForceFactor float
---@field MinTouchForce float
---@field MaxTouchForce float
---@field RepulsionForce float
---@field Acceleration FVector
---@field LastUpdateRotation FQuat
---@field LastUpdateLocation FVector
---@field LastUpdateVelocity FVector
---@field ServerLastTransformUpdateTimeStamp float
---@field ServerLastClientGoodMoveAckTime float
---@field ServerLastClientAdjustmentTime float
---@field PendingImpulseToApply FVector
---@field PendingForceToApply FVector
---@field AnalogInputModifier float
---@field MaxSimulationTimeStep float
---@field MaxSimulationIterations int32
---@field MaxJumpApexAttemptsPerSimulation int32
---@field MaxDepenetrationWithGeometry float
---@field MaxDepenetrationWithGeometryAsProxy float
---@field MaxDepenetrationWithPawn float
---@field MaxDepenetrationWithPawnAsProxy float
---@field NetworkSimulatedSmoothLocationTime float
---@field NetworkSimulatedSmoothRotationTime float
---@field ListenServerNetworkSimulatedSmoothLocationTime float
---@field ListenServerNetworkSimulatedSmoothRotationTime float
---@field NetProxyShrinkRadius float
---@field NetProxyShrinkHalfHeight float
---@field NetworkMaxSmoothUpdateDistance float
---@field NetworkNoSmoothUpdateDistance float
---@field NetworkMinTimeBetweenClientAckGoodMoves float
---@field NetworkMinTimeBetweenClientAdjustments float
---@field NetworkMinTimeBetweenClientAdjustmentsLargeCorrection float
---@field NetworkLargeClientCorrectionDistance float
---@field LedgeCheckThreshold float
---@field JumpOutOfWaterPitch float
---@field CurrentFloor FFindFloorResult
---@field DefaultLandMovementMode EMovementMode
---@field DefaultWaterMovementMode EMovementMode
---@field GroundMovementMode EMovementMode
---@field bMaintainHorizontalGroundVelocity boolean
---@field bImpartBaseVelocityX boolean
---@field bImpartBaseVelocityY boolean
---@field bImpartBaseVelocityZ boolean
---@field bImpartBaseAngularVelocity boolean
---@field bJustTeleported boolean
---@field bNetworkUpdateReceived boolean
---@field bNetworkMovementModeChanged boolean
---@field bIgnoreClientMovementErrorChecksAndCorrection boolean
---@field bServerAcceptClientAuthoritativePosition boolean
---@field bNotifyApex boolean
---@field bCheatFlying boolean
---@field bWantsToCrouch boolean
---@field bCrouchMaintainsBaseLocation boolean
---@field bIgnoreBaseRotation boolean
---@field bFastAttachedMove boolean
---@field bAlwaysCheckFloor boolean
---@field bUseFlatBaseForFloorChecks boolean
---@field bPerformingJumpOff boolean
---@field bWantsToLeaveNavWalking boolean
---@field bUseRVOAvoidance boolean
---@field bRequestedMoveUseAcceleration boolean
---@field bWasSimulatingRootMotion boolean
---@field bAllowPhysicsRotationDuringAnimRootMotion boolean
---@field bHasRequestedVelocity boolean
---@field bRequestedMoveWithMaxSpeed boolean
---@field bWasAvoidanceUpdated boolean
---@field bProjectNavMeshWalking boolean
---@field bProjectNavMeshOnBothWorldChannels boolean
---@field AvoidanceConsiderationRadius float
---@field RequestedVelocity FVector
---@field AvoidanceUID int32
---@field AvoidanceGroup FNavAvoidanceMask
---@field GroupsToAvoid FNavAvoidanceMask
---@field GroupsToIgnore FNavAvoidanceMask
---@field AvoidanceWeight float
---@field PendingLaunchVelocity FVector
---@field NavMeshProjectionInterval float
---@field NavMeshProjectionTimer float
---@field NavMeshProjectionInterpSpeed float
---@field NavMeshProjectionHeightScaleUp float
---@field NavMeshProjectionHeightScaleDown float
---@field NavWalkingFloorDistTolerance float
---@field PostPhysicsTickFunction FCharacterMovementComponentPostPhysicsTickFunction
---@field MinTimeBetweenTimeStampResets float
---@field CurrentRootMotion FRootMotionSourceGroup
---@field RootMotionParams FRootMotionMovementParams
---@field AnimRootMotionVelocity FVector
UCharacterMovementComponent = {}

---@param InWalkableFloorZ float
function UCharacterMovementComponent:SetWalkableFloorZ(InWalkableFloorZ) end
---@param InWalkableFloorAngle float
function UCharacterMovementComponent:SetWalkableFloorAngle(InWalkableFloorAngle) end
---@param NewMovementMode EMovementMode
---@param NewCustomMode uint8
function UCharacterMovementComponent:SetMovementMode(NewMovementMode, NewCustomMode) end
---@param GroupMask FNavAvoidanceMask
function UCharacterMovementComponent:SetGroupsToIgnoreMask(GroupMask) end
---@param GroupFlags int32
function UCharacterMovementComponent:SetGroupsToIgnore(GroupFlags) end
---@param GroupMask FNavAvoidanceMask
function UCharacterMovementComponent:SetGroupsToAvoidMask(GroupMask) end
---@param GroupFlags int32
function UCharacterMovementComponent:SetGroupsToAvoid(GroupFlags) end
---@param GroupMask FNavAvoidanceMask
function UCharacterMovementComponent:SetAvoidanceGroupMask(GroupMask) end
---@param GroupFlags int32
function UCharacterMovementComponent:SetAvoidanceGroup(GroupFlags) end
---@param bEnable boolean
function UCharacterMovementComponent:SetAvoidanceEnabled(bEnable) end
---@return float
function UCharacterMovementComponent:K2_GetWalkableFloorZ() end
---@return float
function UCharacterMovementComponent:K2_GetWalkableFloorAngle() end
---@return float
function UCharacterMovementComponent:K2_GetModifiedMaxAcceleration() end
---@param CapsuleLocation FVector
---@param FloorResult FFindFloorResult
function UCharacterMovementComponent:K2_FindFloor(CapsuleLocation, FloorResult) end
---@param CapsuleLocation FVector
---@param LineDistance float
---@param SweepDistance float
---@param SweepRadius float
---@param FloorResult FFindFloorResult
function UCharacterMovementComponent:K2_ComputeFloorDist(CapsuleLocation, LineDistance, SweepDistance, SweepRadius, FloorResult) end
---@return boolean
function UCharacterMovementComponent:IsWalking() end
---@param Hit FHitResult
---@return boolean
function UCharacterMovementComponent:IsWalkable(Hit) end
---@return float
function UCharacterMovementComponent:GetValidPerchRadius() end
---@return float
function UCharacterMovementComponent:GetPerchRadiusThreshold() end
---@return UPrimitiveComponent
function UCharacterMovementComponent:GetMovementBase() end
---@return float
function UCharacterMovementComponent:GetMinAnalogSpeed() end
---@return float
function UCharacterMovementComponent:GetMaxJumpHeightWithJumpTime() end
---@return float
function UCharacterMovementComponent:GetMaxJumpHeight() end
---@return float
function UCharacterMovementComponent:GetMaxBrakingDeceleration() end
---@return float
function UCharacterMovementComponent:GetMaxAcceleration() end
---@return FVector
function UCharacterMovementComponent:GetLastUpdateVelocity() end
---@return FRotator
function UCharacterMovementComponent:GetLastUpdateRotation() end
---@return FVector
function UCharacterMovementComponent:GetLastUpdateLocation() end
---@return FVector
function UCharacterMovementComponent:GetImpartedMovementBaseVelocity() end
---@return FVector
function UCharacterMovementComponent:GetCurrentAcceleration() end
---@return ACharacter
function UCharacterMovementComponent:GetCharacterOwner() end
---@return float
function UCharacterMovementComponent:GetAnalogInputModifier() end
function UCharacterMovementComponent:DisableMovement() end
function UCharacterMovementComponent:ClearAccumulatedForces() end
---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UCharacterMovementComponent:CapsuleTouched(OverlappedComp, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param DeltaTime float
---@param Friction float
---@param bFluid boolean
---@param BrakingDeceleration float
function UCharacterMovementComponent:CalcVelocity(DeltaTime, Friction, bFluid, BrakingDeceleration) end
---@param Impulse FVector
---@param bVelocityChange boolean
function UCharacterMovementComponent:AddImpulse(Impulse, bVelocityChange) end
---@param Force FVector
function UCharacterMovementComponent:AddForce(Force) end


---@class UCheatManager : UObject
---@field DebugCameraControllerRef ADebugCameraController
---@field DebugCameraControllerClass TSubclassOf<ADebugCameraController>
UCheatManager = {}

function UCheatManager:Walk() end
function UCheatManager:ViewSelf() end
---@param S FString
function UCheatManager:ViewPlayer(S) end
---@param DesiredClass TSubclassOf<AActor>
function UCheatManager:ViewClass(DesiredClass) end
---@param ActorName FName
function UCheatManager:ViewActor(ActorName) end
function UCheatManager:UpdateSafeArea() end
function UCheatManager:ToggleServerStatReplicatorUpdateStatNet() end
function UCheatManager:ToggleServerStatReplicatorClientOverwrite() end
function UCheatManager:ToggleDebugCamera() end
function UCheatManager:ToggleAILogging() end
function UCheatManager:TestCollisionDistance() end
function UCheatManager:Teleport() end
---@param ClassName FString
function UCheatManager:Summon(ClassName) end
---@param PackageName FName
function UCheatManager:StreamLevelOut(PackageName) end
---@param PackageName FName
function UCheatManager:StreamLevelIn(PackageName) end
function UCheatManager:SpawnServerStatReplicator() end
---@param NewTimeDilation float
function UCheatManager:Slomo(NewTimeDilation) end
function UCheatManager:SetWorldOrigin() end
function UCheatManager:SetMouseSensitivityToDefault() end
function UCheatManager:ServerToggleAILogging() end
function UCheatManager:ReceiveInitCheatManager() end
function UCheatManager:ReceiveEndPlay() end
function UCheatManager:PlayersOnly() end
---@param PackageName FName
function UCheatManager:OnlyLoadLevel(PackageName) end
function UCheatManager:LogLoc() end
function UCheatManager:InvertMouse() end
function UCheatManager:God() end
function UCheatManager:Ghost() end
---@param Delay float
function UCheatManager:FreezeFrame(Delay) end
function UCheatManager:Fly() end
function UCheatManager:FlushLog() end
function UCheatManager:EnableDebugCamera() end
function UCheatManager:DumpVoiceMutingState() end
function UCheatManager:DumpPartyState() end
function UCheatManager:DumpOnlineSessionState() end
function UCheatManager:DumpChatState() end
function UCheatManager:DisableDebugCamera() end
function UCheatManager:DestroyTarget() end
function UCheatManager:DestroyServerStatReplicator() end
---@param aClass TSubclassOf<APawn>
function UCheatManager:DestroyPawns(aClass) end
function UCheatManager:DestroyAllPawnsExceptTarget() end
---@param aClass TSubclassOf<AActor>
function UCheatManager:DestroyAll(aClass) end
---@param HalfHeight float
---@param Radius float
function UCheatManager:DebugCapsuleSweepSize(HalfHeight, Radius) end
function UCheatManager:DebugCapsuleSweepPawn() end
---@param bTraceComplex boolean
function UCheatManager:DebugCapsuleSweepComplex(bTraceComplex) end
function UCheatManager:DebugCapsuleSweepClear() end
---@param Channel ECollisionChannel
function UCheatManager:DebugCapsuleSweepChannel(Channel) end
function UCheatManager:DebugCapsuleSweepCapture() end
function UCheatManager:DebugCapsuleSweep() end
---@param DamageAmount float
function UCheatManager:DamageTarget(DamageAmount) end
---@param ScriptName FString
function UCheatManager:CheatScript(ScriptName) end
---@param F float
function UCheatManager:ChangeSize(F) end
---@param ViewLocation FVector
---@param ViewRotation FRotator
---@param GoString FString
---@param LocString FString
function UCheatManager:BugItStringCreator(ViewLocation, ViewRotation, GoString, LocString) end
---@param X float
---@param Y float
---@param Z float
---@param Pitch float
---@param Yaw float
---@param Roll float
function UCheatManager:BugItGo(X, Y, Z, Pitch, Yaw, Roll) end
---@param ScreenShotDescription FString
function UCheatManager:BugIt(ScreenShotDescription) end


---@class UCheckBoxStyleAsset : UObject
---@field CheckBoxStyle FCheckBoxStyle
UCheckBoxStyleAsset = {}



---@class UChildActorComponent : USceneComponent
---@field ChildActorClass TSubclassOf<AActor>
---@field ChildActor AActor
---@field ChildActorTemplate AActor
UChildActorComponent = {}

---@param InClass TSubclassOf<AActor>
function UChildActorComponent:SetChildActorClass(InClass) end


---@class UChildConnection : UNetConnection
---@field Parent UNetConnection
UChildConnection = {}



---@class UCloudStorageBase : UPlatformInterfaceBase
---@field LocalCloudFiles TArray<FString>
---@field bSuppressDelegateCalls boolean
UCloudStorageBase = {}



---@class UCollisionProfile : UDeveloperSettings
---@field Profiles TArray<FCollisionResponseTemplate>
---@field DefaultChannelResponses TArray<FCustomChannelSetup>
---@field EditProfiles TArray<FCustomProfile>
---@field ProfileRedirects TArray<FRedirector>
---@field CollisionChannelRedirects TArray<FRedirector>
UCollisionProfile = {}



---@class UCommandlet : UObject
---@field HelpDescription FString
---@field HelpUsage FString
---@field HelpWebLink FString
---@field HelpParamNames TArray<FString>
---@field HelpParamDescriptions TArray<FString>
---@field IsServer boolean
---@field IsClient boolean
---@field IsEditor boolean
---@field LogToConsole boolean
---@field ShowErrorCount boolean
---@field ShowProgress boolean
UCommandlet = {}



---@class UComponentDelegateBinding : UDynamicBlueprintBinding
---@field ComponentDelegateBindings TArray<FBlueprintComponentDelegateBinding>
UComponentDelegateBinding = {}



---@class UCompositeCurveTable : UCurveTable
---@field ParentTables TArray<UCurveTable>
---@field OldParentTables TArray<UCurveTable>
UCompositeCurveTable = {}



---@class UCompositeDataTable : UDataTable
---@field ParentTables TArray<UDataTable>
---@field OldParentTables TArray<UDataTable>
UCompositeDataTable = {}



---@class UConsole : UObject
---@field ConsoleTargetPlayer ULocalPlayer
---@field DefaultTexture_Black UTexture2D
---@field DefaultTexture_White UTexture2D
---@field HistoryBuffer TArray<FString>
UConsole = {}



---@class UControlChannel : UChannel
UControlChannel = {}


---@class UCurveBase : UObject
UCurveBase = {}

---@param MinValue float
---@param MaxValue float
function UCurveBase:GetValueRange(MinValue, MaxValue) end
---@param MinTime float
---@param MaxTime float
function UCurveBase:GetTimeRange(MinTime, MaxTime) end


---@class UCurveFloat : UCurveBase
---@field FloatCurve FRichCurve
---@field bIsEventCurve boolean
UCurveFloat = {}

---@param InTime float
---@return float
function UCurveFloat:GetFloatValue(InTime) end


---@class UCurveLinearColor : UCurveBase
---@field FloatCurves FRichCurve
---@field AdjustHue float
---@field AdjustSaturation float
---@field AdjustBrightness float
---@field AdjustBrightnessCurve float
---@field AdjustVibrance float
---@field AdjustMinAlpha float
---@field AdjustMaxAlpha float
UCurveLinearColor = {}

---@param InTime float
---@return FLinearColor
function UCurveLinearColor:GetLinearColorValue(InTime) end
---@param InTime float
---@return FLinearColor
function UCurveLinearColor:GetClampedLinearColorValue(InTime) end


---@class UCurveLinearColorAtlas : UTexture2D
---@field TextureSize uint32
---@field GradientCurves TArray<UCurveLinearColor>
UCurveLinearColorAtlas = {}

---@param InCurve UCurveLinearColor
---@param Position float
---@return boolean
function UCurveLinearColorAtlas:GetCurvePosition(InCurve, Position) end


---@class UCurveTable : UObject
UCurveTable = {}


---@class UCurveVector : UCurveBase
---@field FloatCurves FRichCurve
UCurveVector = {}

---@param InTime float
---@return FVector
function UCurveVector:GetVectorValue(InTime) end


---@class UDEPRECATED_CurveEdPresetCurve : UObject
UDEPRECATED_CurveEdPresetCurve = {}


---@class UDEPRECATED_PhysicalMaterialPropertyBase : UObject
UDEPRECATED_PhysicalMaterialPropertyBase = {}


---@class UDPICustomScalingRule : UObject
UDPICustomScalingRule = {}


---@class UDamageType : UObject
---@field bCausedByWorld boolean
---@field bScaleMomentumByMass boolean
---@field bRadialDamageVelChange boolean
---@field DamageImpulse float
---@field DestructibleImpulse float
---@field DestructibleDamageSpreadScale float
---@field DamageFalloff float
UDamageType = {}



---@class UDataAsset : UObject
---@field NativeClass TSubclassOf<UDataAsset>
UDataAsset = {}



---@class UDataTable : UObject
---@field RowStruct UScriptStruct
---@field bStripFromClientBuilds boolean
---@field bIgnoreExtraFields boolean
---@field bIgnoreMissingFields boolean
---@field ImportKeyField FString
UDataTable = {}



---@class UDataTableFunctionLibrary : UBlueprintFunctionLibrary
UDataTableFunctionLibrary = {}

---@param Table UDataTable
---@param OutRowNames TArray<FName>
function UDataTableFunctionLibrary:GetDataTableRowNames(Table, OutRowNames) end
---@param Table UDataTable
---@param RowName FName
---@param OutRow FTableRowBase
---@return boolean
function UDataTableFunctionLibrary:GetDataTableRowFromName(Table, RowName, OutRow) end
---@param DataTable UDataTable
---@param PropertyName FName
---@return TArray<FString>
function UDataTableFunctionLibrary:GetDataTableColumnAsString(DataTable, PropertyName) end
---@param CurveTable UCurveTable
---@param RowName FName
---@param InXY float
---@param OutResult EEvaluateCurveTableResult::Type
---@param OutXY float
---@param ContextString FString
function UDataTableFunctionLibrary:EvaluateCurveTableRow(CurveTable, RowName, InXY, OutResult, OutXY, ContextString) end
---@param Table UDataTable
---@param RowName FName
---@return boolean
function UDataTableFunctionLibrary:DoesDataTableRowExist(Table, RowName) end


---@class UDebugCameraControllerSettings : UDeveloperSettings
---@field CycleViewModes TArray<FDebugCameraControllerSettingsViewModeIndex>
UDebugCameraControllerSettings = {}



---@class UDebugDrawService : UBlueprintFunctionLibrary
UDebugDrawService = {}


---@class UDecalComponent : USceneComponent
---@field DecalMaterial UMaterialInterface
---@field SortOrder int32
---@field FadeScreenSize float
---@field FadeStartDelay float
---@field FadeDuration float
---@field FadeInDuration float
---@field FadeInStartDelay float
---@field bDestroyOwnerAfterFade boolean
---@field DecalSize FVector
UDecalComponent = {}

---@param Value int32
function UDecalComponent:SetSortOrder(Value) end
---@param NewFadeScreenSize float
function UDecalComponent:SetFadeScreenSize(NewFadeScreenSize) end
---@param StartDelay float
---@param Duration float
---@param DestroyOwnerAfterFade boolean
function UDecalComponent:SetFadeOut(StartDelay, Duration, DestroyOwnerAfterFade) end
---@param StartDelay float
---@param Duaration float
function UDecalComponent:SetFadeIn(StartDelay, Duaration) end
---@param NewDecalMaterial UMaterialInterface
function UDecalComponent:SetDecalMaterial(NewDecalMaterial) end
---@return float
function UDecalComponent:GetFadeStartDelay() end
---@return float
function UDecalComponent:GetFadeInStartDelay() end
---@return float
function UDecalComponent:GetFadeInDuration() end
---@return float
function UDecalComponent:GetFadeDuration() end
---@return UMaterialInterface
function UDecalComponent:GetDecalMaterial() end
---@return UMaterialInstanceDynamic
function UDecalComponent:CreateDynamicMaterialInstance() end


---@class UDefault__AnimBlueprintGeneratedClass
UDefault__AnimBlueprintGeneratedClass = {}


---@class UDefault__BlueprintGeneratedClass
UDefault__BlueprintGeneratedClass = {}


---@class UDemoNetConnection : UNetConnection
UDemoNetConnection = {}


---@class UDemoNetDriver : UNetDriver
---@field RollbackNetStartupActors TMap<FString, FRollbackNetStartupActorInfo>
---@field CheckpointSaveMaxMSPerFrame float
---@field MulticastRecordOptions TArray<FMulticastRecordOptions>
---@field bIsLocalReplay boolean
---@field SpectatorControllers TArray<APlayerController>
UDemoNetDriver = {}



---@class UDemoPendingNetGame : UPendingNetGame
UDemoPendingNetGame = {}


---@class UDeveloperSettings : UObject
UDeveloperSettings = {}


---@class UDeviceProfile : UTextureLODSettings
---@field DeviceType FString
---@field BaseProfileName FString
---@field Parent UObject
---@field CVars TArray<FString>
UDeviceProfile = {}



---@class UDeviceProfileManager : UObject
---@field Profiles TArray<UObject>
UDeviceProfileManager = {}



---@class UDialogueSoundWaveProxy : USoundBase
UDialogueSoundWaveProxy = {}


---@class UDialogueVoice : UObject
---@field Gender EGrammaticalGender::Type
---@field Plurality EGrammaticalNumber::Type
---@field LocalizationGUID FGuid
UDialogueVoice = {}



---@class UDialogueWave : UObject
---@field bMature boolean
---@field bOverride_SubtitleOverride boolean
---@field SpokenText FString
---@field SubtitleOverride FString
---@field ContextMappings TArray<FDialogueContextMapping>
---@field LocalizationGUID FGuid
UDialogueWave = {}



---@class UDirectionalLightComponent : ULightComponent
---@field ShadowCascadeBiasDistribution float
---@field bEnableLightShaftOcclusion boolean
---@field OcclusionMaskDarkness float
---@field OcclusionDepthRange float
---@field LightShaftOverrideDirection FVector
---@field WholeSceneDynamicShadowRadius float
---@field DynamicShadowDistanceMovableLight float
---@field DynamicShadowDistanceStationaryLight float
---@field DynamicShadowCascades int32
---@field CascadeDistributionExponent float
---@field CascadeTransitionFraction float
---@field ShadowDistanceFadeoutFraction float
---@field bUseInsetShadowsForMovableObjects boolean
---@field FarShadowCascadeCount int32
---@field FarShadowDistance float
---@field DistanceFieldShadowDistance float
---@field LightSourceAngle float
---@field LightSourceSoftAngle float
---@field TraceDistance float
---@field LightmassSettings FLightmassDirectionalLightSettings
---@field bCastModulatedShadows boolean
---@field ModulatedShadowColor FColor
---@field ShadowAmount float
---@field bUsedAsAtmosphereSunLight boolean
---@field AtmosphereSunLightIndex int32
UDirectionalLightComponent = {}

---@param NewValue float
function UDirectionalLightComponent:SetShadowDistanceFadeoutFraction(NewValue) end
---@param NewValue float
function UDirectionalLightComponent:SetShadowAmount(NewValue) end
---@param NewValue float
function UDirectionalLightComponent:SetOcclusionMaskDarkness(NewValue) end
---@param NewValue FVector
function UDirectionalLightComponent:SetLightShaftOverrideDirection(NewValue) end
---@param bNewValue boolean
function UDirectionalLightComponent:SetEnableLightShaftOcclusion(bNewValue) end
---@param NewValue float
function UDirectionalLightComponent:SetDynamicShadowDistanceStationaryLight(NewValue) end
---@param NewValue float
function UDirectionalLightComponent:SetDynamicShadowDistanceMovableLight(NewValue) end
---@param NewValue int32
function UDirectionalLightComponent:SetDynamicShadowCascades(NewValue) end
---@param NewValue float
function UDirectionalLightComponent:SetCascadeTransitionFraction(NewValue) end
---@param NewValue float
function UDirectionalLightComponent:SetCascadeDistributionExponent(NewValue) end


---@class UDistribution : UObject
UDistribution = {}


---@class UDistributionFloat : UDistribution
---@field bCanBeBaked boolean
---@field bBakedDataSuccesfully boolean
UDistributionFloat = {}



---@class UDistributionFloatConstant : UDistributionFloat
---@field Constant float
UDistributionFloatConstant = {}



---@class UDistributionFloatConstantCurve : UDistributionFloat
---@field ConstantCurve FInterpCurveFloat
UDistributionFloatConstantCurve = {}



---@class UDistributionFloatParameterBase : UDistributionFloatConstant
---@field ParameterName FName
---@field MinInput float
---@field MaxInput float
---@field MinOutput float
---@field MaxOutput float
---@field ParamMode DistributionParamMode
UDistributionFloatParameterBase = {}



---@class UDistributionFloatParticleParameter : UDistributionFloatParameterBase
UDistributionFloatParticleParameter = {}


---@class UDistributionFloatUniform : UDistributionFloat
---@field Min float
---@field Max float
UDistributionFloatUniform = {}



---@class UDistributionFloatUniformCurve : UDistributionFloat
---@field ConstantCurve FInterpCurveVector2D
UDistributionFloatUniformCurve = {}



---@class UDistributionVector : UDistribution
---@field bCanBeBaked boolean
---@field bIsDirty boolean
---@field bBakedDataSuccesfully boolean
UDistributionVector = {}



---@class UDistributionVectorConstant : UDistributionVector
---@field Constant FVector
---@field bLockAxes boolean
---@field LockedAxes EDistributionVectorLockFlags
UDistributionVectorConstant = {}



---@class UDistributionVectorConstantCurve : UDistributionVector
---@field ConstantCurve FInterpCurveVector
---@field bLockAxes boolean
---@field LockedAxes EDistributionVectorLockFlags
UDistributionVectorConstantCurve = {}



---@class UDistributionVectorParameterBase : UDistributionVectorConstant
---@field ParameterName FName
---@field MinInput FVector
---@field MaxInput FVector
---@field MinOutput FVector
---@field MaxOutput FVector
---@field ParamModes DistributionParamMode
UDistributionVectorParameterBase = {}



---@class UDistributionVectorParticleParameter : UDistributionVectorParameterBase
UDistributionVectorParticleParameter = {}


---@class UDistributionVectorUniform : UDistributionVector
---@field Max FVector
---@field Min FVector
---@field bLockAxes boolean
---@field LockedAxes EDistributionVectorLockFlags
---@field MirrorFlags EDistributionVectorMirrorFlags
---@field bUseExtremes boolean
UDistributionVectorUniform = {}



---@class UDistributionVectorUniformCurve : UDistributionVector
---@field ConstantCurve FInterpCurveTwoVectors
---@field bLockAxes1 boolean
---@field bLockAxes2 boolean
---@field LockedAxes EDistributionVectorLockFlags
---@field MirrorFlags EDistributionVectorMirrorFlags
---@field bUseExtremes boolean
UDistributionVectorUniformCurve = {}



---@class UDrawFrustumComponent : UPrimitiveComponent
---@field FrustumColor FColor
---@field FrustumAngle float
---@field FrustumAspectRatio float
---@field FrustumStartDist float
---@field FrustumEndDist float
---@field Texture UTexture
UDrawFrustumComponent = {}



---@class UDrawSphereComponent : USphereComponent
UDrawSphereComponent = {}


---@class UDynamicBlueprintBinding : UObject
UDynamicBlueprintBinding = {}


---@class UDynamicSubsystem : USubsystem
UDynamicSubsystem = {}


---@class UEdGraph : UObject
---@field Schema TSubclassOf<UEdGraphSchema>
---@field Nodes TArray<UEdGraphNode>
---@field bEditable boolean
---@field bAllowDeletion boolean
---@field bAllowRenaming boolean
UEdGraph = {}



---@class UEdGraphNode : UObject
---@field DeprecatedPins TArray<UEdGraphPin_Deprecated>
---@field NodePosX int32
---@field NodePosY int32
---@field NodeWidth int32
---@field NodeHeight int32
---@field AdvancedPinDisplay ENodeAdvancedPins::Type
---@field EnabledState ENodeEnabledState
---@field bDisplayAsDisabled boolean
---@field bUserSetEnabledState boolean
---@field bIsNodeEnabled boolean
---@field bHasCompilerMessage boolean
---@field NodeComment FString
---@field ErrorType int32
---@field ErrorMsg FString
---@field NodeGuid FGuid
UEdGraphNode = {}



---@class UEdGraphNode_Documentation : UEdGraphNode
---@field Link FString
---@field Excerpt FString
UEdGraphNode_Documentation = {}



---@class UEdGraphPin_Deprecated : UObject
---@field PinName FString
---@field PinToolTip FString
---@field Direction EEdGraphPinDirection
---@field PinType FEdGraphPinType
---@field DefaultValue FString
---@field AutogeneratedDefaultValue FString
---@field DefaultObject UObject
---@field DefaultTextValue FText
---@field LinkedTo TArray<UEdGraphPin_Deprecated>
---@field SubPins TArray<UEdGraphPin_Deprecated>
---@field ParentPin UEdGraphPin_Deprecated
---@field ReferencePassThroughConnection UEdGraphPin_Deprecated
UEdGraphPin_Deprecated = {}



---@class UEdGraphSchema : UObject
UEdGraphSchema = {}


---@class UEndpointSubmix : USoundSubmixBase
---@field EndpointType FName
---@field EndpointSettingsClass TSubclassOf<UAudioEndpointSettingsBase>
---@field EndpointSettings UAudioEndpointSettingsBase
UEndpointSubmix = {}



---@class UEngine : UObject
---@field TinyFont UFont
---@field TinyFontName FSoftObjectPath
---@field SmallFont UFont
---@field SmallFontName FSoftObjectPath
---@field MediumFont UFont
---@field MediumFontName FSoftObjectPath
---@field LargeFont UFont
---@field LargeFontName FSoftObjectPath
---@field SubtitleFont UFont
---@field SubtitleFontName FSoftObjectPath
---@field AdditionalFonts TArray<UFont>
---@field AdditionalFontNames TArray<FString>
---@field ConsoleClass TSubclassOf<UConsole>
---@field ConsoleClassName FSoftClassPath
---@field GameViewportClientClass TSubclassOf<UGameViewportClient>
---@field GameViewportClientClassName FSoftClassPath
---@field LocalPlayerClass TSubclassOf<ULocalPlayer>
---@field LocalPlayerClassName FSoftClassPath
---@field WorldSettingsClass TSubclassOf<AWorldSettings>
---@field WorldSettingsClassName FSoftClassPath
---@field NavigationSystemClassName FSoftClassPath
---@field NavigationSystemClass TSubclassOf<UNavigationSystemBase>
---@field NavigationSystemConfigClassName FSoftClassPath
---@field NavigationSystemConfigClass TSubclassOf<UNavigationSystemConfig>
---@field AvoidanceManagerClassName FSoftClassPath
---@field AvoidanceManagerClass TSubclassOf<UAvoidanceManager>
---@field PhysicsCollisionHandlerClass TSubclassOf<UPhysicsCollisionHandler>
---@field PhysicsCollisionHandlerClassName FSoftClassPath
---@field GameUserSettingsClassName FSoftClassPath
---@field GameUserSettingsClass TSubclassOf<UGameUserSettings>
---@field AIControllerClassName FSoftClassPath
---@field GameUserSettings UGameUserSettings
---@field LevelScriptActorClass TSubclassOf<ALevelScriptActor>
---@field LevelScriptActorClassName FSoftClassPath
---@field DefaultBlueprintBaseClassName FSoftClassPath
---@field GameSingletonClassName FSoftClassPath
---@field GameSingleton UObject
---@field AssetManagerClassName FSoftClassPath
---@field AssetManager UAssetManager
---@field DefaultTexture UTexture2D
---@field DefaultTextureName FSoftObjectPath
---@field DefaultDiffuseTexture UTexture
---@field DefaultDiffuseTextureName FSoftObjectPath
---@field DefaultBSPVertexTexture UTexture2D
---@field DefaultBSPVertexTextureName FSoftObjectPath
---@field HighFrequencyNoiseTexture UTexture2D
---@field HighFrequencyNoiseTextureName FSoftObjectPath
---@field DefaultBokehTexture UTexture2D
---@field DefaultBokehTextureName FSoftObjectPath
---@field DefaultBloomKernelTexture UTexture2D
---@field DefaultBloomKernelTextureName FSoftObjectPath
---@field WireframeMaterial UMaterial
---@field WireframeMaterialName FString
---@field DebugMeshMaterial UMaterial
---@field DebugMeshMaterialName FSoftObjectPath
---@field EmissiveMeshMaterial UMaterial
---@field EmissiveMeshMaterialName FSoftObjectPath
---@field LevelColorationLitMaterial UMaterial
---@field LevelColorationLitMaterialName FString
---@field LevelColorationUnlitMaterial UMaterial
---@field LevelColorationUnlitMaterialName FString
---@field LightingTexelDensityMaterial UMaterial
---@field LightingTexelDensityName FString
---@field ShadedLevelColorationLitMaterial UMaterial
---@field ShadedLevelColorationLitMaterialName FString
---@field ShadedLevelColorationUnlitMaterial UMaterial
---@field ShadedLevelColorationUnlitMaterialName FString
---@field RemoveSurfaceMaterial UMaterial
---@field RemoveSurfaceMaterialName FSoftObjectPath
---@field VertexColorMaterial UMaterial
---@field VertexColorMaterialName FString
---@field VertexColorViewModeMaterial_ColorOnly UMaterial
---@field VertexColorViewModeMaterialName_ColorOnly FString
---@field VertexColorViewModeMaterial_AlphaAsColor UMaterial
---@field VertexColorViewModeMaterialName_AlphaAsColor FString
---@field VertexColorViewModeMaterial_RedOnly UMaterial
---@field VertexColorViewModeMaterialName_RedOnly FString
---@field VertexColorViewModeMaterial_GreenOnly UMaterial
---@field VertexColorViewModeMaterialName_GreenOnly FString
---@field VertexColorViewModeMaterial_BlueOnly UMaterial
---@field VertexColorViewModeMaterialName_BlueOnly FString
---@field DebugEditorMaterialName FSoftObjectPath
---@field ConstraintLimitMaterial UMaterial
---@field ConstraintLimitMaterialX UMaterialInstanceDynamic
---@field ConstraintLimitMaterialXAxis UMaterialInstanceDynamic
---@field ConstraintLimitMaterialY UMaterialInstanceDynamic
---@field ConstraintLimitMaterialYAxis UMaterialInstanceDynamic
---@field ConstraintLimitMaterialZ UMaterialInstanceDynamic
---@field ConstraintLimitMaterialZAxis UMaterialInstanceDynamic
---@field ConstraintLimitMaterialPrismatic UMaterialInstanceDynamic
---@field InvalidLightmapSettingsMaterial UMaterial
---@field InvalidLightmapSettingsMaterialName FSoftObjectPath
---@field PreviewShadowsIndicatorMaterial UMaterial
---@field PreviewShadowsIndicatorMaterialName FSoftObjectPath
---@field ArrowMaterial UMaterial
---@field ArrowMaterialYellow UMaterialInstanceDynamic
---@field ArrowMaterialName FSoftObjectPath
---@field LightingOnlyBrightness FLinearColor
---@field ShaderComplexityColors TArray<FLinearColor>
---@field QuadComplexityColors TArray<FLinearColor>
---@field LightComplexityColors TArray<FLinearColor>
---@field StationaryLightOverlapColors TArray<FLinearColor>
---@field LODColorationColors TArray<FLinearColor>
---@field HLODColorationColors TArray<FLinearColor>
---@field StreamingAccuracyColors TArray<FLinearColor>
---@field MaxPixelShaderAdditiveComplexityCount float
---@field MaxES3PixelShaderAdditiveComplexityCount float
---@field MinLightMapDensity float
---@field IdealLightMapDensity float
---@field MaxLightMapDensity float
---@field bRenderLightMapDensityGrayscale boolean
---@field RenderLightMapDensityGrayscaleScale float
---@field RenderLightMapDensityColorScale float
---@field LightMapDensityVertexMappedColor FLinearColor
---@field LightMapDensitySelectedColor FLinearColor
---@field StatColorMappings TArray<FStatColorMapping>
---@field DefaultPhysMaterial UPhysicalMaterial
---@field DefaultPhysMaterialName FSoftObjectPath
---@field ActiveGameNameRedirects TArray<FGameNameRedirect>
---@field ActiveClassRedirects TArray<FClassRedirect>
---@field ActivePluginRedirects TArray<FPluginRedirect>
---@field ActiveStructRedirects TArray<FStructRedirect>
---@field PreIntegratedSkinBRDFTexture UTexture2D
---@field PreIntegratedSkinBRDFTextureName FSoftObjectPath
---@field BlueNoiseTexture UTexture2D
---@field BlueNoiseTextureName FSoftObjectPath
---@field MiniFontTexture UTexture2D
---@field MiniFontTextureName FSoftObjectPath
---@field WeightMapPlaceholderTexture UTexture
---@field WeightMapPlaceholderTextureName FSoftObjectPath
---@field LightMapDensityTexture UTexture2D
---@field LightMapDensityTextureName FSoftObjectPath
---@field GameViewport UGameViewportClient
---@field DeferredCommands TArray<FString>
---@field TickCycles int32
---@field GameCycles int32
---@field ClientCycles int32
---@field NearClipPlane float
---@field bHardwareSurveyEnabled boolean
---@field bSubtitlesEnabled boolean
---@field bSubtitlesForcedOff boolean
---@field MaximumLoopIterationCount int32
---@field bCanBlueprintsTickByDefault boolean
---@field bOptimizeAnimBlueprintMemberVariableAccess boolean
---@field bAllowMultiThreadedAnimationUpdate boolean
---@field bEnableEditorPSysRealtimeLOD boolean
---@field bSmoothFrameRate boolean
---@field bUseFixedFrameRate boolean
---@field FixedFrameRate float
---@field SmoothedFrameRateRange FFloatRange
---@field CustomTimeStep UEngineCustomTimeStep
---@field CustomTimeStepClassName FSoftClassPath
---@field TimecodeProvider UTimecodeProvider
---@field TimecodeProviderClassName FSoftClassPath
---@field bGenerateDefaultTimecode boolean
---@field GenerateDefaultTimecodeFrameRate FFrameRate
---@field GenerateDefaultTimecodeFrameDelay float
---@field bCheckForMultiplePawnsSpawnedInAFrame boolean
---@field NumPawnsAllowedToBeSpawnedInAFrame int32
---@field bShouldGenerateLowQualityLightmaps boolean
---@field C_WorldBox FColor
---@field C_BrushWire FColor
---@field C_AddWire FColor
---@field C_SubtractWire FColor
---@field C_SemiSolidWire FColor
---@field C_NonSolidWire FColor
---@field C_WireBackground FColor
---@field C_ScaleBoxHi FColor
---@field C_VolumeCollision FColor
---@field C_BSPCollision FColor
---@field C_OrthoBackground FColor
---@field C_Volume FColor
---@field C_BrushShape FColor
---@field StreamingDistanceFactor float
---@field GameScreenshotSaveDirectory FDirectoryPath
---@field TransitionType ETransitionType
---@field TransitionDescription FString
---@field TransitionGameMode FString
---@field MeshLODRange float
---@field bAllowMatureLanguage boolean
---@field CameraRotationThreshold float
---@field CameraTranslationThreshold float
---@field PrimitiveProbablyVisibleTime float
---@field MaxOcclusionPixelsFraction float
---@field bPauseOnLossOfFocus boolean
---@field MaxParticleResize int32
---@field MaxParticleResizeWarn int32
---@field PendingDroppedNotes TArray<FDropNoteInfo>
---@field NetClientTicksPerSecond float
---@field DisplayGamma float
---@field MinDesiredFrameRate float
---@field DefaultSelectedMaterialColor FLinearColor
---@field SelectedMaterialColor FLinearColor
---@field SelectionOutlineColor FLinearColor
---@field SubduedSelectionOutlineColor FLinearColor
---@field SelectedMaterialColorOverride FLinearColor
---@field bIsOverridingSelectedColor boolean
---@field bEnableOnScreenDebugMessages boolean
---@field bEnableOnScreenDebugMessagesDisplay boolean
---@field bSuppressMapWarnings boolean
---@field bDisableAILogging boolean
---@field bEnableVisualLogRecordingOnStart uint32
---@field ScreenSaverInhibitorSemaphore int32
---@field bLockReadOnlyLevels boolean
---@field ParticleEventManagerClassPath FString
---@field SelectionHighlightIntensity float
---@field BSPSelectionHighlightIntensity float
---@field SelectionHighlightIntensityBillboards float
---@field NetDriverDefinitions TArray<FNetDriverDefinition>
---@field ServerActors TArray<FString>
---@field RuntimeServerActors TArray<FString>
---@field NetErrorLogInterval float
---@field bStartedLoadMapMovie boolean
---@field NextWorldContextHandle int32
UEngine = {}



---@class UEngineBaseTypes : UObject
UEngineBaseTypes = {}


---@class UEngineCustomTimeStep : UObject
UEngineCustomTimeStep = {}


---@class UEngineHandlerComponentFactory : UHandlerComponentFactory
UEngineHandlerComponentFactory = {}


---@class UEngineMessage : ULocalMessage
---@field FailedPlaceMessage FString
---@field MaxedOutMessage FString
---@field EnteredMessage FString
---@field LeftMessage FString
---@field GlobalNameChange FString
---@field SpecEnteredMessage FString
---@field NewPlayerMessage FString
---@field NewSpecMessage FString
UEngineMessage = {}



---@class UEngineSubsystem : UDynamicSubsystem
UEngineSubsystem = {}


---@class UEngineTypes : UObject
UEngineTypes = {}


---@class UExponentialHeightFogComponent : USceneComponent
---@field FogDensity float
---@field FogHeightFalloff float
---@field SecondFogData FExponentialHeightFogData
---@field FogInscatteringColor FLinearColor
---@field InscatteringColorCubemap UTextureCube
---@field InscatteringColorCubemapAngle float
---@field InscatteringTextureTint FLinearColor
---@field FullyDirectionalInscatteringColorDistance float
---@field NonDirectionalInscatteringColorDistance float
---@field DirectionalInscatteringExponent float
---@field DirectionalInscatteringStartDistance float
---@field DirectionalInscatteringColor FLinearColor
---@field FogMaxOpacity float
---@field StartDistance float
---@field FogCutoffDistance float
---@field bEnableVolumetricFog boolean
---@field VolumetricFogScatteringDistribution float
---@field VolumetricFogAlbedo FColor
---@field VolumetricFogEmissive FLinearColor
---@field VolumetricFogExtinctionScale float
---@field VolumetricFogDistance float
---@field VolumetricFogStaticLightingScatteringIntensity float
---@field bOverrideLightColorsWithFogInscatteringColors boolean
UExponentialHeightFogComponent = {}

---@param NewValue float
function UExponentialHeightFogComponent:SetVolumetricFogScatteringDistribution(NewValue) end
---@param NewValue float
function UExponentialHeightFogComponent:SetVolumetricFogExtinctionScale(NewValue) end
---@param NewValue FLinearColor
function UExponentialHeightFogComponent:SetVolumetricFogEmissive(NewValue) end
---@param NewValue float
function UExponentialHeightFogComponent:SetVolumetricFogDistance(NewValue) end
---@param NewValue FColor
function UExponentialHeightFogComponent:SetVolumetricFogAlbedo(NewValue) end
---@param bNewValue boolean
function UExponentialHeightFogComponent:SetVolumetricFog(bNewValue) end
---@param Value float
function UExponentialHeightFogComponent:SetStartDistance(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetNonDirectionalInscatteringColorDistance(Value) end
---@param Value FLinearColor
function UExponentialHeightFogComponent:SetInscatteringTextureTint(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetInscatteringColorCubemapAngle(Value) end
---@param Value UTextureCube
function UExponentialHeightFogComponent:SetInscatteringColorCubemap(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetFullyDirectionalInscatteringColorDistance(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetFogMaxOpacity(Value) end
---@param Value FLinearColor
function UExponentialHeightFogComponent:SetFogInscatteringColor(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetFogHeightFalloff(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetFogDensity(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetFogCutoffDistance(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetDirectionalInscatteringStartDistance(Value) end
---@param Value float
function UExponentialHeightFogComponent:SetDirectionalInscatteringExponent(Value) end
---@param Value FLinearColor
function UExponentialHeightFogComponent:SetDirectionalInscatteringColor(Value) end


---@class UExporter : UObject
---@field SupportedClass UClass
---@field ExportRootScope UObject
---@field FormatExtension TArray<FString>
---@field FormatDescription TArray<FString>
---@field PreferredFormatIndex int32
---@field TextIndent int32
---@field bText boolean
---@field bSelectedOnly boolean
---@field bForceFileOperations boolean
---@field ExportTask UAssetExportTask
UExporter = {}

---@param Task UAssetExportTask
---@return boolean
function UExporter:ScriptRunAssetExportTask(Task) end
---@param ExportTasks TArray<UAssetExportTask>
---@return boolean
function UExporter:RunAssetExportTasks(ExportTasks) end
---@param Task UAssetExportTask
---@return boolean
function UExporter:RunAssetExportTask(Task) end


---@class UFXSystemAsset : UObject
---@field MaxPoolSize uint32
UFXSystemAsset = {}



---@class UFXSystemComponent : UPrimitiveComponent
UFXSystemComponent = {}

---@param ParameterName FName
---@param Param FVector
function UFXSystemComponent:SetVectorParameter(ParameterName, Param) end
---@param bAutoManage boolean
function UFXSystemComponent:SetUseAutoManageAttachment(bAutoManage) end
---@param ParameterName FName
---@param Param float
function UFXSystemComponent:SetFloatParameter(ParameterName, Param) end
---@param EmitterName FName
---@param bNewEnableState boolean
function UFXSystemComponent:SetEmitterEnable(EmitterName, bNewEnableState) end
---@param ParameterName FName
---@param Param FLinearColor
function UFXSystemComponent:SetColorParameter(ParameterName, Param) end
---@param ParameterName FName
---@param Param boolean
function UFXSystemComponent:SetBoolParameter(ParameterName, Param) end
---@param Parent USceneComponent
---@param SocketName FName
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
function UFXSystemComponent:SetAutoAttachmentParameters(Parent, SocketName, LocationRule, RotationRule, ScaleRule) end
---@param ParameterName FName
---@param Param AActor
function UFXSystemComponent:SetActorParameter(ParameterName, Param) end
function UFXSystemComponent:ReleaseToPool() end
---@return UFXSystemAsset
function UFXSystemComponent:GetFXSystemAsset() end


---@class UFloatingPawnMovement : UPawnMovementComponent
---@field MaxSpeed float
---@field Acceleration float
---@field Deceleration float
---@field TurningBoost float
---@field bPositionCorrected boolean
UFloatingPawnMovement = {}



---@class UFont : UObject
---@field FontCacheType EFontCacheType
---@field Characters TArray<FFontCharacter>
---@field Textures TArray<UTexture2D>
---@field IsRemapped int32
---@field EmScale float
---@field Ascent float
---@field Descent float
---@field Leading float
---@field Kerning int32
---@field ImportOptions FFontImportOptionsData
---@field NumCharacters int32
---@field MaxCharHeight TArray<int32>
---@field ScalingFactor float
---@field LegacyFontSize int32
---@field LegacyFontName FName
---@field CompositeFont FCompositeFont
UFont = {}



---@class UFontFace : UObject
---@field SourceFilename FString
---@field Hinting EFontHinting
---@field LoadingPolicy EFontLoadingPolicy
---@field LayoutMethod EFontLayoutMethod
UFontFace = {}



---@class UFontImportOptions : UObject
---@field Data FFontImportOptionsData
UFontImportOptions = {}



---@class UForceFeedbackAttenuation : UObject
---@field Attenuation FForceFeedbackAttenuationSettings
UForceFeedbackAttenuation = {}



---@class UForceFeedbackComponent : USceneComponent
---@field ForceFeedbackEffect UForceFeedbackEffect
---@field bAutoDestroy boolean
---@field bStopWhenOwnerDestroyed boolean
---@field bLooping boolean
---@field bIgnoreTimeDilation boolean
---@field bOverrideAttenuation boolean
---@field IntensityMultiplier float
---@field AttenuationSettings UForceFeedbackAttenuation
---@field AttenuationOverrides FForceFeedbackAttenuationSettings
---@field OnForceFeedbackFinished FForceFeedbackComponentOnForceFeedbackFinished
UForceFeedbackComponent = {}

function UForceFeedbackComponent:Stop() end
---@param NewIntensityMultiplier float
function UForceFeedbackComponent:SetIntensityMultiplier(NewIntensityMultiplier) end
---@param NewForceFeedbackEffect UForceFeedbackEffect
function UForceFeedbackComponent:SetForceFeedbackEffect(NewForceFeedbackEffect) end
---@param StartTime float
function UForceFeedbackComponent:Play(StartTime) end
---@param OutAttenuationSettings FForceFeedbackAttenuationSettings
---@return boolean
function UForceFeedbackComponent:BP_GetAttenuationSettingsToApply(OutAttenuationSettings) end
---@param InAttenuationSettings FForceFeedbackAttenuationSettings
function UForceFeedbackComponent:AdjustAttenuation(InAttenuationSettings) end


---@class UForceFeedbackEffect : UObject
---@field ChannelDetails TArray<FForceFeedbackChannelDetails>
---@field Duration float
UForceFeedbackEffect = {}



---@class UGameEngine : UEngine
---@field MaxDeltaTime float
---@field ServerFlushLogInterval float
---@field GameInstance UGameInstance
UGameEngine = {}



---@class UGameInstance : UObject
---@field LocalPlayers TArray<ULocalPlayer>
---@field OnlineSession UOnlineSession
---@field ReferencedObjects TArray<UObject>
UGameInstance = {}

function UGameInstance:ReceiveShutdown() end
function UGameInstance:ReceiveInit() end
---@param FailureType ETravelFailure::Type
function UGameInstance:HandleTravelError(FailureType) end
---@param FailureType ENetworkFailure::Type
---@param bIsServer boolean
function UGameInstance:HandleNetworkError(FailureType, bIsServer) end
---@param ControllerId int32
function UGameInstance:DebugRemovePlayer(ControllerId) end
---@param ControllerId int32
function UGameInstance:DebugCreatePlayer(ControllerId) end


---@class UGameInstanceSubsystem : USubsystem
UGameInstanceSubsystem = {}


---@class UGameUserSettings : UObject
---@field bUseVSync boolean
---@field bUseDynamicResolution boolean
---@field ResolutionSizeX uint32
---@field ResolutionSizeY uint32
---@field LastUserConfirmedResolutionSizeX uint32
---@field LastUserConfirmedResolutionSizeY uint32
---@field WindowPosX int32
---@field WindowPosY int32
---@field FullscreenMode int32
---@field LastConfirmedFullscreenMode int32
---@field PreferredFullscreenMode int32
---@field Version uint32
---@field AudioQualityLevel int32
---@field LastConfirmedAudioQualityLevel int32
---@field FrameRateLimit float
---@field DesiredScreenWidth int32
---@field bUseDesiredScreenHeight boolean
---@field DesiredScreenHeight int32
---@field LastUserConfirmedDesiredScreenWidth int32
---@field LastUserConfirmedDesiredScreenHeight int32
---@field LastRecommendedScreenWidth float
---@field LastRecommendedScreenHeight float
---@field LastCPUBenchmarkResult float
---@field LastGPUBenchmarkResult float
---@field LastCPUBenchmarkSteps TArray<float>
---@field LastGPUBenchmarkSteps TArray<float>
---@field LastGPUBenchmarkMultiplier float
---@field bUseHDRDisplayOutput boolean
---@field HDRDisplayOutputNits int32
---@field OnGameUserSettingsUINeedsUpdate FGameUserSettingsOnGameUserSettingsUINeedsUpdate
UGameUserSettings = {}

function UGameUserSettings:ValidateSettings() end
---@return boolean
function UGameUserSettings:SupportsHDRDisplayOutput() end
---@param bEnable boolean
function UGameUserSettings:SetVSyncEnabled(bEnable) end
---@param Value int32
function UGameUserSettings:SetVisualEffectQuality(Value) end
---@param Value int32
function UGameUserSettings:SetViewDistanceQuality(Value) end
function UGameUserSettings:SetToDefaults() end
---@param Value int32
function UGameUserSettings:SetTextureQuality(Value) end
---@param Value int32
function UGameUserSettings:SetShadowQuality(Value) end
---@param Value int32
function UGameUserSettings:SetShadingQuality(Value) end
---@param Resolution FIntPoint
function UGameUserSettings:SetScreenResolution(Resolution) end
---@param NewScaleValue float
function UGameUserSettings:SetResolutionScaleValueEx(NewScaleValue) end
---@param NewScaleValue int32
function UGameUserSettings:SetResolutionScaleValue(NewScaleValue) end
---@param NewScaleNormalized float
function UGameUserSettings:SetResolutionScaleNormalized(NewScaleNormalized) end
---@param Value int32
function UGameUserSettings:SetPostProcessingQuality(Value) end
---@param Value int32
function UGameUserSettings:SetOverallScalabilityLevel(Value) end
---@param InFullscreenMode EWindowMode::Type
function UGameUserSettings:SetFullscreenMode(InFullscreenMode) end
---@param NewLimit float
function UGameUserSettings:SetFrameRateLimit(NewLimit) end
---@param Value int32
function UGameUserSettings:SetFoliageQuality(Value) end
---@param bEnable boolean
function UGameUserSettings:SetDynamicResolutionEnabled(bEnable) end
function UGameUserSettings:SetBenchmarkFallbackValues() end
---@param QualityLevel int32
function UGameUserSettings:SetAudioQualityLevel(QualityLevel) end
---@param Value int32
function UGameUserSettings:SetAntiAliasingQuality(Value) end
function UGameUserSettings:SaveSettings() end
---@param WorkScale int32
---@param CPUMultiplier float
---@param GPUMultiplier float
function UGameUserSettings:RunHardwareBenchmark(WorkScale, CPUMultiplier, GPUMultiplier) end
function UGameUserSettings:RevertVideoMode() end
function UGameUserSettings:ResetToCurrentSettings() end
---@param bForceReload boolean
function UGameUserSettings:LoadSettings(bForceReload) end
---@return boolean
function UGameUserSettings:IsVSyncEnabled() end
---@return boolean
function UGameUserSettings:IsVSyncDirty() end
---@return boolean
function UGameUserSettings:IsScreenResolutionDirty() end
---@return boolean
function UGameUserSettings:IsHDREnabled() end
---@return boolean
function UGameUserSettings:IsFullscreenModeDirty() end
---@return boolean
function UGameUserSettings:IsDynamicResolutionEnabled() end
---@return boolean
function UGameUserSettings:IsDynamicResolutionDirty() end
---@return boolean
function UGameUserSettings:IsDirty() end
---@return int32
function UGameUserSettings:GetVisualEffectQuality() end
---@return int32
function UGameUserSettings:GetViewDistanceQuality() end
---@return int32
function UGameUserSettings:GetTextureQuality() end
---@return int32
function UGameUserSettings:GetSyncInterval() end
---@return int32
function UGameUserSettings:GetShadowQuality() end
---@return int32
function UGameUserSettings:GetShadingQuality() end
---@return FIntPoint
function UGameUserSettings:GetScreenResolution() end
---@return float
function UGameUserSettings:GetResolutionScaleNormalized() end
---@param CurrentScaleNormalized float
---@param CurrentScaleValue float
---@param MinScaleValue float
---@param MaxScaleValue float
function UGameUserSettings:GetResolutionScaleInformationEx(CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue) end
---@param CurrentScaleNormalized float
---@param CurrentScaleValue int32
---@param MinScaleValue int32
---@param MaxScaleValue int32
function UGameUserSettings:GetResolutionScaleInformation(CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue) end
---@return float
function UGameUserSettings:GetRecommendedResolutionScale() end
---@return EWindowMode::Type
function UGameUserSettings:GetPreferredFullscreenMode() end
---@return int32
function UGameUserSettings:GetPostProcessingQuality() end
---@return int32
function UGameUserSettings:GetOverallScalabilityLevel() end
---@return FIntPoint
function UGameUserSettings:GetLastConfirmedScreenResolution() end
---@return EWindowMode::Type
function UGameUserSettings:GetLastConfirmedFullscreenMode() end
---@return UGameUserSettings
function UGameUserSettings:GetGameUserSettings() end
---@return EWindowMode::Type
function UGameUserSettings:GetFullscreenMode() end
---@return float
function UGameUserSettings:GetFrameRateLimit() end
---@return int32
function UGameUserSettings:GetFramePace() end
---@return int32
function UGameUserSettings:GetFoliageQuality() end
---@return FIntPoint
function UGameUserSettings:GetDesktopResolution() end
---@return FIntPoint
function UGameUserSettings:GetDefaultWindowPosition() end
---@return EWindowMode::Type
function UGameUserSettings:GetDefaultWindowMode() end
---@return float
function UGameUserSettings:GetDefaultResolutionScale() end
---@return FIntPoint
function UGameUserSettings:GetDefaultResolution() end
---@return int32
function UGameUserSettings:GetCurrentHDRDisplayNits() end
---@return int32
function UGameUserSettings:GetAudioQualityLevel() end
---@return int32
function UGameUserSettings:GetAntiAliasingQuality() end
---@param bEnable boolean
---@param DisplayNits int32
function UGameUserSettings:EnableHDRDisplayOutput(bEnable, DisplayNits) end
function UGameUserSettings:ConfirmVideoMode() end
---@param bCheckForCommandLineOverrides boolean
function UGameUserSettings:ApplySettings(bCheckForCommandLineOverrides) end
---@param bCheckForCommandLineOverrides boolean
function UGameUserSettings:ApplyResolutionSettings(bCheckForCommandLineOverrides) end
function UGameUserSettings:ApplyNonResolutionSettings() end
function UGameUserSettings:ApplyHardwareBenchmarkResults() end


---@class UGameViewportClient : UScriptViewportClient
---@field ViewportConsole UConsole
---@field DebugProperties TArray<FDebugDisplayProperty>
---@field MaxSplitscreenPlayers int32
---@field World UWorld
---@field GameInstance UGameInstance
UGameViewportClient = {}

function UGameViewportClient:SSSwapControllers() end
function UGameViewportClient:ShowTitleSafeArea() end
---@param PlayerIndex int32
function UGameViewportClient:SetConsoleTarget(PlayerIndex) end


---@class UGameplayStatics : UBlueprintFunctionLibrary
UGameplayStatics = {}

---@param WorldContextObject UObject
---@param LevelName FName
---@param LatentInfo FLatentActionInfo
---@param bShouldBlockOnUnload boolean
function UGameplayStatics:UnloadStreamLevel(WorldContextObject, LevelName, LatentInfo, bShouldBlockOnUnload) end
---@param WorldContextObject UObject
---@param OutLaunchVelocity FVector
---@param StartPos FVector
---@param EndPos FVector
---@param OverrideGravityZ float
---@param ArcParam float
---@return boolean
function UGameplayStatics:SuggestProjectileVelocity_CustomArc(WorldContextObject, OutLaunchVelocity, StartPos, EndPos, OverrideGravityZ, ArcParam) end
---@param Sound USoundBase
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param bStopWhenAttachedToDestroyed boolean
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param AttenuationSettings USoundAttenuation
---@param ConcurrencySettings USoundConcurrency
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:SpawnSoundAttached(Sound, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy) end
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param AttenuationSettings USoundAttenuation
---@param ConcurrencySettings USoundConcurrency
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:SpawnSoundAtLocation(WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy) end
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param ConcurrencySettings USoundConcurrency
---@param bPersistAcrossLevelTransition boolean
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:SpawnSound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy) end
---@param ObjectClass UClass
---@param Outer UObject
---@return UObject
function UGameplayStatics:SpawnObject(ObjectClass, Outer) end
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param bStopWhenAttachedToDestroyed boolean
---@param bLooping boolean
---@param IntensityMultiplier float
---@param StartTime float
---@param AttenuationSettings UForceFeedbackAttenuation
---@param bAutoDestroy boolean
---@return UForceFeedbackComponent
function UGameplayStatics:SpawnForceFeedbackAttached(ForceFeedbackEffect, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, bLooping, IntensityMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end
---@param WorldContextObject UObject
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Location FVector
---@param Rotation FRotator
---@param bLooping boolean
---@param IntensityMultiplier float
---@param StartTime float
---@param AttenuationSettings UForceFeedbackAttenuation
---@param bAutoDestroy boolean
---@return UForceFeedbackComponent
function UGameplayStatics:SpawnForceFeedbackAtLocation(WorldContextObject, ForceFeedbackEffect, Location, Rotation, bLooping, IntensityMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end
---@param EmitterTemplate UParticleSystem
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
---@param LocationType EAttachLocation::Type
---@param bAutoDestroy boolean
---@param PoolingMethod EPSCPoolMethod
---@param bAutoActivate boolean
---@return UParticleSystemComponent
function UGameplayStatics:SpawnEmitterAttached(EmitterTemplate, AttachToComponent, AttachPointName, Location, Rotation, Scale, LocationType, bAutoDestroy, PoolingMethod, bAutoActivate) end
---@param WorldContextObject UObject
---@param EmitterTemplate UParticleSystem
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
---@param bAutoDestroy boolean
---@param PoolingMethod EPSCPoolMethod
---@param bAutoActivateSystem boolean
---@return UParticleSystemComponent
function UGameplayStatics:SpawnEmitterAtLocation(WorldContextObject, EmitterTemplate, Location, Rotation, Scale, bAutoDestroy, PoolingMethod, bAutoActivateSystem) end
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param bStopWhenAttachedToDestroyed boolean
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param AttenuationSettings USoundAttenuation
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:SpawnDialogueAttached(Dialogue, Context, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param AttenuationSettings USoundAttenuation
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:SpawnDialogueAtLocation(WorldContextObject, Dialogue, Context, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:SpawnDialogue2D(WorldContextObject, Dialogue, Context, VolumeMultiplier, PitchMultiplier, StartTime, bAutoDestroy) end
---@param DecalMaterial UMaterialInterface
---@param DecalSize FVector
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param LifeSpan float
---@return UDecalComponent
function UGameplayStatics:SpawnDecalAttached(DecalMaterial, DecalSize, AttachToComponent, AttachPointName, Location, Rotation, LocationType, LifeSpan) end
---@param WorldContextObject UObject
---@param DecalMaterial UMaterialInterface
---@param DecalSize FVector
---@param Location FVector
---@param Rotation FRotator
---@param LifeSpan float
---@return UDecalComponent
function UGameplayStatics:SpawnDecalAtLocation(WorldContextObject, DecalMaterial, DecalSize, Location, Rotation, LifeSpan) end
---@param WorldContextObject UObject
---@param NewLocation FIntVector
function UGameplayStatics:SetWorldOriginLocation(WorldContextObject, NewLocation) end
---@param WorldContextObject UObject
---@param MouseCaptureMode EMouseCaptureMode
function UGameplayStatics:SetViewportMouseCaptureMode(WorldContextObject, MouseCaptureMode) end
---@param bEnabled boolean
function UGameplayStatics:SetSubtitlesEnabled(bEnabled) end
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
---@param InSoundClass USoundClass
---@param Volume float
---@param Pitch float
---@param FadeInTime float
---@param bApplyToChildren boolean
function UGameplayStatics:SetSoundMixClassOverride(WorldContextObject, InSoundMixModifier, InSoundClass, Volume, Pitch, FadeInTime, bApplyToChildren) end
---@param WorldContextObject UObject
---@param SoundClass USoundClass
---@param DistanceAttenuationScale float
---@param TimeSec float
function UGameplayStatics:SetSoundClassDistanceScale(WorldContextObject, SoundClass, DistanceAttenuationScale, TimeSec) end
---@param Player APlayerController
---@param ControllerId int32
function UGameplayStatics:SetPlayerControllerID(Player, ControllerId) end
---@param WorldContextObject UObject
---@param MaxChannelCountScale float
function UGameplayStatics:SetMaxAudioChannelsScaled(WorldContextObject, MaxChannelCountScale) end
---@param WorldContextObject UObject
---@param TimeDilation float
function UGameplayStatics:SetGlobalTimeDilation(WorldContextObject, TimeDilation) end
---@param WorldContextObject UObject
---@param PitchModulation float
---@param TimeSec float
function UGameplayStatics:SetGlobalPitchModulation(WorldContextObject, PitchModulation, TimeSec) end
---@param WorldContextObject UObject
---@param FocusAzimuthScale float
---@param NonFocusAzimuthScale float
---@param FocusDistanceScale float
---@param NonFocusDistanceScale float
---@param FocusVolumeScale float
---@param NonFocusVolumeScale float
---@param FocusPriorityScale float
---@param NonFocusPriorityScale float
function UGameplayStatics:SetGlobalListenerFocusParameters(WorldContextObject, FocusAzimuthScale, NonFocusAzimuthScale, FocusDistanceScale, NonFocusDistanceScale, FocusVolumeScale, NonFocusVolumeScale, FocusPriorityScale, NonFocusPriorityScale) end
---@param WorldContextObject UObject
---@param bPaused boolean
---@return boolean
function UGameplayStatics:SetGamePaused(WorldContextObject, bPaused) end
---@param WorldContextObject UObject
---@param bDisable boolean
function UGameplayStatics:SetForceDisableSplitscreen(WorldContextObject, bDisable) end
---@param WorldContextObject UObject
---@param bEnable boolean
function UGameplayStatics:SetEnableWorldRendering(WorldContextObject, bEnable) end
---@param WorldContextObject UObject
---@param InSoundMix USoundMix
function UGameplayStatics:SetBaseSoundMix(WorldContextObject, InSoundMix) end
---@param SaveGameObject USaveGame
---@param SlotName FString
---@param UserIndex int32
---@return boolean
function UGameplayStatics:SaveGameToSlot(SaveGameObject, SlotName, UserIndex) end
---@param Player APlayerController
---@param bDestroyPawn boolean
function UGameplayStatics:RemovePlayer(Player, bDestroyPawn) end
---@param WorldContextObject UObject
---@param WorldLocation FVector
---@return FVector
function UGameplayStatics:RebaseZeroOriginOntoLocal(WorldContextObject, WorldLocation) end
---@param WorldContextObject UObject
---@param WorldLocation FVector
---@return FVector
function UGameplayStatics:RebaseLocalOriginOntoZero(WorldContextObject, WorldLocation) end
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
function UGameplayStatics:PushSoundMixModifier(WorldContextObject, InSoundMixModifier) end
---@param Player APlayerController
---@param WorldPosition FVector
---@param ScreenPosition FVector2D
---@param bPlayerViewportRelative boolean
---@return boolean
function UGameplayStatics:ProjectWorldToScreen(Player, WorldPosition, ScreenPosition, bPlayerViewportRelative) end
---@param InSound USoundBase
function UGameplayStatics:PrimeSound(InSound) end
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
function UGameplayStatics:PopSoundMixModifier(WorldContextObject, InSoundMixModifier) end
---@param WorldContextObject UObject
---@param Shake TSubclassOf<UCameraShake>
---@param Epicenter FVector
---@param InnerRadius float
---@param OuterRadius float
---@param Falloff float
---@param bOrientShakeTowardsEpicenter boolean
function UGameplayStatics:PlayWorldCameraShake(WorldContextObject, Shake, Epicenter, InnerRadius, OuterRadius, Falloff, bOrientShakeTowardsEpicenter) end
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param AttenuationSettings USoundAttenuation
---@param ConcurrencySettings USoundConcurrency
---@param OwningActor AActor
function UGameplayStatics:PlaySoundAtLocation(WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, OwningActor) end
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param ConcurrencySettings USoundConcurrency
---@param OwningActor AActor
function UGameplayStatics:PlaySound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, OwningActor) end
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param AttenuationSettings USoundAttenuation
function UGameplayStatics:PlayDialogueAtLocation(WorldContextObject, Dialogue, Context, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings) end
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
function UGameplayStatics:PlayDialogue2D(WorldContextObject, Dialogue, Context, VolumeMultiplier, PitchMultiplier, StartTime) end
---@param Options FString
---@param Key FString
---@return FString
function UGameplayStatics:ParseOption(Options, Key) end
---@param WorldContextObject UObject
---@param LevelName FName
---@param bAbsolute boolean
---@param Options FString
function UGameplayStatics:OpenLevel(WorldContextObject, LevelName, bAbsolute, Options) end
---@param bBlockingHit boolean
---@param bInitialOverlap boolean
---@param Time float
---@param Distance float
---@param Location FVector
---@param ImpactPoint FVector
---@param Normal FVector
---@param ImpactNormal FVector
---@param PhysMat UPhysicalMaterial
---@param HitActor AActor
---@param HitComponent UPrimitiveComponent
---@param HitBoneName FName
---@param HitItem int32
---@param FaceIndex int32
---@param TraceStart FVector
---@param TraceEnd FVector
---@return FHitResult
function UGameplayStatics:MakeHitResult(bBlockingHit, bInitialOverlap, Time, Distance, Location, ImpactPoint, Normal, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem, FaceIndex, TraceStart, TraceEnd) end
---@param WorldContextObject UObject
---@param LevelName FName
---@param bMakeVisibleAfterLoad boolean
---@param bShouldBlockOnLoad boolean
---@param LatentInfo FLatentActionInfo
function UGameplayStatics:LoadStreamLevel(WorldContextObject, LevelName, bMakeVisibleAfterLoad, bShouldBlockOnLoad, LatentInfo) end
---@param SlotName FString
---@param UserIndex int32
---@return USaveGame
function UGameplayStatics:LoadGameFromSlot(SlotName, UserIndex) end
---@param WorldContextObject UObject
---@return boolean
function UGameplayStatics:IsSplitscreenForceDisabled(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UGameplayStatics:IsGamePaused(WorldContextObject) end
---@param Options FString
---@param InKey FString
---@return boolean
function UGameplayStatics:HasOption(Options, InKey) end
---@param OptionToCheck FString
---@return boolean
function UGameplayStatics:HasLaunchOption(OptionToCheck) end
---@param WorldContextObject UObject
---@param StaticMesh UStaticMesh
---@param CenterPosition FVector
---@param Radius float
---@return int32
function UGameplayStatics:GrassOverlappingSphereCount(WorldContextObject, StaticMesh, CenterPosition, Radius) end
---@param WorldContextObject UObject
---@return FIntVector
function UGameplayStatics:GetWorldOriginLocation(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UGameplayStatics:GetWorldDeltaSeconds(WorldContextObject) end
---@param DesiredView FMinimalViewInfo
---@param ViewMatrix FMatrix
---@param ProjectionMatrix FMatrix
---@param ViewProjectionMatrix FMatrix
function UGameplayStatics:GetViewProjectionMatrix(DesiredView, ViewMatrix, ProjectionMatrix, ViewProjectionMatrix) end
---@param WorldContextObject UObject
---@return EMouseCaptureMode
function UGameplayStatics:GetViewportMouseCaptureMode(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UGameplayStatics:GetUnpausedTimeSeconds(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UGameplayStatics:GetTimeSeconds(WorldContextObject) end
---@param Hit FHitResult
---@return EPhysicalSurface
function UGameplayStatics:GetSurfaceType(Hit) end
---@param WorldContextObject UObject
---@param PackageName FName
---@return ULevelStreaming
function UGameplayStatics:GetStreamingLevel(WorldContextObject, PackageName) end
---@param WorldContextObject UObject
---@return float
function UGameplayStatics:GetRealTimeSeconds(WorldContextObject) end
---@param WorldContextObject UObject
---@param PlayerIndex int32
---@return APawn
function UGameplayStatics:GetPlayerPawn(WorldContextObject, PlayerIndex) end
---@param Player APlayerController
---@return int32
function UGameplayStatics:GetPlayerControllerID(Player) end
---@param WorldContextObject UObject
---@param ControllerId int32
---@return APlayerController
function UGameplayStatics:GetPlayerControllerFromID(WorldContextObject, ControllerId) end
---@param WorldContextObject UObject
---@param PlayerIndex int32
---@return APlayerController
function UGameplayStatics:GetPlayerController(WorldContextObject, PlayerIndex) end
---@param WorldContextObject UObject
---@param PlayerIndex int32
---@return ACharacter
function UGameplayStatics:GetPlayerCharacter(WorldContextObject, PlayerIndex) end
---@param WorldContextObject UObject
---@param PlayerIndex int32
---@return APlayerCameraManager
function UGameplayStatics:GetPlayerCameraManager(WorldContextObject, PlayerIndex) end
---@return FString
function UGameplayStatics:GetPlatformName() end
---@param Object UObject
---@return UClass
function UGameplayStatics:GetObjectClass(Object) end
---@param WorldContextObject UObject
---@return int32
function UGameplayStatics:GetMaxAudioChannelCount(WorldContextObject) end
---@param Pair FString
---@param Key FString
---@param Value FString
function UGameplayStatics:GetKeyValue(Pair, Key, Value) end
---@param Options FString
---@param Key FString
---@param DefaultValue int32
---@return int32
function UGameplayStatics:GetIntOption(Options, Key, DefaultValue) end
---@param WorldContextObject UObject
---@return float
function UGameplayStatics:GetGlobalTimeDilation(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGameStateBase
function UGameplayStatics:GetGameState(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGameModeBase
function UGameplayStatics:GetGameMode(WorldContextObject) end
---@param WorldContextObject UObject
---@return UGameInstance
function UGameplayStatics:GetGameInstance(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UGameplayStatics:GetEnableWorldRendering(WorldContextObject) end
---@param WorldContextObject UObject
---@return UReverbEffect
function UGameplayStatics:GetCurrentReverbEffect(WorldContextObject) end
---@param WorldContextObject UObject
---@param bRemovePrefixString boolean
---@return FString
function UGameplayStatics:GetCurrentLevelName(WorldContextObject, bRemovePrefixString) end
---@param WorldContextObject UObject
---@param Location FVector
---@param MaximumRange float
---@param bAllowAttenuationOverride boolean
---@param ListenerPosition FVector
---@return boolean
function UGameplayStatics:GetClosestListenerLocation(WorldContextObject, Location, MaximumRange, bAllowAttenuationOverride, ListenerPosition) end
---@param WorldContextObject UObject
---@return float
function UGameplayStatics:GetAudioTimeSeconds(WorldContextObject) end
---@param WorldContextObject UObject
---@param Tag FName
---@param OutActors TArray<AActor>
function UGameplayStatics:GetAllActorsWithTag(WorldContextObject, Tag, OutActors) end
---@param WorldContextObject UObject
---@param Interface TSubclassOf<UInterface>
---@param OutActors TArray<AActor>
function UGameplayStatics:GetAllActorsWithInterface(WorldContextObject, Interface, OutActors) end
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf<AActor>
---@param Tag FName
---@param OutActors TArray<AActor>
function UGameplayStatics:GetAllActorsOfClassWithTag(WorldContextObject, ActorClass, Tag, OutActors) end
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf<AActor>
---@param OutActors TArray<AActor>
function UGameplayStatics:GetAllActorsOfClass(WorldContextObject, ActorClass, OutActors) end
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf<AActor>
---@return AActor
function UGameplayStatics:GetActorOfClass(WorldContextObject, ActorClass) end
---@param Actors TArray<AActor>
---@param bOnlyCollidingComponents boolean
---@param Center FVector
---@param BoxExtent FVector
function UGameplayStatics:GetActorArrayBounds(Actors, bOnlyCollidingComponents, Center, BoxExtent) end
---@param Actors TArray<AActor>
---@return FVector
function UGameplayStatics:GetActorArrayAverageLocation(Actors) end
---@param WorldContextObject UObject
---@param Seconds int32
---@param PartialSeconds float
function UGameplayStatics:GetAccurateRealTime(WorldContextObject, Seconds, PartialSeconds) end
---@param WorldContextObject UObject
function UGameplayStatics:FlushLevelStreaming(WorldContextObject) end
---@param Actor AActor
---@param SpawnTransform FTransform
---@return AActor
function UGameplayStatics:FinishSpawningActor(Actor, SpawnTransform) end
---@param Hit FHitResult
---@param UVChannel int32
---@param UV FVector2D
---@return boolean
function UGameplayStatics:FindCollisionUV(Hit, UVChannel, UV) end
---@param Enable boolean
function UGameplayStatics:EnableLiveStreaming(Enable) end
---@param SlotName FString
---@param UserIndex int32
---@return boolean
function UGameplayStatics:DoesSaveGameExist(SlotName, UserIndex) end
---@param Player APlayerController
---@param ScreenPosition FVector2D
---@param WorldPosition FVector
---@param WorldDirection FVector
---@return boolean
function UGameplayStatics:DeprojectScreenToWorld(Player, ScreenPosition, WorldPosition, WorldDirection) end
---@param SlotName FString
---@param UserIndex int32
---@return boolean
function UGameplayStatics:DeleteGameInSlot(SlotName, UserIndex) end
---@param WorldContextObject UObject
---@param TagName FName
function UGameplayStatics:DeactivateReverbEffect(WorldContextObject, TagName) end
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param VolumeMultiplier float
---@param PitchMultiplier float
---@param StartTime float
---@param ConcurrencySettings USoundConcurrency
---@param bPersistAcrossLevelTransition boolean
---@param bAutoDestroy boolean
---@return UAudioComponent
function UGameplayStatics:CreateSound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy) end
---@param SaveGameClass TSubclassOf<USaveGame>
---@return USaveGame
function UGameplayStatics:CreateSaveGameObject(SaveGameClass) end
---@param WorldContextObject UObject
---@param ControllerId int32
---@param bSpawnPlayerController boolean
---@return APlayerController
function UGameplayStatics:CreatePlayer(WorldContextObject, ControllerId, bSpawnPlayerController) end
---@param WorldContextObject UObject
function UGameplayStatics:ClearSoundMixModifiers(WorldContextObject) end
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
---@param InSoundClass USoundClass
---@param FadeOutTime float
function UGameplayStatics:ClearSoundMixClassOverride(WorldContextObject, InSoundMixModifier, InSoundClass, FadeOutTime) end
function UGameplayStatics:CancelAsyncLoading() end
---@param Hit FHitResult
---@param bBlockingHit boolean
---@param bInitialOverlap boolean
---@param Time float
---@param Distance float
---@param Location FVector
---@param ImpactPoint FVector
---@param Normal FVector
---@param ImpactNormal FVector
---@param PhysMat UPhysicalMaterial
---@param HitActor AActor
---@param HitComponent UPrimitiveComponent
---@param HitBoneName FName
---@param HitItem int32
---@param FaceIndex int32
---@param TraceStart FVector
---@param TraceEnd FVector
function UGameplayStatics:BreakHitResult(Hit, bBlockingHit, bInitialOverlap, Time, Distance, Location, ImpactPoint, Normal, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, HitItem, FaceIndex, TraceStart, TraceEnd) end
---@param WorldContextObject UObject
---@param TossVelocity FVector
---@param StartLocation FVector
---@param EndLocation FVector
---@param LaunchSpeed float
---@param OverrideGravityZ float
---@param TraceOption ESuggestProjVelocityTraceOption::Type
---@param CollisionRadius float
---@param bFavorHighArc boolean
---@param bDrawDebug boolean
---@return boolean
function UGameplayStatics:BlueprintSuggestProjectileVelocity(WorldContextObject, TossVelocity, StartLocation, EndLocation, LaunchSpeed, OverrideGravityZ, TraceOption, CollisionRadius, bFavorHighArc, bDrawDebug) end
---@param WorldContextObject UObject
---@param OutHit FHitResult
---@param OutPathPositions TArray<FVector>
---@param OutLastTraceDestination FVector
---@param StartPos FVector
---@param LaunchVelocity FVector
---@param bTracePath boolean
---@param ProjectileRadius float
---@param TraceChannel ECollisionChannel
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param DrawDebugTime float
---@param SimFrequency float
---@param MaxSimTime float
---@param OverrideGravityZ float
---@return boolean
function UGameplayStatics:Blueprint_PredictProjectilePath_ByTraceChannel(WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ) end
---@param WorldContextObject UObject
---@param OutHit FHitResult
---@param OutPathPositions TArray<FVector>
---@param OutLastTraceDestination FVector
---@param StartPos FVector
---@param LaunchVelocity FVector
---@param bTracePath boolean
---@param ProjectileRadius float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param DrawDebugTime float
---@param SimFrequency float
---@param MaxSimTime float
---@param OverrideGravityZ float
---@return boolean
function UGameplayStatics:Blueprint_PredictProjectilePath_ByObjectType(WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ) end
---@param WorldContextObject UObject
---@param PredictParams FPredictProjectilePathParams
---@param PredictResult FPredictProjectilePathResult
---@return boolean
function UGameplayStatics:Blueprint_PredictProjectilePath_Advanced(WorldContextObject, PredictParams, PredictResult) end
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf<AActor>
---@param SpawnTransform FTransform
---@param bNoCollisionFail boolean
---@param Owner AActor
---@return AActor
function UGameplayStatics:BeginSpawningActorFromClass(WorldContextObject, ActorClass, SpawnTransform, bNoCollisionFail, Owner) end
---@param WorldContextObject UObject
---@param Blueprint UBlueprint
---@param SpawnTransform FTransform
---@param bNoCollisionFail boolean
---@return AActor
function UGameplayStatics:BeginSpawningActorFromBlueprint(WorldContextObject, Blueprint, SpawnTransform, bNoCollisionFail) end
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf<AActor>
---@param SpawnTransform FTransform
---@param CollisionHandlingOverride ESpawnActorCollisionHandlingMethod
---@param Owner AActor
---@return AActor
function UGameplayStatics:BeginDeferredActorSpawnFromClass(WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner) end
---@return boolean
function UGameplayStatics:AreSubtitlesEnabled() end
---@param WorldContextObject UObject
---@param Location FVector
---@param MaximumRange float
---@return boolean
function UGameplayStatics:AreAnyListenersWithinRange(WorldContextObject, Location, MaximumRange) end
---@param WorldContextObject UObject
---@param BaseDamage float
---@param MinimumDamage float
---@param Origin FVector
---@param DamageInnerRadius float
---@param DamageOuterRadius float
---@param DamageFalloff float
---@param DamageTypeClass TSubclassOf<UDamageType>
---@param IgnoreActors TArray<AActor>
---@param DamageCauser AActor
---@param InstigatedByController AController
---@param DamagePreventionChannel ECollisionChannel
---@return boolean
function UGameplayStatics:ApplyRadialDamageWithFalloff(WorldContextObject, BaseDamage, MinimumDamage, Origin, DamageInnerRadius, DamageOuterRadius, DamageFalloff, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, DamagePreventionChannel) end
---@param WorldContextObject UObject
---@param BaseDamage float
---@param Origin FVector
---@param DamageRadius float
---@param DamageTypeClass TSubclassOf<UDamageType>
---@param IgnoreActors TArray<AActor>
---@param DamageCauser AActor
---@param InstigatedByController AController
---@param bDoFullDamage boolean
---@param DamagePreventionChannel ECollisionChannel
---@return boolean
function UGameplayStatics:ApplyRadialDamage(WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel) end
---@param DamagedActor AActor
---@param BaseDamage float
---@param HitFromDirection FVector
---@param HitInfo FHitResult
---@param EventInstigator AController
---@param DamageCauser AActor
---@param DamageTypeClass TSubclassOf<UDamageType>
---@return float
function UGameplayStatics:ApplyPointDamage(DamagedActor, BaseDamage, HitFromDirection, HitInfo, EventInstigator, DamageCauser, DamageTypeClass) end
---@param DamagedActor AActor
---@param BaseDamage float
---@param EventInstigator AController
---@param DamageCauser AActor
---@param DamageTypeClass TSubclassOf<UDamageType>
---@return float
function UGameplayStatics:ApplyDamage(DamagedActor, BaseDamage, EventInstigator, DamageCauser, DamageTypeClass) end
---@param WorldContextObject UObject
---@param ReverbEffect UReverbEffect
---@param TagName FName
---@param Priority float
---@param Volume float
---@param FadeTime float
function UGameplayStatics:ActivateReverbEffect(WorldContextObject, ReverbEffect, TagName, Priority, Volume, FadeTime) end


---@class UGarbageCollectionSettings : UDeveloperSettings
---@field TimeBetweenPurgingPendingKillObjects float
---@field FlushStreamingOnGC boolean
---@field AllowParallelGC boolean
---@field IncrementalBeginDestroyEnabled boolean
---@field MultithreadedDestructionEnabled boolean
---@field CreateGCClusters boolean
---@field AssetClusteringEnabled boolean
---@field ActorClusteringEnabled boolean
---@field BlueprintClusteringEnabled boolean
---@field UseDisregardForGCOnDedicatedServers boolean
---@field MinGCClusterSize int32
---@field NumRetriesBeforeForcingGC int32
---@field MaxObjectsNotConsideredByGC int32
---@field SizeOfPermanentObjectPool int32
---@field MaxObjectsInGame int32
---@field MaxObjectsInEditor int32
UGarbageCollectionSettings = {}



---@class UGraphNodeContextMenuContext : UObject
---@field Blueprint UBlueprint
---@field Graph UEdGraph
---@field Node UEdGraphNode
---@field bIsDebugging boolean
UGraphNodeContextMenuContext = {}



---@class UHLODProxy : UObject
---@field ProxyMeshes TArray<FHLODProxyMesh>
UHLODProxy = {}



---@class UHapticFeedbackEffect_Base : UObject
UHapticFeedbackEffect_Base = {}


---@class UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base
---@field Amplitudes TArray<uint8>
---@field SampleRate int32
UHapticFeedbackEffect_Buffer = {}



---@class UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base
---@field HapticDetails FHapticFeedbackDetails_Curve
UHapticFeedbackEffect_Curve = {}



---@class UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base
---@field SoundWave USoundWave
UHapticFeedbackEffect_SoundWave = {}



---@class UHealthSnapshotBlueprintLibrary : UBlueprintFunctionLibrary
UHealthSnapshotBlueprintLibrary = {}

function UHealthSnapshotBlueprintLibrary:StopPerformanceSnapshots() end
function UHealthSnapshotBlueprintLibrary:StartPerformanceSnapshots() end
---@param SnapshotTitle FString
---@param bResetStats boolean
function UHealthSnapshotBlueprintLibrary:LogPerformanceSnapshot(SnapshotTitle, bResetStats) end


---@class UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent
---@field SortedInstances TArray<int32>
---@field NumBuiltInstances int32
---@field BuiltInstanceBounds FBox
---@field UnbuiltInstanceBounds FBox
---@field UnbuiltInstanceBoundsList TArray<FBox>
---@field bEnableDensityScaling boolean
---@field OcclusionLayerNumNodes int32
---@field CacheMeshExtendedBounds FBoxSphereBounds
---@field bDisableCollision boolean
---@field InstanceCountToRender int32
UHierarchicalInstancedStaticMeshComponent = {}

---@param InstancesToRemove TArray<int32>
---@return boolean
function UHierarchicalInstancedStaticMeshComponent:RemoveInstances(InstancesToRemove) end


---@class UHierarchicalLODSetup : UObject
---@field HierarchicalLODSetup TArray<FHierarchicalSimplification>
---@field OverrideBaseMaterial TSoftObjectPtr<UMaterialInterface>
UHierarchicalLODSetup = {}



---@class UImportanceSamplingLibrary : UBlueprintFunctionLibrary
UImportanceSamplingLibrary = {}

---@param Index int32
---@param Dimension int32
---@param Seed float
---@return float
function UImportanceSamplingLibrary:RandomSobolFloat(Index, Dimension, Seed) end
---@param Index int32
---@param NumCells int32
---@param Cell FVector
---@param Seed FVector
---@return FVector
function UImportanceSamplingLibrary:RandomSobolCell3D(Index, NumCells, Cell, Seed) end
---@param Index int32
---@param NumCells int32
---@param Cell FVector2D
---@param Seed FVector2D
---@return FVector2D
function UImportanceSamplingLibrary:RandomSobolCell2D(Index, NumCells, Cell, Seed) end
---@param Index int32
---@param Dimension int32
---@param PreviousValue float
---@return float
function UImportanceSamplingLibrary:NextSobolFloat(Index, Dimension, PreviousValue) end
---@param Index int32
---@param NumCells int32
---@param PreviousValue FVector
---@return FVector
function UImportanceSamplingLibrary:NextSobolCell3D(Index, NumCells, PreviousValue) end
---@param Index int32
---@param NumCells int32
---@param PreviousValue FVector2D
---@return FVector2D
function UImportanceSamplingLibrary:NextSobolCell2D(Index, NumCells, PreviousValue) end
---@param Texture UTexture2D
---@param WeightingFunc EImportanceWeight::Type
---@return FImportanceTexture
function UImportanceSamplingLibrary:MakeImportanceTexture(Texture, WeightingFunc) end
---@param Texture FImportanceTexture
---@param Rand FVector2D
---@param Samples int32
---@param Intensity float
---@param SamplePosition FVector2D
---@param SampleColor FLinearColor
---@param SampleIntensity float
---@param SampleSize float
function UImportanceSamplingLibrary:ImportanceSample(Texture, Rand, Samples, Intensity, SamplePosition, SampleColor, SampleIntensity, SampleSize) end
---@param ImportanceTexture FImportanceTexture
---@param Texture UTexture2D
---@param WeightingFunc EImportanceWeight::Type
function UImportanceSamplingLibrary:BreakImportanceTexture(ImportanceTexture, Texture, WeightingFunc) end


---@class UInGameAdManager : UPlatformInterfaceBase
---@field bShouldPauseWhileAdOpen boolean
---@field ClickedBannerDelegates TArray<FInGameAdManagerClickedBannerDelegates>
---@field ClosedAdDelegates TArray<FInGameAdManagerClosedAdDelegates>
UInGameAdManager = {}



---@class UInheritableComponentHandler : UObject
---@field Records TArray<FComponentOverrideRecord>
---@field UnnecessaryComponents TArray<UActorComponent>
UInheritableComponentHandler = {}



---@class UInputActionDelegateBinding : UInputDelegateBinding
---@field InputActionDelegateBindings TArray<FBlueprintInputActionDelegateBinding>
UInputActionDelegateBinding = {}



---@class UInputAxisDelegateBinding : UInputDelegateBinding
---@field InputAxisDelegateBindings TArray<FBlueprintInputAxisDelegateBinding>
UInputAxisDelegateBinding = {}



---@class UInputAxisKeyDelegateBinding : UInputDelegateBinding
---@field InputAxisKeyDelegateBindings TArray<FBlueprintInputAxisKeyDelegateBinding>
UInputAxisKeyDelegateBinding = {}



---@class UInputComponent : UActorComponent
---@field CachedKeyToActionInfo TArray<FCachedKeyToActionInfo>
UInputComponent = {}

---@param Key FKey
---@return boolean
function UInputComponent:WasControllerKeyJustReleased(Key) end
---@param Key FKey
---@return boolean
function UInputComponent:WasControllerKeyJustPressed(Key) end
---@param Key FKey
---@return boolean
function UInputComponent:IsControllerKeyDown(Key) end
---@param FingerIndex int32
---@param LocationX float
---@param LocationY float
---@param bIsCurrentlyPressed boolean
function UInputComponent:GetTouchState(FingerIndex, LocationX, LocationY, bIsCurrentlyPressed) end
---@param Key FKey
---@return FVector
function UInputComponent:GetControllerVectorKeyState(Key) end
---@param DeltaX float
---@param DeltaY float
function UInputComponent:GetControllerMouseDelta(DeltaX, DeltaY) end
---@param Key FKey
---@return float
function UInputComponent:GetControllerKeyTimeDown(Key) end
---@param WhichStick EControllerAnalogStick::Type
---@param StickX float
---@param StickY float
function UInputComponent:GetControllerAnalogStickState(WhichStick, StickX, StickY) end
---@param Key FKey
---@return float
function UInputComponent:GetControllerAnalogKeyState(Key) end


---@class UInputDelegateBinding : UDynamicBlueprintBinding
UInputDelegateBinding = {}


---@class UInputKeyDelegateBinding : UInputDelegateBinding
---@field InputKeyDelegateBindings TArray<FBlueprintInputKeyDelegateBinding>
UInputKeyDelegateBinding = {}



---@class UInputSettings : UObject
---@field AxisConfig TArray<FInputAxisConfigEntry>
---@field bAltEnterTogglesFullscreen boolean
---@field bF11TogglesFullscreen boolean
---@field bUseMouseForTouch boolean
---@field bEnableMouseSmoothing boolean
---@field bEnableFOVScaling boolean
---@field bCaptureMouseOnLaunch boolean
---@field bDefaultViewportMouseLock boolean
---@field bAlwaysShowTouchInterface boolean
---@field bShowConsoleOnFourFingerTap boolean
---@field bEnableGestureRecognizer boolean
---@field bUseAutocorrect boolean
---@field ExcludedAutocorrectOS TArray<FString>
---@field ExcludedAutocorrectCultures TArray<FString>
---@field ExcludedAutocorrectDeviceModels TArray<FString>
---@field DefaultViewportMouseCaptureMode EMouseCaptureMode
---@field DefaultViewportMouseLockMode EMouseLockMode
---@field FOVScale float
---@field DoubleClickTime float
---@field ActionMappings TArray<FInputActionKeyMapping>
---@field AxisMappings TArray<FInputAxisKeyMapping>
---@field SpeechMappings TArray<FInputActionSpeechMapping>
---@field DefaultTouchInterface FSoftObjectPath
---@field ConsoleKey FKey
---@field ConsoleKeys TArray<FKey>
UInputSettings = {}

function UInputSettings:SaveKeyMappings() end
---@param KeyMapping FInputAxisKeyMapping
---@param bForceRebuildKeymaps boolean
function UInputSettings:RemoveAxisMapping(KeyMapping, bForceRebuildKeymaps) end
---@param KeyMapping FInputActionKeyMapping
---@param bForceRebuildKeymaps boolean
function UInputSettings:RemoveActionMapping(KeyMapping, bForceRebuildKeymaps) end
---@return UInputSettings
function UInputSettings:GetInputSettings() end
---@param AxisNames TArray<FName>
function UInputSettings:GetAxisNames(AxisNames) end
---@param InAxisName FName
---@param OutMappings TArray<FInputAxisKeyMapping>
function UInputSettings:GetAxisMappingByName(InAxisName, OutMappings) end
---@param ActionNames TArray<FName>
function UInputSettings:GetActionNames(ActionNames) end
---@param InActionName FName
---@param OutMappings TArray<FInputActionKeyMapping>
function UInputSettings:GetActionMappingByName(InActionName, OutMappings) end
function UInputSettings:ForceRebuildKeymaps() end
---@param KeyMapping FInputAxisKeyMapping
---@param bForceRebuildKeymaps boolean
function UInputSettings:AddAxisMapping(KeyMapping, bForceRebuildKeymaps) end
---@param KeyMapping FInputActionKeyMapping
---@param bForceRebuildKeymaps boolean
function UInputSettings:AddActionMapping(KeyMapping, bForceRebuildKeymaps) end


---@class UInputTouchDelegateBinding : UInputDelegateBinding
---@field InputTouchDelegateBindings TArray<FBlueprintInputTouchDelegateBinding>
UInputTouchDelegateBinding = {}



---@class UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding
UInputVectorAxisDelegateBinding = {}


---@class UInstancedStaticMeshComponent : UStaticMeshComponent
---@field PerInstanceSMData TArray<FInstancedStaticMeshInstanceData>
---@field NumCustomDataFloats int32
---@field PerInstanceSMCustomData TArray<float>
---@field InstancingRandomSeed int32
---@field InstanceStartCullDistance int32
---@field InstanceEndCullDistance int32
---@field InstanceReorderTable TArray<int32>
---@field NumPendingLightmaps int32
---@field CachedMappings TArray<FInstancedStaticMeshMappingInfo>
UInstancedStaticMeshComponent = {}

---@param InstanceIndex int32
---@param NewInstanceTransform FTransform
---@param bWorldSpace boolean
---@param bMarkRenderStateDirty boolean
---@param bTeleport boolean
---@return boolean
function UInstancedStaticMeshComponent:UpdateInstanceTransform(InstanceIndex, NewInstanceTransform, bWorldSpace, bMarkRenderStateDirty, bTeleport) end
---@param InstanceIndex int32
---@param CustomDataIndex int32
---@param CustomDataValue float
---@param bMarkRenderStateDirty boolean
---@return boolean
function UInstancedStaticMeshComponent:SetCustomDataValue(InstanceIndex, CustomDataIndex, CustomDataValue, bMarkRenderStateDirty) end
---@param StartCullDistance int32
---@param EndCullDistance int32
function UInstancedStaticMeshComponent:SetCullDistances(StartCullDistance, EndCullDistance) end
---@param InstanceIndex int32
---@return boolean
function UInstancedStaticMeshComponent:RemoveInstance(InstanceIndex) end
---@param InstanceIndex int32
---@param OutInstanceTransform FTransform
---@param bWorldSpace boolean
---@return boolean
function UInstancedStaticMeshComponent:GetInstanceTransform(InstanceIndex, OutInstanceTransform, bWorldSpace) end
---@param Center FVector
---@param Radius float
---@param bSphereInWorldSpace boolean
---@return TArray<int32>
function UInstancedStaticMeshComponent:GetInstancesOverlappingSphere(Center, Radius, bSphereInWorldSpace) end
---@param Box FBox
---@param bBoxInWorldSpace boolean
---@return TArray<int32>
function UInstancedStaticMeshComponent:GetInstancesOverlappingBox(Box, bBoxInWorldSpace) end
---@return int32
function UInstancedStaticMeshComponent:GetInstanceCount() end
function UInstancedStaticMeshComponent:ClearInstances() end
---@param StartInstanceIndex int32
---@param NewInstancesTransforms TArray<FTransform>
---@param bWorldSpace boolean
---@param bMarkRenderStateDirty boolean
---@param bTeleport boolean
---@return boolean
function UInstancedStaticMeshComponent:BatchUpdateInstancesTransforms(StartInstanceIndex, NewInstancesTransforms, bWorldSpace, bMarkRenderStateDirty, bTeleport) end
---@param StartInstanceIndex int32
---@param NumInstances int32
---@param NewInstancesTransform FTransform
---@param bWorldSpace boolean
---@param bMarkRenderStateDirty boolean
---@param bTeleport boolean
---@return boolean
function UInstancedStaticMeshComponent:BatchUpdateInstancesTransform(StartInstanceIndex, NumInstances, NewInstancesTransform, bWorldSpace, bMarkRenderStateDirty, bTeleport) end
---@param WorldTransform FTransform
---@return int32
function UInstancedStaticMeshComponent:AddInstanceWorldSpace(WorldTransform) end
---@param InstanceTransform FTransform
---@return int32
function UInstancedStaticMeshComponent:AddInstance(InstanceTransform) end


---@class UIntSerialization : UObject
---@field UnsignedInt16Variable uint16
---@field UnsignedInt32Variable uint32
---@field UnsignedInt64Variable uint64
---@field SignedInt8Variable int8
---@field SignedInt16Variable int16
---@field SignedInt64Variable int64
---@field UnsignedInt8Variable uint8
---@field SignedInt32Variable int32
UIntSerialization = {}



---@class UInterpCurveEdSetup : UObject
---@field Tabs TArray<FCurveEdTab>
---@field ActiveTab int32
UInterpCurveEdSetup = {}



---@class UInterpData : UObject
---@field InterpLength float
---@field PathBuildTime float
---@field InterpGroups TArray<UInterpGroup>
---@field CurveEdSetup UInterpCurveEdSetup
---@field EdSectionStart float
---@field EdSectionEnd float
---@field bShouldBakeAndPrune boolean
---@field CachedDirectorGroup UInterpGroupDirector
---@field AllEventNames TArray<FName>
UInterpData = {}



---@class UInterpFilter : UObject
---@field Caption FString
UInterpFilter = {}



---@class UInterpFilter_Classes : UInterpFilter
UInterpFilter_Classes = {}


---@class UInterpFilter_Custom : UInterpFilter
UInterpFilter_Custom = {}


---@class UInterpGroup : UObject
---@field InterpTracks TArray<UInterpTrack>
---@field GroupName FName
---@field GroupColor FColor
---@field bCollapsed boolean
---@field bVisible boolean
---@field bIsFolder boolean
---@field bIsParented boolean
---@field bIsSelected boolean
UInterpGroup = {}



---@class UInterpGroupCamera : UInterpGroup
---@field CameraAnimInst UCameraAnim
---@field CompressTolerance float
UInterpGroupCamera = {}



---@class UInterpGroupDirector : UInterpGroup
UInterpGroupDirector = {}


---@class UInterpGroupInst : UObject
---@field Group UInterpGroup
---@field GroupActor AActor
---@field TrackInst TArray<UInterpTrackInst>
UInterpGroupInst = {}



---@class UInterpGroupInstCamera : UInterpGroupInst
UInterpGroupInstCamera = {}


---@class UInterpGroupInstDirector : UInterpGroupInst
UInterpGroupInstDirector = {}


---@class UInterpToMovementComponent : UMovementComponent
---@field Duration float
---@field bPauseOnImpact boolean
---@field bSweep boolean
---@field TeleportType ETeleportType
---@field BehaviourType EInterpToBehaviourType
---@field bCheckIfStillInWorld boolean
---@field bForceSubStepping boolean
---@field OnInterpToReverse FInterpToMovementComponentOnInterpToReverse
---@field OnInterpToStop FInterpToMovementComponentOnInterpToStop
---@field OnWaitBeginDelegate FInterpToMovementComponentOnWaitBeginDelegate
---@field OnWaitEndDelegate FInterpToMovementComponentOnWaitEndDelegate
---@field OnResetDelegate FInterpToMovementComponentOnResetDelegate
---@field MaxSimulationTimeStep float
---@field MaxSimulationIterations int32
---@field ControlPoints TArray<FInterpControlPoint>
UInterpToMovementComponent = {}

---@param HitResult FHitResult
function UInterpToMovementComponent:StopSimulating(HitResult) end
---@param InitialDirection float
function UInterpToMovementComponent:RestartMovement(InitialDirection) end
---@param ImpactResult FHitResult
---@param Time float
function UInterpToMovementComponent:OnInterpToWaitEndDelegate__DelegateSignature(ImpactResult, Time) end
---@param ImpactResult FHitResult
---@param Time float
function UInterpToMovementComponent:OnInterpToWaitBeginDelegate__DelegateSignature(ImpactResult, Time) end
---@param ImpactResult FHitResult
---@param Time float
function UInterpToMovementComponent:OnInterpToStopDelegate__DelegateSignature(ImpactResult, Time) end
---@param ImpactResult FHitResult
---@param Time float
function UInterpToMovementComponent:OnInterpToReverseDelegate__DelegateSignature(ImpactResult, Time) end
---@param ImpactResult FHitResult
---@param Time float
function UInterpToMovementComponent:OnInterpToResetDelegate__DelegateSignature(ImpactResult, Time) end
function UInterpToMovementComponent:FinaliseControlPoints() end


---@class UInterpTrack : UObject
---@field SubTracks TArray<UInterpTrack>
---@field TrackInstClass TSubclassOf<UInterpTrackInst>
---@field ActiveCondition ETrackActiveCondition
---@field TrackTitle FString
---@field bOnePerGroup boolean
---@field bDirGroupOnly boolean
---@field bDisableTrack boolean
---@field bIsSelected boolean
---@field bIsAnimControlTrack boolean
---@field bSubTrackOnly boolean
---@field bVisible boolean
---@field bIsRecording boolean
UInterpTrack = {}



---@class UInterpTrackAnimControl : UInterpTrackFloatBase
---@field SlotName FName
---@field AnimSeqs TArray<FAnimControlTrackKey>
---@field bSkipAnimNotifiers boolean
UInterpTrackAnimControl = {}



---@class UInterpTrackAudioMaster : UInterpTrackVectorBase
UInterpTrackAudioMaster = {}


---@class UInterpTrackBoolProp : UInterpTrack
---@field BoolTrack TArray<FBoolTrackKey>
---@field PropertyName FName
UInterpTrackBoolProp = {}



---@class UInterpTrackColorProp : UInterpTrackVectorBase
---@field PropertyName FName
UInterpTrackColorProp = {}



---@class UInterpTrackColorScale : UInterpTrackVectorBase
UInterpTrackColorScale = {}


---@class UInterpTrackDirector : UInterpTrack
---@field CutTrack TArray<FDirectorTrackCut>
---@field bSimulateCameraCutsOnClients boolean
UInterpTrackDirector = {}



---@class UInterpTrackEvent : UInterpTrack
---@field EventTrack TArray<FEventTrackKey>
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
---@field bFireEventsWhenJumpingForwards boolean
---@field bUseCustomEventName boolean
UInterpTrackEvent = {}



---@class UInterpTrackFade : UInterpTrackFloatBase
---@field bPersistFade boolean
---@field bFadeAudio boolean
---@field FadeColor FLinearColor
UInterpTrackFade = {}



---@class UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase
---@field AnimBlueprintClass UClass
---@field AnimClass TSubclassOf<UAnimInstance>
---@field ParamName FName
UInterpTrackFloatAnimBPParam = {}



---@class UInterpTrackFloatBase : UInterpTrack
---@field FloatTrack FInterpCurveFloat
---@field CurveTension float
UInterpTrackFloatBase = {}



---@class UInterpTrackFloatMaterialParam : UInterpTrackFloatBase
---@field TargetMaterials TArray<UMaterialInterface>
---@field ParamName FName
UInterpTrackFloatMaterialParam = {}



---@class UInterpTrackFloatParticleParam : UInterpTrackFloatBase
---@field ParamName FName
UInterpTrackFloatParticleParam = {}



---@class UInterpTrackFloatProp : UInterpTrackFloatBase
---@field PropertyName FName
UInterpTrackFloatProp = {}



---@class UInterpTrackInst : UObject
UInterpTrackInst = {}


---@class UInterpTrackInstAnimControl : UInterpTrackInst
---@field LastUpdatePosition float
UInterpTrackInstAnimControl = {}



---@class UInterpTrackInstAudioMaster : UInterpTrackInst
UInterpTrackInstAudioMaster = {}


---@class UInterpTrackInstBoolProp : UInterpTrackInstProperty
---@field ResetBool boolean
UInterpTrackInstBoolProp = {}



---@class UInterpTrackInstColorProp : UInterpTrackInstProperty
---@field ResetColor FColor
UInterpTrackInstColorProp = {}



---@class UInterpTrackInstColorScale : UInterpTrackInst
UInterpTrackInstColorScale = {}


---@class UInterpTrackInstDirector : UInterpTrackInst
---@field OldViewTarget AActor
UInterpTrackInstDirector = {}



---@class UInterpTrackInstEvent : UInterpTrackInst
---@field LastUpdatePosition float
UInterpTrackInstEvent = {}



---@class UInterpTrackInstFade : UInterpTrackInst
UInterpTrackInstFade = {}


---@class UInterpTrackInstFloatAnimBPParam : UInterpTrackInst
---@field AnimScriptInstance UAnimInstance
---@field ResetFloat float
UInterpTrackInstFloatAnimBPParam = {}



---@class UInterpTrackInstFloatMaterialParam : UInterpTrackInst
---@field MaterialInstances TArray<UMaterialInstanceDynamic>
---@field ResetFloats TArray<float>
---@field PrimitiveMaterialRefs TArray<FPrimitiveMaterialRef>
---@field InstancedTrack UInterpTrackFloatMaterialParam
UInterpTrackInstFloatMaterialParam = {}



---@class UInterpTrackInstFloatParticleParam : UInterpTrackInst
---@field ResetFloat float
UInterpTrackInstFloatParticleParam = {}



---@class UInterpTrackInstFloatProp : UInterpTrackInstProperty
---@field ResetFloat float
UInterpTrackInstFloatProp = {}



---@class UInterpTrackInstLinearColorProp : UInterpTrackInstProperty
---@field ResetColor FLinearColor
UInterpTrackInstLinearColorProp = {}



---@class UInterpTrackInstMove : UInterpTrackInst
---@field ResetLocation FVector
---@field ResetRotation FRotator
UInterpTrackInstMove = {}



---@class UInterpTrackInstParticleReplay : UInterpTrackInst
---@field LastUpdatePosition float
UInterpTrackInstParticleReplay = {}



---@class UInterpTrackInstProperty : UInterpTrackInst
---@field InterpProperty TFieldPath<FProperty>
---@field PropertyOuterObjectInst UObject
UInterpTrackInstProperty = {}



---@class UInterpTrackInstSlomo : UInterpTrackInst
---@field OldTimeDilation float
UInterpTrackInstSlomo = {}



---@class UInterpTrackInstSound : UInterpTrackInst
---@field LastUpdatePosition float
---@field PlayAudioComp UAudioComponent
UInterpTrackInstSound = {}



---@class UInterpTrackInstToggle : UInterpTrackInst
---@field Action ETrackToggleAction
---@field LastUpdatePosition float
---@field bSavedActiveState boolean
UInterpTrackInstToggle = {}



---@class UInterpTrackInstVectorMaterialParam : UInterpTrackInst
---@field MaterialInstances TArray<UMaterialInstanceDynamic>
---@field ResetVectors TArray<FVector>
---@field PrimitiveMaterialRefs TArray<FPrimitiveMaterialRef>
---@field InstancedTrack UInterpTrackVectorMaterialParam
UInterpTrackInstVectorMaterialParam = {}



---@class UInterpTrackInstVectorProp : UInterpTrackInstProperty
---@field ResetVector FVector
UInterpTrackInstVectorProp = {}



---@class UInterpTrackInstVisibility : UInterpTrackInst
---@field Action EVisibilityTrackAction
---@field LastUpdatePosition float
UInterpTrackInstVisibility = {}



---@class UInterpTrackLinearColorBase : UInterpTrack
---@field LinearColorTrack FInterpCurveLinearColor
---@field CurveTension float
UInterpTrackLinearColorBase = {}



---@class UInterpTrackLinearColorProp : UInterpTrackLinearColorBase
---@field PropertyName FName
UInterpTrackLinearColorProp = {}



---@class UInterpTrackMove : UInterpTrack
---@field PosTrack FInterpCurveVector
---@field EulerTrack FInterpCurveVector
---@field LookupTrack FInterpLookupTrack
---@field LookAtGroupName FName
---@field LinCurveTension float
---@field AngCurveTension float
---@field bUseQuatInterpolation boolean
---@field bShowArrowAtKeys boolean
---@field bDisableMovement boolean
---@field bShowTranslationOnCurveEd boolean
---@field bShowRotationOnCurveEd boolean
---@field bHide3DTrack boolean
---@field RotMode EInterpTrackMoveRotMode
UInterpTrackMove = {}



---@class UInterpTrackMoveAxis : UInterpTrackFloatBase
---@field MoveAxis EInterpMoveAxis
---@field LookupTrack FInterpLookupTrack
UInterpTrackMoveAxis = {}



---@class UInterpTrackParticleReplay : UInterpTrack
---@field TrackKeys TArray<FParticleReplayTrackKey>
UInterpTrackParticleReplay = {}



---@class UInterpTrackSlomo : UInterpTrackFloatBase
UInterpTrackSlomo = {}


---@class UInterpTrackSound : UInterpTrackVectorBase
---@field Sounds TArray<FSoundTrackKey>
---@field bPlayOnReverse boolean
---@field bContinueSoundOnMatineeEnd boolean
---@field bSuppressSubtitles boolean
---@field bTreatAsDialogue boolean
---@field bAttach boolean
UInterpTrackSound = {}



---@class UInterpTrackToggle : UInterpTrack
---@field ToggleTrack TArray<FToggleTrackKey>
---@field bActivateSystemEachUpdate boolean
---@field bActivateWithJustAttachedFlag boolean
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
---@field bFireEventsWhenJumpingForwards boolean
UInterpTrackToggle = {}



---@class UInterpTrackVectorBase : UInterpTrack
---@field VectorTrack FInterpCurveVector
---@field CurveTension float
UInterpTrackVectorBase = {}



---@class UInterpTrackVectorMaterialParam : UInterpTrackVectorBase
---@field TargetMaterials TArray<UMaterialInterface>
---@field ParamName FName
UInterpTrackVectorMaterialParam = {}



---@class UInterpTrackVectorProp : UInterpTrackVectorBase
---@field PropertyName FName
UInterpTrackVectorProp = {}



---@class UInterpTrackVisibility : UInterpTrack
---@field VisibilityTrack TArray<FVisibilityTrackKey>
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
---@field bFireEventsWhenJumpingForwards boolean
UInterpTrackVisibility = {}



---@class UKismetArrayLibrary : UBlueprintFunctionLibrary
UKismetArrayLibrary = {}

---@param Object UObject
---@param PropertyName FName
---@param Value TArray<int32>
function UKismetArrayLibrary:SetArrayPropertyByName(Object, PropertyName, Value) end
---@param TargetArray TArray<AActor>
---@param FilterClass TSubclassOf<AActor>
---@param FilteredArray TArray<AActor>
function UKismetArrayLibrary:FilterArray(TargetArray, FilterClass, FilteredArray) end
---@param TargetArray TArray<int32>
---@param FirstIndex int32
---@param SecondIndex int32
function UKismetArrayLibrary:Array_Swap(TargetArray, FirstIndex, SecondIndex) end
---@param TargetArray TArray<int32>
function UKismetArrayLibrary:Array_Shuffle(TargetArray) end
---@param TargetArray TArray<int32>
---@param Index int32
---@param Item int32
---@param bSizeToFit boolean
function UKismetArrayLibrary:Array_Set(TargetArray, Index, Item, bSizeToFit) end
---@param TargetArray TArray<int32>
---@param Size int32
function UKismetArrayLibrary:Array_Resize(TargetArray, Size) end
---@param TargetArray TArray<int32>
---@param Item int32
---@return boolean
function UKismetArrayLibrary:Array_RemoveItem(TargetArray, Item) end
---@param TargetArray TArray<int32>
---@param IndexToRemove int32
function UKismetArrayLibrary:Array_Remove(TargetArray, IndexToRemove) end
---@param TargetArray TArray<int32>
---@return int32
function UKismetArrayLibrary:Array_Length(TargetArray) end
---@param TargetArray TArray<int32>
---@return int32
function UKismetArrayLibrary:Array_LastIndex(TargetArray) end
---@param TargetArray TArray<int32>
---@param IndexToTest int32
---@return boolean
function UKismetArrayLibrary:Array_IsValidIndex(TargetArray, IndexToTest) end
---@param TargetArray TArray<int32>
---@param NewItem int32
---@param Index int32
function UKismetArrayLibrary:Array_Insert(TargetArray, NewItem, Index) end
---@param ArrayA TArray<int32>
---@param ArrayB TArray<int32>
---@return boolean
function UKismetArrayLibrary:Array_Identical(ArrayA, ArrayB) end
---@param TargetArray TArray<int32>
---@param Index int32
---@param Item int32
function UKismetArrayLibrary:Array_Get(TargetArray, Index, Item) end
---@param TargetArray TArray<int32>
---@param ItemToFind int32
---@return int32
function UKismetArrayLibrary:Array_Find(TargetArray, ItemToFind) end
---@param TargetArray TArray<int32>
---@param ItemToFind int32
---@return boolean
function UKismetArrayLibrary:Array_Contains(TargetArray, ItemToFind) end
---@param TargetArray TArray<int32>
function UKismetArrayLibrary:Array_Clear(TargetArray) end
---@param TargetArray TArray<int32>
---@param SourceArray TArray<int32>
function UKismetArrayLibrary:Array_Append(TargetArray, SourceArray) end
---@param TargetArray TArray<int32>
---@param NewItem int32
---@return int32
function UKismetArrayLibrary:Array_AddUnique(TargetArray, NewItem) end
---@param TargetArray TArray<int32>
---@param NewItem int32
---@return int32
function UKismetArrayLibrary:Array_Add(TargetArray, NewItem) end


---@class UKismetGuidLibrary : UBlueprintFunctionLibrary
UKismetGuidLibrary = {}

---@param GuidString FString
---@param OutGuid FGuid
---@param Success boolean
function UKismetGuidLibrary:Parse_StringToGuid(GuidString, OutGuid, Success) end
---@param A FGuid
---@param B FGuid
---@return boolean
function UKismetGuidLibrary:NotEqual_GuidGuid(A, B) end
---@return FGuid
function UKismetGuidLibrary:NewGuid() end
---@param InGuid FGuid
---@return boolean
function UKismetGuidLibrary:IsValid_Guid(InGuid) end
---@param InGuid FGuid
function UKismetGuidLibrary:Invalidate_Guid(InGuid) end
---@param A FGuid
---@param B FGuid
---@return boolean
function UKismetGuidLibrary:EqualEqual_GuidGuid(A, B) end
---@param InGuid FGuid
---@return FString
function UKismetGuidLibrary:Conv_GuidToString(InGuid) end


---@class UKismetInputLibrary : UBlueprintFunctionLibrary
UKismetInputLibrary = {}

---@param Input FPointerEvent
---@return boolean
function UKismetInputLibrary:PointerEvent_IsTouchEvent(Input) end
---@param Input FPointerEvent
---@param MouseButton FKey
---@return boolean
function UKismetInputLibrary:PointerEvent_IsMouseButtonDown(Input, MouseButton) end
---@param Input FPointerEvent
---@return float
function UKismetInputLibrary:PointerEvent_GetWheelDelta(Input) end
---@param Input FPointerEvent
---@return int32
function UKismetInputLibrary:PointerEvent_GetUserIndex(Input) end
---@param Input FPointerEvent
---@return int32
function UKismetInputLibrary:PointerEvent_GetTouchpadIndex(Input) end
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary:PointerEvent_GetScreenSpacePosition(Input) end
---@param Input FPointerEvent
---@return int32
function UKismetInputLibrary:PointerEvent_GetPointerIndex(Input) end
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary:PointerEvent_GetLastScreenSpacePosition(Input) end
---@param Input FPointerEvent
---@return ESlateGesture
function UKismetInputLibrary:PointerEvent_GetGestureType(Input) end
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary:PointerEvent_GetGestureDelta(Input) end
---@param Input FPointerEvent
---@return FKey
function UKismetInputLibrary:PointerEvent_GetEffectingButton(Input) end
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary:PointerEvent_GetCursorDelta(Input) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsVectorAxis(Key) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsValid(Key) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsMouseButton(Key) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsModifierKey(Key) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsKeyboardKey(Key) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsGamepadKey(Key) end
---@param Key FKey
---@return boolean
function UKismetInputLibrary:Key_IsFloatAxis(Key) end
---@param InKeyEvent FKeyEvent
---@return EUINavigation
function UKismetInputLibrary:Key_GetNavigationDirectionFromKey(InKeyEvent) end
---@param InAnalogEvent FAnalogInputEvent
---@return EUINavigation
function UKismetInputLibrary:Key_GetNavigationDirectionFromAnalog(InAnalogEvent) end
---@param InKeyEvent FKeyEvent
---@return EUINavigationAction
function UKismetInputLibrary:Key_GetNavigationActionFromKey(InKeyEvent) end
---@param InKey FKey
---@return EUINavigationAction
function UKismetInputLibrary:Key_GetNavigationAction(InKey) end
---@param Key FKey
---@return FText
function UKismetInputLibrary:Key_GetDisplayName(Key) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsShiftDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsRightShiftDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsRightControlDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsRightCommandDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsRightAltDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsRepeat(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsLeftShiftDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsLeftControlDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsLeftCommandDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsLeftAltDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsControlDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsCommandDown(Input) end
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary:InputEvent_IsAltDown(Input) end
---@param Key FInputChord
---@return FText
function UKismetInputLibrary:InputChord_GetDisplayName(Key) end
---@param Input FKeyEvent
---@return int32
function UKismetInputLibrary:GetUserIndex(Input) end
---@param Input FKeyEvent
---@return FKey
function UKismetInputLibrary:GetKey(Input) end
---@param Input FAnalogInputEvent
---@return float
function UKismetInputLibrary:GetAnalogValue(Input) end
---@param A FKey
---@param B FKey
---@return boolean
function UKismetInputLibrary:EqualEqual_KeyKey(A, B) end
---@param A FInputChord
---@param B FInputChord
---@return boolean
function UKismetInputLibrary:EqualEqual_InputChordInputChord(A, B) end
function UKismetInputLibrary:CalibrateTilt() end


---@class UKismetInternationalizationLibrary : UBlueprintFunctionLibrary
UKismetInternationalizationLibrary = {}

---@param Culture FString
---@param SaveToConfig boolean
---@return boolean
function UKismetInternationalizationLibrary:SetCurrentLocale(Culture, SaveToConfig) end
---@param Culture FString
---@param SaveToConfig boolean
---@return boolean
function UKismetInternationalizationLibrary:SetCurrentLanguageAndLocale(Culture, SaveToConfig) end
---@param Culture FString
---@param SaveToConfig boolean
---@return boolean
function UKismetInternationalizationLibrary:SetCurrentLanguage(Culture, SaveToConfig) end
---@param Culture FString
---@param SaveToConfig boolean
---@return boolean
function UKismetInternationalizationLibrary:SetCurrentCulture(Culture, SaveToConfig) end
---@param AssetGroup FName
---@param Culture FString
---@param SaveToConfig boolean
---@return boolean
function UKismetInternationalizationLibrary:SetCurrentAssetGroupCulture(AssetGroup, Culture, SaveToConfig) end
---@param AvailableCultures TArray<FString>
---@param CultureToMatch FString
---@param FallbackCulture FString
---@return FString
function UKismetInternationalizationLibrary:GetSuitableCulture(AvailableCultures, CultureToMatch, FallbackCulture) end
---@param TextCategory ELocalizedTextSourceCategory
---@return FString
function UKismetInternationalizationLibrary:GetNativeCulture(TextCategory) end
---@param IncludeGame boolean
---@param IncludeEngine boolean
---@param IncludeEditor boolean
---@param IncludeAdditional boolean
---@return TArray<FString>
function UKismetInternationalizationLibrary:GetLocalizedCultures(IncludeGame, IncludeEngine, IncludeEditor, IncludeAdditional) end
---@return FString
function UKismetInternationalizationLibrary:GetCurrentLocale() end
---@return FString
function UKismetInternationalizationLibrary:GetCurrentLanguage() end
---@return FString
function UKismetInternationalizationLibrary:GetCurrentCulture() end
---@param AssetGroup FName
---@return FString
function UKismetInternationalizationLibrary:GetCurrentAssetGroupCulture(AssetGroup) end
---@param Culture FString
---@param Localized boolean
---@return FString
function UKismetInternationalizationLibrary:GetCultureDisplayName(Culture, Localized) end
---@param AssetGroup FName
---@param SaveToConfig boolean
function UKismetInternationalizationLibrary:ClearCurrentAssetGroupCulture(AssetGroup, SaveToConfig) end


---@class UKismetMaterialLibrary : UBlueprintFunctionLibrary
UKismetMaterialLibrary = {}

---@param WorldContextObject UObject
---@param Collection UMaterialParameterCollection
---@param ParameterName FName
---@param ParameterValue FLinearColor
function UKismetMaterialLibrary:SetVectorParameterValue(WorldContextObject, Collection, ParameterName, ParameterValue) end
---@param WorldContextObject UObject
---@param Collection UMaterialParameterCollection
---@param ParameterName FName
---@param ParameterValue float
function UKismetMaterialLibrary:SetScalarParameterValue(WorldContextObject, Collection, ParameterName, ParameterValue) end
---@param WorldContextObject UObject
---@param Collection UMaterialParameterCollection
---@param ParameterName FName
---@return FLinearColor
function UKismetMaterialLibrary:GetVectorParameterValue(WorldContextObject, Collection, ParameterName) end
---@param WorldContextObject UObject
---@param Collection UMaterialParameterCollection
---@param ParameterName FName
---@return float
function UKismetMaterialLibrary:GetScalarParameterValue(WorldContextObject, Collection, ParameterName) end
---@param WorldContextObject UObject
---@param Parent UMaterialInterface
---@param OptionalName FName
---@return UMaterialInstanceDynamic
function UKismetMaterialLibrary:CreateDynamicMaterialInstance(WorldContextObject, Parent, OptionalName) end


---@class UKismetMathLibrary : UBlueprintFunctionLibrary
UKismetMathLibrary = {}

---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Xor_IntInt(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:Xor_Int64Int64(A, B) end
---@param CurrentSample FVector
---@param PreviousSample FVector
---@param Weight float
---@return FVector
function UKismetMathLibrary:WeightedMovingAverage_FVector(CurrentSample, PreviousSample, Weight) end
---@param CurrentSample FRotator
---@param PreviousSample FRotator
---@param Weight float
---@return FRotator
function UKismetMathLibrary:WeightedMovingAverage_FRotator(CurrentSample, PreviousSample, Weight) end
---@param CurrentSample float
---@param PreviousSample float
---@param Weight float
---@return float
function UKismetMathLibrary:WeightedMovingAverage_Float(CurrentSample, PreviousSample, Weight) end
---@param A FVector
---@return float
function UKismetMathLibrary:VSizeXYSquared(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:VSizeXY(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:VSizeSquared(A) end
---@param A FVector2D
---@return float
function UKismetMathLibrary:VSize2DSquared(A) end
---@param A FVector2D
---@return float
function UKismetMathLibrary:VSize2D(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:VSize(A) end
---@param A FVector
---@param B FVector
---@param Alpha float
---@return FVector
function UKismetMathLibrary:VLerp(A, B, Alpha) end
---@param Current FVector
---@param Target FVector
---@param DeltaTime float
---@param InterpSpeed float
---@return FVector
function UKismetMathLibrary:VInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end
---@param Current FVector
---@param Target FVector
---@param DeltaTime float
---@param InterpSpeed float
---@return FVector
function UKismetMathLibrary:VInterpTo(Current, Target, DeltaTime, InterpSpeed) end
---@param Current FVector
---@param Target FVector
---@param SpringState FVectorSpringState
---@param Stiffness float
---@param CriticalDampingFactor float
---@param DeltaTime float
---@param Mass float
---@return FVector
function UKismetMathLibrary:VectorSpringInterp(Current, Target, SpringState, Stiffness, CriticalDampingFactor, DeltaTime, Mass) end
---@return FVector
function UKismetMathLibrary:Vector_Zero() end
---@return FVector
function UKismetMathLibrary:Vector_Up() end
---@param A FVector
function UKismetMathLibrary:Vector_UnwindEuler(A) end
---@param A FVector
---@return FVector2D
function UKismetMathLibrary:Vector_UnitCartesianToSpherical(A) end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_ToRadians(A) end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_ToDegrees(A) end
---@param InVect FVector
---@param InGridSize float
---@return FVector
function UKismetMathLibrary:Vector_SnappedToGrid(InVect, InGridSize) end
---@param A FVector
---@param X float
---@param Y float
---@param Z float
function UKismetMathLibrary:Vector_Set(A, X, Y, Z) end
---@return FVector
function UKismetMathLibrary:Vector_Right() end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_Reciprocal(A) end
---@param V FVector
---@param InNormal FVector
---@return FVector
function UKismetMathLibrary:Vector_ProjectOnToNormal(V, InNormal) end
---@return FVector
function UKismetMathLibrary:Vector_One() end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_NormalUnsafe(A) end
---@param A FVector
---@param Tolerance float
function UKismetMathLibrary:Vector_Normalize(A, Tolerance) end
---@param A FVector
---@param Tolerance float
---@return FVector
function UKismetMathLibrary:Vector_Normal2D(A, Tolerance) end
---@param A FVector
---@param InPlane FPlane
---@return FVector
function UKismetMathLibrary:Vector_MirrorByPlane(A, InPlane) end
---@return FVector
function UKismetMathLibrary:Vector_Left() end
---@param A FVector
---@return boolean
function UKismetMathLibrary:Vector_IsZero(A) end
---@param A FVector
---@param SquaredLenthTolerance float
---@return boolean
function UKismetMathLibrary:Vector_IsUnit(A, SquaredLenthTolerance) end
---@param A FVector
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:Vector_IsUniform(A, Tolerance) end
---@param A FVector
---@return boolean
function UKismetMathLibrary:Vector_IsNormal(A) end
---@param A FVector
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:Vector_IsNearlyZero(A, Tolerance) end
---@param A FVector
---@return boolean
function UKismetMathLibrary:Vector_IsNAN(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:Vector_HeadingAngle(A) end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_GetSignVector(A) end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_GetProjection(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:Vector_GetAbsMin(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:Vector_GetAbsMax(A) end
---@param A FVector
---@return FVector
function UKismetMathLibrary:Vector_GetAbs(A) end
---@return FVector
function UKismetMathLibrary:Vector_Forward() end
---@return FVector
function UKismetMathLibrary:Vector_Down() end
---@param v1 FVector
---@param v2 FVector
---@return float
function UKismetMathLibrary:Vector_DistanceSquared(v1, v2) end
---@param v1 FVector
---@param v2 FVector
---@return float
function UKismetMathLibrary:Vector_Distance2DSquared(v1, v2) end
---@param v1 FVector
---@param v2 FVector
---@return float
function UKismetMathLibrary:Vector_Distance2D(v1, v2) end
---@param v1 FVector
---@param v2 FVector
---@return float
function UKismetMathLibrary:Vector_Distance(v1, v2) end
---@param A FVector
---@param B FVector
---@return float
function UKismetMathLibrary:Vector_CosineAngle2D(A, B) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Vector_ComponentMin(A, B) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Vector_ComponentMax(A, B) end
---@param A FVector
---@param Max float
---@return FVector
function UKismetMathLibrary:Vector_ClampSizeMax2D(A, Max) end
---@param A FVector
---@param Max float
---@return FVector
function UKismetMathLibrary:Vector_ClampSizeMax(A, Max) end
---@param A FVector
---@param Min float
---@param Max float
---@return FVector
function UKismetMathLibrary:Vector_ClampSize2D(A, Min, Max) end
---@param InVect FVector
---@param InRadius float
---@return FVector
function UKismetMathLibrary:Vector_BoundedToCube(InVect, InRadius) end
---@param InVect FVector
---@param InBoxMin FVector
---@param InBoxMax FVector
---@return FVector
function UKismetMathLibrary:Vector_BoundedToBox(InVect, InBoxMin, InBoxMax) end
---@return FVector
function UKismetMathLibrary:Vector_Backward() end
---@param A FVector
---@param InVector FVector
function UKismetMathLibrary:Vector_Assign(A, InVector) end
---@param A FVector
---@param InAddVect FVector
---@param InRadius float
function UKismetMathLibrary:Vector_AddBounded(A, InAddVect, InRadius) end
---@return FVector4
function UKismetMathLibrary:Vector4_Zero() end
---@param A FVector4
---@return float
function UKismetMathLibrary:Vector4_SizeSquared3(A) end
---@param A FVector4
---@return float
function UKismetMathLibrary:Vector4_SizeSquared(A) end
---@param A FVector4
---@return float
function UKismetMathLibrary:Vector4_Size3(A) end
---@param A FVector4
---@return float
function UKismetMathLibrary:Vector4_Size(A) end
---@param A FVector4
---@param X float
---@param Y float
---@param Z float
---@param W float
function UKismetMathLibrary:Vector4_Set(A, X, Y, Z, W) end
---@param A FVector4
---@return FVector4
function UKismetMathLibrary:Vector4_NormalUnsafe3(A) end
---@param A FVector4
---@param Tolerance float
function UKismetMathLibrary:Vector4_Normalize3(A, Tolerance) end
---@param A FVector4
---@param Tolerance float
---@return FVector4
function UKismetMathLibrary:Vector4_Normal3(A, Tolerance) end
---@param A FVector4
---@return FVector4
function UKismetMathLibrary:Vector4_Negated(A) end
---@param Direction FVector4
---@param SurfaceNormal FVector4
---@return FVector4
function UKismetMathLibrary:Vector4_MirrorByVector3(Direction, SurfaceNormal) end
---@param A FVector4
---@return boolean
function UKismetMathLibrary:Vector4_IsZero(A) end
---@param A FVector4
---@param SquaredLenthTolerance float
---@return boolean
function UKismetMathLibrary:Vector4_IsUnit3(A, SquaredLenthTolerance) end
---@param A FVector4
---@return boolean
function UKismetMathLibrary:Vector4_IsNormal3(A) end
---@param A FVector4
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:Vector4_IsNearlyZero3(A, Tolerance) end
---@param A FVector4
---@return boolean
function UKismetMathLibrary:Vector4_IsNAN(A) end
---@param A FVector4
---@param B FVector4
---@return float
function UKismetMathLibrary:Vector4_DotProduct3(A, B) end
---@param A FVector4
---@param B FVector4
---@return float
function UKismetMathLibrary:Vector4_DotProduct(A, B) end
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary:Vector4_CrossProduct3(A, B) end
---@param A FVector4
---@param InVector FVector4
function UKismetMathLibrary:Vector4_Assign(A, InVector) end
---@param Current FVector2D
---@param Target FVector2D
---@param DeltaTime float
---@param InterpSpeed float
---@return FVector2D
function UKismetMathLibrary:Vector2DInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end
---@param Current FVector2D
---@param Target FVector2D
---@param DeltaTime float
---@param InterpSpeed float
---@return FVector2D
function UKismetMathLibrary:Vector2DInterpTo(Current, Target, DeltaTime, InterpSpeed) end
---@return FVector2D
function UKismetMathLibrary:Vector2D_Zero() end
---@return FVector2D
function UKismetMathLibrary:Vector2D_Unit45Deg() end
---@return FVector2D
function UKismetMathLibrary:Vector2D_One() end
---@param A FVector
---@param B FVector
---@param Alpha float
---@param EasingFunc EEasingFunc::Type
---@param BlendExp float
---@param Steps int32
---@return FVector
function UKismetMathLibrary:VEase(A, B, Alpha, EasingFunc, BlendExp, Steps) end
---@return FDateTime
function UKismetMathLibrary:UtcNow() end
---@param Matrix FMatrix
---@param Vec4 FVector4
---@return FVector4
function UKismetMathLibrary:TransformVector4(Matrix, Vec4) end
---@param T FTransform
---@param Rotation FRotator
---@return FRotator
function UKismetMathLibrary:TransformRotation(T, Rotation) end
---@param T FTransform
---@param Location FVector
---@return FVector
function UKismetMathLibrary:TransformLocation(T, Location) end
---@param T FTransform
---@param Direction FVector
---@return FVector
function UKismetMathLibrary:TransformDirection(T, Direction) end
---@param Transform FTransform
---@return float
function UKismetMathLibrary:Transform_Determinant(Transform) end
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary:ToSign2D(A) end
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary:ToRounded2D(A) end
---@param A FVector2D
---@param OutDir FVector2D
---@param OutLength float
function UKismetMathLibrary:ToDirectionAndLength2D(A, OutDir, OutLength) end
---@return FDateTime
function UKismetMathLibrary:Today() end
---@param A FTransform
---@param B FTransform
---@param Alpha float
---@param InterpMode ELerpInterpolationMode::Type
---@return FTransform
function UKismetMathLibrary:TLerp(A, B, Alpha, InterpMode) end
---@param Current FTransform
---@param Target FTransform
---@param DeltaTime float
---@param InterpSpeed float
---@return FTransform
function UKismetMathLibrary:TInterpTo(Current, Target, DeltaTime, InterpSpeed) end
---@return FTimespan
function UKismetMathLibrary:TimespanZeroValue() end
---@param A FTimespan
---@param B FTimespan
---@return float
function UKismetMathLibrary:TimespanRatio(A, B) end
---@return FTimespan
function UKismetMathLibrary:TimespanMinValue() end
---@return FTimespan
function UKismetMathLibrary:TimespanMaxValue() end
---@param TimespanString FString
---@param Result FTimespan
---@return boolean
function UKismetMathLibrary:TimespanFromString(TimespanString, Result) end
---@param A FTransform
---@param B FTransform
---@param Alpha float
---@param EasingFunc EEasingFunc::Type
---@param BlendExp float
---@param Steps int32
---@return FTransform
function UKismetMathLibrary:TEase(A, B, Alpha, EasingFunc, BlendExp, Steps) end
---@param A float
---@return float
function UKismetMathLibrary:Tan(A) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Subtract_VectorVector(A, B) end
---@param A FVector
---@param B int32
---@return FVector
function UKismetMathLibrary:Subtract_VectorInt(A, B) end
---@param A FVector
---@param B float
---@return FVector
function UKismetMathLibrary:Subtract_VectorFloat(A, B) end
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary:Subtract_Vector4Vector4(A, B) end
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary:Subtract_Vector2DVector2D(A, B) end
---@param A FVector2D
---@param B float
---@return FVector2D
function UKismetMathLibrary:Subtract_Vector2DFloat(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return FTimespan
function UKismetMathLibrary:Subtract_TimespanTimespan(A, B) end
---@param A FQuat
---@param B FQuat
---@return FQuat
function UKismetMathLibrary:Subtract_QuatQuat(A, B) end
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary:Subtract_LinearColorLinearColor(A, B) end
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary:Subtract_IntPointIntPoint(A, B) end
---@param A FIntPoint
---@param B int32
---@return FIntPoint
function UKismetMathLibrary:Subtract_IntPointInt(A, B) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Subtract_IntInt(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:Subtract_Int64Int64(A, B) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:Subtract_FloatFloat(A, B) end
---@param A FDateTime
---@param B FTimespan
---@return FDateTime
function UKismetMathLibrary:Subtract_DateTimeTimespan(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return FTimespan
function UKismetMathLibrary:Subtract_DateTimeDateTime(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:Subtract_ByteByte(A, B) end
---@param A float
---@return float
function UKismetMathLibrary:Square(A) end
---@param A float
---@return float
function UKismetMathLibrary:Sqrt(A) end
---@param A FVector2D
---@return FVector
function UKismetMathLibrary:Spherical2DToUnitCartesian(A) end
---@param A float
---@return float
function UKismetMathLibrary:Sin(A) end
---@param A int64
---@return int64
function UKismetMathLibrary:SignOfInteger64(A) end
---@param A int32
---@return int32
function UKismetMathLibrary:SignOfInteger(A) end
---@param A float
---@return float
function UKismetMathLibrary:SignOfFloat(A) end
---@param Stream FRandomStream
---@param NewSeed int32
function UKismetMathLibrary:SetRandomStreamSeed(Stream, NewSeed) end
---@param A FVector2D
---@param X float
---@param Y float
function UKismetMathLibrary:Set2D(A, X, Y) end
---@param A FVector
---@param B FVector
---@param bPickA boolean
---@return FVector
function UKismetMathLibrary:SelectVector(A, B, bPickA) end
---@param A FTransform
---@param B FTransform
---@param bPickA boolean
---@return FTransform
function UKismetMathLibrary:SelectTransform(A, B, bPickA) end
---@param A FString
---@param B FString
---@param bPickA boolean
---@return FString
function UKismetMathLibrary:SelectString(A, B, bPickA) end
---@param A FRotator
---@param B FRotator
---@param bPickA boolean
---@return FRotator
function UKismetMathLibrary:SelectRotator(A, B, bPickA) end
---@param A UObject
---@param B UObject
---@param bSelectA boolean
---@return UObject
function UKismetMathLibrary:SelectObject(A, B, bSelectA) end
---@param A int32
---@param B int32
---@param bPickA boolean
---@return int32
function UKismetMathLibrary:SelectInt(A, B, bPickA) end
---@param A float
---@param B float
---@param bPickA boolean
---@return float
function UKismetMathLibrary:SelectFloat(A, B, bPickA) end
---@param A FLinearColor
---@param B FLinearColor
---@param bPickA boolean
---@return FLinearColor
function UKismetMathLibrary:SelectColor(A, B, bPickA) end
---@param A UClass
---@param B UClass
---@param bSelectA boolean
---@return UClass
function UKismetMathLibrary:SelectClass(A, B, bSelectA) end
---@param Stream FRandomStream
function UKismetMathLibrary:SeedRandomStream(Stream) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:SafeDivide(A, B) end
---@param A float
---@return int64
function UKismetMathLibrary:Round64(A) end
---@param A float
---@return int32
function UKismetMathLibrary:Round(A) end
---@param Axis FVector
---@param Angle float
---@return FRotator
function UKismetMathLibrary:RotatorFromAxisAndAngle(Axis, Angle) end
---@param InVect FVector
---@param AngleDeg float
---@param Axis FVector
---@return FVector
function UKismetMathLibrary:RotateAngleAxis(InVect, AngleDeg, Axis) end
---@param A FRotator
---@param B FRotator
---@param Alpha float
---@param bShortestPath boolean
---@return FRotator
function UKismetMathLibrary:RLerp(A, B, Alpha, bShortestPath) end
---@param Current FRotator
---@param Target FRotator
---@param DeltaTime float
---@param InterpSpeed float
---@return FRotator
function UKismetMathLibrary:RInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end
---@param Current FRotator
---@param Target FRotator
---@param DeltaTime float
---@param InterpSpeed float
---@return FRotator
function UKismetMathLibrary:RInterpTo(Current, Target, DeltaTime, InterpSpeed) end
---@param RGB FLinearColor
---@param HSV FLinearColor
function UKismetMathLibrary:RGBToHSV_Vector(RGB, HSV) end
---@param InColor FLinearColor
---@param H float
---@param S float
---@param V float
---@param A float
function UKismetMathLibrary:RGBToHSV(InColor, H, S, V, A) end
---@param RGB FLinearColor
---@return FLinearColor
function UKismetMathLibrary:RGBLinearToHSV(RGB) end
---@param SpringState FVectorSpringState
function UKismetMathLibrary:ResetVectorSpringState(SpringState) end
---@param Stream FRandomStream
function UKismetMathLibrary:ResetRandomStream(Stream) end
---@param SpringState FFloatSpringState
function UKismetMathLibrary:ResetFloatSpringState(SpringState) end
---@param A FRotator
---@param B FRotator
---@param Alpha float
---@param bShortestPath boolean
---@param EasingFunc EEasingFunc::Type
---@param BlendExp float
---@param Steps int32
---@return FRotator
function UKismetMathLibrary:REase(A, B, Alpha, bShortestPath, EasingFunc, BlendExp, Steps) end
---@param ConeDir FVector
---@param MaxYawInRadians float
---@param MaxPitchInRadians float
---@param Stream FRandomStream
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInEllipticalConeInRadiansFromStream(ConeDir, MaxYawInRadians, MaxPitchInRadians, Stream) end
---@param ConeDir FVector
---@param MaxYawInRadians float
---@param MaxPitchInRadians float
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInEllipticalConeInRadians(ConeDir, MaxYawInRadians, MaxPitchInRadians) end
---@param ConeDir FVector
---@param MaxYawInDegrees float
---@param MaxPitchInDegrees float
---@param Stream FRandomStream
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInEllipticalConeInDegreesFromStream(ConeDir, MaxYawInDegrees, MaxPitchInDegrees, Stream) end
---@param ConeDir FVector
---@param MaxYawInDegrees float
---@param MaxPitchInDegrees float
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInEllipticalConeInDegrees(ConeDir, MaxYawInDegrees, MaxPitchInDegrees) end
---@param ConeDir FVector
---@param ConeHalfAngleInRadians float
---@param Stream FRandomStream
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInConeInRadiansFromStream(ConeDir, ConeHalfAngleInRadians, Stream) end
---@param ConeDir FVector
---@param ConeHalfAngleInRadians float
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInConeInRadians(ConeDir, ConeHalfAngleInRadians) end
---@param ConeDir FVector
---@param ConeHalfAngleInDegrees float
---@param Stream FRandomStream
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInConeInDegreesFromStream(ConeDir, ConeHalfAngleInDegrees, Stream) end
---@param ConeDir FVector
---@param ConeHalfAngleInDegrees float
---@return FVector
function UKismetMathLibrary:RandomUnitVectorInConeInDegrees(ConeDir, ConeHalfAngleInDegrees) end
---@param Stream FRandomStream
---@return FVector
function UKismetMathLibrary:RandomUnitVectorFromStream(Stream) end
---@return FVector
function UKismetMathLibrary:RandomUnitVector() end
---@param bRoll boolean
---@param Stream FRandomStream
---@return FRotator
function UKismetMathLibrary:RandomRotatorFromStream(bRoll, Stream) end
---@param bRoll boolean
---@return FRotator
function UKismetMathLibrary:RandomRotator(bRoll) end
---@param Origin FVector
---@param BoxExtent FVector
---@return FVector
function UKismetMathLibrary:RandomPointInBoundingBox(Origin, BoxExtent) end
---@param Min int32
---@param Max int32
---@param Stream FRandomStream
---@return int32
function UKismetMathLibrary:RandomIntegerInRangeFromStream(Min, Max, Stream) end
---@param Min int32
---@param Max int32
---@return int32
function UKismetMathLibrary:RandomIntegerInRange(Min, Max) end
---@param Max int32
---@param Stream FRandomStream
---@return int32
function UKismetMathLibrary:RandomIntegerFromStream(Max, Stream) end
---@param Min int64
---@param Max int64
---@return int64
function UKismetMathLibrary:RandomInteger64InRange(Min, Max) end
---@param Max int64
---@return int64
function UKismetMathLibrary:RandomInteger64(Max) end
---@param Max int32
---@return int32
function UKismetMathLibrary:RandomInteger(Max) end
---@param Min float
---@param Max float
---@param Stream FRandomStream
---@return float
function UKismetMathLibrary:RandomFloatInRangeFromStream(Min, Max, Stream) end
---@param Min float
---@param Max float
---@return float
function UKismetMathLibrary:RandomFloatInRange(Min, Max) end
---@param Stream FRandomStream
---@return float
function UKismetMathLibrary:RandomFloatFromStream(Stream) end
---@return float
function UKismetMathLibrary:RandomFloat() end
---@param Weight float
---@param RandomStream FRandomStream
---@return boolean
function UKismetMathLibrary:RandomBoolWithWeightFromStream(Weight, RandomStream) end
---@param Weight float
---@return boolean
function UKismetMathLibrary:RandomBoolWithWeight(Weight) end
---@param Stream FRandomStream
---@return boolean
function UKismetMathLibrary:RandomBoolFromStream(Stream) end
---@return boolean
function UKismetMathLibrary:RandomBool() end
---@param A float
---@return float
function UKismetMathLibrary:RadiansToDegrees(A) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_VectorUp(Q) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_VectorRight(Q) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_VectorForward(Q) end
---@param Q FQuat
---@param V FVector
---@return FVector
function UKismetMathLibrary:Quat_UnrotateVector(Q, V) end
---@param Q FQuat
---@return float
function UKismetMathLibrary:Quat_SizeSquared(Q) end
---@param Q FQuat
---@return float
function UKismetMathLibrary:Quat_Size(Q) end
---@param Q FQuat
---@param Euler FVector
function UKismetMathLibrary:Quat_SetFromEuler(Q, Euler) end
---@param Q FQuat
---@param X float
---@param Y float
---@param Z float
---@param W float
function UKismetMathLibrary:Quat_SetComponents(Q, X, Y, Z, W) end
---@param Q FQuat
---@return FRotator
function UKismetMathLibrary:Quat_Rotator(Q) end
---@param Q FQuat
---@param V FVector
---@return FVector
function UKismetMathLibrary:Quat_RotateVector(Q, V) end
---@param Q FQuat
---@param Tolerance float
---@return FQuat
function UKismetMathLibrary:Quat_Normalized(Q, Tolerance) end
---@param Q FQuat
---@param Tolerance float
function UKismetMathLibrary:Quat_Normalize(Q, Tolerance) end
---@param Euler FVector
---@return FQuat
function UKismetMathLibrary:Quat_MakeFromEuler(Euler) end
---@param Q FQuat
---@return FQuat
function UKismetMathLibrary:Quat_Log(Q) end
---@param Q FQuat
---@return boolean
function UKismetMathLibrary:Quat_IsNormalized(Q) end
---@param Q FQuat
---@return boolean
function UKismetMathLibrary:Quat_IsNonFinite(Q) end
---@param Q FQuat
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:Quat_IsIdentity(Q, Tolerance) end
---@param Q FQuat
---@return boolean
function UKismetMathLibrary:Quat_IsFinite(Q) end
---@param Q FQuat
---@return FQuat
function UKismetMathLibrary:Quat_Inversed(Q) end
---@return FQuat
function UKismetMathLibrary:Quat_Identity() end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_GetRotationAxis(Q) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_GetAxisZ(Q) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_GetAxisY(Q) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_GetAxisX(Q) end
---@param Q FQuat
---@return float
function UKismetMathLibrary:Quat_GetAngle(Q) end
---@param Q FQuat
---@return FQuat
function UKismetMathLibrary:Quat_Exp(Q) end
---@param Q FQuat
---@return FVector
function UKismetMathLibrary:Quat_Euler(Q) end
---@param A FQuat
---@param B FQuat
function UKismetMathLibrary:Quat_EnforceShortestArcWith(A, B) end
---@param A FQuat
---@param B FQuat
---@return float
function UKismetMathLibrary:Quat_AngularDistance(A, B) end
---@param V FVector
---@param Target FVector
---@return FVector
function UKismetMathLibrary:ProjectVectorOnToVector(V, Target) end
---@param V FVector
---@param PlaneNormal FVector
---@return FVector
function UKismetMathLibrary:ProjectVectorOnToPlane(V, PlaneNormal) end
---@param Point FVector
---@param PlaneBase FVector
---@param PlaneNormal FVector
---@return FVector
function UKismetMathLibrary:ProjectPointOnToPlane(Point, PlaneBase, PlaneNormal) end
---@param Points TArray<FVector>
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:PointsAreCoplanar(Points, Tolerance) end
---@param Value float
---@return float
function UKismetMathLibrary:PerlinNoise1D(Value) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Percent_IntInt(A, B) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:Percent_FloatFloat(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:Percent_ByteByte(A, B) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Or_IntInt(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:Or_Int64Int64(A, B) end
---@return FDateTime
function UKismetMathLibrary:Now() end
---@param A FVector
---@param B FVector
---@return boolean
function UKismetMathLibrary:NotEqualExactly_VectorVector(A, B) end
---@param A FVector4
---@param B FVector4
---@return boolean
function UKismetMathLibrary:NotEqualExactly_Vector4Vector4(A, B) end
---@param A FVector2D
---@param B FVector2D
---@return boolean
function UKismetMathLibrary:NotEqualExactly_Vector2DVector2D(A, B) end
---@param A FVector
---@param B FVector
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:NotEqual_VectorVector(A, B, ErrorTolerance) end
---@param A FVector4
---@param B FVector4
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:NotEqual_Vector4Vector4(A, B, ErrorTolerance) end
---@param A FVector2D
---@param B FVector2D
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:NotEqual_Vector2DVector2D(A, B, ErrorTolerance) end
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary:NotEqual_TimespanTimespan(A, B) end
---@param A FRotator
---@param B FRotator
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:NotEqual_RotatorRotator(A, B, ErrorTolerance) end
---@param A FQuat
---@param B FQuat
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:NotEqual_QuatQuat(A, B, ErrorTolerance) end
---@param A UObject
---@param B UObject
---@return boolean
function UKismetMathLibrary:NotEqual_ObjectObject(A, B) end
---@param A FName
---@param B FName
---@return boolean
function UKismetMathLibrary:NotEqual_NameName(A, B) end
---@param A FMatrix
---@param B FMatrix
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:NotEqual_MatrixMatrix(A, B, Tolerance) end
---@param A FLinearColor
---@param B FLinearColor
---@return boolean
function UKismetMathLibrary:NotEqual_LinearColorLinearColor(A, B) end
---@param A FIntPoint
---@param B FIntPoint
---@return boolean
function UKismetMathLibrary:NotEqual_IntPointIntPoint(A, B) end
---@param A int32
---@param B int32
---@return boolean
function UKismetMathLibrary:NotEqual_IntInt(A, B) end
---@param A int64
---@param B int64
---@return boolean
function UKismetMathLibrary:NotEqual_Int64Int64(A, B) end
---@param A float
---@param B float
---@return boolean
function UKismetMathLibrary:NotEqual_FloatFloat(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary:NotEqual_DateTimeDateTime(A, B) end
---@param A UClass
---@param B UClass
---@return boolean
function UKismetMathLibrary:NotEqual_ClassClass(A, B) end
---@param A uint8
---@param B uint8
---@return boolean
function UKismetMathLibrary:NotEqual_ByteByte(A, B) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:NotEqual_BoolBool(A, B) end
---@param A boolean
---@return boolean
function UKismetMathLibrary:Not_PreBool(A) end
---@param A int64
---@return int64
function UKismetMathLibrary:Not_Int64(A) end
---@param A int32
---@return int32
function UKismetMathLibrary:Not_Int(A) end
---@param A FVector2D
---@param Tolerance float
---@return FVector2D
function UKismetMathLibrary:NormalSafe2D(A, Tolerance) end
---@param Value float
---@param RangeMin float
---@param RangeMax float
---@return float
function UKismetMathLibrary:NormalizeToRange(Value, RangeMin, RangeMax) end
---@param A FRotator
---@param B FRotator
---@return FRotator
function UKismetMathLibrary:NormalizedDeltaRotator(A, B) end
---@param Angle float
---@return float
function UKismetMathLibrary:NormalizeAxis(Angle) end
---@param A FVector2D
---@param Tolerance float
function UKismetMathLibrary:Normalize2D(A, Tolerance) end
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary:Normal2D(A) end
---@param A FVector
---@param Tolerance float
---@return FVector
function UKismetMathLibrary:Normal(A, Tolerance) end
---@param A FVector
---@return FVector
function UKismetMathLibrary:NegateVector(A) end
---@param A FRotator
---@return FRotator
function UKismetMathLibrary:NegateRotator(A) end
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary:Negated2D(A) end
---@param A FTransform
---@param B FTransform
---@param LocationTolerance float
---@param RotationTolerance float
---@param Scale3DTolerance float
---@return boolean
function UKismetMathLibrary:NearlyEqual_TransformTransform(A, B, LocationTolerance, RotationTolerance, Scale3DTolerance) end
---@param A float
---@param B float
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:NearlyEqual_FloatFloat(A, B, ErrorTolerance) end
---@param Base float
---@param Exp float
---@return float
function UKismetMathLibrary:MultiplyMultiply_FloatFloat(Base, Exp) end
---@param Value float
---@return float
function UKismetMathLibrary:MultiplyByPi(Value) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Multiply_VectorVector(A, B) end
---@param A FVector
---@param B int32
---@return FVector
function UKismetMathLibrary:Multiply_VectorInt(A, B) end
---@param A FVector
---@param B float
---@return FVector
function UKismetMathLibrary:Multiply_VectorFloat(A, B) end
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary:Multiply_Vector4Vector4(A, B) end
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary:Multiply_Vector2DVector2D(A, B) end
---@param A FVector2D
---@param B float
---@return FVector2D
function UKismetMathLibrary:Multiply_Vector2DFloat(A, B) end
---@param A FTimespan
---@param Scalar float
---@return FTimespan
function UKismetMathLibrary:Multiply_TimespanFloat(A, Scalar) end
---@param A FRotator
---@param B int32
---@return FRotator
function UKismetMathLibrary:Multiply_RotatorInt(A, B) end
---@param A FRotator
---@param B float
---@return FRotator
function UKismetMathLibrary:Multiply_RotatorFloat(A, B) end
---@param A FQuat
---@param B FQuat
---@return FQuat
function UKismetMathLibrary:Multiply_QuatQuat(A, B) end
---@param A FMatrix
---@param B FMatrix
---@return FMatrix
function UKismetMathLibrary:Multiply_MatrixMatrix(A, B) end
---@param A FMatrix
---@param B float
---@return FMatrix
function UKismetMathLibrary:Multiply_MatrixFloat(A, B) end
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary:Multiply_LinearColorLinearColor(A, B) end
---@param A FLinearColor
---@param B float
---@return FLinearColor
function UKismetMathLibrary:Multiply_LinearColorFloat(A, B) end
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary:Multiply_IntPointIntPoint(A, B) end
---@param A FIntPoint
---@param B int32
---@return FIntPoint
function UKismetMathLibrary:Multiply_IntPointInt(A, B) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Multiply_IntInt(A, B) end
---@param A int32
---@param B float
---@return float
function UKismetMathLibrary:Multiply_IntFloat(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:Multiply_Int64Int64(A, B) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:Multiply_FloatFloat(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:Multiply_ByteByte(A, B) end
---@param InVect FVector
---@param InNormal FVector
---@return FVector
function UKismetMathLibrary:MirrorVectorByNormal(InVect, InNormal) end
---@param IntArray TArray<int32>
---@param IndexOfMinValue int32
---@param MinValue int32
function UKismetMathLibrary:MinOfIntArray(IntArray, IndexOfMinValue, MinValue) end
---@param FloatArray TArray<float>
---@param IndexOfMinValue int32
---@param MinValue float
function UKismetMathLibrary:MinOfFloatArray(FloatArray, IndexOfMinValue, MinValue) end
---@param ByteArray TArray<uint8>
---@param IndexOfMinValue int32
---@param MinValue uint8
function UKismetMathLibrary:MinOfByteArray(ByteArray, IndexOfMinValue, MinValue) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:MinInt64(A, B) end
---@param WorldContextObject UObject
---@param InVerts TArray<FVector>
---@param SampleSurfaceNormal FVector
---@param OutRectCenter FVector
---@param OutRectRotation FRotator
---@param OutSideLengthX float
---@param OutSideLengthY float
---@param bDebugDraw boolean
function UKismetMathLibrary:MinimumAreaRectangle(WorldContextObject, InVerts, SampleSurfaceNormal, OutRectCenter, OutRectRotation, OutSideLengthX, OutSideLengthY, bDebugDraw) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Min(A, B) end
---@param IntArray TArray<int32>
---@param IndexOfMaxValue int32
---@param MaxValue int32
function UKismetMathLibrary:MaxOfIntArray(IntArray, IndexOfMaxValue, MaxValue) end
---@param FloatArray TArray<float>
---@param IndexOfMaxValue int32
---@param MaxValue float
function UKismetMathLibrary:MaxOfFloatArray(FloatArray, IndexOfMaxValue, MaxValue) end
---@param ByteArray TArray<uint8>
---@param IndexOfMaxValue int32
---@param MaxValue uint8
function UKismetMathLibrary:MaxOfByteArray(ByteArray, IndexOfMaxValue, MaxValue) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:MaxInt64(A, B) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Max(A, B) end
---@param M FMatrix
---@param V FVector4
---@return FVector4
function UKismetMathLibrary:Matrix_TransformVector4(M, V) end
---@param M FMatrix
---@param V FVector
---@return FVector4
function UKismetMathLibrary:Matrix_TransformVector(M, V) end
---@param M FMatrix
---@param V FVector
---@return FVector4
function UKismetMathLibrary:Matrix_TransformPosition(M, V) end
---@param M FMatrix
---@return FQuat
function UKismetMathLibrary:Matrix_ToQuat(M) end
---@param M FMatrix
---@param NewOrigin FVector
function UKismetMathLibrary:Matrix_SetOrigin(M, NewOrigin) end
---@param M FMatrix
---@param Column EMatrixColumns::Type
---@param Value FVector
function UKismetMathLibrary:Matrix_SetColumn(M, Column, Value) end
---@param M FMatrix
---@param Axis EAxis::Type
---@param AxisVector FVector
function UKismetMathLibrary:Matrix_SetAxis(M, Axis, AxisVector) end
---@param M FMatrix
---@param Scale3D FVector
---@return FMatrix
function UKismetMathLibrary:Matrix_ScaleTranslation(M, Scale3D) end
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary:Matrix_RemoveTranslation(M) end
---@param M FMatrix
---@param Tolerance float
function UKismetMathLibrary:Matrix_RemoveScaling(M, Tolerance) end
---@param M FMatrix
---@param MirrorAxis EAxis::Type
---@param FlipAxis EAxis::Type
---@return FMatrix
function UKismetMathLibrary:Matrix_Mirror(M, MirrorAxis, FlipAxis) end
---@param M FMatrix
---@param V FVector
---@return FVector
function UKismetMathLibrary:Matrix_InverseTransformVector(M, V) end
---@param M FMatrix
---@param V FVector
---@return FVector
function UKismetMathLibrary:Matrix_InverseTransformPosition(M, V) end
---@return FMatrix
function UKismetMathLibrary:Matrix_Identity() end
---@param M FMatrix
---@param Axis EAxis::Type
---@return FVector
function UKismetMathLibrary:Matrix_GetUnitAxis(M, Axis) end
---@param M FMatrix
---@param X FVector
---@param Y FVector
---@param Z FVector
function UKismetMathLibrary:Matrix_GetUnitAxes(M, X, Y, Z) end
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary:Matrix_GetTransposed(M) end
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary:Matrix_GetTransposeAdjoint(M) end
---@param M FMatrix
---@param Tolerance float
---@return FVector
function UKismetMathLibrary:Matrix_GetScaleVector(M, Tolerance) end
---@param M FMatrix
---@param Axis EAxis::Type
---@return FVector
function UKismetMathLibrary:Matrix_GetScaledAxis(M, Axis) end
---@param M FMatrix
---@param X FVector
---@param Y FVector
---@param Z FVector
function UKismetMathLibrary:Matrix_GetScaledAxes(M, X, Y, Z) end
---@param M FMatrix
---@return float
function UKismetMathLibrary:Matrix_GetRotDeterminant(M) end
---@param M FMatrix
---@return FRotator
function UKismetMathLibrary:Matrix_GetRotator(M) end
---@param InMatrix FMatrix
---@return FVector
function UKismetMathLibrary:Matrix_GetOrigin(InMatrix) end
---@param M FMatrix
---@return float
function UKismetMathLibrary:Matrix_GetMaximumAxisScale(M) end
---@param M FMatrix
---@param Tolerance float
---@return FMatrix
function UKismetMathLibrary:Matrix_GetMatrixWithoutScale(M, Tolerance) end
---@param M FMatrix
---@return FMatrix
function UKismetMathLibrary:Matrix_GetInverse(M) end
---@param M FMatrix
---@param OutPlane FPlane
---@return boolean
function UKismetMathLibrary:Matrix_GetFrustumTopPlane(M, OutPlane) end
---@param M FMatrix
---@param OutPlane FPlane
---@return boolean
function UKismetMathLibrary:Matrix_GetFrustumRightPlane(M, OutPlane) end
---@param M FMatrix
---@param OutPlane FPlane
---@return boolean
function UKismetMathLibrary:Matrix_GetFrustumNearPlane(M, OutPlane) end
---@param M FMatrix
---@param OutPlane FPlane
---@return boolean
function UKismetMathLibrary:Matrix_GetFrustumLeftPlane(M, OutPlane) end
---@param M FMatrix
---@param OutPlane FPlane
---@return boolean
function UKismetMathLibrary:Matrix_GetFrustumFarPlane(M, OutPlane) end
---@param M FMatrix
---@param OutPlane FPlane
---@return boolean
function UKismetMathLibrary:Matrix_GetFrustumBottomPlane(M, OutPlane) end
---@param M FMatrix
---@return float
function UKismetMathLibrary:Matrix_GetDeterminant(M) end
---@param M FMatrix
---@param Column EMatrixColumns::Type
---@return FVector
function UKismetMathLibrary:Matrix_GetColumn(M, Column) end
---@param M FMatrix
---@return boolean
function UKismetMathLibrary:Matrix_ContainsNaN(M) end
---@param M FMatrix
---@param Translation FVector
---@return FMatrix
function UKismetMathLibrary:Matrix_ConcatenateTranslation(M, Translation) end
---@param M FMatrix
---@param Scale float
---@return FMatrix
function UKismetMathLibrary:Matrix_ApplyScale(M, Scale) end
---@param Value float
---@param InRangeA float
---@param InRangeB float
---@param OutRangeA float
---@param OutRangeB float
---@return float
function UKismetMathLibrary:MapRangeUnclamped(Value, InRangeA, InRangeB, OutRangeA, OutRangeB) end
---@param Value float
---@param InRangeA float
---@param InRangeB float
---@param OutRangeA float
---@param OutRangeB float
---@return float
function UKismetMathLibrary:MapRangeClamped(Value, InRangeA, InRangeB, OutRangeA, OutRangeB) end
---@param X float
---@param Y float
---@param Z float
---@param W float
---@return FVector4
function UKismetMathLibrary:MakeVector4(X, Y, Z, W) end
---@param X float
---@param Y float
---@return FVector2D
function UKismetMathLibrary:MakeVector2D(X, Y) end
---@param X float
---@param Y float
---@param Z float
---@return FVector
function UKismetMathLibrary:MakeVector(X, Y, Z) end
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
---@return FTransform
function UKismetMathLibrary:MakeTransform(Location, Rotation, Scale) end
---@param Days int32
---@param Hours int32
---@param Minutes int32
---@param Seconds int32
---@param FractionNano int32
---@return FTimespan
function UKismetMathLibrary:MakeTimespan2(Days, Hours, Minutes, Seconds, FractionNano) end
---@param Days int32
---@param Hours int32
---@param Minutes int32
---@param Seconds int32
---@param Milliseconds int32
---@return FTimespan
function UKismetMathLibrary:MakeTimespan(Days, Hours, Minutes, Seconds, Milliseconds) end
---@param Z FVector
---@param Y FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromZY(Z, Y) end
---@param Z FVector
---@param X FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromZX(Z, X) end
---@param Z FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromZ(Z) end
---@param Y FVector
---@param Z FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromYZ(Y, Z) end
---@param Y FVector
---@param X FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromYX(Y, X) end
---@param Y FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromY(Y) end
---@param X FVector
---@param Z FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromXZ(X, Z) end
---@param X FVector
---@param Y FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromXY(X, Y) end
---@param X FVector
---@return FRotator
function UKismetMathLibrary:MakeRotFromX(X) end
---@param Roll float
---@param Pitch float
---@param Yaw float
---@return FRotator
function UKismetMathLibrary:MakeRotator(Roll, Pitch, Yaw) end
---@param Forward FVector
---@param Right FVector
---@param Up FVector
---@return FRotator
function UKismetMathLibrary:MakeRotationFromAxes(Forward, Right, Up) end
---@param A FTransform
---@param RelativeTo FTransform
---@return FTransform
function UKismetMathLibrary:MakeRelativeTransform(A, RelativeTo) end
---@param InitialSeed int32
---@return FRandomStream
function UKismetMathLibrary:MakeRandomStream(InitialSeed) end
---@param Frame FFrameNumber
---@param FrameRate FFrameRate
---@param SubFrame float
---@return FQualifiedFrameTime
function UKismetMathLibrary:MakeQualifiedFrameTime(Frame, FrameRate, SubFrame) end
---@param InCurrentTime float
---@param InPulsesPerSecond float
---@param InPhase float
---@return float
function UKismetMathLibrary:MakePulsatingValue(InCurrentTime, InPulsesPerSecond, InPhase) end
---@param Point FVector
---@param Normal FVector
---@return FPlane
function UKismetMathLibrary:MakePlaneFromPointAndNormal(Point, Normal) end
---@param Numerator int32
---@param Denominator int32
---@return FFrameRate
function UKismetMathLibrary:MakeFrameRate(Numerator, Denominator) end
---@param Year int32
---@param Month int32
---@param Day int32
---@param Hour int32
---@param Minute int32
---@param Second int32
---@param Millisecond int32
---@return FDateTime
function UKismetMathLibrary:MakeDateTime(Year, Month, Day, Hour, Minute, Second, Millisecond) end
---@param R float
---@param G float
---@param B float
---@param A float
---@return FLinearColor
function UKismetMathLibrary:MakeColor(R, G, B, A) end
---@param Min FVector2D
---@param Max FVector2D
---@return FBox2D
function UKismetMathLibrary:MakeBox2D(Min, Max) end
---@param Min FVector
---@param Max FVector
---@return FBox
function UKismetMathLibrary:MakeBox(Min, Max) end
---@param A float
---@return float
function UKismetMathLibrary:Loge(A) end
---@param A float
---@param Base float
---@return float
function UKismetMathLibrary:Log(A, Base) end
---@param LineStart FVector
---@param LineEnd FVector
---@param PlaneOrigin FVector
---@param PlaneNormal FVector
---@param T float
---@param Intersection FVector
---@return boolean
function UKismetMathLibrary:LinePlaneIntersection_OriginNormal(LineStart, LineEnd, PlaneOrigin, PlaneNormal, T, Intersection) end
---@param LineStart FVector
---@param LineEnd FVector
---@param APlane FPlane
---@param T float
---@param Intersection FVector
---@return boolean
function UKismetMathLibrary:LinePlaneIntersection(LineStart, LineEnd, APlane, T, Intersection) end
---@param A FLinearColor
---@param B FLinearColor
---@param Alpha float
---@return FLinearColor
function UKismetMathLibrary:LinearColorLerpUsingHSV(A, B, Alpha) end
---@param A FLinearColor
---@param B FLinearColor
---@param Alpha float
---@return FLinearColor
function UKismetMathLibrary:LinearColorLerp(A, B, Alpha) end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Yellow() end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_White() end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Transparent() end
---@param InLinearColor FLinearColor
---@return FColor
function UKismetMathLibrary:LinearColor_ToRGBE(InLinearColor) end
---@param InColor FLinearColor
---@param InOpacity float
---@return FLinearColor
function UKismetMathLibrary:LinearColor_ToNewOpacity(InColor, InOpacity) end
---@param InOutColor FLinearColor
---@param InTemperature float
function UKismetMathLibrary:LinearColor_SetTemperature(InOutColor, InTemperature) end
---@param InOutColor FLinearColor
---@param R float
---@param G float
---@param B float
---@param A float
function UKismetMathLibrary:LinearColor_SetRGBA(InOutColor, R, G, B, A) end
---@param InOutColor FLinearColor
function UKismetMathLibrary:LinearColor_SetRandomHue(InOutColor) end
---@param InOutColor FLinearColor
---@param InSRGB FColor
function UKismetMathLibrary:LinearColor_SetFromSRGB(InOutColor, InSRGB) end
---@param InOutColor FLinearColor
---@param InColor FColor
function UKismetMathLibrary:LinearColor_SetFromPow22(InOutColor, InColor) end
---@param InOutColor FLinearColor
---@param H float
---@param S float
---@param V float
---@param A float
function UKismetMathLibrary:LinearColor_SetFromHSV(InOutColor, H, S, V, A) end
---@param InOutColor FLinearColor
---@param InColor FLinearColor
function UKismetMathLibrary:LinearColor_Set(InOutColor, InColor) end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Red() end
---@param InColor FLinearColor
---@return FColor
function UKismetMathLibrary:LinearColor_QuantizeRound(InColor) end
---@param InColor FLinearColor
---@return FColor
function UKismetMathLibrary:LinearColor_Quantize(InColor) end
---@param A FLinearColor
---@param B FLinearColor
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:LinearColor_IsNearEqual(A, B, Tolerance) end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Green() end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Gray() end
---@param InColor FLinearColor
---@return float
function UKismetMathLibrary:LinearColor_GetMin(InColor) end
---@param InColor FLinearColor
---@return float
function UKismetMathLibrary:LinearColor_GetMax(InColor) end
---@param InColor FLinearColor
---@return float
function UKismetMathLibrary:LinearColor_GetLuminance(InColor) end
---@param C1 FLinearColor
---@param C2 FLinearColor
---@return float
function UKismetMathLibrary:LinearColor_Distance(C1, C2) end
---@param InColor FLinearColor
---@param InDesaturation float
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Desaturated(InColor, InDesaturation) end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Blue() end
---@return FLinearColor
function UKismetMathLibrary:LinearColor_Black() end
---@param A FVector
---@param B FRotator
---@return FVector
function UKismetMathLibrary:LessLess_VectorRotator(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary:LessEqual_TimespanTimespan(A, B) end
---@param A int32
---@param B int32
---@return boolean
function UKismetMathLibrary:LessEqual_IntInt(A, B) end
---@param A int64
---@param B int64
---@return boolean
function UKismetMathLibrary:LessEqual_Int64Int64(A, B) end
---@param A float
---@param B float
---@return boolean
function UKismetMathLibrary:LessEqual_FloatFloat(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary:LessEqual_DateTimeDateTime(A, B) end
---@param A uint8
---@param B uint8
---@return boolean
function UKismetMathLibrary:LessEqual_ByteByte(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary:Less_TimespanTimespan(A, B) end
---@param A int32
---@param B int32
---@return boolean
function UKismetMathLibrary:Less_IntInt(A, B) end
---@param A int64
---@param B int64
---@return boolean
function UKismetMathLibrary:Less_Int64Int64(A, B) end
---@param A float
---@param B float
---@return boolean
function UKismetMathLibrary:Less_FloatFloat(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary:Less_DateTimeDateTime(A, B) end
---@param A uint8
---@param B uint8
---@return boolean
function UKismetMathLibrary:Less_ByteByte(A, B) end
---@param A float
---@param B float
---@param Alpha float
---@return float
function UKismetMathLibrary:Lerp(A, B, Alpha) end
---@param A FVector2D
---@return boolean
function UKismetMathLibrary:IsZero2D(A) end
---@param Point FVector
---@param BoxWorldTransform FTransform
---@param BoxExtent FVector
---@return boolean
function UKismetMathLibrary:IsPointInBoxWithTransform(Point, BoxWorldTransform, BoxExtent) end
---@param Point FVector
---@param BoxOrigin FVector
---@param BoxExtent FVector
---@return boolean
function UKismetMathLibrary:IsPointInBox(Point, BoxOrigin, BoxExtent) end
---@param A FVector2D
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:IsNearlyZero2D(A, Tolerance) end
---@param A FDateTime
---@return boolean
function UKismetMathLibrary:IsMorning(A) end
---@param Year int32
---@return boolean
function UKismetMathLibrary:IsLeapYear(Year) end
---@param A FDateTime
---@return boolean
function UKismetMathLibrary:IsAfternoon(A) end
---@param T FTransform
---@return FTransform
function UKismetMathLibrary:InvertTransform(T) end
---@param T FTransform
---@param Rotation FRotator
---@return FRotator
function UKismetMathLibrary:InverseTransformRotation(T, Rotation) end
---@param T FTransform
---@param Location FVector
---@return FVector
function UKismetMathLibrary:InverseTransformLocation(T, Location) end
---@param T FTransform
---@param Direction FVector
---@return FVector
function UKismetMathLibrary:InverseTransformDirection(T, Direction) end
---@return FIntPoint
function UKismetMathLibrary:IntPoint_Zero() end
---@return FIntPoint
function UKismetMathLibrary:IntPoint_Up() end
---@return FIntPoint
function UKismetMathLibrary:IntPoint_Right() end
---@return FIntPoint
function UKismetMathLibrary:IntPoint_One() end
---@return FIntPoint
function UKismetMathLibrary:IntPoint_Left() end
---@return FIntPoint
function UKismetMathLibrary:IntPoint_Down() end
---@param Value int32
---@param Min int32
---@param Max int32
---@param InclusiveMin boolean
---@param InclusiveMax boolean
---@return boolean
function UKismetMathLibrary:InRange_IntInt(Value, Min, Max, InclusiveMin, InclusiveMax) end
---@param Value int64
---@param Min int64
---@param Max int64
---@param InclusiveMin boolean
---@param InclusiveMax boolean
---@return boolean
function UKismetMathLibrary:InRange_Int64Int64(Value, Min, Max, InclusiveMin, InclusiveMax) end
---@param Value float
---@param Min float
---@param Max float
---@param InclusiveMin boolean
---@param InclusiveMax boolean
---@return boolean
function UKismetMathLibrary:InRange_FloatFloat(Value, Min, Max, InclusiveMin, InclusiveMax) end
---@param Width float
---@param Height float
---@return float
function UKismetMathLibrary:Hypotenuse(Width, Height) end
---@param HSV FLinearColor
---@return FLinearColor
function UKismetMathLibrary:HSVToRGBLinear(HSV) end
---@param HSV FLinearColor
---@param RGB FLinearColor
function UKismetMathLibrary:HSVToRGB_Vector(HSV, RGB) end
---@param H float
---@param S float
---@param V float
---@param A float
---@return FLinearColor
function UKismetMathLibrary:HSVToRGB(H, S, V, A) end
---@param Location float
---@param GridSize float
---@return float
function UKismetMathLibrary:GridSnap_Float(Location, GridSize) end
---@param A FVector
---@param B FRotator
---@return FVector
function UKismetMathLibrary:GreaterGreater_VectorRotator(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary:GreaterEqual_TimespanTimespan(A, B) end
---@param A int32
---@param B int32
---@return boolean
function UKismetMathLibrary:GreaterEqual_IntInt(A, B) end
---@param A int64
---@param B int64
---@return boolean
function UKismetMathLibrary:GreaterEqual_Int64Int64(A, B) end
---@param A float
---@param B float
---@return boolean
function UKismetMathLibrary:GreaterEqual_FloatFloat(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary:GreaterEqual_DateTimeDateTime(A, B) end
---@param A uint8
---@param B uint8
---@return boolean
function UKismetMathLibrary:GreaterEqual_ByteByte(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary:Greater_TimespanTimespan(A, B) end
---@param A int32
---@param B int32
---@return boolean
function UKismetMathLibrary:Greater_IntInt(A, B) end
---@param A int64
---@param B int64
---@return boolean
function UKismetMathLibrary:Greater_Int64Int64(A, B) end
---@param A float
---@param B float
---@return boolean
function UKismetMathLibrary:Greater_FloatFloat(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary:Greater_DateTimeDateTime(A, B) end
---@param A uint8
---@param B uint8
---@return boolean
function UKismetMathLibrary:Greater_ByteByte(A, B) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetYear(A) end
---@param InVec FVector
---@param Yaw float
---@param Pitch float
function UKismetMathLibrary:GetYawPitchFromVector(InVec, Yaw, Pitch) end
---@param Vectors TArray<FVector>
---@return FVector
function UKismetMathLibrary:GetVectorArrayAverage(Vectors) end
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary:GetUpVector(InRot) end
---@param A FTimespan
---@return float
function UKismetMathLibrary:GetTotalSeconds(A) end
---@param A FTimespan
---@return float
function UKismetMathLibrary:GetTotalMinutes(A) end
---@param A FTimespan
---@return float
function UKismetMathLibrary:GetTotalMilliseconds(A) end
---@param A FTimespan
---@return float
function UKismetMathLibrary:GetTotalHours(A) end
---@param A FTimespan
---@return float
function UKismetMathLibrary:GetTotalDays(A) end
---@param A FDateTime
---@return FTimespan
function UKismetMathLibrary:GetTimeOfDay(A) end
---@return float
function UKismetMathLibrary:GetTAU() end
---@param MyRightYAxis FVector
---@param FloorNormal FVector
---@param UpVector FVector
---@param OutSlopePitchDegreeAngle float
---@param OutSlopeRollDegreeAngle float
function UKismetMathLibrary:GetSlopeDegreeAngles(MyRightYAxis, FloorNormal, UpVector, OutSlopePitchDegreeAngle, OutSlopeRollDegreeAngle) end
---@param A FTimespan
---@return int32
function UKismetMathLibrary:GetSeconds(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetSecond(A) end
---@param A FVector2D
---@param AngleDeg float
---@return FVector2D
function UKismetMathLibrary:GetRotated2D(A, AngleDeg) end
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary:GetRightVector(InRot) end
---@param Direction FVector
---@param SurfaceNormal FVector
---@return FVector
function UKismetMathLibrary:GetReflectionVector(Direction, SurfaceNormal) end
---@param Point FVector
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@return float
function UKismetMathLibrary:GetPointDistanceToSegment(Point, SegmentStart, SegmentEnd) end
---@param Point FVector
---@param LineOrigin FVector
---@param LineDirection FVector
---@return float
function UKismetMathLibrary:GetPointDistanceToLine(Point, LineOrigin, LineDirection) end
---@return float
function UKismetMathLibrary:GetPI() end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetMonth(A) end
---@param A FTimespan
---@return int32
function UKismetMathLibrary:GetMinutes(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetMinute(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:GetMinElement(A) end
---@param A FVector2D
---@return float
function UKismetMathLibrary:GetMin2D(A) end
---@param A FTimespan
---@return int32
function UKismetMathLibrary:GetMilliseconds(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetMillisecond(A) end
---@param A FVector
---@return float
function UKismetMathLibrary:GetMaxElement(A) end
---@param A FVector2D
---@return float
function UKismetMathLibrary:GetMax2D(A) end
---@param A FTimespan
---@return int32
function UKismetMathLibrary:GetHours(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetHour12(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetHour(A) end
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary:GetForwardVector(InRot) end
---@param A FTimespan
---@return FTimespan
function UKismetMathLibrary:GetDuration(A) end
---@param From FVector
---@param To FVector
---@return FVector
function UKismetMathLibrary:GetDirectionUnitVector(From, To) end
---@param A FTimespan
---@return int32
function UKismetMathLibrary:GetDays(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetDayOfYear(A) end
---@param A FDateTime
---@return int32
function UKismetMathLibrary:GetDay(A) end
---@param A FDateTime
---@return FDateTime
function UKismetMathLibrary:GetDate(A) end
---@param InDirection FVector
---@param ReferenceFrame FTransform
---@param Azimuth float
---@param Elevation float
function UKismetMathLibrary:GetAzimuthAndElevation(InDirection, ReferenceFrame, Azimuth, Elevation) end
---@param A FRotator
---@param X FVector
---@param Y FVector
---@param Z FVector
function UKismetMathLibrary:GetAxes(A, X, Y, Z) end
---@param A FVector2D
---@return float
function UKismetMathLibrary:GetAbsMax2D(A) end
---@param A FVector2D
---@return FVector2D
function UKismetMathLibrary:GetAbs2D(A) end
---@param InVector FVector
---@return FIntVector
function UKismetMathLibrary:FTruncVector(InVector) end
---@param A float
---@return int64
function UKismetMathLibrary:FTrunc64(A) end
---@param A float
---@return int32
function UKismetMathLibrary:FTrunc(A) end
---@param Seconds float
---@return FTimespan
function UKismetMathLibrary:FromSeconds(Seconds) end
---@param Minutes float
---@return FTimespan
function UKismetMathLibrary:FromMinutes(Minutes) end
---@param Milliseconds float
---@return FTimespan
function UKismetMathLibrary:FromMilliseconds(Milliseconds) end
---@param Hours float
---@return FTimespan
function UKismetMathLibrary:FromHours(Hours) end
---@param Days float
---@return FTimespan
function UKismetMathLibrary:FromDays(Days) end
---@param A float
---@return float
function UKismetMathLibrary:Fraction(A) end
---@param Dividend float
---@param Divisor float
---@param Remainder float
---@return int32
function UKismetMathLibrary:FMod(Dividend, Divisor, Remainder) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:FMin(A, B) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:FMax(A, B) end
---@param Current float
---@param Target float
---@param SpringState FFloatSpringState
---@param Stiffness float
---@param CriticalDampingFactor float
---@param DeltaTime float
---@param Mass float
---@return float
function UKismetMathLibrary:FloatSpringInterp(Current, Target, SpringState, Stiffness, CriticalDampingFactor, DeltaTime, Mass) end
---@param InCurrent float
---@param InDesired float
---@param InDeltaRate float
---@return float
function UKismetMathLibrary:FixedTurn(InCurrent, InDesired, InDeltaRate) end
---@param Current float
---@param Target float
---@param DeltaTime float
---@param InterpSpeed float
---@return float
function UKismetMathLibrary:FInterpTo_Constant(Current, Target, DeltaTime, InterpSpeed) end
---@param Current float
---@param Target float
---@param DeltaTime float
---@param InterpSpeed float
---@return float
function UKismetMathLibrary:FInterpTo(Current, Target, DeltaTime, InterpSpeed) end
---@param A float
---@param B float
---@param Alpha float
---@param Exponent float
---@return float
function UKismetMathLibrary:FInterpEaseInOut(A, B, Alpha, Exponent) end
---@param Segment1Start FVector
---@param Segment1End FVector
---@param Segment2Start FVector
---@param Segment2End FVector
---@param Segment1Point FVector
---@param Segment2Point FVector
function UKismetMathLibrary:FindNearestPointsOnLineSegments(Segment1Start, Segment1End, Segment2Start, Segment2End, Segment1Point, Segment2Point) end
---@param Start FVector
---@param Target FVector
---@return FRotator
function UKismetMathLibrary:FindLookAtRotation(Start, Target) end
---@param Point FVector
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@return FVector
function UKismetMathLibrary:FindClosestPointOnSegment(Point, SegmentStart, SegmentEnd) end
---@param Point FVector
---@param LineOrigin FVector
---@param LineDirection FVector
---@return FVector
function UKismetMathLibrary:FindClosestPointOnLine(Point, LineOrigin, LineDirection) end
---@param A float
---@return int64
function UKismetMathLibrary:FFloor64(A) end
---@param A float
---@return int32
function UKismetMathLibrary:FFloor(A) end
---@param Value float
---@param Min float
---@param Max float
---@return float
function UKismetMathLibrary:FClamp(Value, Min, Max) end
---@param A float
---@return int64
function UKismetMathLibrary:FCeil64(A) end
---@param A float
---@return int32
function UKismetMathLibrary:FCeil(A) end
---@param A float
---@return float
function UKismetMathLibrary:Exp(A) end
---@param A FVector
---@param B FVector
---@return boolean
function UKismetMathLibrary:EqualExactly_VectorVector(A, B) end
---@param A FVector4
---@param B FVector4
---@return boolean
function UKismetMathLibrary:EqualExactly_Vector4Vector4(A, B) end
---@param A FVector2D
---@param B FVector2D
---@return boolean
function UKismetMathLibrary:EqualExactly_Vector2DVector2D(A, B) end
---@param A FVector
---@param B FVector
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:EqualEqual_VectorVector(A, B, ErrorTolerance) end
---@param A FVector4
---@param B FVector4
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:EqualEqual_Vector4Vector4(A, B, ErrorTolerance) end
---@param A FVector2D
---@param B FVector2D
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:EqualEqual_Vector2DVector2D(A, B, ErrorTolerance) end
---@param A FTransform
---@param B FTransform
---@return boolean
function UKismetMathLibrary:EqualEqual_TransformTransform(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return boolean
function UKismetMathLibrary:EqualEqual_TimespanTimespan(A, B) end
---@param A FRotator
---@param B FRotator
---@param ErrorTolerance float
---@return boolean
function UKismetMathLibrary:EqualEqual_RotatorRotator(A, B, ErrorTolerance) end
---@param A FQuat
---@param B FQuat
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:EqualEqual_QuatQuat(A, B, Tolerance) end
---@param A UObject
---@param B UObject
---@return boolean
function UKismetMathLibrary:EqualEqual_ObjectObject(A, B) end
---@param A FName
---@param B FName
---@return boolean
function UKismetMathLibrary:EqualEqual_NameName(A, B) end
---@param A FMatrix
---@param B FMatrix
---@param Tolerance float
---@return boolean
function UKismetMathLibrary:EqualEqual_MatrixMatrix(A, B, Tolerance) end
---@param A FLinearColor
---@param B FLinearColor
---@return boolean
function UKismetMathLibrary:EqualEqual_LinearColorLinearColor(A, B) end
---@param A int32
---@param B int32
---@return boolean
function UKismetMathLibrary:EqualEqual_IntInt(A, B) end
---@param A int64
---@param B int64
---@return boolean
function UKismetMathLibrary:EqualEqual_Int64Int64(A, B) end
---@param A float
---@param B float
---@return boolean
function UKismetMathLibrary:EqualEqual_FloatFloat(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return boolean
function UKismetMathLibrary:EqualEqual_DateTimeDateTime(A, B) end
---@param A UClass
---@param B UClass
---@return boolean
function UKismetMathLibrary:EqualEqual_ClassClass(A, B) end
---@param A uint8
---@param B uint8
---@return boolean
function UKismetMathLibrary:EqualEqual_ByteByte(A, B) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:EqualEqual_BoolBool(A, B) end
---@param A FIntPoint
---@param B FIntPoint
---@return boolean
function UKismetMathLibrary:Equal_IntPointIntPoint(A, B) end
---@param A float
---@param B float
---@param Alpha float
---@param EasingFunc EEasingFunc::Type
---@param BlendExp float
---@param Steps int32
---@return float
function UKismetMathLibrary:Ease(A, B, Alpha, EasingFunc, BlendExp, Steps) end
---@param CurrentSample FVector
---@param PreviousSample FVector
---@param MaxDistance float
---@param MinWeight float
---@param MaxWeight float
---@return FVector
function UKismetMathLibrary:DynamicWeightedMovingAverage_FVector(CurrentSample, PreviousSample, MaxDistance, MinWeight, MaxWeight) end
---@param CurrentSample FRotator
---@param PreviousSample FRotator
---@param MaxDistance float
---@param MinWeight float
---@param MaxWeight float
---@return FRotator
function UKismetMathLibrary:DynamicWeightedMovingAverage_FRotator(CurrentSample, PreviousSample, MaxDistance, MinWeight, MaxWeight) end
---@param CurrentSample float
---@param PreviousSample float
---@param MaxDistance float
---@param MinWeight float
---@param MaxWeight float
---@return float
function UKismetMathLibrary:DynamicWeightedMovingAverage_Float(CurrentSample, PreviousSample, MaxDistance, MinWeight, MaxWeight) end
---@param A FVector2D
---@param B FVector2D
---@return float
function UKismetMathLibrary:DotProduct2D(A, B) end
---@param A FVector
---@param B FVector
---@return float
function UKismetMathLibrary:Dot_VectorVector(A, B) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Divide_VectorVector(A, B) end
---@param A FVector
---@param B int32
---@return FVector
function UKismetMathLibrary:Divide_VectorInt(A, B) end
---@param A FVector
---@param B float
---@return FVector
function UKismetMathLibrary:Divide_VectorFloat(A, B) end
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary:Divide_Vector4Vector4(A, B) end
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary:Divide_Vector2DVector2D(A, B) end
---@param A FVector2D
---@param B float
---@return FVector2D
function UKismetMathLibrary:Divide_Vector2DFloat(A, B) end
---@param A FTimespan
---@param Scalar float
---@return FTimespan
function UKismetMathLibrary:Divide_TimespanFloat(A, Scalar) end
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary:Divide_LinearColorLinearColor(A, B) end
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary:Divide_IntPointIntPoint(A, B) end
---@param A FIntPoint
---@param B int32
---@return FIntPoint
function UKismetMathLibrary:Divide_IntPointInt(A, B) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Divide_IntInt(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:Divide_Int64Int64(A, B) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:Divide_FloatFloat(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:Divide_ByteByte(A, B) end
---@param v1 FVector2D
---@param v2 FVector2D
---@return float
function UKismetMathLibrary:DistanceSquared2D(v1, v2) end
---@param v1 FVector2D
---@param v2 FVector2D
---@return float
function UKismetMathLibrary:Distance2D(v1, v2) end
---@param A float
---@return float
function UKismetMathLibrary:DegTan(A) end
---@param A float
---@return float
function UKismetMathLibrary:DegSin(A) end
---@param A float
---@return float
function UKismetMathLibrary:DegreesToRadians(A) end
---@param A float
---@return float
function UKismetMathLibrary:DegCos(A) end
---@param Y float
---@param X float
---@return float
function UKismetMathLibrary:DegAtan2(Y, X) end
---@param A float
---@return float
function UKismetMathLibrary:DegAtan(A) end
---@param A float
---@return float
function UKismetMathLibrary:DegAsin(A) end
---@param A float
---@return float
function UKismetMathLibrary:DegAcos(A) end
---@param Year int32
---@return int32
function UKismetMathLibrary:DaysInYear(Year) end
---@param Year int32
---@param Month int32
---@return int32
function UKismetMathLibrary:DaysInMonth(Year, Month) end
---@return FDateTime
function UKismetMathLibrary:DateTimeMinValue() end
---@return FDateTime
function UKismetMathLibrary:DateTimeMaxValue() end
---@param DateTimeString FString
---@param Result FDateTime
---@return boolean
function UKismetMathLibrary:DateTimeFromString(DateTimeString, Result) end
---@param IsoString FString
---@param Result FDateTime
---@return boolean
function UKismetMathLibrary:DateTimeFromIsoString(IsoString, Result) end
---@param A FVector2D
---@param B FVector2D
---@return float
function UKismetMathLibrary:CrossProduct2D(A, B) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Cross_VectorVector(A, B) end
---@param Yaw float
---@param Pitch float
---@param Length float
---@return FVector
function UKismetMathLibrary:CreateVectorFromYawPitch(Yaw, Pitch, Length) end
---@param A float
---@return float
function UKismetMathLibrary:Cos(A) end
---@param Transform FTransform
---@param ParentTransform FTransform
---@return FTransform
function UKismetMathLibrary:ConvertTransformToRelative(Transform, ParentTransform) end
---@param InVector FVector
---@return FVector2D
function UKismetMathLibrary:Conv_VectorToVector2D(InVector) end
---@param InLocation FVector
---@return FTransform
function UKismetMathLibrary:Conv_VectorToTransform(InLocation) end
---@param InVec FVector
---@return FRotator
function UKismetMathLibrary:Conv_VectorToRotator(InVec) end
---@param InVec FVector
---@return FQuat
function UKismetMathLibrary:Conv_VectorToQuaterion(InVec) end
---@param InVec FVector
---@return FLinearColor
function UKismetMathLibrary:Conv_VectorToLinearColor(InVec) end
---@param InVector4 FVector4
---@return FVector
function UKismetMathLibrary:Conv_Vector4ToVector(InVector4) end
---@param InVec FVector4
---@return FRotator
function UKismetMathLibrary:Conv_Vector4ToRotator(InVec) end
---@param InVec FVector4
---@return FQuat
function UKismetMathLibrary:Conv_Vector4ToQuaterion(InVec) end
---@param InVector2D FVector2D
---@param Z float
---@return FVector
function UKismetMathLibrary:Conv_Vector2DToVector(InVector2D, Z) end
---@param InVector2D FVector2D
---@return FIntPoint
function UKismetMathLibrary:Conv_Vector2DToIntPoint(InVector2D) end
---@param Transform FTransform
---@return FMatrix
function UKismetMathLibrary:Conv_TransformToMatrix(Transform) end
---@param InRot FRotator
---@return FVector
function UKismetMathLibrary:Conv_RotatorToVector(InRot) end
---@param InRotator FRotator
---@return FTransform
function UKismetMathLibrary:Conv_RotatorToTransform(InRotator) end
---@param InMatrix FMatrix
---@return FTransform
function UKismetMathLibrary:Conv_MatrixToTransform(InMatrix) end
---@param InMatrix FMatrix
---@return FRotator
function UKismetMathLibrary:Conv_MatrixToRotator(InMatrix) end
---@param InLinearColor FLinearColor
---@return FVector
function UKismetMathLibrary:Conv_LinearColorToVector(InLinearColor) end
---@param InLinearColor FLinearColor
---@param InUseSRGB boolean
---@return FColor
function UKismetMathLibrary:Conv_LinearColorToColor(InLinearColor, InUseSRGB) end
---@param InIntVector FIntVector
---@return FVector
function UKismetMathLibrary:Conv_IntVectorToVector(InIntVector) end
---@param inInt int32
---@return FIntVector
function UKismetMathLibrary:Conv_IntToIntVector(inInt) end
---@param inInt int32
---@return int64
function UKismetMathLibrary:Conv_IntToInt64(inInt) end
---@param inInt int32
---@return float
function UKismetMathLibrary:Conv_IntToFloat(inInt) end
---@param inInt int32
---@return uint8
function UKismetMathLibrary:Conv_IntToByte(inInt) end
---@param inInt int32
---@return boolean
function UKismetMathLibrary:Conv_IntToBool(inInt) end
---@param InIntPoint FIntPoint
---@return FVector2D
function UKismetMathLibrary:Conv_IntPointToVector2D(InIntPoint) end
---@param inInt int64
---@return int32
function UKismetMathLibrary:Conv_Int64ToInt(inInt) end
---@param inInt int64
---@return uint8
function UKismetMathLibrary:Conv_Int64ToByte(inInt) end
---@param InFloat float
---@return FVector
function UKismetMathLibrary:Conv_FloatToVector(InFloat) end
---@param InFloat float
---@return FLinearColor
function UKismetMathLibrary:Conv_FloatToLinearColor(InFloat) end
---@param InColor FColor
---@return FLinearColor
function UKismetMathLibrary:Conv_ColorToLinearColor(InColor) end
---@param InByte uint8
---@return int32
function UKismetMathLibrary:Conv_ByteToInt(InByte) end
---@param InByte uint8
---@return float
function UKismetMathLibrary:Conv_ByteToFloat(InByte) end
---@param InBool boolean
---@return int32
function UKismetMathLibrary:Conv_BoolToInt(InBool) end
---@param InBool boolean
---@return float
function UKismetMathLibrary:Conv_BoolToFloat(InBool) end
---@param InBool boolean
---@return uint8
function UKismetMathLibrary:Conv_BoolToByte(InBool) end
---@param A FTransform
---@param B FTransform
---@return FTransform
function UKismetMathLibrary:ComposeTransforms(A, B) end
---@param A FRotator
---@param B FRotator
---@return FRotator
function UKismetMathLibrary:ComposeRotators(A, B) end
---@param TestClass UClass
---@param ParentClass UClass
---@return boolean
function UKismetMathLibrary:ClassIsChildOf(TestClass, ParentClass) end
---@param A FVector
---@param Min float
---@param Max float
---@return FVector
function UKismetMathLibrary:ClampVectorSize(A, Min, Max) end
---@param Value int64
---@param Min int64
---@param Max int64
---@return int64
function UKismetMathLibrary:ClampInt64(Value, Min, Max) end
---@param Angle float
---@return float
function UKismetMathLibrary:ClampAxis(Angle) end
---@param A FVector2D
---@param MinAxisVal float
---@param MaxAxisVal float
---@return FVector2D
function UKismetMathLibrary:ClampAxes2D(A, MinAxisVal, MaxAxisVal) end
---@param AngleDegrees float
---@param MinAngleDegrees float
---@param MaxAngleDegrees float
---@return float
function UKismetMathLibrary:ClampAngle(AngleDegrees, MinAngleDegrees, MaxAngleDegrees) end
---@param Value int32
---@param Min int32
---@param Max int32
---@return int32
function UKismetMathLibrary:Clamp(Value, Min, Max) end
---@param Current FLinearColor
---@param Target FLinearColor
---@param DeltaTime float
---@param InterpSpeed float
---@return FLinearColor
function UKismetMathLibrary:CInterpTo(Current, Target, DeltaTime, InterpSpeed) end
---@param InVec FVector4
---@param X float
---@param Y float
---@param Z float
---@param W float
function UKismetMathLibrary:BreakVector4(InVec, X, Y, Z, W) end
---@param InVec FVector2D
---@param X float
---@param Y float
function UKismetMathLibrary:BreakVector2D(InVec, X, Y) end
---@param InVec FVector
---@param X float
---@param Y float
---@param Z float
function UKismetMathLibrary:BreakVector(InVec, X, Y, Z) end
---@param InTransform FTransform
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
function UKismetMathLibrary:BreakTransform(InTransform, Location, Rotation, Scale) end
---@param InTimespan FTimespan
---@param Days int32
---@param Hours int32
---@param Minutes int32
---@param Seconds int32
---@param FractionNano int32
function UKismetMathLibrary:BreakTimespan2(InTimespan, Days, Hours, Minutes, Seconds, FractionNano) end
---@param InTimespan FTimespan
---@param Days int32
---@param Hours int32
---@param Minutes int32
---@param Seconds int32
---@param Milliseconds int32
function UKismetMathLibrary:BreakTimespan(InTimespan, Days, Hours, Minutes, Seconds, Milliseconds) end
---@param InRot FRotator
---@param X FVector
---@param Y FVector
---@param Z FVector
function UKismetMathLibrary:BreakRotIntoAxes(InRot, X, Y, Z) end
---@param InRot FRotator
---@param Roll float
---@param Pitch float
---@param Yaw float
function UKismetMathLibrary:BreakRotator(InRot, Roll, Pitch, Yaw) end
---@param InRandomStream FRandomStream
---@param InitialSeed int32
function UKismetMathLibrary:BreakRandomStream(InRandomStream, InitialSeed) end
---@param InFrameTime FQualifiedFrameTime
---@param Frame FFrameNumber
---@param FrameRate FFrameRate
---@param SubFrame float
function UKismetMathLibrary:BreakQualifiedFrameTime(InFrameTime, Frame, FrameRate, SubFrame) end
---@param InFrameRate FFrameRate
---@param Numerator int32
---@param Denominator int32
function UKismetMathLibrary:BreakFrameRate(InFrameRate, Numerator, Denominator) end
---@param InDateTime FDateTime
---@param Year int32
---@param Month int32
---@param Day int32
---@param Hour int32
---@param Minute int32
---@param Second int32
---@param Millisecond int32
function UKismetMathLibrary:BreakDateTime(InDateTime, Year, Month, Day, Hour, Minute, Second, Millisecond) end
---@param InColor FLinearColor
---@param R float
---@param G float
---@param B float
---@param A float
function UKismetMathLibrary:BreakColor(InColor, R, G, B, A) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:BooleanXOR(A, B) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:BooleanOR(A, B) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:BooleanNOR(A, B) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:BooleanNAND(A, B) end
---@param A boolean
---@param B boolean
---@return boolean
function UKismetMathLibrary:BooleanAND(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:BMin(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:BMax(A, B) end
---@param Y float
---@param X float
---@return float
function UKismetMathLibrary:Atan2(Y, X) end
---@param A float
---@return float
function UKismetMathLibrary:Atan(A) end
---@param A float
---@return float
function UKismetMathLibrary:Asin(A) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:And_IntInt(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:And_Int64Int64(A, B) end
---@param A FVector
---@param B FVector
---@return FVector
function UKismetMathLibrary:Add_VectorVector(A, B) end
---@param A FVector
---@param B int32
---@return FVector
function UKismetMathLibrary:Add_VectorInt(A, B) end
---@param A FVector
---@param B float
---@return FVector
function UKismetMathLibrary:Add_VectorFloat(A, B) end
---@param A FVector4
---@param B FVector4
---@return FVector4
function UKismetMathLibrary:Add_Vector4Vector4(A, B) end
---@param A FVector2D
---@param B FVector2D
---@return FVector2D
function UKismetMathLibrary:Add_Vector2DVector2D(A, B) end
---@param A FVector2D
---@param B float
---@return FVector2D
function UKismetMathLibrary:Add_Vector2DFloat(A, B) end
---@param A FTimespan
---@param B FTimespan
---@return FTimespan
function UKismetMathLibrary:Add_TimespanTimespan(A, B) end
---@param A FQuat
---@param B FQuat
---@return FQuat
function UKismetMathLibrary:Add_QuatQuat(A, B) end
---@param A FMatrix
---@param B FMatrix
---@return FMatrix
function UKismetMathLibrary:Add_MatrixMatrix(A, B) end
---@param A FLinearColor
---@param B FLinearColor
---@return FLinearColor
function UKismetMathLibrary:Add_LinearColorLinearColor(A, B) end
---@param A FIntPoint
---@param B FIntPoint
---@return FIntPoint
function UKismetMathLibrary:Add_IntPointIntPoint(A, B) end
---@param A FIntPoint
---@param B int32
---@return FIntPoint
function UKismetMathLibrary:Add_IntPointInt(A, B) end
---@param A int32
---@param B int32
---@return int32
function UKismetMathLibrary:Add_IntInt(A, B) end
---@param A int64
---@param B int64
---@return int64
function UKismetMathLibrary:Add_Int64Int64(A, B) end
---@param A float
---@param B float
---@return float
function UKismetMathLibrary:Add_FloatFloat(A, B) end
---@param A FDateTime
---@param B FTimespan
---@return FDateTime
function UKismetMathLibrary:Add_DateTimeTimespan(A, B) end
---@param A FDateTime
---@param B FDateTime
---@return FDateTime
function UKismetMathLibrary:Add_DateTimeDateTime(A, B) end
---@param A uint8
---@param B uint8
---@return uint8
function UKismetMathLibrary:Add_ByteByte(A, B) end
---@param A float
---@return float
function UKismetMathLibrary:Acos(A) end
---@param A int64
---@return int64
function UKismetMathLibrary:Abs_Int64(A) end
---@param A int32
---@return int32
function UKismetMathLibrary:Abs_Int(A) end
---@param A float
---@return float
function UKismetMathLibrary:Abs(A) end


---@class UKismetNodeHelperLibrary : UBlueprintFunctionLibrary
UKismetNodeHelperLibrary = {}

---@param Data int32
---@param Index int32
function UKismetNodeHelperLibrary:MarkBit(Data, Index) end
---@param Data int32
---@param NumBits int32
---@return boolean
function UKismetNodeHelperLibrary:HasUnmarkedBit(Data, NumBits) end
---@param Data int32
---@param NumBits int32
---@return boolean
function UKismetNodeHelperLibrary:HasMarkedBit(Data, NumBits) end
---@param Enum UEnum
---@param EnumeratorValue uint8
---@return uint8
function UKismetNodeHelperLibrary:GetValidValue(Enum, EnumeratorValue) end
---@param Data int32
---@param StartIdx int32
---@param NumBits int32
---@param bRandom boolean
---@return int32
function UKismetNodeHelperLibrary:GetUnmarkedBit(Data, StartIdx, NumBits, bRandom) end
---@param Data int32
---@param StartIdx int32
---@param NumBits int32
---@return int32
function UKismetNodeHelperLibrary:GetRandomUnmarkedBit(Data, StartIdx, NumBits) end
---@param Data int32
---@param StartIdx int32
---@param NumBits int32
---@return int32
function UKismetNodeHelperLibrary:GetFirstUnmarkedBit(Data, StartIdx, NumBits) end
---@param Enum UEnum
---@param EnumeratorIndex uint8
---@return uint8
function UKismetNodeHelperLibrary:GetEnumeratorValueFromIndex(Enum, EnumeratorIndex) end
---@param Enum UEnum
---@param EnumeratorValue uint8
---@return FString
function UKismetNodeHelperLibrary:GetEnumeratorUserFriendlyName(Enum, EnumeratorValue) end
---@param Enum UEnum
---@param EnumeratorValue uint8
---@return FName
function UKismetNodeHelperLibrary:GetEnumeratorName(Enum, EnumeratorValue) end
---@param Data int32
---@param Index int32
function UKismetNodeHelperLibrary:ClearBit(Data, Index) end
---@param Data int32
function UKismetNodeHelperLibrary:ClearAllBits(Data) end
---@param Data int32
---@param Index int32
---@return boolean
function UKismetNodeHelperLibrary:BitIsMarked(Data, Index) end


---@class UKismetRenderingLibrary : UBlueprintFunctionLibrary
UKismetRenderingLibrary = {}

---@param PrimitiveComponent UPrimitiveComponent
---@param bCastInsetShadow boolean
---@param bLightAttachmentsAsGroup boolean
function UKismetRenderingLibrary:SetCastInsetShadowForAllAttachments(PrimitiveComponent, bCastInsetShadow, bLightAttachmentsAsGroup) end
---@param RenderTarget UTextureRenderTarget2D
---@param Name FString
---@param CompressionSettings TextureCompressionSettings
---@param MipSettings TextureMipGenSettings
---@return UTexture2D
function UKismetRenderingLibrary:RenderTargetCreateStaticTexture2DEditorOnly(RenderTarget, Name, CompressionSettings, MipSettings) end
---@param TextureRenderTarget UTextureRenderTarget2D
function UKismetRenderingLibrary:ReleaseRenderTarget2D(TextureRenderTarget) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param U float
---@param V float
---@return FColor
function UKismetRenderingLibrary:ReadRenderTargetUV(WorldContextObject, TextureRenderTarget, U, V) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param U float
---@param V float
---@return FLinearColor
function UKismetRenderingLibrary:ReadRenderTargetRawUV(WorldContextObject, TextureRenderTarget, U, V) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param X int32
---@param Y int32
---@return FLinearColor
function UKismetRenderingLibrary:ReadRenderTargetRawPixel(WorldContextObject, TextureRenderTarget, X, Y) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param X int32
---@param Y int32
---@return FColor
function UKismetRenderingLibrary:ReadRenderTargetPixel(WorldContextObject, TextureRenderTarget, X, Y) end
---@param Bone0 int32
---@param Weight0 uint8
---@param Bone1 int32
---@param Weight1 uint8
---@param Bone2 int32
---@param Weight2 uint8
---@param Bone3 int32
---@param Weight3 uint8
---@return FSkelMeshSkinWeightInfo
function UKismetRenderingLibrary:MakeSkinWeightInfo(Bone0, Weight0, Bone1, Weight1, Bone2, Weight2, Bone3, Weight3) end
---@param WorldContextObject UObject
---@param Filename FString
---@return UTexture2D
function UKismetRenderingLibrary:ImportFileAsTexture2D(WorldContextObject, Filename) end
---@param WorldContextObject UObject
---@param Buffer TArray<uint8>
---@return UTexture2D
function UKismetRenderingLibrary:ImportBufferAsTexture2D(WorldContextObject, Buffer) end
---@param WorldContextObject UObject
---@param Texture UTexture2D
---@param FilePath FString
---@param Filename FString
function UKismetRenderingLibrary:ExportTexture2D(WorldContextObject, Texture, FilePath, Filename) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param FilePath FString
---@param Filename FString
function UKismetRenderingLibrary:ExportRenderTarget(WorldContextObject, TextureRenderTarget, FilePath, Filename) end
---@param WorldContextObject UObject
---@param Context FDrawToRenderTargetContext
function UKismetRenderingLibrary:EndDrawCanvasToRenderTarget(WorldContextObject, Context) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param Material UMaterialInterface
function UKismetRenderingLibrary:DrawMaterialToRenderTarget(WorldContextObject, TextureRenderTarget, Material) end
---@param WorldContextObject UObject
---@param Width int32
---@param Height int32
---@param Format ETextureRenderTargetFormat
---@param ClearColor FLinearColor
---@param bAutoGenerateMipMaps boolean
---@return UTextureRenderTarget2D
function UKismetRenderingLibrary:CreateRenderTarget2D(WorldContextObject, Width, Height, Format, ClearColor, bAutoGenerateMipMaps) end
---@param WorldContextObject UObject
---@param RenderTarget UTextureRenderTarget2D
---@param Texture UTexture2D
function UKismetRenderingLibrary:ConvertRenderTargetToTexture2DEditorOnly(WorldContextObject, RenderTarget, Texture) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param ClearColor FLinearColor
function UKismetRenderingLibrary:ClearRenderTarget2D(WorldContextObject, TextureRenderTarget, ClearColor) end
---@param InWeight FSkelMeshSkinWeightInfo
---@param Bone0 int32
---@param Weight0 uint8
---@param Bone1 int32
---@param Weight1 uint8
---@param Bone2 int32
---@param Weight2 uint8
---@param Bone3 int32
---@param Weight3 uint8
function UKismetRenderingLibrary:BreakSkinWeightInfo(InWeight, Bone0, Weight0, Bone1, Weight1, Bone2, Weight2, Bone3, Weight3) end
---@param WorldContextObject UObject
---@param TextureRenderTarget UTextureRenderTarget2D
---@param Canvas UCanvas
---@param Size FVector2D
---@param Context FDrawToRenderTargetContext
function UKismetRenderingLibrary:BeginDrawCanvasToRenderTarget(WorldContextObject, TextureRenderTarget, Canvas, Size, Context) end


---@class UKismetStringLibrary : UBlueprintFunctionLibrary
UKismetStringLibrary = {}

---@param SourceString FString
---@return FString
function UKismetStringLibrary:TrimTrailing(SourceString) end
---@param SourceString FString
---@return FString
function UKismetStringLibrary:Trim(SourceString) end
---@param SourceString FString
---@return FString
function UKismetStringLibrary:ToUpper(SourceString) end
---@param SourceString FString
---@return FString
function UKismetStringLibrary:ToLower(SourceString) end
---@param InSeconds float
---@return FString
function UKismetStringLibrary:TimeSecondsToString(InSeconds) end
---@param SourceString FString
---@param InPrefix FString
---@param SearchCase ESearchCase::Type
---@return boolean
function UKismetStringLibrary:StartsWith(SourceString, InPrefix, SearchCase) end
---@param SourceString FString
---@param InStr FString
---@param LeftS FString
---@param RightS FString
---@param SearchCase ESearchCase::Type
---@param SearchDir ESearchDir::Type
---@return boolean
function UKismetStringLibrary:Split(SourceString, InStr, LeftS, RightS, SearchCase, SearchDir) end
---@param SourceString FString
---@param ChCount int32
---@return FString
function UKismetStringLibrary:RightPad(SourceString, ChCount) end
---@param SourceString FString
---@param Count int32
---@return FString
function UKismetStringLibrary:RightChop(SourceString, Count) end
---@param SourceString FString
---@param Count int32
---@return FString
function UKismetStringLibrary:Right(SourceString, Count) end
---@param SourceString FString
---@return FString
function UKismetStringLibrary:Reverse(SourceString) end
---@param SourceString FString
---@param SearchText FString
---@param ReplacementText FString
---@param SearchCase ESearchCase::Type
---@return int32
function UKismetStringLibrary:ReplaceInline(SourceString, SearchText, ReplacementText, SearchCase) end
---@param SourceString FString
---@param From FString
---@param To FString
---@param SearchCase ESearchCase::Type
---@return FString
function UKismetStringLibrary:Replace(SourceString, From, To, SearchCase) end
---@param SourceString FString
---@param Delimiter FString
---@param CullEmptyStrings boolean
---@return TArray<FString>
function UKismetStringLibrary:ParseIntoArray(SourceString, Delimiter, CullEmptyStrings) end
---@param A FString
---@param B FString
---@return boolean
function UKismetStringLibrary:NotEqual_StrStr(A, B) end
---@param A FString
---@param B FString
---@return boolean
function UKismetStringLibrary:NotEqual_StriStri(A, B) end
---@param SourceString FString
---@param Start int32
---@param Count int32
---@return FString
function UKismetStringLibrary:Mid(SourceString, Start, Count) end
---@param SourceString FString
---@param Wildcard FString
---@param SearchCase ESearchCase::Type
---@return boolean
function UKismetStringLibrary:MatchesWildcard(SourceString, Wildcard, SearchCase) end
---@param S FString
---@return int32
function UKismetStringLibrary:Len(S) end
---@param SourceString FString
---@param ChCount int32
---@return FString
function UKismetStringLibrary:LeftPad(SourceString, ChCount) end
---@param SourceString FString
---@param Count int32
---@return FString
function UKismetStringLibrary:LeftChop(SourceString, Count) end
---@param SourceString FString
---@param Count int32
---@return FString
function UKismetStringLibrary:Left(SourceString, Count) end
---@param SourceArray TArray<FString>
---@param Separator FString
---@return FString
function UKismetStringLibrary:JoinStringArray(SourceArray, Separator) end
---@param SourceString FString
---@return boolean
function UKismetStringLibrary:IsNumeric(SourceString) end
---@param inString FString
---@return boolean
function UKismetStringLibrary:IsEmpty(inString) end
---@param SourceString FString
---@param StartIndex int32
---@param Length int32
---@return FString
function UKismetStringLibrary:GetSubstring(SourceString, StartIndex, Length) end
---@param SourceString FString
---@param Index int32
---@return int32
function UKismetStringLibrary:GetCharacterAsNumber(SourceString, Index) end
---@param SourceString FString
---@return TArray<FString>
function UKismetStringLibrary:GetCharacterArrayFromString(SourceString) end
---@param SearchIn FString
---@param Substring FString
---@param bUseCase boolean
---@param bSearchFromEnd boolean
---@param StartPosition int32
---@return int32
function UKismetStringLibrary:FindSubstring(SearchIn, Substring, bUseCase, bSearchFromEnd, StartPosition) end
---@param A FString
---@param B FString
---@return boolean
function UKismetStringLibrary:EqualEqual_StrStr(A, B) end
---@param A FString
---@param B FString
---@return boolean
function UKismetStringLibrary:EqualEqual_StriStri(A, B) end
---@param SourceString FString
---@param InSuffix FString
---@param SearchCase ESearchCase::Type
---@return boolean
function UKismetStringLibrary:EndsWith(SourceString, InSuffix, SearchCase) end
---@param SourceString FString
---@param inArray TArray<FString>
---@return int32
function UKismetStringLibrary:CullArray(SourceString, inArray) end
---@param InVec FVector
---@return FString
function UKismetStringLibrary:Conv_VectorToString(InVec) end
---@param InVec FVector2D
---@return FString
function UKismetStringLibrary:Conv_Vector2dToString(InVec) end
---@param InTrans FTransform
---@return FString
function UKismetStringLibrary:Conv_TransformToString(InTrans) end
---@param inString FString
---@param OutConvertedVector2D FVector2D
---@param OutIsValid boolean
function UKismetStringLibrary:Conv_StringToVector2D(inString, OutConvertedVector2D, OutIsValid) end
---@param inString FString
---@param OutConvertedVector FVector
---@param OutIsValid boolean
function UKismetStringLibrary:Conv_StringToVector(inString, OutConvertedVector, OutIsValid) end
---@param inString FString
---@param OutConvertedRotator FRotator
---@param OutIsValid boolean
function UKismetStringLibrary:Conv_StringToRotator(inString, OutConvertedRotator, OutIsValid) end
---@param inString FString
---@return FName
function UKismetStringLibrary:Conv_StringToName(inString) end
---@param inString FString
---@return int32
function UKismetStringLibrary:Conv_StringToInt(inString) end
---@param inString FString
---@return float
function UKismetStringLibrary:Conv_StringToFloat(inString) end
---@param inString FString
---@param OutConvertedColor FLinearColor
---@param OutIsValid boolean
function UKismetStringLibrary:Conv_StringToColor(inString, OutConvertedColor, OutIsValid) end
---@param InRot FRotator
---@return FString
function UKismetStringLibrary:Conv_RotatorToString(InRot) end
---@param InObj UObject
---@return FString
function UKismetStringLibrary:Conv_ObjectToString(InObj) end
---@param InName FName
---@return FString
function UKismetStringLibrary:Conv_NameToString(InName) end
---@param InMatrix FMatrix
---@return FString
function UKismetStringLibrary:Conv_MatrixToString(InMatrix) end
---@param InIntVec FIntVector
---@return FString
function UKismetStringLibrary:Conv_IntVectorToString(InIntVec) end
---@param inInt int32
---@return FString
function UKismetStringLibrary:Conv_IntToString(inInt) end
---@param InIntPoint FIntPoint
---@return FString
function UKismetStringLibrary:Conv_IntPointToString(InIntPoint) end
---@param InFloat float
---@return FString
function UKismetStringLibrary:Conv_FloatToString(InFloat) end
---@param InColor FLinearColor
---@return FString
function UKismetStringLibrary:Conv_ColorToString(InColor) end
---@param InByte uint8
---@return FString
function UKismetStringLibrary:Conv_ByteToString(InByte) end
---@param InBool boolean
---@return FString
function UKismetStringLibrary:Conv_BoolToString(InBool) end
---@param SearchIn FString
---@param Substring FString
---@param bUseCase boolean
---@param bSearchFromEnd boolean
---@return boolean
function UKismetStringLibrary:Contains(SearchIn, Substring, bUseCase, bSearchFromEnd) end
---@param A FString
---@param B FString
---@return FString
function UKismetStringLibrary:Concat_StrStr(A, B) end
---@param AppendTo FString
---@param Prefix FString
---@param InVector2D FVector2D
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Vector2d(AppendTo, Prefix, InVector2D, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InVector FVector
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Vector(AppendTo, Prefix, InVector, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InRot FRotator
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Rotator(AppendTo, Prefix, InRot, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InObj UObject
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Object(AppendTo, Prefix, InObj, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InName FName
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Name(AppendTo, Prefix, InName, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InIntVector FIntVector
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_IntVector(AppendTo, Prefix, InIntVector, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param inInt int32
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Int(AppendTo, Prefix, inInt, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InFloat float
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Float(AppendTo, Prefix, InFloat, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InColor FLinearColor
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Color(AppendTo, Prefix, InColor, Suffix) end
---@param AppendTo FString
---@param Prefix FString
---@param InBool boolean
---@param Suffix FString
---@return FString
function UKismetStringLibrary:BuildString_Bool(AppendTo, Prefix, InBool, Suffix) end


---@class UKismetStringTableLibrary : UBlueprintFunctionLibrary
UKismetStringTableLibrary = {}

---@param TableId FName
---@return boolean
function UKismetStringTableLibrary:IsRegisteredTableId(TableId) end
---@param TableId FName
---@param Key FString
---@return boolean
function UKismetStringTableLibrary:IsRegisteredTableEntry(TableId, Key) end
---@param TableId FName
---@return FString
function UKismetStringTableLibrary:GetTableNamespace(TableId) end
---@param TableId FName
---@param Key FString
---@return FString
function UKismetStringTableLibrary:GetTableEntrySourceString(TableId, Key) end
---@param TableId FName
---@param Key FString
---@param MetaDataId FName
---@return FString
function UKismetStringTableLibrary:GetTableEntryMetaData(TableId, Key, MetaDataId) end
---@return TArray<FName>
function UKismetStringTableLibrary:GetRegisteredStringTables() end
---@param TableId FName
---@param Key FString
---@return TArray<FName>
function UKismetStringTableLibrary:GetMetaDataIdsFromStringTableEntry(TableId, Key) end
---@param TableId FName
---@return TArray<FString>
function UKismetStringTableLibrary:GetKeysFromStringTable(TableId) end


---@class UKismetSystemLibrary : UBlueprintFunctionLibrary
UKismetSystemLibrary = {}

function UKismetSystemLibrary:UnregisterForRemoteNotifications() end
---@param PrimaryAssetIdList TArray<FPrimaryAssetId>
function UKismetSystemLibrary:UnloadPrimaryAssetList(PrimaryAssetIdList) end
---@param PrimaryAssetId FPrimaryAssetId
function UKismetSystemLibrary:UnloadPrimaryAsset(PrimaryAssetId) end
---@param Object UObject
function UKismetSystemLibrary:TransactObject(Object) end
function UKismetSystemLibrary:StackTrace() end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:SphereTraceSingleForObjects(WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:SphereTraceSingleByProfile(WorldContextObject, Start, End, Radius, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:SphereTraceSingle(WorldContextObject, Start, End, Radius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:SphereTraceMultiForObjects(WorldContextObject, Start, End, Radius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:SphereTraceMultiByProfile(WorldContextObject, Start, End, Radius, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:SphereTraceMulti(WorldContextObject, Start, End, Radius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param SpherePos FVector
---@param SphereRadius float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ComponentClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutComponents TArray<UPrimitiveComponent>
---@return boolean
function UKismetSystemLibrary:SphereOverlapComponents(WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents) end
---@param WorldContextObject UObject
---@param SpherePos FVector
---@param SphereRadius float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ActorClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutActors TArray<AActor>
---@return boolean
function UKismetSystemLibrary:SphereOverlapActors(WorldContextObject, SpherePos, SphereRadius, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors) end
---@param Object UObject
function UKismetSystemLibrary:SnapshotObject(Object) end
---@param CategoryName FString
function UKismetSystemLibrary:ShowPlatformSpecificLeaderboardScreen(CategoryName) end
---@param SpecificPlayer APlayerController
function UKismetSystemLibrary:ShowPlatformSpecificAchievementsScreen(SpecificPlayer) end
function UKismetSystemLibrary:ShowInterstitialAd() end
---@param AdIdIndex int32
---@param bShowOnBottomOfScreen boolean
function UKismetSystemLibrary:ShowAdBanner(AdIdIndex, bShowOnBottomOfScreen) end
---@param Title FText
function UKismetSystemLibrary:SetWindowTitle(Title) end
---@param bEnabled boolean
function UKismetSystemLibrary:SetVolumeButtonsHandledBySystem(bEnabled) end
---@param Object UObject
---@param PropertyName FName
---@param Value FVector
function UKismetSystemLibrary:SetVectorPropertyByName(Object, PropertyName, Value) end
---@param UserActivity FUserActivity
function UKismetSystemLibrary:SetUserActivity(UserActivity) end
---@param Object UObject
---@param PropertyName FName
---@param Value FTransform
function UKismetSystemLibrary:SetTransformPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FText
function UKismetSystemLibrary:SetTextPropertyByName(Object, PropertyName, Value) end
---@param WorldContextObject UObject
---@param bState boolean
function UKismetSystemLibrary:SetSuppressViewportTransitionMessage(WorldContextObject, bState) end
---@param Object UObject
---@param PropertyName FName
---@param Value FGenericStruct
function UKismetSystemLibrary:SetStructurePropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FString
function UKismetSystemLibrary:SetStringPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value TSoftObjectPtr<UObject>
function UKismetSystemLibrary:SetSoftObjectPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value TSoftClassPtr<UObject>
function UKismetSystemLibrary:SetSoftClassPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FRotator
function UKismetSystemLibrary:SetRotatorPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value UObject
function UKismetSystemLibrary:SetObjectPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FName
function UKismetSystemLibrary:SetNamePropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FLinearColor
function UKismetSystemLibrary:SetLinearColorPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value int32
function UKismetSystemLibrary:SetIntPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FScriptInterface
function UKismetSystemLibrary:SetInterfacePropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value int64
function UKismetSystemLibrary:SetInt64PropertyByName(Object, PropertyName, Value) end
---@param bBlock boolean
function UKismetSystemLibrary:SetGamepadsBlockDeviceFeedback(bBlock) end
---@param Object UObject
---@param PropertyName FName
---@param Value float
function UKismetSystemLibrary:SetFloatPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value TFieldPath<FField>
function UKismetSystemLibrary:SetFieldPathPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value FCollisionProfileName
function UKismetSystemLibrary:SetCollisionProfileNameProperty(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value UClass
function UKismetSystemLibrary:SetClassPropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value uint8
function UKismetSystemLibrary:SetBytePropertyByName(Object, PropertyName, Value) end
---@param Object UObject
---@param PropertyName FName
---@param Value boolean
function UKismetSystemLibrary:SetBoolPropertyByName(Object, PropertyName, Value) end
---@param WorldContextObject UObject
---@param Duration float
---@param LatentInfo FLatentActionInfo
function UKismetSystemLibrary:RetriggerableDelay(WorldContextObject, Duration, LatentInfo) end
---@param ControllerId int32
function UKismetSystemLibrary:ResetGamepadAssignmentToController(ControllerId) end
function UKismetSystemLibrary:ResetGamepadAssignments() end
function UKismetSystemLibrary:RegisterForRemoteNotifications() end
---@param WorldContextObject UObject
---@param SpecificPlayer APlayerController
---@param QuitPreference EQuitPreference::Type
---@param bIgnorePlatformRestrictions boolean
function UKismetSystemLibrary:QuitGame(WorldContextObject, SpecificPlayer, QuitPreference, bIgnorePlatformRestrictions) end
---@param inString FString
function UKismetSystemLibrary:PrintWarning(inString) end
---@param WorldContextObject UObject
---@param InText FText
---@param bPrintToScreen boolean
---@param bPrintToLog boolean
---@param TextColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:PrintText(WorldContextObject, InText, bPrintToScreen, bPrintToLog, TextColor, Duration) end
---@param WorldContextObject UObject
---@param inString FString
---@param bPrintToScreen boolean
---@param bPrintToLog boolean
---@param TextColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:PrintString(WorldContextObject, inString, bPrintToScreen, bPrintToLog, TextColor, Duration) end
---@param Loaded UObject
function UKismetSystemLibrary:OnAssetLoaded__DelegateSignature(Loaded) end
---@param Loaded UClass
function UKismetSystemLibrary:OnAssetClassLoaded__DelegateSignature(Loaded) end
---@param A TSoftObjectPtr<UObject>
---@param B TSoftObjectPtr<UObject>
---@return boolean
function UKismetSystemLibrary:NotEqual_SoftObjectReference(A, B) end
---@param A TSoftClassPtr<UObject>
---@param B TSoftClassPtr<UObject>
---@return boolean
function UKismetSystemLibrary:NotEqual_SoftClassReference(A, B) end
---@param A FPrimaryAssetType
---@param B FPrimaryAssetType
---@return boolean
function UKismetSystemLibrary:NotEqual_PrimaryAssetType(A, B) end
---@param A FPrimaryAssetId
---@param B FPrimaryAssetId
---@return boolean
function UKismetSystemLibrary:NotEqual_PrimaryAssetId(A, B) end
---@param InFilename FString
---@return FString
function UKismetSystemLibrary:NormalizeFilename(InFilename) end
---@param Component USceneComponent
---@param TargetRelativeLocation FVector
---@param TargetRelativeRotation FRotator
---@param bEaseOut boolean
---@param bEaseIn boolean
---@param OverTime float
---@param bForceShortestRotationPath boolean
---@param MoveAction EMoveComponentAction::Type
---@param LatentInfo FLatentActionInfo
function UKismetSystemLibrary:MoveComponentTo(Component, TargetRelativeLocation, TargetRelativeRotation, bEaseOut, bEaseIn, OverTime, bForceShortestRotationPath, MoveAction, LatentInfo) end
---@param PathString FString
---@return FSoftObjectPath
function UKismetSystemLibrary:MakeSoftObjectPath(PathString) end
---@param PathString FString
---@return FSoftClassPath
function UKismetSystemLibrary:MakeSoftClassPath(PathString) end
---@param Value FText
---@return FText
function UKismetSystemLibrary:MakeLiteralText(Value) end
---@param Value FString
---@return FString
function UKismetSystemLibrary:MakeLiteralString(Value) end
---@param Value FName
---@return FName
function UKismetSystemLibrary:MakeLiteralName(Value) end
---@param Value int32
---@return int32
function UKismetSystemLibrary:MakeLiteralInt(Value) end
---@param Value float
---@return float
function UKismetSystemLibrary:MakeLiteralFloat(Value) end
---@param Value uint8
---@return uint8
function UKismetSystemLibrary:MakeLiteralByte(Value) end
---@param Value boolean
---@return boolean
function UKismetSystemLibrary:MakeLiteralBool(Value) end
---@param AdIdIndex int32
function UKismetSystemLibrary:LoadInterstitialAd(AdIdIndex) end
---@param AssetClass TSoftClassPtr<UObject>
---@return UClass
function UKismetSystemLibrary:LoadClassAsset_Blocking(AssetClass) end
---@param WorldContextObject UObject
---@param AssetClass TSoftClassPtr<UObject>
---@param OnLoaded FLoadAssetClassOnLoaded
---@param LatentInfo FLatentActionInfo
function UKismetSystemLibrary:LoadAssetClass(WorldContextObject, AssetClass, OnLoaded, LatentInfo) end
---@param Asset TSoftObjectPtr<UObject>
---@return UObject
function UKismetSystemLibrary:LoadAsset_Blocking(Asset) end
---@param WorldContextObject UObject
---@param Asset TSoftObjectPtr<UObject>
---@param OnLoaded FLoadAssetOnLoaded
---@param LatentInfo FLatentActionInfo
function UKismetSystemLibrary:LoadAsset(WorldContextObject, Asset, OnLoaded, LatentInfo) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:LineTraceSingleForObjects(WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:LineTraceSingleByProfile(WorldContextObject, Start, End, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:LineTraceSingle(WorldContextObject, Start, End, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:LineTraceMultiForObjects(WorldContextObject, Start, End, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:LineTraceMultiByProfile(WorldContextObject, Start, End, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:LineTraceMulti(WorldContextObject, Start, End, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param URL FString
function UKismetSystemLibrary:LaunchURL(URL) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
function UKismetSystemLibrary:K2_UnPauseTimerHandle(WorldContextObject, Handle) end
---@param Delegate FK2_UnPauseTimerDelegateDelegate
function UKismetSystemLibrary:K2_UnPauseTimerDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
function UKismetSystemLibrary:K2_UnPauseTimer(Object, FunctionName) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
---@return boolean
function UKismetSystemLibrary:K2_TimerExistsHandle(WorldContextObject, Handle) end
---@param Delegate FK2_TimerExistsDelegateDelegate
---@return boolean
function UKismetSystemLibrary:K2_TimerExistsDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
---@return boolean
function UKismetSystemLibrary:K2_TimerExists(Object, FunctionName) end
---@param Delegate FK2_SetTimerDelegateDelegate
---@param Time float
---@param bLooping boolean
---@param InitialStartDelay float
---@param InitialStartDelayVariance float
---@return FTimerHandle
function UKismetSystemLibrary:K2_SetTimerDelegate(Delegate, Time, bLooping, InitialStartDelay, InitialStartDelayVariance) end
---@param Object UObject
---@param FunctionName FString
---@param Time float
---@param bLooping boolean
---@param InitialStartDelay float
---@param InitialStartDelayVariance float
---@return FTimerHandle
function UKismetSystemLibrary:K2_SetTimer(Object, FunctionName, Time, bLooping, InitialStartDelay, InitialStartDelayVariance) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
function UKismetSystemLibrary:K2_PauseTimerHandle(WorldContextObject, Handle) end
---@param Delegate FK2_PauseTimerDelegateDelegate
function UKismetSystemLibrary:K2_PauseTimerDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
function UKismetSystemLibrary:K2_PauseTimer(Object, FunctionName) end
---@param Handle FTimerHandle
---@return boolean
function UKismetSystemLibrary:K2_IsValidTimerHandle(Handle) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
---@return boolean
function UKismetSystemLibrary:K2_IsTimerPausedHandle(WorldContextObject, Handle) end
---@param Delegate FK2_IsTimerPausedDelegateDelegate
---@return boolean
function UKismetSystemLibrary:K2_IsTimerPausedDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
---@return boolean
function UKismetSystemLibrary:K2_IsTimerPaused(Object, FunctionName) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
---@return boolean
function UKismetSystemLibrary:K2_IsTimerActiveHandle(WorldContextObject, Handle) end
---@param Delegate FK2_IsTimerActiveDelegateDelegate
---@return boolean
function UKismetSystemLibrary:K2_IsTimerActiveDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
---@return boolean
function UKismetSystemLibrary:K2_IsTimerActive(Object, FunctionName) end
---@param Handle FTimerHandle
---@return FTimerHandle
function UKismetSystemLibrary:K2_InvalidateTimerHandle(Handle) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
---@return float
function UKismetSystemLibrary:K2_GetTimerRemainingTimeHandle(WorldContextObject, Handle) end
---@param Delegate FK2_GetTimerRemainingTimeDelegateDelegate
---@return float
function UKismetSystemLibrary:K2_GetTimerRemainingTimeDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
---@return float
function UKismetSystemLibrary:K2_GetTimerRemainingTime(Object, FunctionName) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
---@return float
function UKismetSystemLibrary:K2_GetTimerElapsedTimeHandle(WorldContextObject, Handle) end
---@param Delegate FK2_GetTimerElapsedTimeDelegateDelegate
---@return float
function UKismetSystemLibrary:K2_GetTimerElapsedTimeDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
---@return float
function UKismetSystemLibrary:K2_GetTimerElapsedTime(Object, FunctionName) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
function UKismetSystemLibrary:K2_ClearTimerHandle(WorldContextObject, Handle) end
---@param Delegate FK2_ClearTimerDelegateDelegate
function UKismetSystemLibrary:K2_ClearTimerDelegate(Delegate) end
---@param Object UObject
---@param FunctionName FString
function UKismetSystemLibrary:K2_ClearTimer(Object, FunctionName) end
---@param WorldContextObject UObject
---@param Handle FTimerHandle
function UKismetSystemLibrary:K2_ClearAndInvalidateTimerHandle(WorldContextObject, Handle) end
---@param SoftObjectReference TSoftObjectPtr<UObject>
---@return boolean
function UKismetSystemLibrary:IsValidSoftObjectReference(SoftObjectReference) end
---@param SoftClassReference TSoftClassPtr<UObject>
---@return boolean
function UKismetSystemLibrary:IsValidSoftClassReference(SoftClassReference) end
---@param PrimaryAssetType FPrimaryAssetType
---@return boolean
function UKismetSystemLibrary:IsValidPrimaryAssetType(PrimaryAssetType) end
---@param PrimaryAssetId FPrimaryAssetId
---@return boolean
function UKismetSystemLibrary:IsValidPrimaryAssetId(PrimaryAssetId) end
---@param Class UClass
---@return boolean
function UKismetSystemLibrary:IsValidClass(Class) end
---@param Object UObject
---@return boolean
function UKismetSystemLibrary:IsValid(Object) end
---@return boolean
function UKismetSystemLibrary:IsUnattended() end
---@param WorldContextObject UObject
---@return boolean
function UKismetSystemLibrary:IsStandalone(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UKismetSystemLibrary:IsSplitScreen(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UKismetSystemLibrary:IsServer(WorldContextObject) end
---@return boolean
function UKismetSystemLibrary:IsScreensaverEnabled() end
---@return boolean
function UKismetSystemLibrary:IsPackagedForDistribution() end
---@param SpecificPlayer APlayerController
---@return boolean
function UKismetSystemLibrary:IsLoggedIn(SpecificPlayer) end
---@return boolean
function UKismetSystemLibrary:IsInterstitialAdRequested() end
---@return boolean
function UKismetSystemLibrary:IsInterstitialAdAvailable() end
---@param WorldContextObject UObject
---@return boolean
function UKismetSystemLibrary:IsDedicatedServer(WorldContextObject) end
---@param ControllerId int32
---@return boolean
function UKismetSystemLibrary:IsControllerAssignedToGamepad(ControllerId) end
function UKismetSystemLibrary:HideAdBanner() end
---@return boolean
function UKismetSystemLibrary:GetVolumeButtonsHandledBySystem() end
---@return FString
function UKismetSystemLibrary:GetUniqueDeviceId() end
---@param Resolutions TArray<FIntPoint>
---@return boolean
function UKismetSystemLibrary:GetSupportedFullscreenResolutions(Resolutions) end
---@param PrimaryAssetId FPrimaryAssetId
---@return TSoftObjectPtr<UObject>
function UKismetSystemLibrary:GetSoftObjectReferenceFromPrimaryAssetId(PrimaryAssetId) end
---@param PrimaryAssetId FPrimaryAssetId
---@return TSoftClassPtr<UObject>
function UKismetSystemLibrary:GetSoftClassReferenceFromPrimaryAssetId(PrimaryAssetId) end
---@return int32
function UKismetSystemLibrary:GetRenderingMaterialQualityLevel() end
---@return int32
function UKismetSystemLibrary:GetRenderingDetailMode() end
---@return FString
function UKismetSystemLibrary:GetProjectSavedDirectory() end
---@return FString
function UKismetSystemLibrary:GetProjectDirectory() end
---@return FString
function UKismetSystemLibrary:GetProjectContentDirectory() end
---@param RequiredBundles TArray<FName>
---@param ExcludedBundles TArray<FName>
---@param ValidTypes TArray<FPrimaryAssetType>
---@param bForceCurrentState boolean
---@param OutPrimaryAssetIdList TArray<FPrimaryAssetId>
function UKismetSystemLibrary:GetPrimaryAssetsWithBundleState(RequiredBundles, ExcludedBundles, ValidTypes, bForceCurrentState, OutPrimaryAssetIdList) end
---@param PrimaryAssetType FPrimaryAssetType
---@param OutPrimaryAssetIdList TArray<FPrimaryAssetId>
function UKismetSystemLibrary:GetPrimaryAssetIdList(PrimaryAssetType, OutPrimaryAssetIdList) end
---@param SoftObjectReference TSoftObjectPtr<UObject>
---@return FPrimaryAssetId
function UKismetSystemLibrary:GetPrimaryAssetIdFromSoftObjectReference(SoftObjectReference) end
---@param SoftClassReference TSoftClassPtr<UObject>
---@return FPrimaryAssetId
function UKismetSystemLibrary:GetPrimaryAssetIdFromSoftClassReference(SoftClassReference) end
---@param Object UObject
---@return FPrimaryAssetId
function UKismetSystemLibrary:GetPrimaryAssetIdFromObject(Object) end
---@param Class UClass
---@return FPrimaryAssetId
function UKismetSystemLibrary:GetPrimaryAssetIdFromClass(Class) end
---@return TArray<FString>
function UKismetSystemLibrary:GetPreferredLanguages() end
---@return FString
function UKismetSystemLibrary:GetPlatformUserName() end
---@return FString
function UKismetSystemLibrary:GetPlatformUserDir() end
---@param Object UObject
---@return FString
function UKismetSystemLibrary:GetPathName(Object) end
---@param Object UObject
---@return UObject
function UKismetSystemLibrary:GetOuterObject(Object) end
---@param Object UObject
---@return FString
function UKismetSystemLibrary:GetObjectName(Object) end
---@param PrimaryAssetId FPrimaryAssetId
---@return UObject
function UKismetSystemLibrary:GetObjectFromPrimaryAssetId(PrimaryAssetId) end
---@return int32
function UKismetSystemLibrary:GetMinYResolutionForUI() end
---@return int32
function UKismetSystemLibrary:GetMinYResolutionFor3DView() end
---@return FString
function UKismetSystemLibrary:GetLocalCurrencySymbol() end
---@return FString
function UKismetSystemLibrary:GetLocalCurrencyCode() end
---@param WorldContextObject UObject
---@return float
function UKismetSystemLibrary:GetGameTimeInSeconds(WorldContextObject) end
---@param ControllerId int32
---@return FString
function UKismetSystemLibrary:GetGamepadControllerName(ControllerId) end
---@return FString
function UKismetSystemLibrary:GetGameName() end
---@return FString
function UKismetSystemLibrary:GetGameBundleId() end
---@return int64
function UKismetSystemLibrary:GetFrameCount() end
---@return FString
function UKismetSystemLibrary:GetEngineVersion() end
---@param Object UObject
---@return FString
function UKismetSystemLibrary:GetDisplayName(Object) end
---@return FString
function UKismetSystemLibrary:GetDeviceId() end
---@return FString
function UKismetSystemLibrary:GetDefaultLocale() end
---@return FString
function UKismetSystemLibrary:GetDefaultLanguage() end
---@param PrimaryAssetId FPrimaryAssetId
---@param bForceCurrentState boolean
---@param OutBundles TArray<FName>
---@return boolean
function UKismetSystemLibrary:GetCurrentBundleState(PrimaryAssetId, bForceCurrentState, OutBundles) end
---@param Resolutions TArray<FIntPoint>
---@return boolean
function UKismetSystemLibrary:GetConvenientWindowedResolutions(Resolutions) end
---@param VariableName FString
---@return int32
function UKismetSystemLibrary:GetConsoleVariableIntValue(VariableName) end
---@param VariableName FString
---@return float
function UKismetSystemLibrary:GetConsoleVariableFloatValue(VariableName) end
---@param VariableName FString
---@return boolean
function UKismetSystemLibrary:GetConsoleVariableBoolValue(VariableName) end
---@param Component USceneComponent
---@param Origin FVector
---@param BoxExtent FVector
---@param SphereRadius float
function UKismetSystemLibrary:GetComponentBounds(Component, Origin, BoxExtent, SphereRadius) end
---@return FString
function UKismetSystemLibrary:GetCommandLine() end
---@param PrimaryAssetId FPrimaryAssetId
---@return UClass
function UKismetSystemLibrary:GetClassFromPrimaryAssetId(PrimaryAssetId) end
---@param Class UClass
---@return FString
function UKismetSystemLibrary:GetClassDisplayName(Class) end
---@return int32
function UKismetSystemLibrary:GetAdIDCount() end
---@param ComponentList TArray<UPrimitiveComponent>
---@param ActorClassFilter UClass
---@param OutActorList TArray<AActor>
function UKismetSystemLibrary:GetActorListFromComponentList(ComponentList, ActorClassFilter, OutActorList) end
---@param Actor AActor
---@param Origin FVector
---@param BoxExtent FVector
function UKismetSystemLibrary:GetActorBounds(Actor, Origin, BoxExtent) end
function UKismetSystemLibrary:ForceCloseAdBanner() end
---@param WorldContextObject UObject
function UKismetSystemLibrary:FlushPersistentDebugLines(WorldContextObject) end
---@param WorldContextObject UObject
function UKismetSystemLibrary:FlushDebugStrings(WorldContextObject) end
---@param WorldContextObject UObject
---@param Command FString
---@param SpecificPlayer APlayerController
function UKismetSystemLibrary:ExecuteConsoleCommand(WorldContextObject, Command, SpecificPlayer) end
---@param A TSoftObjectPtr<UObject>
---@param B TSoftObjectPtr<UObject>
---@return boolean
function UKismetSystemLibrary:EqualEqual_SoftObjectReference(A, B) end
---@param A TSoftClassPtr<UObject>
---@param B TSoftClassPtr<UObject>
---@return boolean
function UKismetSystemLibrary:EqualEqual_SoftClassReference(A, B) end
---@param A FPrimaryAssetType
---@param B FPrimaryAssetType
---@return boolean
function UKismetSystemLibrary:EqualEqual_PrimaryAssetType(A, B) end
---@param A FPrimaryAssetId
---@param B FPrimaryAssetId
---@return boolean
function UKismetSystemLibrary:EqualEqual_PrimaryAssetId(A, B) end
---@return int32
function UKismetSystemLibrary:EndTransaction() end
---@param WorldContextObject UObject
---@param TextLocation FVector
---@param Text FString
---@param TestBaseActor AActor
---@param TextColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:DrawDebugString(WorldContextObject, TextLocation, Text, TestBaseActor, TextColor, Duration) end
---@param WorldContextObject UObject
---@param Center FVector
---@param Radius float
---@param Segments int32
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugSphere(WorldContextObject, Center, Radius, Segments, LineColor, Duration, Thickness) end
---@param WorldContextObject UObject
---@param Position FVector
---@param Size float
---@param PointColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:DrawDebugPoint(WorldContextObject, Position, Size, PointColor, Duration) end
---@param WorldContextObject UObject
---@param PlaneCoordinates FPlane
---@param Location FVector
---@param Size float
---@param PlaneColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:DrawDebugPlane(WorldContextObject, PlaneCoordinates, Location, Size, PlaneColor, Duration) end
---@param WorldContextObject UObject
---@param LineStart FVector
---@param LineEnd FVector
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugLine(WorldContextObject, LineStart, LineEnd, LineColor, Duration, Thickness) end
---@param WorldContextObject UObject
---@param FrustumTransform FTransform
---@param FrustumColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugFrustum(WorldContextObject, FrustumTransform, FrustumColor, Duration, Thickness) end
---@param WorldContextObject UObject
---@param FloatHistory FDebugFloatHistory
---@param DrawTransform FTransform
---@param DrawSize FVector2D
---@param DrawColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:DrawDebugFloatHistoryTransform(WorldContextObject, FloatHistory, DrawTransform, DrawSize, DrawColor, Duration) end
---@param WorldContextObject UObject
---@param FloatHistory FDebugFloatHistory
---@param DrawLocation FVector
---@param DrawSize FVector2D
---@param DrawColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:DrawDebugFloatHistoryLocation(WorldContextObject, FloatHistory, DrawLocation, DrawSize, DrawColor, Duration) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param Segments int32
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugCylinder(WorldContextObject, Start, End, Radius, Segments, LineColor, Duration, Thickness) end
---@param WorldContextObject UObject
---@param AxisLoc FVector
---@param AxisRot FRotator
---@param Scale float
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugCoordinateSystem(WorldContextObject, AxisLoc, AxisRot, Scale, Duration, Thickness) end
---@param WorldContextObject UObject
---@param Origin FVector
---@param Direction FVector
---@param Length float
---@param AngleWidth float
---@param AngleHeight float
---@param NumSides int32
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugConeInDegrees(WorldContextObject, Origin, Direction, Length, AngleWidth, AngleHeight, NumSides, LineColor, Duration, Thickness) end
---@param WorldContextObject UObject
---@param Origin FVector
---@param Direction FVector
---@param Length float
---@param AngleWidth float
---@param AngleHeight float
---@param NumSides int32
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugCone(WorldContextObject, Origin, Direction, Length, AngleWidth, AngleHeight, NumSides, LineColor, Duration, Thickness) end
---@param WorldContextObject UObject
---@param Center FVector
---@param Radius float
---@param NumSegments int32
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
---@param YAxis FVector
---@param ZAxis FVector
---@param bDrawAxis boolean
function UKismetSystemLibrary:DrawDebugCircle(WorldContextObject, Center, Radius, NumSegments, LineColor, Duration, Thickness, YAxis, ZAxis, bDrawAxis) end
---@param WorldContextObject UObject
---@param Center FVector
---@param HalfHeight float
---@param Radius float
---@param Rotation FRotator
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugCapsule(WorldContextObject, Center, HalfHeight, Radius, Rotation, LineColor, Duration, Thickness) end
---@param CameraActor ACameraActor
---@param CameraColor FLinearColor
---@param Duration float
function UKismetSystemLibrary:DrawDebugCamera(CameraActor, CameraColor, Duration) end
---@param WorldContextObject UObject
---@param Center FVector
---@param Extent FVector
---@param LineColor FLinearColor
---@param Rotation FRotator
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugBox(WorldContextObject, Center, Extent, LineColor, Rotation, Duration, Thickness) end
---@param WorldContextObject UObject
---@param LineStart FVector
---@param LineEnd FVector
---@param ArrowSize float
---@param LineColor FLinearColor
---@param Duration float
---@param Thickness float
function UKismetSystemLibrary:DrawDebugArrow(WorldContextObject, LineStart, LineEnd, ArrowSize, LineColor, Duration, Thickness) end
---@param TestObject UObject
---@param Interface TSubclassOf<UInterface>
---@return boolean
function UKismetSystemLibrary:DoesImplementInterface(TestObject, Interface) end
---@param WorldContextObject UObject
---@param Duration float
---@param LatentInfo FLatentActionInfo
function UKismetSystemLibrary:Delay(WorldContextObject, Duration, LatentInfo) end
---@param ObjectToModify UObject
function UKismetSystemLibrary:CreateCopyForUndoBuffer(ObjectToModify) end
---@param Filename FString
---@return FString
function UKismetSystemLibrary:ConvertToRelativePath(Filename) end
---@param Filename FString
---@return FString
function UKismetSystemLibrary:ConvertToAbsolutePath(Filename) end
---@param SoftObjectPath FSoftObjectPath
---@return TSoftObjectPtr<UObject>
function UKismetSystemLibrary:Conv_SoftObjPathToSoftObjRef(SoftObjectPath) end
---@param SoftObjectReference TSoftObjectPtr<UObject>
---@return FString
function UKismetSystemLibrary:Conv_SoftObjectReferenceToString(SoftObjectReference) end
---@param SoftObject TSoftObjectPtr<UObject>
---@return UObject
function UKismetSystemLibrary:Conv_SoftObjectReferenceToObject(SoftObject) end
---@param SoftClassReference TSoftClassPtr<UObject>
---@return FString
function UKismetSystemLibrary:Conv_SoftClassReferenceToString(SoftClassReference) end
---@param SoftClass TSoftClassPtr<UObject>
---@return UClass
function UKismetSystemLibrary:Conv_SoftClassReferenceToClass(SoftClass) end
---@param SoftClassPath FSoftClassPath
---@return TSoftClassPtr<UObject>
function UKismetSystemLibrary:Conv_SoftClassPathToSoftClassRef(SoftClassPath) end
---@param PrimaryAssetType FPrimaryAssetType
---@return FString
function UKismetSystemLibrary:Conv_PrimaryAssetTypeToString(PrimaryAssetType) end
---@param PrimaryAssetId FPrimaryAssetId
---@return FString
function UKismetSystemLibrary:Conv_PrimaryAssetIdToString(PrimaryAssetId) end
---@param Object UObject
---@return TSoftObjectPtr<UObject>
function UKismetSystemLibrary:Conv_ObjectToSoftObjectReference(Object) end
---@param Interface FScriptInterface
---@return UObject
function UKismetSystemLibrary:Conv_InterfaceToObject(Interface) end
---@param Class UClass
---@return TSoftClassPtr<UObject>
function UKismetSystemLibrary:Conv_ClassToSoftClassReference(Class) end
---@param bAllowScreenSaver boolean
function UKismetSystemLibrary:ControlScreensaver(bAllowScreenSaver) end
---@param Component UPrimitiveComponent
---@param ComponentTransform FTransform
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ComponentClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutComponents TArray<UPrimitiveComponent>
---@return boolean
function UKismetSystemLibrary:ComponentOverlapComponents(Component, ComponentTransform, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents) end
---@param Component UPrimitiveComponent
---@param ComponentTransform FTransform
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ActorClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutActors TArray<AActor>
---@return boolean
function UKismetSystemLibrary:ComponentOverlapActors(Component, ComponentTransform, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors) end
function UKismetSystemLibrary:CollectGarbage() end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param HalfHeight float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:CapsuleTraceSingleForObjects(WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param HalfHeight float
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:CapsuleTraceSingleByProfile(WorldContextObject, Start, End, Radius, HalfHeight, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param HalfHeight float
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:CapsuleTraceSingle(WorldContextObject, Start, End, Radius, HalfHeight, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param HalfHeight float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:CapsuleTraceMultiForObjects(WorldContextObject, Start, End, Radius, HalfHeight, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param HalfHeight float
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:CapsuleTraceMultiByProfile(WorldContextObject, Start, End, Radius, HalfHeight, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius float
---@param HalfHeight float
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:CapsuleTraceMulti(WorldContextObject, Start, End, Radius, HalfHeight, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param CapsulePos FVector
---@param Radius float
---@param HalfHeight float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ComponentClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutComponents TArray<UPrimitiveComponent>
---@return boolean
function UKismetSystemLibrary:CapsuleOverlapComponents(WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents) end
---@param WorldContextObject UObject
---@param CapsulePos FVector
---@param Radius float
---@param HalfHeight float
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ActorClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutActors TArray<AActor>
---@return boolean
function UKismetSystemLibrary:CapsuleOverlapActors(WorldContextObject, CapsulePos, Radius, HalfHeight, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors) end
---@param URL FString
---@return boolean
function UKismetSystemLibrary:CanLaunchURL(URL) end
---@param Index int32
function UKismetSystemLibrary:CancelTransaction(Index) end
---@param InSoftObjectPath FSoftObjectPath
---@param PathString FString
function UKismetSystemLibrary:BreakSoftObjectPath(InSoftObjectPath, PathString) end
---@param InSoftClassPath FSoftClassPath
---@param PathString FString
function UKismetSystemLibrary:BreakSoftClassPath(InSoftClassPath, PathString) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param HalfSize FVector
---@param Orientation FRotator
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:BoxTraceSingleForObjects(WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param HalfSize FVector
---@param Orientation FRotator
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:BoxTraceSingleByProfile(WorldContextObject, Start, End, HalfSize, Orientation, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param HalfSize FVector
---@param Orientation FRotator
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHit FHitResult
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:BoxTraceSingle(WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param HalfSize FVector
---@param Orientation FRotator
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:BoxTraceMultiForObjects(WorldContextObject, Start, End, HalfSize, Orientation, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param HalfSize FVector
---@param Orientation FRotator
---@param ProfileName FName
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:BoxTraceMultiByProfile(WorldContextObject, Start, End, HalfSize, Orientation, ProfileName, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param HalfSize FVector
---@param Orientation FRotator
---@param TraceChannel ETraceTypeQuery
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray<AActor>
---@param DrawDebugType EDrawDebugTrace::Type
---@param OutHits TArray<FHitResult>
---@param bIgnoreSelf boolean
---@param TraceColor FLinearColor
---@param TraceHitColor FLinearColor
---@param DrawTime float
---@return boolean
function UKismetSystemLibrary:BoxTraceMulti(WorldContextObject, Start, End, HalfSize, Orientation, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime) end
---@param WorldContextObject UObject
---@param BoxPos FVector
---@param Extent FVector
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ComponentClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutComponents TArray<UPrimitiveComponent>
---@return boolean
function UKismetSystemLibrary:BoxOverlapComponents(WorldContextObject, BoxPos, Extent, ObjectTypes, ComponentClassFilter, ActorsToIgnore, OutComponents) end
---@param WorldContextObject UObject
---@param BoxPos FVector
---@param BoxExtent FVector
---@param ObjectTypes TArray<EObjectTypeQuery>
---@param ActorClassFilter UClass
---@param ActorsToIgnore TArray<AActor>
---@param OutActors TArray<AActor>
---@return boolean
function UKismetSystemLibrary:BoxOverlapActors(WorldContextObject, BoxPos, BoxExtent, ObjectTypes, ActorClassFilter, ActorsToIgnore, OutActors) end
---@param Context FString
---@param Description FText
---@param PrimaryObject UObject
---@return int32
function UKismetSystemLibrary:BeginTransaction(Context, Description, PrimaryObject) end
---@param Value float
---@param FloatHistory FDebugFloatHistory
---@return FDebugFloatHistory
function UKismetSystemLibrary:AddFloatHistorySample(Value, FloatHistory) end


---@class UKismetTextLibrary : UBlueprintFunctionLibrary
UKismetTextLibrary = {}

---@param InText FText
---@return FText
function UKismetTextLibrary:TextTrimTrailing(InText) end
---@param InText FText
---@return FText
function UKismetTextLibrary:TextTrimPrecedingAndTrailing(InText) end
---@param InText FText
---@return FText
function UKismetTextLibrary:TextTrimPreceding(InText) end
---@param InText FText
---@return FText
function UKismetTextLibrary:TextToUpper(InText) end
---@param InText FText
---@return FText
function UKismetTextLibrary:TextToLower(InText) end
---@param InText FText
---@return boolean
function UKismetTextLibrary:TextIsTransient(InText) end
---@param Text FText
---@return boolean
function UKismetTextLibrary:TextIsFromStringTable(Text) end
---@param InText FText
---@return boolean
function UKismetTextLibrary:TextIsEmpty(InText) end
---@param InText FText
---@return boolean
function UKismetTextLibrary:TextIsCultureInvariant(InText) end
---@param TableId FName
---@param Key FString
---@return FText
function UKismetTextLibrary:TextFromStringTable(TableId, Key) end
---@param Text FText
---@param OutTableId FName
---@param OutKey FString
---@return boolean
function UKismetTextLibrary:StringTableIdAndKeyFromText(Text, OutTableId, OutKey) end
---@param PolyglotData FPolyglotTextData
---@return FText
function UKismetTextLibrary:PolyglotDataToText(PolyglotData) end
---@param A FText
---@param B FText
---@return boolean
function UKismetTextLibrary:NotEqual_TextText(A, B) end
---@param A FText
---@param B FText
---@return boolean
function UKismetTextLibrary:NotEqual_IgnoreCase_TextText(A, B) end
---@param PolyglotData FPolyglotTextData
---@param IsValid boolean
---@param ErrorMessage FText
function UKismetTextLibrary:IsPolyglotDataValid(PolyglotData, IsValid, ErrorMessage) end
---@return FText
function UKismetTextLibrary:GetEmptyText() end
---@param InPattern FText
---@param InArgs TArray<FFormatArgumentData>
---@return FText
function UKismetTextLibrary:Format(InPattern, InArgs) end
---@param Namespace FString
---@param Key FString
---@param OutText FText
---@return boolean
function UKismetTextLibrary:FindTextInLocalizationTable(Namespace, Key, OutText) end
---@param A FText
---@param B FText
---@return boolean
function UKismetTextLibrary:EqualEqual_TextText(A, B) end
---@param A FText
---@param B FText
---@return boolean
function UKismetTextLibrary:EqualEqual_IgnoreCase_TextText(A, B) end
---@param InVec FVector
---@return FText
function UKismetTextLibrary:Conv_VectorToText(InVec) end
---@param InVec FVector2D
---@return FText
function UKismetTextLibrary:Conv_Vector2dToText(InVec) end
---@param InTrans FTransform
---@return FText
function UKismetTextLibrary:Conv_TransformToText(InTrans) end
---@param InText FText
---@return FString
function UKismetTextLibrary:Conv_TextToString(InText) end
---@param inString FString
---@return FText
function UKismetTextLibrary:Conv_StringToText(inString) end
---@param InRot FRotator
---@return FText
function UKismetTextLibrary:Conv_RotatorToText(InRot) end
---@param InObj UObject
---@return FText
function UKismetTextLibrary:Conv_ObjectToText(InObj) end
---@param InName FName
---@return FText
function UKismetTextLibrary:Conv_NameToText(InName) end
---@param Value int32
---@param bAlwaysSign boolean
---@param bUseGrouping boolean
---@param MinimumIntegralDigits int32
---@param MaximumIntegralDigits int32
---@return FText
function UKismetTextLibrary:Conv_IntToText(Value, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits) end
---@param Value int64
---@param bAlwaysSign boolean
---@param bUseGrouping boolean
---@param MinimumIntegralDigits int32
---@param MaximumIntegralDigits int32
---@return FText
function UKismetTextLibrary:Conv_Int64ToText(Value, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits) end
---@param Value float
---@param RoundingMode ERoundingMode
---@param bAlwaysSign boolean
---@param bUseGrouping boolean
---@param MinimumIntegralDigits int32
---@param MaximumIntegralDigits int32
---@param MinimumFractionalDigits int32
---@param MaximumFractionalDigits int32
---@return FText
function UKismetTextLibrary:Conv_FloatToText(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits) end
---@param InColor FLinearColor
---@return FText
function UKismetTextLibrary:Conv_ColorToText(InColor) end
---@param Value uint8
---@return FText
function UKismetTextLibrary:Conv_ByteToText(Value) end
---@param InBool boolean
---@return FText
function UKismetTextLibrary:Conv_BoolToText(InBool) end
---@param InDateTime FDateTime
---@param InTimeZone FString
---@return FText
function UKismetTextLibrary:AsTimeZoneTime_DateTime(InDateTime, InTimeZone) end
---@param InDateTime FDateTime
---@param InTimeZone FString
---@return FText
function UKismetTextLibrary:AsTimeZoneDateTime_DateTime(InDateTime, InTimeZone) end
---@param InDateTime FDateTime
---@param InTimeZone FString
---@return FText
function UKismetTextLibrary:AsTimeZoneDate_DateTime(InDateTime, InTimeZone) end
---@param InTimespan FTimespan
---@return FText
function UKismetTextLibrary:AsTimespan_Timespan(InTimespan) end
---@param In FDateTime
---@return FText
function UKismetTextLibrary:AsTime_DateTime(In) end
---@param Value float
---@param RoundingMode ERoundingMode
---@param bAlwaysSign boolean
---@param bUseGrouping boolean
---@param MinimumIntegralDigits int32
---@param MaximumIntegralDigits int32
---@param MinimumFractionalDigits int32
---@param MaximumFractionalDigits int32
---@return FText
function UKismetTextLibrary:AsPercent_Float(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits) end
---@param In FDateTime
---@return FText
function UKismetTextLibrary:AsDateTime_DateTime(In) end
---@param InDateTime FDateTime
---@return FText
function UKismetTextLibrary:AsDate_DateTime(InDateTime) end
---@param BaseValue int32
---@param CurrencyCode FString
---@return FText
function UKismetTextLibrary:AsCurrencyBase(BaseValue, CurrencyCode) end
---@param Value int32
---@param RoundingMode ERoundingMode
---@param bAlwaysSign boolean
---@param bUseGrouping boolean
---@param MinimumIntegralDigits int32
---@param MaximumIntegralDigits int32
---@param MinimumFractionalDigits int32
---@param MaximumFractionalDigits int32
---@param CurrencyCode FString
---@return FText
function UKismetTextLibrary:AsCurrency_Integer(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits, CurrencyCode) end
---@param Value float
---@param RoundingMode ERoundingMode
---@param bAlwaysSign boolean
---@param bUseGrouping boolean
---@param MinimumIntegralDigits int32
---@param MaximumIntegralDigits int32
---@param MinimumFractionalDigits int32
---@param MaximumFractionalDigits int32
---@param CurrencyCode FString
---@return FText
function UKismetTextLibrary:AsCurrency_Float(Value, RoundingMode, bAlwaysSign, bUseGrouping, MinimumIntegralDigits, MaximumIntegralDigits, MinimumFractionalDigits, MaximumFractionalDigits, CurrencyCode) end


---@class ULayer : UObject
---@field LayerName FName
---@field bIsVisible boolean
---@field ActorStats TArray<FLayerActorStats>
ULayer = {}



---@class ULevel : UObject
---@field OwningWorld UWorld
---@field Model UModel
---@field ModelComponents TArray<UModelComponent>
---@field ActorCluster ULevelActorContainer
---@field NumTextureStreamingUnbuiltComponents int32
---@field NumTextureStreamingDirtyResources int32
---@field LevelScriptActor ALevelScriptActor
---@field NavListStart ANavigationObjectBase
---@field NavListEnd ANavigationObjectBase
---@field NavDataChunks TArray<UNavigationDataChunk>
---@field LightmapTotalSize float
---@field ShadowmapTotalSize float
---@field StaticNavigableGeometry TArray<FVector>
---@field StreamingTextureGuids TArray<FGuid>
---@field LevelBuildDataId FGuid
---@field MapBuildData UMapBuildDataRegistry
---@field LightBuildLevelOffset FIntVector
---@field bIsLightingScenario boolean
---@field bTextureStreamingRotationChanged boolean
---@field bStaticComponentsRegisteredInStreamingManager boolean
---@field bIsVisible boolean
---@field WorldSettings AWorldSettings
---@field AssetUserData TArray<UAssetUserData>
---@field DestroyedReplicatedStaticActors TArray<FReplicatedStaticActorDestructionInfo>
ULevel = {}



---@class ULevelActorContainer : UObject
---@field Actors TArray<AActor>
ULevelActorContainer = {}



---@class ULevelScriptBlueprint : UBlueprint
ULevelScriptBlueprint = {}


---@class ULevelStreaming : UObject
---@field WorldAsset TSoftObjectPtr<UWorld>
---@field PackageNameToLoad FName
---@field LODPackageNames TArray<FName>
---@field LevelTransform FTransform
---@field LevelLODIndex int32
---@field StreamingPriority int32
---@field bShouldBeVisible boolean
---@field bShouldBeLoaded boolean
---@field bLocked boolean
---@field bIsStatic boolean
---@field bShouldBlockOnLoad boolean
---@field bShouldBlockOnUnload boolean
---@field bDisableDistanceStreaming boolean
---@field bDrawOnLevelStatusMap boolean
---@field LevelColor FLinearColor
---@field EditorStreamingVolumes TArray<ALevelStreamingVolume>
---@field MinTimeBetweenVolumeUnloadRequests float
---@field OnLevelLoaded FLevelStreamingOnLevelLoaded
---@field OnLevelUnloaded FLevelStreamingOnLevelUnloaded
---@field OnLevelShown FLevelStreamingOnLevelShown
---@field OnLevelHidden FLevelStreamingOnLevelHidden
---@field LoadedLevel ULevel
---@field PendingUnloadLevel ULevel
ULevelStreaming = {}

---@return boolean
function ULevelStreaming:ShouldBeLoaded() end
---@param bInShouldBeVisible boolean
function ULevelStreaming:SetShouldBeVisible(bInShouldBeVisible) end
---@param bInShouldBeLoaded boolean
function ULevelStreaming:SetShouldBeLoaded(bInShouldBeLoaded) end
---@param NewPriority int32
function ULevelStreaming:SetPriority(NewPriority) end
---@param LODIndex int32
function ULevelStreaming:SetLevelLODIndex(LODIndex) end
---@return boolean
function ULevelStreaming:IsStreamingStatePending() end
---@return boolean
function ULevelStreaming:IsLevelVisible() end
---@return boolean
function ULevelStreaming:IsLevelLoaded() end
---@return FName
function ULevelStreaming:GetWorldAssetPackageFName() end
---@return ULevel
function ULevelStreaming:GetLoadedLevel() end
---@return ALevelScriptActor
function ULevelStreaming:GetLevelScriptActor() end
---@param UniqueInstanceName FString
---@return ULevelStreaming
function ULevelStreaming:CreateInstance(UniqueInstanceName) end


---@class ULevelStreamingAlwaysLoaded : ULevelStreaming
ULevelStreamingAlwaysLoaded = {}


---@class ULevelStreamingDynamic : ULevelStreaming
---@field bInitiallyLoaded boolean
---@field bInitiallyVisible boolean
ULevelStreamingDynamic = {}

---@param WorldContextObject UObject
---@param Level TSoftObjectPtr<UWorld>
---@param Location FVector
---@param Rotation FRotator
---@param bOutSuccess boolean
---@return ULevelStreamingDynamic
function ULevelStreamingDynamic:LoadLevelInstanceBySoftObjectPtr(WorldContextObject, Level, Location, Rotation, bOutSuccess) end
---@param WorldContextObject UObject
---@param LevelName FString
---@param Location FVector
---@param Rotation FRotator
---@param bOutSuccess boolean
---@return ULevelStreamingDynamic
function ULevelStreamingDynamic:LoadLevelInstance(WorldContextObject, LevelName, Location, Rotation, bOutSuccess) end


---@class ULevelStreamingPersistent : ULevelStreaming
ULevelStreamingPersistent = {}


---@class ULightComponent : ULightComponentBase
---@field Temperature float
---@field MaxDrawDistance float
---@field MaxDistanceFadeRange float
---@field bUseTemperature boolean
---@field ShadowMapChannel int32
---@field MinRoughness float
---@field SpecularScale float
---@field ShadowResolutionScale float
---@field ShadowBias float
---@field ShadowSlopeBias float
---@field ShadowSharpen float
---@field ContactShadowLength float
---@field ContactShadowLengthInWS boolean
---@field InverseSquaredFalloff boolean
---@field CastTranslucentShadows boolean
---@field bCastShadowsFromCinematicObjectsOnly boolean
---@field bAffectDynamicIndirectLighting boolean
---@field bForceCachedShadowsForMovablePrimitives boolean
---@field LightingChannels FLightingChannels
---@field LightFunctionMaterial UMaterialInterface
---@field LightFunctionScale FVector
---@field IESTexture UTextureLightProfile
---@field bUseIESBrightness boolean
---@field IESBrightnessScale float
---@field LightFunctionFadeDistance float
---@field DisabledBrightness float
---@field bEnableLightShaftBloom boolean
---@field BloomScale float
---@field BloomThreshold float
---@field BloomMaxBrightness float
---@field BloomTint FColor
---@field bUseRayTracedDistanceFieldShadows boolean
---@field RayStartOffsetDepthScale float
ULightComponent = {}

---@param NewIntensity float
function ULightComponent:SetVolumetricScatteringIntensity(NewIntensity) end
---@param bNewValue boolean
function ULightComponent:SetUseIESBrightness(bNewValue) end
---@param bNewValue boolean
function ULightComponent:SetTransmission(bNewValue) end
---@param NewTemperature float
function ULightComponent:SetTemperature(NewTemperature) end
---@param NewValue float
function ULightComponent:SetSpecularScale(NewValue) end
---@param NewValue float
function ULightComponent:SetShadowSlopeBias(NewValue) end
---@param NewValue float
function ULightComponent:SetShadowBias(NewValue) end
---@param bChannel0 boolean
---@param bChannel1 boolean
---@param bChannel2 boolean
function ULightComponent:SetLightingChannels(bChannel0, bChannel1, bChannel2) end
---@param NewLightFunctionScale FVector
function ULightComponent:SetLightFunctionScale(NewLightFunctionScale) end
---@param NewLightFunctionMaterial UMaterialInterface
function ULightComponent:SetLightFunctionMaterial(NewLightFunctionMaterial) end
---@param NewLightFunctionFadeDistance float
function ULightComponent:SetLightFunctionFadeDistance(NewLightFunctionFadeDistance) end
---@param NewValue float
function ULightComponent:SetLightFunctionDisabledBrightness(NewValue) end
---@param NewLightColor FLinearColor
---@param bSRGB boolean
function ULightComponent:SetLightColor(NewLightColor, bSRGB) end
---@param NewIntensity float
function ULightComponent:SetIntensity(NewIntensity) end
---@param NewIntensity float
function ULightComponent:SetIndirectLightingIntensity(NewIntensity) end
---@param NewValue UTextureLightProfile
function ULightComponent:SetIESTexture(NewValue) end
---@param NewValue float
function ULightComponent:SetIESBrightnessScale(NewValue) end
---@param bNewValue boolean
function ULightComponent:SetForceCachedShadowsForMovablePrimitives(bNewValue) end
---@param bNewValue boolean
function ULightComponent:SetEnableLightShaftBloom(bNewValue) end
---@param NewValue FColor
function ULightComponent:SetBloomTint(NewValue) end
---@param NewValue float
function ULightComponent:SetBloomThreshold(NewValue) end
---@param NewValue float
function ULightComponent:SetBloomScale(NewValue) end
---@param NewValue float
function ULightComponent:SetBloomMaxBrightness(NewValue) end
---@param bNewValue boolean
function ULightComponent:SetAffectTranslucentLighting(bNewValue) end
---@param bNewValue boolean
function ULightComponent:SetAffectDynamicIndirectLighting(bNewValue) end


---@class ULightComponentBase : USceneComponent
---@field LightGuid FGuid
---@field Brightness float
---@field Intensity float
---@field LightColor FColor
---@field bAffectsWorld boolean
---@field CastShadows boolean
---@field CastStaticShadows boolean
---@field CastDynamicShadows boolean
---@field bAffectTranslucentLighting boolean
---@field bTransmission boolean
---@field bCastVolumetricShadow boolean
---@field bCastDeepShadow boolean
---@field bCastRaytracedShadow boolean
---@field bAffectReflection boolean
---@field bAffectGlobalIllumination boolean
---@field IndirectLightingIntensity float
---@field VolumetricScatteringIntensity float
---@field SamplesPerPixel int32
ULightComponentBase = {}

---@param NewValue int32
function ULightComponentBase:SetSamplesPerPixel(NewValue) end
---@param bNewValue boolean
function ULightComponentBase:SetCastVolumetricShadow(bNewValue) end
---@param bNewValue boolean
function ULightComponentBase:SetCastShadows(bNewValue) end
---@param bNewValue boolean
function ULightComponentBase:SetCastRaytracedShadow(bNewValue) end
---@param bNewValue boolean
function ULightComponentBase:SetCastDeepShadow(bNewValue) end
---@param bNewValue boolean
function ULightComponentBase:SetAffectReflection(bNewValue) end
---@param bNewValue boolean
function ULightComponentBase:SetAffectGlobalIllumination(bNewValue) end
---@return FLinearColor
function ULightComponentBase:GetLightColor() end


---@class ULightMapTexture2D : UTexture2D
ULightMapTexture2D = {}


---@class ULightMapVirtualTexture : UVirtualTexture
ULightMapVirtualTexture = {}


---@class ULightMapVirtualTexture2D : UTexture2D
---@field TypeToLayer TArray<int8>
ULightMapVirtualTexture2D = {}



---@class ULightmappedSurfaceCollection : UObject
---@field SourceModel UModel
---@field Surfaces TArray<int32>
ULightmappedSurfaceCollection = {}



---@class ULightmassPortalComponent : USceneComponent
---@field PreviewBox UBoxComponent
ULightmassPortalComponent = {}



---@class ULightmassPrimitiveSettingsObject : UObject
---@field LightmassSettings FLightmassPrimitiveSettings
ULightmassPrimitiveSettingsObject = {}



---@class ULineBatchComponent : UPrimitiveComponent
ULineBatchComponent = {}


---@class ULocalLightComponent : ULightComponent
---@field IntensityUnits ELightUnits
---@field Radius float
---@field AttenuationRadius float
---@field LightmassSettings FLightmassPointLightSettings
ULocalLightComponent = {}

---@param NewIntensityUnits ELightUnits
function ULocalLightComponent:SetIntensityUnits(NewIntensityUnits) end
---@param NewRadius float
function ULocalLightComponent:SetAttenuationRadius(NewRadius) end
---@param SrcUnits ELightUnits
---@param TargetUnits ELightUnits
---@param CosHalfConeAngle float
---@return float
function ULocalLightComponent:GetUnitsConversionFactor(SrcUnits, TargetUnits, CosHalfConeAngle) end


---@class ULocalMessage : UObject
ULocalMessage = {}


---@class ULocalPlayer : UPlayer
---@field ViewportClient UGameViewportClient
---@field AspectRatioAxisConstraint EAspectRatioAxisConstraint
---@field PendingLevelPlayerControllerClass TSubclassOf<APlayerController>
---@field bSentSplitJoin boolean
---@field ControllerId int32
ULocalPlayer = {}



---@class ULocalPlayerSubsystem : USubsystem
ULocalPlayerSubsystem = {}


---@class UMapBuildDataRegistry : UObject
---@field LevelLightingQuality ELightingBuildQuality
UMapBuildDataRegistry = {}



---@class UMaterial : UMaterialInterface
---@field PhysMaterial UPhysicalMaterial
---@field PhysMaterialMask UPhysicalMaterialMask
---@field PhysicalMaterialMap UPhysicalMaterial
---@field Metallic FScalarMaterialInput
---@field Specular FScalarMaterialInput
---@field Anisotropy FScalarMaterialInput
---@field Normal FVectorMaterialInput
---@field Tangent FVectorMaterialInput
---@field EmissiveColor FColorMaterialInput
---@field MaterialDomain EMaterialDomain
---@field BlendMode EBlendMode
---@field DecalBlendMode EDecalBlendMode
---@field MaterialDecalResponse EMaterialDecalResponse
---@field ShadingModel EMaterialShadingModel
---@field bCastDynamicShadowAsMasked boolean
---@field ShadingModels FMaterialShadingModelField
---@field OpacityMaskClipValue float
---@field WorldPositionOffset FVectorMaterialInput
---@field Refraction FScalarMaterialInput
---@field MaterialAttributes FMaterialAttributesInput
---@field PixelDepthOffset FScalarMaterialInput
---@field ShadingModelFromMaterialExpression FShadingModelMaterialInput
---@field bEnableSeparateTranslucency boolean
---@field bEnableResponsiveAA boolean
---@field bScreenSpaceReflections boolean
---@field bContactShadows boolean
---@field TwoSided boolean
---@field DitheredLODTransition boolean
---@field DitherOpacityMask boolean
---@field bAllowNegativeEmissiveColor boolean
---@field TranslucencyLightingMode ETranslucencyLightingMode
---@field bEnableMobileSeparateTranslucency boolean
---@field NumCustomizedUVs int32
---@field TranslucencyDirectionalLightingIntensity float
---@field TranslucentShadowDensityScale float
---@field TranslucentSelfShadowDensityScale float
---@field TranslucentSelfShadowSecondDensityScale float
---@field TranslucentSelfShadowSecondOpacity float
---@field TranslucentBackscatteringExponent float
---@field TranslucentMultipleScatteringExtinction FLinearColor
---@field TranslucentShadowStartOffset float
---@field bDisableDepthTest boolean
---@field bWriteOnlyAlpha boolean
---@field bGenerateSphericalParticleNormals boolean
---@field bTangentSpaceNormal boolean
---@field bUseEmissiveForDynamicAreaLighting boolean
---@field bBlockGI boolean
---@field bUsedAsSpecialEngineMaterial boolean
---@field bUsedWithSkeletalMesh boolean
---@field bUsedWithEditorCompositing boolean
---@field bUsedWithParticleSprites boolean
---@field bUsedWithBeamTrails boolean
---@field bUsedWithMeshParticles boolean
---@field bUsedWithNiagaraSprites boolean
---@field bUsedWithNiagaraRibbons boolean
---@field bUsedWithNiagaraMeshParticles boolean
---@field bUsedWithGeometryCache boolean
---@field bUsedWithStaticLighting boolean
---@field bUsedWithMorphTargets boolean
---@field bUsedWithSplineMeshes boolean
---@field bUsedWithInstancedStaticMeshes boolean
---@field bUsedWithGeometryCollections boolean
---@field bUsesDistortion boolean
---@field bUsedWithClothing boolean
---@field bUsedWithWater boolean
---@field bUsedWithHairStrands boolean
---@field bUsedWithLidarPointCloud boolean
---@field bUsedWithUI boolean
---@field bAutomaticallySetUsageInEditor boolean
---@field bFullyRough boolean
---@field bUseFullPrecision boolean
---@field bUseLightmapDirectionality boolean
---@field bForwardRenderUsePreintegratedGFForSimpleIBL boolean
---@field bUseHQForwardReflections boolean
---@field bUsePlanarForwardReflections boolean
---@field bNormalCurvatureToRoughness boolean
---@field D3D11TessellationMode EMaterialTessellationMode
---@field bEnableCrackFreeDisplacement boolean
---@field bEnableAdaptiveTessellation boolean
---@field AllowTranslucentCustomDepthWrites boolean
---@field Wireframe boolean
---@field bCanMaskedBeAssumedOpaque boolean
---@field bIsMasked boolean
---@field bIsPreviewMaterial boolean
---@field bIsFunctionPreviewMaterial boolean
---@field bUseMaterialAttributes boolean
---@field bCastRayTracedShadows boolean
---@field bUseTranslucencyVertexFog boolean
---@field bIsSky boolean
---@field bComputeFogPerPixel boolean
---@field bOutputTranslucentVelocity boolean
---@field bAllowDevelopmentShaderCompile boolean
---@field bIsMaterialEditorStatsMaterial boolean
---@field BlendableLocation EBlendableLocation
---@field BlendableOutputAlpha boolean
---@field bEnableStencilTest boolean
---@field StencilCompare EMaterialStencilCompare
---@field StencilRefValue uint8
---@field RefractionMode ERefractionMode
---@field BlendablePriority int32
---@field bIsBlendable boolean
---@field UsageFlagWarnings uint32
---@field RefractionDepthBias float
---@field StateId FGuid
---@field MaxDisplacement float
---@field CachedExpressionData FMaterialCachedExpressionData
UMaterial = {}



---@class UMaterialBillboardComponent : UPrimitiveComponent
---@field Elements TArray<FMaterialSpriteElement>
UMaterialBillboardComponent = {}

---@param NewElements TArray<FMaterialSpriteElement>
function UMaterialBillboardComponent:SetElements(NewElements) end
---@param Material UMaterialInterface
---@param DistanceToOpacityCurve UCurveFloat
---@param bSizeIsInScreenSpace boolean
---@param BaseSizeX float
---@param BaseSizeY float
---@param DistanceToSizeCurve UCurveFloat
function UMaterialBillboardComponent:AddElement(Material, DistanceToOpacityCurve, bSizeIsInScreenSpace, BaseSizeX, BaseSizeY, DistanceToSizeCurve) end


---@class UMaterialExpression : UObject
---@field Material UMaterial
---@field Function UMaterialFunction
---@field bIsParameterExpression boolean
UMaterialExpression = {}



---@class UMaterialExpressionAbs : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionAbs = {}



---@class UMaterialExpressionActorPositionWS : UMaterialExpression
UMaterialExpressionActorPositionWS = {}


---@class UMaterialExpressionAdd : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field ConstA float
---@field ConstB float
UMaterialExpressionAdd = {}



---@class UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D
---@field Threshold float
---@field Channel ETextureColorChannel
UMaterialExpressionAntialiasedTextureMask = {}



---@class UMaterialExpressionAppendVector : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
UMaterialExpressionAppendVector = {}



---@class UMaterialExpressionArccosine : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionArccosine = {}



---@class UMaterialExpressionArccosineFast : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionArccosineFast = {}



---@class UMaterialExpressionArcsine : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionArcsine = {}



---@class UMaterialExpressionArcsineFast : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionArcsineFast = {}



---@class UMaterialExpressionArctangent : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionArctangent = {}



---@class UMaterialExpressionArctangent2 : UMaterialExpression
---@field Y FExpressionInput
---@field X FExpressionInput
UMaterialExpressionArctangent2 = {}



---@class UMaterialExpressionArctangent2Fast : UMaterialExpression
---@field Y FExpressionInput
---@field X FExpressionInput
UMaterialExpressionArctangent2Fast = {}



---@class UMaterialExpressionArctangentFast : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionArctangentFast = {}



---@class UMaterialExpressionAtmosphericFogColor : UMaterialExpression
---@field WorldPosition FExpressionInput
UMaterialExpressionAtmosphericFogColor = {}



---@class UMaterialExpressionAtmosphericLightColor : UMaterialExpression
UMaterialExpressionAtmosphericLightColor = {}


---@class UMaterialExpressionAtmosphericLightVector : UMaterialExpression
UMaterialExpressionAtmosphericLightVector = {}


---@class UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput
---@field Input FExpressionInput
UMaterialExpressionBentNormalCustomOutput = {}



---@class UMaterialExpressionBlackBody : UMaterialExpression
---@field Temp FExpressionInput
UMaterialExpressionBlackBody = {}



---@class UMaterialExpressionBlendMaterialAttributes : UMaterialExpression
---@field A FMaterialAttributesInput
---@field B FMaterialAttributesInput
---@field Alpha FExpressionInput
---@field PixelAttributeBlendType EMaterialAttributeBlend::Type
---@field VertexAttributeBlendType EMaterialAttributeBlend::Type
UMaterialExpressionBlendMaterialAttributes = {}



---@class UMaterialExpressionBreakMaterialAttributes : UMaterialExpression
---@field MaterialAttributes FMaterialAttributesInput
UMaterialExpressionBreakMaterialAttributes = {}



---@class UMaterialExpressionBumpOffset : UMaterialExpression
---@field Coordinate FExpressionInput
---@field Height FExpressionInput
---@field HeightRatioInput FExpressionInput
---@field HeightRatio float
---@field ReferencePlane float
---@field ConstCoordinate uint32
UMaterialExpressionBumpOffset = {}



---@class UMaterialExpressionCameraPositionWS : UMaterialExpression
UMaterialExpressionCameraPositionWS = {}


---@class UMaterialExpressionCameraVectorWS : UMaterialExpression
UMaterialExpressionCameraVectorWS = {}


---@class UMaterialExpressionCeil : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionCeil = {}



---@class UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter
---@field MaskChannel EChannelMaskParameterColor::Type
---@field Input FExpressionInput
UMaterialExpressionChannelMaskParameter = {}



---@class UMaterialExpressionClamp : UMaterialExpression
---@field Input FExpressionInput
---@field Min FExpressionInput
---@field Max FExpressionInput
---@field ClampMode EClampMode
---@field MinDefault float
---@field MaxDefault float
UMaterialExpressionClamp = {}



---@class UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput
---@field Input FExpressionInput
UMaterialExpressionClearCoatNormalCustomOutput = {}



---@class UMaterialExpressionCollectionParameter : UMaterialExpression
---@field Collection UMaterialParameterCollection
---@field ParameterName FName
---@field ParameterId FGuid
UMaterialExpressionCollectionParameter = {}



---@class UMaterialExpressionComment : UMaterialExpression
---@field SizeX int32
---@field SizeY int32
---@field Text FString
---@field CommentColor FLinearColor
---@field FontSize int32
UMaterialExpressionComment = {}



---@class UMaterialExpressionComponentMask : UMaterialExpression
---@field Input FExpressionInput
---@field R boolean
---@field G boolean
---@field B boolean
---@field A boolean
UMaterialExpressionComponentMask = {}



---@class UMaterialExpressionConstant : UMaterialExpression
---@field R float
UMaterialExpressionConstant = {}



---@class UMaterialExpressionConstant2Vector : UMaterialExpression
---@field R float
---@field G float
UMaterialExpressionConstant2Vector = {}



---@class UMaterialExpressionConstant3Vector : UMaterialExpression
---@field Constant FLinearColor
UMaterialExpressionConstant3Vector = {}



---@class UMaterialExpressionConstant4Vector : UMaterialExpression
---@field Constant FLinearColor
UMaterialExpressionConstant4Vector = {}



---@class UMaterialExpressionConstantBiasScale : UMaterialExpression
---@field Input FExpressionInput
---@field Bias float
---@field Scale float
UMaterialExpressionConstantBiasScale = {}



---@class UMaterialExpressionCosine : UMaterialExpression
---@field Input FExpressionInput
---@field Period float
UMaterialExpressionCosine = {}



---@class UMaterialExpressionCrossProduct : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
UMaterialExpressionCrossProduct = {}



---@class UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter
---@field Curve UCurveLinearColor
---@field Atlas UCurveLinearColorAtlas
---@field InputTime FExpressionInput
UMaterialExpressionCurveAtlasRowParameter = {}



---@class UMaterialExpressionCustom : UMaterialExpression
---@field Code FString
---@field OutputType ECustomMaterialOutputType
---@field Description FString
---@field Inputs TArray<FCustomInput>
---@field AdditionalDefines TArray<FCustomDefine>
---@field IncludeFilePaths TArray<FString>
UMaterialExpressionCustom = {}



---@class UMaterialExpressionCustomOutput : UMaterialExpression
UMaterialExpressionCustomOutput = {}


---@class UMaterialExpressionDDX : UMaterialExpression
---@field Value FExpressionInput
UMaterialExpressionDDX = {}



---@class UMaterialExpressionDDY : UMaterialExpression
---@field Value FExpressionInput
UMaterialExpressionDDY = {}



---@class UMaterialExpressionDecalDerivative : UMaterialExpression
UMaterialExpressionDecalDerivative = {}


---@class UMaterialExpressionDecalLifetimeOpacity : UMaterialExpression
UMaterialExpressionDecalLifetimeOpacity = {}


---@class UMaterialExpressionDecalMipmapLevel : UMaterialExpression
---@field TextureSize FExpressionInput
---@field ConstWidth float
---@field ConstHeight float
UMaterialExpressionDecalMipmapLevel = {}



---@class UMaterialExpressionDeltaTime : UMaterialExpression
UMaterialExpressionDeltaTime = {}


---@class UMaterialExpressionDepthFade : UMaterialExpression
---@field InOpacity FExpressionInput
---@field FadeDistance FExpressionInput
---@field OpacityDefault float
---@field FadeDistanceDefault float
UMaterialExpressionDepthFade = {}



---@class UMaterialExpressionDepthOfFieldFunction : UMaterialExpression
---@field FunctionValue EDepthOfFieldFunctionValue
---@field Depth FExpressionInput
UMaterialExpressionDepthOfFieldFunction = {}



---@class UMaterialExpressionDeriveNormalZ : UMaterialExpression
---@field InXY FExpressionInput
UMaterialExpressionDeriveNormalZ = {}



---@class UMaterialExpressionDesaturation : UMaterialExpression
---@field Input FExpressionInput
---@field Fraction FExpressionInput
---@field LuminanceFactors FLinearColor
UMaterialExpressionDesaturation = {}



---@class UMaterialExpressionDistance : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
UMaterialExpressionDistance = {}



---@class UMaterialExpressionDistanceCullFade : UMaterialExpression
UMaterialExpressionDistanceCullFade = {}


---@class UMaterialExpressionDistanceFieldGradient : UMaterialExpression
---@field Position FExpressionInput
UMaterialExpressionDistanceFieldGradient = {}



---@class UMaterialExpressionDistanceToNearestSurface : UMaterialExpression
---@field Position FExpressionInput
UMaterialExpressionDistanceToNearestSurface = {}



---@class UMaterialExpressionDivide : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field ConstA float
---@field ConstB float
UMaterialExpressionDivide = {}



---@class UMaterialExpressionDotProduct : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
UMaterialExpressionDotProduct = {}



---@class UMaterialExpressionDynamicParameter : UMaterialExpression
---@field ParamNames TArray<FString>
---@field DefaultValue FLinearColor
---@field ParameterIndex uint32
UMaterialExpressionDynamicParameter = {}



---@class UMaterialExpressionEyeAdaptation : UMaterialExpression
UMaterialExpressionEyeAdaptation = {}


---@class UMaterialExpressionFeatureLevelSwitch : UMaterialExpression
---@field Default FExpressionInput
---@field Inputs FExpressionInput
UMaterialExpressionFeatureLevelSwitch = {}



---@class UMaterialExpressionFloor : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionFloor = {}



---@class UMaterialExpressionFmod : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
UMaterialExpressionFmod = {}



---@class UMaterialExpressionFontSample : UMaterialExpression
---@field Font UFont
---@field FontTexturePage int32
UMaterialExpressionFontSample = {}



---@class UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample
---@field ParameterName FName
---@field ExpressionGUID FGuid
---@field Group FName
UMaterialExpressionFontSampleParameter = {}



---@class UMaterialExpressionFrac : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionFrac = {}



---@class UMaterialExpressionFresnel : UMaterialExpression
---@field ExponentIn FExpressionInput
---@field Exponent float
---@field BaseReflectFractionIn FExpressionInput
---@field BaseReflectFraction float
---@field Normal FExpressionInput
UMaterialExpressionFresnel = {}



---@class UMaterialExpressionFunctionInput : UMaterialExpression
---@field Preview FExpressionInput
---@field InputName FName
---@field Description FString
---@field ID FGuid
---@field InputType EFunctionInputType
---@field PreviewValue FVector4
---@field bUsePreviewValueAsDefault boolean
---@field SortPriority int32
---@field bCompilingFunctionPreview boolean
UMaterialExpressionFunctionInput = {}



---@class UMaterialExpressionFunctionOutput : UMaterialExpression
---@field OutputName FName
---@field Description FString
---@field SortPriority int32
---@field A FExpressionInput
---@field bLastPreviewed boolean
---@field ID FGuid
UMaterialExpressionFunctionOutput = {}



---@class UMaterialExpressionGIReplace : UMaterialExpression
---@field Default FExpressionInput
---@field StaticIndirect FExpressionInput
---@field DynamicIndirect FExpressionInput
UMaterialExpressionGIReplace = {}



---@class UMaterialExpressionGetMaterialAttributes : UMaterialExpression
---@field MaterialAttributes FMaterialAttributesInput
---@field AttributeGetTypes TArray<FGuid>
UMaterialExpressionGetMaterialAttributes = {}



---@class UMaterialExpressionHairAttributes : UMaterialExpression
UMaterialExpressionHairAttributes = {}


---@class UMaterialExpressionIf : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field AGreaterThanB FExpressionInput
---@field AEqualsB FExpressionInput
---@field ALessThanB FExpressionInput
---@field EqualsThreshold float
---@field ConstB float
---@field ConstAEqualsB float
UMaterialExpressionIf = {}



---@class UMaterialExpressionLightVector : UMaterialExpression
UMaterialExpressionLightVector = {}


---@class UMaterialExpressionLightmapUVs : UMaterialExpression
UMaterialExpressionLightmapUVs = {}


---@class UMaterialExpressionLightmassReplace : UMaterialExpression
---@field Realtime FExpressionInput
---@field Lightmass FExpressionInput
UMaterialExpressionLightmassReplace = {}



---@class UMaterialExpressionLinearInterpolate : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field Alpha FExpressionInput
---@field ConstA float
---@field ConstB float
---@field ConstAlpha float
UMaterialExpressionLinearInterpolate = {}



---@class UMaterialExpressionLogarithm10 : UMaterialExpression
---@field X FExpressionInput
UMaterialExpressionLogarithm10 = {}



---@class UMaterialExpressionLogarithm2 : UMaterialExpression
---@field X FExpressionInput
UMaterialExpressionLogarithm2 = {}



---@class UMaterialExpressionMakeMaterialAttributes : UMaterialExpression
---@field BaseColor FExpressionInput
---@field Metallic FExpressionInput
---@field Specular FExpressionInput
---@field Roughness FExpressionInput
---@field Anisotropy FExpressionInput
---@field EmissiveColor FExpressionInput
---@field Opacity FExpressionInput
---@field OpacityMask FExpressionInput
---@field Normal FExpressionInput
---@field Tangent FExpressionInput
---@field WorldPositionOffset FExpressionInput
---@field WorldDisplacement FExpressionInput
---@field TessellationMultiplier FExpressionInput
---@field SubsurfaceColor FExpressionInput
---@field ClearCoat FExpressionInput
---@field ClearCoatRoughness FExpressionInput
---@field AmbientOcclusion FExpressionInput
---@field Refraction FExpressionInput
---@field CustomizedUVs FExpressionInput
---@field PixelDepthOffset FExpressionInput
---@field ShadingModel FExpressionInput
UMaterialExpressionMakeMaterialAttributes = {}



---@class UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression
---@field Coordinates FExpressionInput
UMaterialExpressionMapARPassthroughCameraUV = {}



---@class UMaterialExpressionMaterialAttributeLayers : UMaterialExpression
---@field ParameterName FName
---@field ExpressionGUID FGuid
---@field Input FMaterialAttributesInput
---@field DefaultLayers FMaterialLayersFunctions
---@field LayerCallers TArray<UMaterialExpressionMaterialFunctionCall>
---@field NumActiveLayerCallers int32
---@field BlendCallers TArray<UMaterialExpressionMaterialFunctionCall>
---@field NumActiveBlendCallers int32
---@field bIsLayerGraphBuilt boolean
UMaterialExpressionMaterialAttributeLayers = {}



---@class UMaterialExpressionMaterialFunctionCall : UMaterialExpression
---@field MaterialFunction UMaterialFunctionInterface
---@field FunctionParameterInfo FMaterialParameterInfo
UMaterialExpressionMaterialFunctionCall = {}



---@class UMaterialExpressionMaterialLayerOutput : UMaterialExpressionFunctionOutput
UMaterialExpressionMaterialLayerOutput = {}


---@class UMaterialExpressionMaterialProxyReplace : UMaterialExpression
---@field Realtime FExpressionInput
---@field MaterialProxy FExpressionInput
UMaterialExpressionMaterialProxyReplace = {}



---@class UMaterialExpressionMax : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field ConstA float
---@field ConstB float
UMaterialExpressionMax = {}



---@class UMaterialExpressionMin : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field ConstA float
---@field ConstB float
UMaterialExpressionMin = {}



---@class UMaterialExpressionMultiply : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field ConstA float
---@field ConstB float
UMaterialExpressionMultiply = {}



---@class UMaterialExpressionNoise : UMaterialExpression
---@field Position FExpressionInput
---@field FilterWidth FExpressionInput
---@field Scale float
---@field Quality int32
---@field NoiseFunction ENoiseFunction
---@field bTurbulence boolean
---@field Levels int32
---@field OutputMin float
---@field OutputMax float
---@field LevelScale float
---@field bTiling boolean
---@field RepeatSize uint32
UMaterialExpressionNoise = {}



---@class UMaterialExpressionNormalize : UMaterialExpression
---@field VectorInput FExpressionInput
UMaterialExpressionNormalize = {}



---@class UMaterialExpressionObjectBounds : UMaterialExpression
UMaterialExpressionObjectBounds = {}


---@class UMaterialExpressionObjectOrientation : UMaterialExpression
UMaterialExpressionObjectOrientation = {}


---@class UMaterialExpressionObjectPositionWS : UMaterialExpression
UMaterialExpressionObjectPositionWS = {}


---@class UMaterialExpressionObjectRadius : UMaterialExpression
UMaterialExpressionObjectRadius = {}


---@class UMaterialExpressionOneMinus : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionOneMinus = {}



---@class UMaterialExpressionPanner : UMaterialExpression
---@field Coordinate FExpressionInput
---@field Time FExpressionInput
---@field Speed FExpressionInput
---@field SpeedX float
---@field SpeedY float
---@field ConstCoordinate uint32
---@field bFractionalPart boolean
UMaterialExpressionPanner = {}



---@class UMaterialExpressionParameter : UMaterialExpression
---@field ParameterName FName
---@field ExpressionGUID FGuid
UMaterialExpressionParameter = {}



---@class UMaterialExpressionParticleColor : UMaterialExpression
UMaterialExpressionParticleColor = {}


---@class UMaterialExpressionParticleDirection : UMaterialExpression
UMaterialExpressionParticleDirection = {}


---@class UMaterialExpressionParticleMacroUV : UMaterialExpression
UMaterialExpressionParticleMacroUV = {}


---@class UMaterialExpressionParticleMotionBlurFade : UMaterialExpression
UMaterialExpressionParticleMotionBlurFade = {}


---@class UMaterialExpressionParticlePositionWS : UMaterialExpression
UMaterialExpressionParticlePositionWS = {}


---@class UMaterialExpressionParticleRadius : UMaterialExpression
UMaterialExpressionParticleRadius = {}


---@class UMaterialExpressionParticleRandom : UMaterialExpression
UMaterialExpressionParticleRandom = {}


---@class UMaterialExpressionParticleRelativeTime : UMaterialExpression
UMaterialExpressionParticleRelativeTime = {}


---@class UMaterialExpressionParticleSize : UMaterialExpression
UMaterialExpressionParticleSize = {}


---@class UMaterialExpressionParticleSpeed : UMaterialExpression
UMaterialExpressionParticleSpeed = {}


---@class UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample
---@field bBlend boolean
UMaterialExpressionParticleSubUV = {}



---@class UMaterialExpressionParticleSubUVProperties : UMaterialExpression
UMaterialExpressionParticleSubUVProperties = {}


---@class UMaterialExpressionPerInstanceCustomData : UMaterialExpression
---@field DefaultValue FExpressionInput
---@field ConstDefaultValue float
---@field DataIndex uint32
UMaterialExpressionPerInstanceCustomData = {}



---@class UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression
UMaterialExpressionPerInstanceFadeAmount = {}


---@class UMaterialExpressionPerInstanceRandom : UMaterialExpression
UMaterialExpressionPerInstanceRandom = {}


---@class UMaterialExpressionPixelDepth : UMaterialExpression
UMaterialExpressionPixelDepth = {}


---@class UMaterialExpressionPixelNormalWS : UMaterialExpression
UMaterialExpressionPixelNormalWS = {}


---@class UMaterialExpressionPower : UMaterialExpression
---@field Base FExpressionInput
---@field Exponent FExpressionInput
---@field ConstExponent float
UMaterialExpressionPower = {}



---@class UMaterialExpressionPreSkinnedLocalBounds : UMaterialExpression
UMaterialExpressionPreSkinnedLocalBounds = {}


---@class UMaterialExpressionPreSkinnedNormal : UMaterialExpression
UMaterialExpressionPreSkinnedNormal = {}


---@class UMaterialExpressionPreSkinnedPosition : UMaterialExpression
UMaterialExpressionPreSkinnedPosition = {}


---@class UMaterialExpressionPrecomputedAOMask : UMaterialExpression
UMaterialExpressionPrecomputedAOMask = {}


---@class UMaterialExpressionPreviousFrameSwitch : UMaterialExpression
---@field CurrentFrame FExpressionInput
---@field PreviousFrame FExpressionInput
UMaterialExpressionPreviousFrameSwitch = {}



---@class UMaterialExpressionQualitySwitch : UMaterialExpression
---@field Default FExpressionInput
---@field Inputs FExpressionInput
UMaterialExpressionQualitySwitch = {}



---@class UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression
---@field Normal FExpressionInput
---@field RayTraced FExpressionInput
UMaterialExpressionRayTracingQualitySwitch = {}



---@class UMaterialExpressionReflectionVectorWS : UMaterialExpression
---@field CustomWorldNormal FExpressionInput
---@field bNormalizeCustomWorldNormal boolean
UMaterialExpressionReflectionVectorWS = {}



---@class UMaterialExpressionReroute : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionReroute = {}



---@class UMaterialExpressionRotateAboutAxis : UMaterialExpression
---@field NormalizedRotationAxis FExpressionInput
---@field RotationAngle FExpressionInput
---@field PivotPoint FExpressionInput
---@field Position FExpressionInput
---@field Period float
UMaterialExpressionRotateAboutAxis = {}



---@class UMaterialExpressionRotator : UMaterialExpression
---@field Coordinate FExpressionInput
---@field Time FExpressionInput
---@field CenterX float
---@field CenterY float
---@field Speed float
---@field ConstCoordinate uint32
UMaterialExpressionRotator = {}



---@class UMaterialExpressionRound : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionRound = {}



---@class UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput
---@field BaseColor FExpressionInput
---@field Specular FExpressionInput
---@field Roughness FExpressionInput
---@field Normal FExpressionInput
---@field WorldHeight FExpressionInput
---@field Opacity FExpressionInput
---@field Mask FExpressionInput
UMaterialExpressionRuntimeVirtualTextureOutput = {}



---@class UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression
---@field Default FExpressionInput
---@field VirtualTextureOutput FExpressionInput
UMaterialExpressionRuntimeVirtualTextureReplace = {}



---@class UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression
---@field Coordinates FExpressionInput
---@field WorldPosition FExpressionInput
---@field MipValue FExpressionInput
---@field VirtualTexture URuntimeVirtualTexture
---@field MaterialType ERuntimeVirtualTextureMaterialType
---@field bSinglePhysicalSpace boolean
---@field MipValueMode ERuntimeVirtualTextureMipValueMode
UMaterialExpressionRuntimeVirtualTextureSample = {}



---@class UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample
---@field ParameterName FName
---@field ExpressionGUID FGuid
---@field Group FName
UMaterialExpressionRuntimeVirtualTextureSampleParameter = {}



---@class UMaterialExpressionSaturate : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionSaturate = {}



---@class UMaterialExpressionScalarParameter : UMaterialExpressionParameter
---@field DefaultValue float
---@field bUseCustomPrimitiveData boolean
---@field PrimitiveDataIndex uint8
UMaterialExpressionScalarParameter = {}



---@class UMaterialExpressionSceneColor : UMaterialExpression
---@field InputMode EMaterialSceneAttributeInputMode::Type
---@field Input FExpressionInput
---@field OffsetFraction FExpressionInput
---@field ConstInput FVector2D
UMaterialExpressionSceneColor = {}



---@class UMaterialExpressionSceneDepth : UMaterialExpression
---@field InputMode EMaterialSceneAttributeInputMode::Type
---@field Input FExpressionInput
---@field Coordinates FExpressionInput
---@field ConstInput FVector2D
UMaterialExpressionSceneDepth = {}



---@class UMaterialExpressionSceneTexelSize : UMaterialExpression
UMaterialExpressionSceneTexelSize = {}


---@class UMaterialExpressionSceneTexture : UMaterialExpression
---@field Coordinates FExpressionInput
---@field SceneTextureId ESceneTextureId
---@field bFiltered boolean
UMaterialExpressionSceneTexture = {}



---@class UMaterialExpressionScreenPosition : UMaterialExpression
UMaterialExpressionScreenPosition = {}


---@class UMaterialExpressionSetMaterialAttributes : UMaterialExpression
---@field Inputs TArray<FExpressionInput>
---@field AttributeSetTypes TArray<FGuid>
UMaterialExpressionSetMaterialAttributes = {}



---@class UMaterialExpressionShaderStageSwitch : UMaterialExpression
---@field PixelShader FExpressionInput
---@field VertexShader FExpressionInput
UMaterialExpressionShaderStageSwitch = {}



---@class UMaterialExpressionShadingModel : UMaterialExpression
---@field ShadingModel EMaterialShadingModel
UMaterialExpressionShadingModel = {}



---@class UMaterialExpressionShadingPathSwitch : UMaterialExpression
---@field Default FExpressionInput
---@field Inputs FExpressionInput
UMaterialExpressionShadingPathSwitch = {}



---@class UMaterialExpressionShadowReplace : UMaterialExpression
---@field Default FExpressionInput
---@field Shadow FExpressionInput
UMaterialExpressionShadowReplace = {}



---@class UMaterialExpressionSign : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionSign = {}



---@class UMaterialExpressionSine : UMaterialExpression
---@field Input FExpressionInput
---@field Period float
UMaterialExpressionSine = {}



---@class UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput
---@field ScatteringCoefficients FExpressionInput
---@field AbsorptionCoefficients FExpressionInput
---@field PhaseG FExpressionInput
UMaterialExpressionSingleLayerWaterMaterialOutput = {}



---@class UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression
---@field WorldPosition FExpressionInput
UMaterialExpressionSkyAtmosphereAerialPerspective = {}



---@class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : UMaterialExpression
UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance = {}


---@class UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression
---@field LightIndex int32
UMaterialExpressionSkyAtmosphereLightDirection = {}



---@class UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression
---@field LightIndex int32
UMaterialExpressionSkyAtmosphereLightDiskLuminance = {}



---@class UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression
---@field LightIndex int32
---@field WorldPosition FExpressionInput
UMaterialExpressionSkyAtmosphereLightIlluminance = {}



---@class UMaterialExpressionSkyAtmosphereViewLuminance : UMaterialExpression
UMaterialExpressionSkyAtmosphereViewLuminance = {}


---@class UMaterialExpressionSobol : UMaterialExpression
---@field Cell FExpressionInput
---@field Index FExpressionInput
---@field Seed FExpressionInput
---@field ConstIndex uint32
---@field ConstSeed FVector2D
UMaterialExpressionSobol = {}



---@class UMaterialExpressionSpeedTree : UMaterialExpression
---@field GeometryInput FExpressionInput
---@field WindInput FExpressionInput
---@field LODInput FExpressionInput
---@field ExtraBendWS FExpressionInput
---@field GeometryType ESpeedTreeGeometryType
---@field WindType ESpeedTreeWindType
---@field LODType ESpeedTreeLODType
---@field BillboardThreshold float
---@field bAccurateWindVelocities boolean
UMaterialExpressionSpeedTree = {}



---@class UMaterialExpressionSphereMask : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field Radius FExpressionInput
---@field Hardness FExpressionInput
---@field AttenuationRadius float
---@field HardnessPercent float
UMaterialExpressionSphereMask = {}



---@class UMaterialExpressionSphericalParticleOpacity : UMaterialExpression
---@field Density FExpressionInput
---@field ConstantDensity float
UMaterialExpressionSphericalParticleOpacity = {}



---@class UMaterialExpressionSquareRoot : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionSquareRoot = {}



---@class UMaterialExpressionStaticBool : UMaterialExpression
---@field Value boolean
UMaterialExpressionStaticBool = {}



---@class UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter
---@field DefaultValue boolean
UMaterialExpressionStaticBoolParameter = {}



---@class UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter
---@field Input FExpressionInput
---@field DefaultR boolean
---@field DefaultG boolean
---@field DefaultB boolean
---@field DefaultA boolean
UMaterialExpressionStaticComponentMaskParameter = {}



---@class UMaterialExpressionStaticSwitch : UMaterialExpression
---@field DefaultValue boolean
---@field A FExpressionInput
---@field B FExpressionInput
---@field Value FExpressionInput
UMaterialExpressionStaticSwitch = {}



---@class UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter
---@field A FExpressionInput
---@field B FExpressionInput
UMaterialExpressionStaticSwitchParameter = {}



---@class UMaterialExpressionSubtract : UMaterialExpression
---@field A FExpressionInput
---@field B FExpressionInput
---@field ConstA float
---@field ConstB float
UMaterialExpressionSubtract = {}



---@class UMaterialExpressionTangent : UMaterialExpression
---@field Input FExpressionInput
---@field Period float
UMaterialExpressionTangent = {}



---@class UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput
---@field Input FExpressionInput
UMaterialExpressionTangentOutput = {}



---@class UMaterialExpressionTemporalSobol : UMaterialExpression
---@field Index FExpressionInput
---@field Seed FExpressionInput
---@field ConstIndex uint32
---@field ConstSeed FVector2D
UMaterialExpressionTemporalSobol = {}



---@class UMaterialExpressionTextureBase : UMaterialExpression
---@field Texture UTexture
---@field SamplerType EMaterialSamplerType
---@field IsDefaultMeshpaintTexture boolean
UMaterialExpressionTextureBase = {}



---@class UMaterialExpressionTextureCoordinate : UMaterialExpression
---@field CoordinateIndex int32
---@field UTiling float
---@field VTiling float
---@field UnMirrorU boolean
---@field UnMirrorV boolean
UMaterialExpressionTextureCoordinate = {}



---@class UMaterialExpressionTextureObject : UMaterialExpressionTextureBase
UMaterialExpressionTextureObject = {}


---@class UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter
UMaterialExpressionTextureObjectParameter = {}


---@class UMaterialExpressionTextureProperty : UMaterialExpression
---@field TextureObject FExpressionInput
---@field Property EMaterialExposedTextureProperty
UMaterialExpressionTextureProperty = {}



---@class UMaterialExpressionTextureSample : UMaterialExpressionTextureBase
---@field Coordinates FExpressionInput
---@field TextureObject FExpressionInput
---@field MipValue FExpressionInput
---@field CoordinatesDX FExpressionInput
---@field CoordinatesDY FExpressionInput
---@field AutomaticViewMipBiasValue FExpressionInput
---@field MipValueMode ETextureMipValueMode
---@field SamplerSource ESamplerSourceMode
---@field AutomaticViewMipBias boolean
---@field ConstCoordinate uint8
---@field ConstMipValue int32
UMaterialExpressionTextureSample = {}



---@class UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample
---@field ParameterName FName
---@field ExpressionGUID FGuid
---@field Group FName
UMaterialExpressionTextureSampleParameter = {}



---@class UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter
UMaterialExpressionTextureSampleParameter2D = {}


---@class UMaterialExpressionTextureSampleParameter2DArray : UMaterialExpressionTextureSampleParameter
UMaterialExpressionTextureSampleParameter2DArray = {}


---@class UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter
UMaterialExpressionTextureSampleParameterCube = {}


---@class UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D
---@field bBlend boolean
UMaterialExpressionTextureSampleParameterSubUV = {}



---@class UMaterialExpressionTextureSampleParameterVolume : UMaterialExpressionTextureSampleParameter
UMaterialExpressionTextureSampleParameterVolume = {}


---@class UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput
---@field TransmittanceColor FExpressionInput
UMaterialExpressionThinTranslucentMaterialOutput = {}



---@class UMaterialExpressionTime : UMaterialExpression
---@field bIgnorePause boolean
---@field bOverride_Period boolean
---@field Period float
UMaterialExpressionTime = {}



---@class UMaterialExpressionTransform : UMaterialExpression
---@field Input FExpressionInput
---@field TransformSourceType EMaterialVectorCoordTransformSource
---@field TransformType EMaterialVectorCoordTransform
UMaterialExpressionTransform = {}



---@class UMaterialExpressionTransformPosition : UMaterialExpression
---@field Input FExpressionInput
---@field TransformSourceType EMaterialPositionTransformSource
---@field TransformType EMaterialPositionTransformSource
UMaterialExpressionTransformPosition = {}



---@class UMaterialExpressionTruncate : UMaterialExpression
---@field Input FExpressionInput
UMaterialExpressionTruncate = {}



---@class UMaterialExpressionTwoSidedSign : UMaterialExpression
UMaterialExpressionTwoSidedSign = {}


---@class UMaterialExpressionVectorNoise : UMaterialExpression
---@field Position FExpressionInput
---@field NoiseFunction EVectorNoiseFunction
---@field Quality int32
---@field bTiling boolean
---@field TileSize uint32
UMaterialExpressionVectorNoise = {}



---@class UMaterialExpressionVectorParameter : UMaterialExpressionParameter
---@field DefaultValue FLinearColor
---@field bUseCustomPrimitiveData boolean
---@field PrimitiveDataIndex uint8
UMaterialExpressionVectorParameter = {}



---@class UMaterialExpressionVertexColor : UMaterialExpression
UMaterialExpressionVertexColor = {}


---@class UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput
---@field Input FExpressionInput
UMaterialExpressionVertexInterpolator = {}



---@class UMaterialExpressionVertexNormalWS : UMaterialExpression
UMaterialExpressionVertexNormalWS = {}


---@class UMaterialExpressionVertexTangentWS : UMaterialExpression
UMaterialExpressionVertexTangentWS = {}


---@class UMaterialExpressionViewProperty : UMaterialExpression
---@field Property EMaterialExposedViewProperty
UMaterialExpressionViewProperty = {}



---@class UMaterialExpressionViewSize : UMaterialExpression
UMaterialExpressionViewSize = {}


---@class UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression
---@field No FExpressionInput
---@field Yes FExpressionInput
UMaterialExpressionVirtualTextureFeatureSwitch = {}



---@class UMaterialExpressionWorldPosition : UMaterialExpression
---@field WorldPositionShaderOffset EWorldPositionIncludedOffsets
UMaterialExpressionWorldPosition = {}



---@class UMaterialFunction : UMaterialFunctionInterface
---@field Description FString
---@field bExposeToLibrary boolean
---@field bPrefixParameterNames boolean
---@field bReentrantFlag boolean
UMaterialFunction = {}



---@class UMaterialFunctionInstance : UMaterialFunctionInterface
---@field Parent UMaterialFunctionInterface
---@field Base UMaterialFunctionInterface
---@field ScalarParameterValues TArray<FScalarParameterValue>
---@field VectorParameterValues TArray<FVectorParameterValue>
---@field TextureParameterValues TArray<FTextureParameterValue>
---@field FontParameterValues TArray<FFontParameterValue>
---@field StaticSwitchParameterValues TArray<FStaticSwitchParameter>
---@field StaticComponentMaskParameterValues TArray<FStaticComponentMaskParameter>
---@field RuntimeVirtualTextureParameterValues TArray<FRuntimeVirtualTextureParameterValue>
UMaterialFunctionInstance = {}



---@class UMaterialFunctionInterface : UObject
---@field StateId FGuid
---@field MaterialFunctionUsage EMaterialFunctionUsage
UMaterialFunctionInterface = {}



---@class UMaterialFunctionMaterialLayer : UMaterialFunction
UMaterialFunctionMaterialLayer = {}


---@class UMaterialFunctionMaterialLayerBlend : UMaterialFunction
UMaterialFunctionMaterialLayerBlend = {}


---@class UMaterialFunctionMaterialLayerBlendInstance : UMaterialFunctionInstance
UMaterialFunctionMaterialLayerBlendInstance = {}


---@class UMaterialFunctionMaterialLayerInstance : UMaterialFunctionInstance
UMaterialFunctionMaterialLayerInstance = {}


---@class UMaterialInstance : UMaterialInterface
---@field PhysMaterial UPhysicalMaterial
---@field PhysicalMaterialMap UPhysicalMaterial
---@field Parent UMaterialInterface
---@field bHasStaticPermutationResource boolean
---@field bOverrideSubsurfaceProfile boolean
---@field ScalarParameterValues TArray<FScalarParameterValue>
---@field VectorParameterValues TArray<FVectorParameterValue>
---@field TextureParameterValues TArray<FTextureParameterValue>
---@field RuntimeVirtualTextureParameterValues TArray<FRuntimeVirtualTextureParameterValue>
---@field FontParameterValues TArray<FFontParameterValue>
---@field BasePropertyOverrides FMaterialInstanceBasePropertyOverrides
---@field StaticParameters FStaticParameterSet
---@field CachedLayerParameters FMaterialCachedParameters
---@field CachedReferencedTextures TArray<UObject>
UMaterialInstance = {}



---@class UMaterialInstanceConstant : UMaterialInstance
---@field PhysMaterialMask UPhysicalMaterialMask
UMaterialInstanceConstant = {}

---@param ParameterName FName
---@return FLinearColor
function UMaterialInstanceConstant:K2_GetVectorParameterValue(ParameterName) end
---@param ParameterName FName
---@return UTexture
function UMaterialInstanceConstant:K2_GetTextureParameterValue(ParameterName) end
---@param ParameterName FName
---@return float
function UMaterialInstanceConstant:K2_GetScalarParameterValue(ParameterName) end


---@class UMaterialInstanceDynamic : UMaterialInstance
UMaterialInstanceDynamic = {}

---@param ParameterInfo FMaterialParameterInfo
---@param Value FLinearColor
function UMaterialInstanceDynamic:SetVectorParameterValueByInfo(ParameterInfo, Value) end
---@param ParameterName FName
---@param Value FLinearColor
function UMaterialInstanceDynamic:SetVectorParameterValue(ParameterName, Value) end
---@param ParameterInfo FMaterialParameterInfo
---@param Value UTexture
function UMaterialInstanceDynamic:SetTextureParameterValueByInfo(ParameterInfo, Value) end
---@param ParameterName FName
---@param Value UTexture
function UMaterialInstanceDynamic:SetTextureParameterValue(ParameterName, Value) end
---@param ParameterInfo FMaterialParameterInfo
---@param Value float
function UMaterialInstanceDynamic:SetScalarParameterValueByInfo(ParameterInfo, Value) end
---@param ParameterName FName
---@param Value float
function UMaterialInstanceDynamic:SetScalarParameterValue(ParameterName, Value) end
---@param SourceA UMaterialInstance
---@param SourceB UMaterialInstance
---@param Alpha float
function UMaterialInstanceDynamic:K2_InterpolateMaterialInstanceParams(SourceA, SourceB, Alpha) end
---@param ParameterInfo FMaterialParameterInfo
---@return FLinearColor
function UMaterialInstanceDynamic:K2_GetVectorParameterValueByInfo(ParameterInfo) end
---@param ParameterName FName
---@return FLinearColor
function UMaterialInstanceDynamic:K2_GetVectorParameterValue(ParameterName) end
---@param ParameterInfo FMaterialParameterInfo
---@return UTexture
function UMaterialInstanceDynamic:K2_GetTextureParameterValueByInfo(ParameterInfo) end
---@param ParameterName FName
---@return UTexture
function UMaterialInstanceDynamic:K2_GetTextureParameterValue(ParameterName) end
---@param ParameterInfo FMaterialParameterInfo
---@return float
function UMaterialInstanceDynamic:K2_GetScalarParameterValueByInfo(ParameterInfo) end
---@param ParameterName FName
---@return float
function UMaterialInstanceDynamic:K2_GetScalarParameterValue(ParameterName) end
---@param Source UMaterialInterface
---@param bQuickParametersOnly boolean
function UMaterialInstanceDynamic:K2_CopyMaterialInstanceParameters(Source, bQuickParametersOnly) end
---@param MaterialInstance UMaterialInstance
function UMaterialInstanceDynamic:CopyParameterOverrides(MaterialInstance) end
---@param Source UMaterialInstance
function UMaterialInstanceDynamic:CopyInterpParameters(Source) end


---@class UMaterialInterface : UObject
---@field SubsurfaceProfile USubsurfaceProfile
---@field LightmassSettings FLightmassMaterialInterfaceSettings
---@field TextureStreamingData TArray<FMaterialTextureInfo>
---@field AssetUserData TArray<UAssetUserData>
UMaterialInterface = {}

---@param OverrideForceMiplevelsToBeResident boolean
---@param bForceMiplevelsToBeResidentValue boolean
---@param ForceDuration float
---@param CinematicTextureGroups int32
---@param bFastResponse boolean
function UMaterialInterface:SetForceMipLevelsToBeResident(OverrideForceMiplevelsToBeResident, bForceMiplevelsToBeResidentValue, ForceDuration, CinematicTextureGroups, bFastResponse) end
---@return UPhysicalMaterialMask
function UMaterialInterface:GetPhysicalMaterialMask() end
---@param Index int32
---@return UPhysicalMaterial
function UMaterialInterface:GetPhysicalMaterialFromMap(Index) end
---@return UPhysicalMaterial
function UMaterialInterface:GetPhysicalMaterial() end
---@param Association EMaterialParameterAssociation
---@param ParameterName FName
---@param LayerFunction UMaterialFunctionInterface
---@return FMaterialParameterInfo
function UMaterialInterface:GetParameterInfo(Association, ParameterName, LayerFunction) end
---@return UMaterial
function UMaterialInterface:GetBaseMaterial() end


---@class UMaterialParameterCollection : UObject
---@field StateId FGuid
---@field ScalarParameters TArray<FCollectionScalarParameter>
---@field VectorParameters TArray<FCollectionVectorParameter>
UMaterialParameterCollection = {}



---@class UMaterialParameterCollectionInstance : UObject
---@field Collection UMaterialParameterCollection
UMaterialParameterCollectionInstance = {}



---@class UMeshComponent : UPrimitiveComponent
---@field OverrideMaterials TArray<UMaterialInterface>
---@field bEnableMaterialParameterCaching boolean
UMeshComponent = {}

---@param ParameterName FName
---@param ParameterValue FVector
function UMeshComponent:SetVectorParameterValueOnMaterials(ParameterName, ParameterValue) end
---@param ParameterName FName
---@param ParameterValue float
function UMeshComponent:SetScalarParameterValueOnMaterials(ParameterName, ParameterValue) end
---@param Seconds float
---@param bPrioritizeCharacterTextures boolean
---@param CinematicTextureGroups int32
function UMeshComponent:PrestreamTextures(Seconds, bPrioritizeCharacterTextures, CinematicTextureGroups) end
---@param MaterialSlotName FName
---@return boolean
function UMeshComponent:IsMaterialSlotNameValid(MaterialSlotName) end
---@return TArray<FName>
function UMeshComponent:GetMaterialSlotNames() end
---@return TArray<UMaterialInterface>
function UMeshComponent:GetMaterials() end
---@param MaterialSlotName FName
---@return int32
function UMeshComponent:GetMaterialIndex(MaterialSlotName) end


---@class UMeshSimplificationSettings : UDeveloperSettings
---@field MeshReductionModuleName FName
UMeshSimplificationSettings = {}



---@class UMeshVertexPainterKismetLibrary : UBlueprintFunctionLibrary
UMeshVertexPainterKismetLibrary = {}

---@param StaticMeshComponent UStaticMeshComponent
function UMeshVertexPainterKismetLibrary:RemovePaintedVertices(StaticMeshComponent) end
---@param StaticMeshComponent UStaticMeshComponent
---@param FillColor FLinearColor
---@param bConvertToSRGB boolean
function UMeshVertexPainterKismetLibrary:PaintVerticesSingleColor(StaticMeshComponent, FillColor, bConvertToSRGB) end
---@param StaticMeshComponent UStaticMeshComponent
---@param StartColor FLinearColor
---@param EndColor FLinearColor
---@param Axis EVertexPaintAxis
---@param bConvertToSRGB boolean
function UMeshVertexPainterKismetLibrary:PaintVerticesLerpAlongAxis(StaticMeshComponent, StartColor, EndColor, Axis, bConvertToSRGB) end


---@class UMicroTransactionBase : UPlatformInterfaceBase
---@field AvailableProducts TArray<FPurchaseInfo>
---@field LastError FString
---@field LastErrorSolution FString
UMicroTransactionBase = {}



---@class UModel : UObject
UModel = {}


---@class UModelComponent : UPrimitiveComponent
---@field ModelBodySetup UBodySetup
UModelComponent = {}



---@class UMorphTarget : UObject
---@field BaseSkelMesh USkeletalMesh
UMorphTarget = {}



---@class UMovementComponent : UActorComponent
---@field UpdatedComponent USceneComponent
---@field UpdatedPrimitive UPrimitiveComponent
---@field Velocity FVector
---@field PlaneConstraintNormal FVector
---@field PlaneConstraintOrigin FVector
---@field bUpdateOnlyIfRendered boolean
---@field bAutoUpdateTickRegistration boolean
---@field bTickBeforeOwner boolean
---@field bAutoRegisterUpdatedComponent boolean
---@field bConstrainToPlane boolean
---@field bSnapToPlaneAtStart boolean
---@field bAutoRegisterPhysicsVolumeUpdates boolean
---@field bComponentShouldUpdatePhysicsVolume boolean
---@field PlaneConstraintAxisSetting EPlaneConstraintAxisSetting
UMovementComponent = {}

function UMovementComponent:StopMovementImmediately() end
function UMovementComponent:SnapUpdatedComponentToPlane() end
---@param NewUpdatedComponent USceneComponent
function UMovementComponent:SetUpdatedComponent(NewUpdatedComponent) end
---@param PlaneOrigin FVector
function UMovementComponent:SetPlaneConstraintOrigin(PlaneOrigin) end
---@param PlaneNormal FVector
function UMovementComponent:SetPlaneConstraintNormal(PlaneNormal) end
---@param Forward FVector
---@param Up FVector
function UMovementComponent:SetPlaneConstraintFromVectors(Forward, Up) end
---@param bEnabled boolean
function UMovementComponent:SetPlaneConstraintEnabled(bEnabled) end
---@param NewAxisSetting EPlaneConstraintAxisSetting
function UMovementComponent:SetPlaneConstraintAxisSetting(NewAxisSetting) end
---@param NewVolume APhysicsVolume
function UMovementComponent:PhysicsVolumeChanged(NewVolume) end
---@param Delta FVector
---@param NewRotation FRotator
---@param OutHit FHitResult
---@param bSweep boolean
---@param bTeleport boolean
---@return boolean
function UMovementComponent:K2_MoveUpdatedComponent(Delta, NewRotation, OutHit, bSweep, bTeleport) end
---@return float
function UMovementComponent:K2_GetModifiedMaxSpeed() end
---@return float
function UMovementComponent:K2_GetMaxSpeedModifier() end
---@param MaxSpeed float
---@return boolean
function UMovementComponent:IsExceedingMaxSpeed(MaxSpeed) end
---@return FVector
function UMovementComponent:GetPlaneConstraintOrigin() end
---@return FVector
function UMovementComponent:GetPlaneConstraintNormal() end
---@return EPlaneConstraintAxisSetting
function UMovementComponent:GetPlaneConstraintAxisSetting() end
---@return APhysicsVolume
function UMovementComponent:GetPhysicsVolume() end
---@return float
function UMovementComponent:GetMaxSpeed() end
---@return float
function UMovementComponent:GetGravityZ() end
---@param Normal FVector
---@return FVector
function UMovementComponent:ConstrainNormalToPlane(Normal) end
---@param Location FVector
---@return FVector
function UMovementComponent:ConstrainLocationToPlane(Location) end
---@param Direction FVector
---@return FVector
function UMovementComponent:ConstrainDirectionToPlane(Direction) end


---@class UNavAreaBase : UObject
UNavAreaBase = {}


---@class UNavCollisionBase : UObject
---@field bIsDynamicObstacle boolean
UNavCollisionBase = {}



---@class UNavLinkDefinition : UObject
---@field Links TArray<FNavigationLink>
---@field SegmentLinks TArray<FNavigationSegmentLink>
UNavLinkDefinition = {}



---@class UNavMovementComponent : UMovementComponent
---@field NavAgentProps FNavAgentProperties
---@field FixedPathBrakingDistance float
---@field bUpdateNavAgentWithOwnersCollision boolean
---@field bUseAccelerationForPaths boolean
---@field bUseFixedBrakingDistanceForPaths boolean
---@field MovementState FMovementProperties
---@field PathFollowingComp UObject
UNavMovementComponent = {}

function UNavMovementComponent:StopMovementKeepPathing() end
function UNavMovementComponent:StopActiveMovement() end
---@return boolean
function UNavMovementComponent:IsSwimming() end
---@return boolean
function UNavMovementComponent:IsMovingOnGround() end
---@return boolean
function UNavMovementComponent:IsFlying() end
---@return boolean
function UNavMovementComponent:IsFalling() end
---@return boolean
function UNavMovementComponent:IsCrouching() end


---@class UNavigationDataChunk : UObject
---@field NavigationDataName FName
UNavigationDataChunk = {}



---@class UNavigationSystemBase : UObject
UNavigationSystemBase = {}


---@class UNavigationSystemConfig : UObject
---@field NavigationSystemClass FSoftClassPath
---@field SupportedAgentsMask FNavAgentSelector
---@field DefaultAgentName FName
---@field bIsOverriden boolean
UNavigationSystemConfig = {}



---@class UNetConnection : UPlayer
---@field Children TArray<UChildConnection>
---@field Driver UNetDriver
---@field PackageMapClass TSubclassOf<UPackageMap>
---@field PackageMap UPackageMap
---@field OpenChannels TArray<UChannel>
---@field SentTemporaries TArray<AActor>
---@field ViewTarget AActor
---@field OwningActor AActor
---@field MaxPacket int32
---@field InternalAck boolean
---@field PlayerId FUniqueNetIdRepl
---@field LastReceiveTime double
---@field ChannelsToTick TArray<UChannel>
UNetConnection = {}



---@class UNetDriver : UObject
---@field NetConnectionClassName FString
---@field ReplicationDriverClassName FString
---@field MaxDownloadSize int32
---@field bClampListenServerTickRate boolean
---@field NetServerMaxTickRate int32
---@field MaxNetTickRate int32
---@field MaxInternetClientRate int32
---@field MaxClientRate int32
---@field ServerTravelPause float
---@field SpawnPrioritySeconds float
---@field RelevantTimeout float
---@field KeepAliveTime float
---@field InitialConnectTimeout float
---@field ConnectionTimeout float
---@field TimeoutMultiplierForUnoptimizedBuilds float
---@field bNoTimeouts boolean
---@field bNeverApplyNetworkEmulationSettings boolean
---@field ServerConnection UNetConnection
---@field ClientConnections TArray<UNetConnection>
---@field RecentlyDisconnectedTrackingTime int32
---@field World UWorld
---@field WorldPackage UPackage
---@field NetConnectionClass UClass
---@field ReplicationDriverClass UClass
---@field NetDriverName FName
---@field ChannelDefinitions TArray<FChannelDefinition>
---@field ChannelDefinitionMap TMap<FName, FChannelDefinition>
---@field ActorChannelPool TArray<UChannel>
---@field Time float
---@field ReplicationDriver UReplicationDriver
UNetDriver = {}



---@class UNetPushModelHelpers : UBlueprintFunctionLibrary
UNetPushModelHelpers = {}

---@param Object UObject
---@param RepIndex int32
---@param PropertyName FName
function UNetPushModelHelpers:MarkPropertyDirtyFromRepIndex(Object, RepIndex, PropertyName) end
---@param Object UObject
---@param PropertyName FName
function UNetPushModelHelpers:MarkPropertyDirty(Object, PropertyName) end


---@class UNetworkSettings : UDeveloperSettings
---@field bVerifyPeer boolean
---@field bEnableMultiplayerWorldOriginRebasing boolean
---@field MaxRepArraySize int32
---@field MaxRepArrayMemory int32
---@field NetworkEmulationProfiles TArray<FNetworkEmulationProfileDescription>
UNetworkSettings = {}



---@class UNodeMappingContainer : UObject
---@field SourceItems TMap<FName, FNodeItem>
---@field TargetItems TMap<FName, FNodeItem>
---@field SourceToTarget TMap<FName, FName>
---@field SourceAsset TSoftObjectPtr<UObject>
---@field TargetAsset TSoftObjectPtr<UObject>
UNodeMappingContainer = {}



---@class UNullNavSysConfig : UNavigationSystemConfig
UNullNavSysConfig = {}


---@class UObjectLibrary : UObject
---@field ObjectBaseClass UClass
---@field bHasBlueprintClasses boolean
---@field Objects TArray<UObject>
---@field WeakObjects TArray<TWeakObjectPtr<UObject>>
---@field bUseWeakReferences boolean
---@field bIsFullyLoaded boolean
UObjectLibrary = {}



---@class UObjectReferencer : UObject
---@field ReferencedObjects TArray<UObject>
UObjectReferencer = {}



---@class UObjectTraceWorldSubsystem : UWorldSubsystem
UObjectTraceWorldSubsystem = {}


---@class UOnlineBlueprintCallProxyBase : UBlueprintAsyncActionBase
UOnlineBlueprintCallProxyBase = {}


---@class UOnlineEngineInterface : UObject
UOnlineEngineInterface = {}


---@class UOnlineSession : UObject
UOnlineSession = {}


---@class UPackageMapClient : UPackageMap
UPackageMapClient = {}


---@class UParticleEmitter : UObject
---@field EmitterName FName
---@field SubUVDataOffset int32
---@field EmitterRenderMode EEmitterRenderMode
---@field SignificanceLevel EParticleSignificanceLevel
---@field bUseLegacySpawningBehavior boolean
---@field ConvertedModules boolean
---@field bIsSoloing boolean
---@field bCookedOut boolean
---@field bDisabledLODsKeepEmitterAlive boolean
---@field bDisableWhenInsignficant boolean
---@field LODLevels TArray<UParticleLODLevel>
---@field PeakActiveParticles int32
---@field InitialAllocationCount int32
---@field QualityLevelSpawnRateScale float
---@field DetailModeBitmask uint32
UParticleEmitter = {}



---@class UParticleLODLevel : UObject
---@field Level int32
---@field bEnabled boolean
---@field RequiredModule UParticleModuleRequired
---@field Modules TArray<UParticleModule>
---@field TypeDataModule UParticleModuleTypeDataBase
---@field SpawnModule UParticleModuleSpawn
---@field EventGenerator UParticleModuleEventGenerator
---@field SpawningModules TArray<UParticleModuleSpawnBase>
---@field SpawnModules TArray<UParticleModule>
---@field UpdateModules TArray<UParticleModule>
---@field OrbitModules TArray<UParticleModuleOrbit>
---@field EventReceiverModules TArray<UParticleModuleEventReceiverBase>
---@field ConvertedModules boolean
---@field PeakActiveParticles int32
UParticleLODLevel = {}



---@class UParticleModule : UObject
---@field bSpawnModule boolean
---@field bUpdateModule boolean
---@field bFinalUpdateModule boolean
---@field bUpdateForGPUEmitter boolean
---@field bCurvesAsColor boolean
---@field b3DDrawMode boolean
---@field bSupported3DDrawMode boolean
---@field bEnabled boolean
---@field bEditable boolean
---@field LODDuplicate boolean
---@field bSupportsRandomSeed boolean
---@field bRequiresLoopingNotification boolean
---@field LODValidity uint8
UParticleModule = {}



---@class UParticleModuleAcceleration : UParticleModuleAccelerationBase
---@field Acceleration FRawDistributionVector
---@field bApplyOwnerScale boolean
UParticleModuleAcceleration = {}



---@class UParticleModuleAccelerationBase : UParticleModule
---@field bAlwaysInWorldSpace boolean
UParticleModuleAccelerationBase = {}



---@class UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase
---@field Acceleration FVector
UParticleModuleAccelerationConstant = {}



---@class UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase
---@field DragCoefficient UDistributionFloat
---@field DragCoefficientRaw FRawDistributionFloat
UParticleModuleAccelerationDrag = {}



---@class UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase
---@field DragScale UDistributionFloat
---@field DragScaleRaw FRawDistributionFloat
UParticleModuleAccelerationDragScaleOverLife = {}



---@class UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase
---@field AccelOverLife FRawDistributionVector
UParticleModuleAccelerationOverLifetime = {}



---@class UParticleModuleAttractorBase : UParticleModule
UParticleModuleAttractorBase = {}


---@class UParticleModuleAttractorLine : UParticleModuleAttractorBase
---@field EndPoint0 FVector
---@field EndPoint1 FVector
---@field Range FRawDistributionFloat
---@field Strength FRawDistributionFloat
UParticleModuleAttractorLine = {}



---@class UParticleModuleAttractorParticle : UParticleModuleAttractorBase
---@field EmitterName FName
---@field Range FRawDistributionFloat
---@field bStrengthByDistance boolean
---@field Strength FRawDistributionFloat
---@field bAffectBaseVelocity boolean
---@field SelectionMethod EAttractorParticleSelectionMethod
---@field bRenewSource boolean
---@field bInheritSourceVel boolean
---@field LastSelIndex int32
UParticleModuleAttractorParticle = {}



---@class UParticleModuleAttractorPoint : UParticleModuleAttractorBase
---@field Position FRawDistributionVector
---@field Range FRawDistributionFloat
---@field Strength FRawDistributionFloat
---@field StrengthByDistance boolean
---@field bAffectBaseVelocity boolean
---@field bOverrideVelocity boolean
---@field bUseWorldSpacePosition boolean
---@field Positive_X boolean
---@field Positive_Y boolean
---@field Positive_Z boolean
---@field Negative_X boolean
---@field Negative_Y boolean
---@field Negative_Z boolean
UParticleModuleAttractorPoint = {}



---@class UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase
---@field Position FVector
---@field Radius float
---@field Strength UDistributionFloat
---@field StrengthRaw FRawDistributionFloat
UParticleModuleAttractorPointGravity = {}



---@class UParticleModuleBeamBase : UParticleModule
UParticleModuleBeamBase = {}


---@class UParticleModuleBeamModifier : UParticleModuleBeamBase
---@field ModifierType BeamModifierType
---@field PositionOptions FBeamModifierOptions
---@field Position FRawDistributionVector
---@field TangentOptions FBeamModifierOptions
---@field Tangent FRawDistributionVector
---@field bAbsoluteTangent boolean
---@field StrengthOptions FBeamModifierOptions
---@field Strength FRawDistributionFloat
UParticleModuleBeamModifier = {}



---@class UParticleModuleBeamNoise : UParticleModuleBeamBase
---@field bLowFreq_Enabled boolean
---@field Frequency int32
---@field Frequency_LowRange int32
---@field NoiseRange FRawDistributionVector
---@field NoiseRangeScale FRawDistributionFloat
---@field bNRScaleEmitterTime boolean
---@field NoiseSpeed FRawDistributionVector
---@field bSmooth boolean
---@field NoiseLockRadius float
---@field bNoiseLock boolean
---@field bOscillate boolean
---@field NoiseLockTime float
---@field NoiseTension float
---@field bUseNoiseTangents boolean
---@field NoiseTangentStrength FRawDistributionFloat
---@field NoiseTessellation int32
---@field bTargetNoise boolean
---@field FrequencyDistance float
---@field bApplyNoiseScale boolean
---@field NoiseScale FRawDistributionFloat
UParticleModuleBeamNoise = {}



---@class UParticleModuleBeamSource : UParticleModuleBeamBase
---@field SourceMethod Beam2SourceTargetMethod
---@field SourceName FName
---@field bSourceAbsolute boolean
---@field Source FRawDistributionVector
---@field bLockSource boolean
---@field SourceTangentMethod Beam2SourceTargetTangentMethod
---@field SourceTangent FRawDistributionVector
---@field bLockSourceTangent boolean
---@field SourceStrength FRawDistributionFloat
---@field bLockSourceStength boolean
UParticleModuleBeamSource = {}



---@class UParticleModuleBeamTarget : UParticleModuleBeamBase
---@field TargetMethod Beam2SourceTargetMethod
---@field TargetName FName
---@field Target FRawDistributionVector
---@field bTargetAbsolute boolean
---@field bLockTarget boolean
---@field TargetTangentMethod Beam2SourceTargetTangentMethod
---@field TargetTangent FRawDistributionVector
---@field bLockTargetTangent boolean
---@field TargetStrength FRawDistributionFloat
---@field bLockTargetStength boolean
---@field LockRadius float
UParticleModuleBeamTarget = {}



---@class UParticleModuleCameraBase : UParticleModule
UParticleModuleCameraBase = {}


---@class UParticleModuleCameraOffset : UParticleModuleCameraBase
---@field CameraOffset FRawDistributionFloat
---@field bSpawnTimeOnly boolean
---@field UpdateMethod EParticleCameraOffsetUpdateMethod
UParticleModuleCameraOffset = {}



---@class UParticleModuleCollision : UParticleModuleCollisionBase
---@field DampingFactor FRawDistributionVector
---@field DampingFactorRotation FRawDistributionVector
---@field MaxCollisions FRawDistributionFloat
---@field CollisionCompletionOption EParticleCollisionComplete
---@field CollisionTypes TArray<EObjectTypeQuery>
---@field bApplyPhysics boolean
---@field bIgnoreTriggerVolumes boolean
---@field ParticleMass FRawDistributionFloat
---@field DirScalar float
---@field bPawnsDoNotDecrementCount boolean
---@field bOnlyVerticalNormalsDecrementCount boolean
---@field VerticalFudgeFactor float
---@field DelayAmount FRawDistributionFloat
---@field bDropDetail boolean
---@field bCollideOnlyIfVisible boolean
---@field bIgnoreSourceActor boolean
---@field MaxCollisionDistance float
UParticleModuleCollision = {}



---@class UParticleModuleCollisionBase : UParticleModule
UParticleModuleCollisionBase = {}


---@class UParticleModuleCollisionGPU : UParticleModuleCollisionBase
---@field Resilience FRawDistributionFloat
---@field ResilienceScaleOverLife FRawDistributionFloat
---@field Friction float
---@field RandomSpread float
---@field RandomDistribution float
---@field RadiusScale float
---@field RadiusBias float
---@field Response EParticleCollisionResponse::Type
---@field CollisionMode EParticleCollisionMode::Type
UParticleModuleCollisionGPU = {}



---@class UParticleModuleColor : UParticleModuleColorBase
---@field StartColor FRawDistributionVector
---@field StartAlpha FRawDistributionFloat
---@field bClampAlpha boolean
UParticleModuleColor = {}



---@class UParticleModuleColorBase : UParticleModule
UParticleModuleColorBase = {}


---@class UParticleModuleColorOverLife : UParticleModuleColorBase
---@field ColorOverLife FRawDistributionVector
---@field AlphaOverLife FRawDistributionFloat
---@field bClampAlpha boolean
UParticleModuleColorOverLife = {}



---@class UParticleModuleColorScaleOverLife : UParticleModuleColorBase
---@field ColorScaleOverLife FRawDistributionVector
---@field AlphaScaleOverLife FRawDistributionFloat
---@field bEmitterTime boolean
UParticleModuleColorScaleOverLife = {}



---@class UParticleModuleColor_Seeded : UParticleModuleColor
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleColor_Seeded = {}



---@class UParticleModuleEventBase : UParticleModule
UParticleModuleEventBase = {}


---@class UParticleModuleEventGenerator : UParticleModuleEventBase
---@field Events TArray<FParticleEvent_GenerateInfo>
UParticleModuleEventGenerator = {}



---@class UParticleModuleEventReceiverBase : UParticleModuleEventBase
---@field EventGeneratorType EParticleEventType
---@field EventName FName
UParticleModuleEventReceiverBase = {}



---@class UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase
---@field bStopSpawning boolean
UParticleModuleEventReceiverKillParticles = {}



---@class UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase
---@field SpawnCount FRawDistributionFloat
---@field bUseParticleTime boolean
---@field bUsePSysLocation boolean
---@field bInheritVelocity boolean
---@field InheritVelocityScale FRawDistributionVector
---@field PhysicalMaterials TArray<UPhysicalMaterial>
---@field bBanPhysicalMaterials boolean
UParticleModuleEventReceiverSpawn = {}



---@class UParticleModuleEventSendToGame : UObject
UParticleModuleEventSendToGame = {}


---@class UParticleModuleKillBase : UParticleModule
UParticleModuleKillBase = {}


---@class UParticleModuleKillBox : UParticleModuleKillBase
---@field LowerLeftCorner FRawDistributionVector
---@field UpperRightCorner FRawDistributionVector
---@field bAbsolute boolean
---@field bKillInside boolean
---@field bAxisAlignedAndFixedSize boolean
UParticleModuleKillBox = {}



---@class UParticleModuleKillHeight : UParticleModuleKillBase
---@field Height FRawDistributionFloat
---@field bAbsolute boolean
---@field bFloor boolean
---@field bApplyPSysScale boolean
UParticleModuleKillHeight = {}



---@class UParticleModuleLifetime : UParticleModuleLifetimeBase
---@field LifeTime FRawDistributionFloat
UParticleModuleLifetime = {}



---@class UParticleModuleLifetimeBase : UParticleModule
UParticleModuleLifetimeBase = {}


---@class UParticleModuleLifetime_Seeded : UParticleModuleLifetime
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleLifetime_Seeded = {}



---@class UParticleModuleLight : UParticleModuleLightBase
---@field bUseInverseSquaredFalloff boolean
---@field bAffectsTranslucency boolean
---@field bPreviewLightRadius boolean
---@field SpawnFraction float
---@field ColorScaleOverLife FRawDistributionVector
---@field BrightnessOverLife FRawDistributionFloat
---@field RadiusScale FRawDistributionFloat
---@field LightExponent FRawDistributionFloat
---@field LightingChannels FLightingChannels
---@field VolumetricScatteringIntensity float
---@field bHighQualityLights boolean
---@field bShadowCastingLights boolean
UParticleModuleLight = {}



---@class UParticleModuleLightBase : UParticleModule
UParticleModuleLightBase = {}


---@class UParticleModuleLight_Seeded : UParticleModuleLight
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleLight_Seeded = {}



---@class UParticleModuleLocation : UParticleModuleLocationBase
---@field StartLocation FRawDistributionVector
---@field DistributeOverNPoints float
---@field DistributeThreshold float
UParticleModuleLocation = {}



---@class UParticleModuleLocationBase : UParticleModule
UParticleModuleLocationBase = {}


---@class UParticleModuleLocationBoneSocket : UParticleModuleLocationBase
---@field SourceType ELocationBoneSocketSource
---@field UniversalOffset FVector
---@field SourceLocations TArray<FLocationBoneSocketInfo>
---@field SelectionMethod ELocationBoneSocketSelectionMethod
---@field bUpdatePositionEachFrame boolean
---@field bOrientMeshEmitters boolean
---@field bInheritBoneVelocity boolean
---@field InheritVelocityScale float
---@field SkelMeshActorParamName FName
---@field NumPreSelectedIndices int32
UParticleModuleLocationBoneSocket = {}



---@class UParticleModuleLocationDirect : UParticleModuleLocationBase
---@field Location FRawDistributionVector
---@field LocationOffset FRawDistributionVector
---@field ScaleFactor FRawDistributionVector
---@field Direction FRawDistributionVector
UParticleModuleLocationDirect = {}



---@class UParticleModuleLocationEmitter : UParticleModuleLocationBase
---@field EmitterName FName
---@field SelectionMethod ELocationEmitterSelectionMethod
---@field InheritSourceVelocity boolean
---@field InheritSourceVelocityScale float
---@field bInheritSourceRotation boolean
---@field InheritSourceRotationScale float
UParticleModuleLocationEmitter = {}



---@class UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase
---@field EmitterName FName
UParticleModuleLocationEmitterDirect = {}



---@class UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase
---@field Positive_X boolean
---@field Positive_Y boolean
---@field Positive_Z boolean
---@field Negative_X boolean
---@field Negative_Y boolean
---@field Negative_Z boolean
---@field SurfaceOnly boolean
---@field Velocity boolean
---@field VelocityScale FRawDistributionFloat
---@field StartLocation FRawDistributionVector
UParticleModuleLocationPrimitiveBase = {}



---@class UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase
---@field RadialVelocity boolean
---@field StartRadius FRawDistributionFloat
---@field StartHeight FRawDistributionFloat
---@field HeightAxis CylinderHeightAxis
UParticleModuleLocationPrimitiveCylinder = {}



---@class UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleLocationPrimitiveCylinder_Seeded = {}



---@class UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase
---@field StartRadius FRawDistributionFloat
UParticleModuleLocationPrimitiveSphere = {}



---@class UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleLocationPrimitiveSphere_Seeded = {}



---@class UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase
---@field StartOffset FRawDistributionVector
---@field Height FRawDistributionFloat
---@field Angle FRawDistributionFloat
---@field Thickness FRawDistributionFloat
UParticleModuleLocationPrimitiveTriangle = {}



---@class UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase
---@field SourceType ELocationSkelVertSurfaceSource
---@field UniversalOffset FVector
---@field bUpdatePositionEachFrame boolean
---@field bOrientMeshEmitters boolean
---@field bInheritBoneVelocity boolean
---@field InheritVelocityScale float
---@field SkelMeshActorParamName FName
---@field ValidAssociatedBones TArray<FName>
---@field bEnforceNormalCheck boolean
---@field NormalToCompare FVector
---@field NormalCheckToleranceDegrees float
---@field NormalCheckTolerance float
---@field ValidMaterialIndices TArray<int32>
---@field bInheritVertexColor boolean
---@field bInheritUV boolean
---@field InheritUVChannel uint32
UParticleModuleLocationSkelVertSurface = {}



---@class UParticleModuleLocationWorldOffset : UParticleModuleLocation
UParticleModuleLocationWorldOffset = {}


---@class UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleLocationWorldOffset_Seeded = {}



---@class UParticleModuleLocation_Seeded : UParticleModuleLocation
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleLocation_Seeded = {}



---@class UParticleModuleMaterialBase : UParticleModule
UParticleModuleMaterialBase = {}


---@class UParticleModuleMeshMaterial : UParticleModuleMaterialBase
---@field MeshMaterials TArray<UMaterialInterface>
UParticleModuleMeshMaterial = {}



---@class UParticleModuleMeshRotation : UParticleModuleRotationBase
---@field StartRotation FRawDistributionVector
---@field bInheritParent boolean
UParticleModuleMeshRotation = {}



---@class UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase
---@field StartRotationRate FRawDistributionVector
UParticleModuleMeshRotationRate = {}



---@class UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase
---@field LifeMultiplier FRawDistributionVector
UParticleModuleMeshRotationRateMultiplyLife = {}



---@class UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase
---@field RotRate FRawDistributionVector
---@field bScaleRotRate boolean
UParticleModuleMeshRotationRateOverLife = {}



---@class UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleMeshRotationRate_Seeded = {}



---@class UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleMeshRotation_Seeded = {}



---@class UParticleModuleOrbit : UParticleModuleOrbitBase
---@field ChainMode EOrbitChainMode
---@field OffsetAmount FRawDistributionVector
---@field OffsetOptions FOrbitOptions
---@field RotationAmount FRawDistributionVector
---@field RotationOptions FOrbitOptions
---@field RotationRateAmount FRawDistributionVector
---@field RotationRateOptions FOrbitOptions
UParticleModuleOrbit = {}



---@class UParticleModuleOrbitBase : UParticleModule
---@field bUseEmitterTime boolean
UParticleModuleOrbitBase = {}



---@class UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase
---@field LockAxisFlags EParticleAxisLock
UParticleModuleOrientationAxisLock = {}



---@class UParticleModuleOrientationBase : UParticleModule
UParticleModuleOrientationBase = {}


---@class UParticleModuleParameterBase : UParticleModule
UParticleModuleParameterBase = {}


---@class UParticleModuleParameterDynamic : UParticleModuleParameterBase
---@field DynamicParams TArray<FEmitterDynamicParameter>
---@field UpdateFlags int32
---@field bUsesVelocity boolean
UParticleModuleParameterDynamic = {}



---@class UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleParameterDynamic_Seeded = {}



---@class UParticleModulePivotOffset : UParticleModuleLocationBase
---@field PivotOffset FVector2D
UParticleModulePivotOffset = {}



---@class UParticleModuleRequired : UParticleModule
---@field Material UMaterialInterface
---@field MinFacingCameraBlendDistance float
---@field MaxFacingCameraBlendDistance float
---@field EmitterOrigin FVector
---@field EmitterRotation FRotator
---@field ScreenAlignment EParticleScreenAlignment
---@field bUseLocalSpace boolean
---@field bKillOnDeactivate boolean
---@field bKillOnCompleted boolean
---@field SortMode EParticleSortMode
---@field bUseLegacyEmitterTime boolean
---@field bRemoveHMDRoll boolean
---@field bEmitterDurationUseRange boolean
---@field EmitterDuration float
---@field SpawnRate FRawDistributionFloat
---@field BurstList TArray<FParticleBurst>
---@field EmitterDelay float
---@field EmitterDelayLow float
---@field bDelayFirstLoopOnly boolean
---@field InterpolationMethod EParticleSubUVInterpMethod
---@field bScaleUV boolean
---@field bEmitterDelayUseRange boolean
---@field ParticleBurstMethod EParticleBurstMethod
---@field bOverrideSystemMacroUV boolean
---@field bUseMaxDrawCount boolean
---@field OpacitySourceMode EOpacitySourceMode
---@field EmitterNormalsMode EEmitterNormalsMode
---@field bOrbitModuleAffectsVelocityAlignment boolean
---@field SubImages_Horizontal int32
---@field SubImages_Vertical int32
---@field RandomImageTime float
---@field RandomImageChanges int32
---@field MacroUVPosition FVector
---@field MacroUVRadius float
---@field UVFlippingMode EParticleUVFlipMode
---@field BoundingMode ESubUVBoundingVertexCount
---@field bDurationRecalcEachLoop boolean
---@field NormalsSphereCenter FVector
---@field AlphaThreshold float
---@field EmitterLoops int32
---@field CutoutTexture UTexture2D
---@field MaxDrawCount int32
---@field EmitterDurationLow float
---@field NormalsCylinderDirection FVector
---@field NamedMaterialOverrides TArray<FName>
UParticleModuleRequired = {}



---@class UParticleModuleRotation : UParticleModuleRotationBase
---@field StartRotation FRawDistributionFloat
UParticleModuleRotation = {}



---@class UParticleModuleRotationBase : UParticleModule
UParticleModuleRotationBase = {}


---@class UParticleModuleRotationOverLifetime : UParticleModuleRotationBase
---@field RotationOverLife FRawDistributionFloat
---@field Scale boolean
UParticleModuleRotationOverLifetime = {}



---@class UParticleModuleRotationRate : UParticleModuleRotationRateBase
---@field StartRotationRate FRawDistributionFloat
UParticleModuleRotationRate = {}



---@class UParticleModuleRotationRateBase : UParticleModule
UParticleModuleRotationRateBase = {}


---@class UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase
---@field LifeMultiplier FRawDistributionFloat
UParticleModuleRotationRateMultiplyLife = {}



---@class UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleRotationRate_Seeded = {}



---@class UParticleModuleRotation_Seeded : UParticleModuleRotation
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleRotation_Seeded = {}



---@class UParticleModuleSize : UParticleModuleSizeBase
---@field StartSize FRawDistributionVector
UParticleModuleSize = {}



---@class UParticleModuleSizeBase : UParticleModule
UParticleModuleSizeBase = {}


---@class UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase
---@field LifeMultiplier FRawDistributionVector
---@field MultiplyX boolean
---@field MultiplyY boolean
---@field MultiplyZ boolean
UParticleModuleSizeMultiplyLife = {}



---@class UParticleModuleSizeScale : UParticleModuleSizeBase
---@field SizeScale FRawDistributionVector
---@field EnableX boolean
---@field EnableY boolean
---@field EnableZ boolean
UParticleModuleSizeScale = {}



---@class UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase
---@field SpeedScale FVector2D
---@field MaxScale FVector2D
UParticleModuleSizeScaleBySpeed = {}



---@class UParticleModuleSize_Seeded : UParticleModuleSize
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleSize_Seeded = {}



---@class UParticleModuleSourceMovement : UParticleModuleLocationBase
---@field SourceMovementScale FRawDistributionVector
UParticleModuleSourceMovement = {}



---@class UParticleModuleSpawn : UParticleModuleSpawnBase
---@field Rate FRawDistributionFloat
---@field RateScale FRawDistributionFloat
---@field ParticleBurstMethod EParticleBurstMethod
---@field BurstList TArray<FParticleBurst>
---@field BurstScale FRawDistributionFloat
---@field bApplyGlobalSpawnRateScale boolean
UParticleModuleSpawn = {}



---@class UParticleModuleSpawnBase : UParticleModule
---@field bProcessSpawnRate boolean
---@field bProcessBurstList boolean
UParticleModuleSpawnBase = {}



---@class UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase
---@field UnitScalar float
---@field MovementTolerance float
---@field SpawnPerUnit FRawDistributionFloat
---@field MaxFrameDistance float
---@field bIgnoreSpawnRateWhenMoving boolean
---@field bIgnoreMovementAlongX boolean
---@field bIgnoreMovementAlongY boolean
---@field bIgnoreMovementAlongZ boolean
UParticleModuleSpawnPerUnit = {}



---@class UParticleModuleSubUV : UParticleModuleSubUVBase
---@field Animation USubUVAnimation
---@field SubImageIndex FRawDistributionFloat
---@field bUseRealTime boolean
UParticleModuleSubUV = {}



---@class UParticleModuleSubUVBase : UParticleModule
UParticleModuleSubUVBase = {}


---@class UParticleModuleSubUVMovie : UParticleModuleSubUV
---@field bUseEmitterTime boolean
---@field FrameRate FRawDistributionFloat
---@field StartingFrame int32
UParticleModuleSubUVMovie = {}



---@class UParticleModuleTrailBase : UParticleModule
UParticleModuleTrailBase = {}


---@class UParticleModuleTrailSource : UParticleModuleTrailBase
---@field SourceMethod ETrail2SourceMethod
---@field SourceName FName
---@field SourceStrength FRawDistributionFloat
---@field bLockSourceStength boolean
---@field SourceOffsetCount int32
---@field SourceOffsetDefaults TArray<FVector>
---@field SelectionMethod EParticleSourceSelectionMethod
---@field bInheritRotation boolean
UParticleModuleTrailSource = {}



---@class UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase
---@field bDeadTrailsOnDeactivate boolean
---@field bEnablePreviousTangentRecalculation boolean
---@field bTangentRecalculationEveryFrame boolean
---@field TilingDistance float
---@field DistanceTessellationStepSize float
---@field TangentTessellationStepSize float
---@field WidthTessellationStepSize float
UParticleModuleTypeDataAnimTrail = {}



---@class UParticleModuleTypeDataBase : UParticleModule
UParticleModuleTypeDataBase = {}


---@class UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase
---@field BeamMethod EBeam2Method
---@field TextureTile int32
---@field TextureTileDistance float
---@field Sheets int32
---@field MaxBeamCount int32
---@field Speed float
---@field InterpolationPoints int32
---@field bAlwaysOn boolean
---@field UpVectorStepSize int32
---@field BranchParentName FName
---@field Distance FRawDistributionFloat
---@field TaperMethod EBeamTaperMethod
---@field TaperFactor FRawDistributionFloat
---@field TaperScale FRawDistributionFloat
---@field RenderGeometry boolean
---@field RenderDirectLine boolean
---@field RenderLines boolean
---@field RenderTessellation boolean
UParticleModuleTypeDataBeam2 = {}



---@class UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase
---@field EmitterInfo FGPUSpriteEmitterInfo
---@field ResourceData FGPUSpriteResourceData
---@field CameraMotionBlurAmount float
---@field bClearExistingParticlesOnInit boolean
UParticleModuleTypeDataGpu = {}



---@class UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase
---@field Mesh UStaticMesh
---@field LODSizeScale float
---@field bUseStaticMeshLODs boolean
---@field CastShadows boolean
---@field DoCollisions boolean
---@field MeshAlignment EMeshScreenAlignment
---@field bOverrideMaterial boolean
---@field bOverrideDefaultMotionBlurSettings boolean
---@field bEnableMotionBlur boolean
---@field RollPitchYawRange FRawDistributionVector
---@field AxisLockOption EParticleAxisLock
---@field bCameraFacing boolean
---@field CameraFacingUpAxisOption EMeshCameraFacingUpAxis
---@field CameraFacingOption EMeshCameraFacingOptions
---@field bApplyParticleRotationAsSpin boolean
---@field bFaceCameraDirectionRatherThanPosition boolean
---@field bCollisionsConsiderPartilceSize boolean
UParticleModuleTypeDataMesh = {}



---@class UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase
---@field MaxTessellationBetweenParticles int32
---@field SheetsPerTrail int32
---@field MaxTrailCount int32
---@field MaxParticleInTrailCount int32
---@field bDeadTrailsOnDeactivate boolean
---@field bDeadTrailsOnSourceLoss boolean
---@field bClipSourceSegement boolean
---@field bEnablePreviousTangentRecalculation boolean
---@field bTangentRecalculationEveryFrame boolean
---@field bSpawnInitialParticle boolean
---@field RenderAxis ETrailsRenderAxisOption
---@field TangentSpawningScalar float
---@field bRenderGeometry boolean
---@field bRenderSpawnPoints boolean
---@field bRenderTangents boolean
---@field bRenderTessellation boolean
---@field TilingDistance float
---@field DistanceTessellationStepSize float
---@field bEnableTangentDiffInterpScale boolean
---@field TangentTessellationScalar float
UParticleModuleTypeDataRibbon = {}



---@class UParticleModuleVectorFieldBase : UParticleModule
UParticleModuleVectorFieldBase = {}


---@class UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase
---@field bOverrideGlobalVectorFieldTightness boolean
---@field GlobalVectorFieldScale float
---@field GlobalVectorFieldTightness float
UParticleModuleVectorFieldGlobal = {}



---@class UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase
---@field VectorField UVectorField
---@field RelativeTranslation FVector
---@field RelativeRotation FRotator
---@field RelativeScale3D FVector
---@field Intensity float
---@field Tightness float
---@field bIgnoreComponentTransform boolean
---@field bTileX boolean
---@field bTileY boolean
---@field bTileZ boolean
---@field bUseFixDT boolean
UParticleModuleVectorFieldLocal = {}



---@class UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase
---@field MinInitialRotation FVector
---@field MaxInitialRotation FVector
UParticleModuleVectorFieldRotation = {}



---@class UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase
---@field RotationRate FVector
UParticleModuleVectorFieldRotationRate = {}



---@class UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase
---@field VectorFieldScale UDistributionFloat
---@field VectorFieldScaleRaw FRawDistributionFloat
UParticleModuleVectorFieldScale = {}



---@class UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase
---@field VectorFieldScaleOverLife UDistributionFloat
---@field VectorFieldScaleOverLifeRaw FRawDistributionFloat
UParticleModuleVectorFieldScaleOverLife = {}



---@class UParticleModuleVelocity : UParticleModuleVelocityBase
---@field StartVelocity FRawDistributionVector
---@field StartVelocityRadial FRawDistributionFloat
UParticleModuleVelocity = {}



---@class UParticleModuleVelocityBase : UParticleModule
---@field bInWorldSpace boolean
---@field bApplyOwnerScale boolean
UParticleModuleVelocityBase = {}



---@class UParticleModuleVelocityCone : UParticleModuleVelocityBase
---@field Angle FRawDistributionFloat
---@field Velocity FRawDistributionFloat
---@field Direction FVector
UParticleModuleVelocityCone = {}



---@class UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase
---@field Scale FRawDistributionVector
UParticleModuleVelocityInheritParent = {}



---@class UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase
---@field VelOverLife FRawDistributionVector
---@field Absolute boolean
UParticleModuleVelocityOverLifetime = {}



---@class UParticleModuleVelocity_Seeded : UParticleModuleVelocity
---@field RandomSeedInfo FParticleRandomSeedInfo
UParticleModuleVelocity_Seeded = {}



---@class UParticleSpriteEmitter : UParticleEmitter
UParticleSpriteEmitter = {}


---@class UParticleSystem : UFXSystemAsset
---@field UpdateTime_FPS float
---@field UpdateTime_Delta float
---@field WarmupTime float
---@field WarmupTickRate float
---@field Emitters TArray<UParticleEmitter>
---@field PreviewComponent UParticleSystemComponent
---@field CurveEdSetup UInterpCurveEdSetup
---@field LODDistanceCheckTime float
---@field MacroUVRadius float
---@field LODDistances TArray<float>
---@field LODSettings TArray<FParticleSystemLOD>
---@field FixedRelativeBoundingBox FBox
---@field SecondsBeforeInactive float
---@field Delay float
---@field DelayLow float
---@field bOrientZAxisTowardCamera boolean
---@field bUseFixedRelativeBoundingBox boolean
---@field bShouldResetPeakCounts boolean
---@field bHasPhysics boolean
---@field bUseRealtimeThumbnail boolean
---@field ThumbnailImageOutOfDate boolean
---@field bUseDelayRange boolean
---@field bAllowManagedTicking boolean
---@field bAutoDeactivate boolean
---@field bRegenerateLODDuplicate boolean
---@field SystemUpdateMode EParticleSystemUpdateMode
---@field LODMethod ParticleSystemLODMethod
---@field InsignificantReaction EParticleSystemInsignificanceReaction
---@field OcclusionBoundsMethod EParticleSystemOcclusionBoundsMethod
---@field MaxSignificanceLevel EParticleSignificanceLevel
---@field MinTimeBetweenTicks uint32
---@field InsignificanceDelay float
---@field MacroUVPosition FVector
---@field CustomOcclusionBounds FBox
---@field SoloTracking TArray<FLODSoloTrack>
---@field NamedMaterialSlots TArray<FNamedEmitterMaterial>
UParticleSystem = {}

---@param TypeData UClass
---@return boolean
function UParticleSystem:ContainsEmitterType(TypeData) end


---@class UParticleSystemComponent : UFXSystemComponent
---@field Template UParticleSystem
---@field EmitterMaterials TArray<UMaterialInterface>
---@field SkelMeshComponents TArray<USkeletalMeshComponent>
---@field bResetOnDetach boolean
---@field bUpdateOnDedicatedServer boolean
---@field bAllowRecycling boolean
---@field bAutoManageAttachment boolean
---@field bAutoAttachWeldSimulatedBodies boolean
---@field bWarmingUp boolean
---@field bOverrideLODMethod boolean
---@field bSkipUpdateDynamicDataDuringTick boolean
---@field LODMethod ParticleSystemLODMethod
---@field RequiredSignificance EParticleSignificanceLevel
---@field InstanceParameters TArray<FParticleSysParam>
---@field OnParticleSpawn FParticleSystemComponentOnParticleSpawn
---@field OnParticleBurst FParticleSystemComponentOnParticleBurst
---@field OnParticleDeath FParticleSystemComponentOnParticleDeath
---@field OnParticleCollide FParticleSystemComponentOnParticleCollide
---@field bOldPositionValid boolean
---@field OldPosition FVector
---@field PartSysVelocity FVector
---@field WarmupTime float
---@field WarmupTickRate float
---@field SecondsBeforeInactive float
---@field MaxTimeBeforeForceUpdateTransform float
---@field ReplayClips TArray<UParticleSystemReplay>
---@field CustomTimeDilation float
---@field AutoAttachParent TWeakObjectPtr<USceneComponent>
---@field AutoAttachSocketName FName
---@field AutoAttachLocationRule EAttachmentRule
---@field AutoAttachRotationRule EAttachmentRule
---@field AutoAttachScaleRule EAttachmentRule
---@field OnSystemFinished FParticleSystemComponentOnSystemFinished
UParticleSystemComponent = {}

---@param InFirstSocketName FName
---@param InSecondSocketName FName
---@param InWidthMode ETrailWidthMode
---@param InWidth float
function UParticleSystemComponent:SetTrailSourceData(InFirstSocketName, InSecondSocketName, InWidthMode, InWidth) end
---@param NewTemplate UParticleSystem
function UParticleSystemComponent:SetTemplate(NewTemplate) end
---@param ParameterName FName
---@param Param UMaterialInterface
function UParticleSystemComponent:SetMaterialParameter(ParameterName, Param) end
---@param EmitterIndex int32
---@param NewTangentPoint FVector
---@param TargetIndex int32
function UParticleSystemComponent:SetBeamTargetTangent(EmitterIndex, NewTangentPoint, TargetIndex) end
---@param EmitterIndex int32
---@param NewTargetStrength float
---@param TargetIndex int32
function UParticleSystemComponent:SetBeamTargetStrength(EmitterIndex, NewTargetStrength, TargetIndex) end
---@param EmitterIndex int32
---@param NewTargetPoint FVector
---@param TargetIndex int32
function UParticleSystemComponent:SetBeamTargetPoint(EmitterIndex, NewTargetPoint, TargetIndex) end
---@param EmitterIndex int32
---@param NewTangentPoint FVector
---@param SourceIndex int32
function UParticleSystemComponent:SetBeamSourceTangent(EmitterIndex, NewTangentPoint, SourceIndex) end
---@param EmitterIndex int32
---@param NewSourceStrength float
---@param SourceIndex int32
function UParticleSystemComponent:SetBeamSourceStrength(EmitterIndex, NewSourceStrength, SourceIndex) end
---@param EmitterIndex int32
---@param NewSourcePoint FVector
---@param SourceIndex int32
function UParticleSystemComponent:SetBeamSourcePoint(EmitterIndex, NewSourcePoint, SourceIndex) end
---@param EmitterIndex int32
---@param NewEndPoint FVector
function UParticleSystemComponent:SetBeamEndPoint(EmitterIndex, NewEndPoint) end
---@param Parent USceneComponent
---@param SocketName FName
---@param LocationType EAttachLocation::Type
function UParticleSystemComponent:SetAutoAttachParams(Parent, SocketName, LocationType) end
---@return int32
function UParticleSystemComponent:GetNumActiveParticles() end
---@param InName FName
---@return UMaterialInterface
function UParticleSystemComponent:GetNamedMaterial(InName) end
---@param EmitterIndex int32
---@param TargetIndex int32
---@param OutTangentPoint FVector
---@return boolean
function UParticleSystemComponent:GetBeamTargetTangent(EmitterIndex, TargetIndex, OutTangentPoint) end
---@param EmitterIndex int32
---@param TargetIndex int32
---@param OutTargetStrength float
---@return boolean
function UParticleSystemComponent:GetBeamTargetStrength(EmitterIndex, TargetIndex, OutTargetStrength) end
---@param EmitterIndex int32
---@param TargetIndex int32
---@param OutTargetPoint FVector
---@return boolean
function UParticleSystemComponent:GetBeamTargetPoint(EmitterIndex, TargetIndex, OutTargetPoint) end
---@param EmitterIndex int32
---@param SourceIndex int32
---@param OutTangentPoint FVector
---@return boolean
function UParticleSystemComponent:GetBeamSourceTangent(EmitterIndex, SourceIndex, OutTangentPoint) end
---@param EmitterIndex int32
---@param SourceIndex int32
---@param OutSourceStrength float
---@return boolean
function UParticleSystemComponent:GetBeamSourceStrength(EmitterIndex, SourceIndex, OutSourceStrength) end
---@param EmitterIndex int32
---@param SourceIndex int32
---@param OutSourcePoint FVector
---@return boolean
function UParticleSystemComponent:GetBeamSourcePoint(EmitterIndex, SourceIndex, OutSourcePoint) end
---@param EmitterIndex int32
---@param OutEndPoint FVector
---@return boolean
function UParticleSystemComponent:GetBeamEndPoint(EmitterIndex, OutEndPoint) end
---@param InEventName FName
---@param InEmitterTime float
---@param InLocation FVector
---@param InDirection FVector
---@param InVelocity FVector
function UParticleSystemComponent:GenerateParticleEvent(InEventName, InEmitterTime, InLocation, InDirection, InVelocity) end
function UParticleSystemComponent:EndTrails() end
---@param InName FName
---@param SourceMaterial UMaterialInterface
---@return UMaterialInstanceDynamic
function UParticleSystemComponent:CreateNamedDynamicMaterialInstance(InName, SourceMaterial) end
---@param InFirstSocketName FName
---@param InSecondSocketName FName
---@param InWidthMode ETrailWidthMode
---@param InWidth float
function UParticleSystemComponent:BeginTrails(InFirstSocketName, InSecondSocketName, InWidthMode, InWidth) end


---@class UParticleSystemReplay : UObject
---@field ClipIDNumber int32
UParticleSystemReplay = {}



---@class UPawnMovementComponent : UNavMovementComponent
---@field PawnOwner APawn
UPawnMovementComponent = {}

---@return FVector
function UPawnMovementComponent:K2_GetInputVector() end
---@return boolean
function UPawnMovementComponent:IsMoveInputIgnored() end
---@return FVector
function UPawnMovementComponent:GetPendingInputVector() end
---@return APawn
function UPawnMovementComponent:GetPawnOwner() end
---@return FVector
function UPawnMovementComponent:GetLastInputVector() end
---@return FVector
function UPawnMovementComponent:ConsumeInputVector() end
---@param WorldVector FVector
---@param bForce boolean
function UPawnMovementComponent:AddInputVector(WorldVector, bForce) end


---@class UPawnNoiseEmitterComponent : UActorComponent
---@field bAIPerceptionSystemCompatibilityMode boolean
---@field LastRemoteNoisePosition FVector
---@field NoiseLifetime float
---@field LastRemoteNoiseVolume float
---@field LastRemoteNoiseTime float
---@field LastLocalNoiseVolume float
---@field LastLocalNoiseTime float
UPawnNoiseEmitterComponent = {}

---@param NoiseMaker AActor
---@param Loudness float
---@param NoiseLocation FVector
function UPawnNoiseEmitterComponent:MakeNoise(NoiseMaker, Loudness, NoiseLocation) end


---@class UPendingNetGame : UObject
---@field NetDriver UNetDriver
---@field DemoNetDriver UDemoNetDriver
UPendingNetGame = {}



---@class UPhysicalAnimationComponent : UActorComponent
---@field StrengthMultiplyer float
---@field SkeletalMeshComponent USkeletalMeshComponent
UPhysicalAnimationComponent = {}

---@param InStrengthMultiplyer float
function UPhysicalAnimationComponent:SetStrengthMultiplyer(InStrengthMultiplyer) end
---@param InSkeletalMeshComponent USkeletalMeshComponent
function UPhysicalAnimationComponent:SetSkeletalMeshComponent(InSkeletalMeshComponent) end
---@param BodyName FName
---@return FTransform
function UPhysicalAnimationComponent:GetBodyTargetTransform(BodyName) end
---@param BodyName FName
---@param PhysicalAnimationData FPhysicalAnimationData
---@param bIncludeSelf boolean
function UPhysicalAnimationComponent:ApplyPhysicalAnimationSettingsBelow(BodyName, PhysicalAnimationData, bIncludeSelf) end
---@param BodyName FName
---@param PhysicalAnimationData FPhysicalAnimationData
function UPhysicalAnimationComponent:ApplyPhysicalAnimationSettings(BodyName, PhysicalAnimationData) end
---@param BodyName FName
---@param ProfileName FName
---@param bIncludeSelf boolean
---@param bClearNotFound boolean
function UPhysicalAnimationComponent:ApplyPhysicalAnimationProfileBelow(BodyName, ProfileName, bIncludeSelf, bClearNotFound) end


---@class UPhysicalMaterial : UObject
---@field Friction float
---@field FrictionCombineMode EFrictionCombineMode::Type
---@field bOverrideFrictionCombineMode boolean
---@field Restitution float
---@field RestitutionCombineMode EFrictionCombineMode::Type
---@field bOverrideRestitutionCombineMode boolean
---@field Density float
---@field RaiseMassToPower float
---@field DestructibleDamageThresholdScale float
---@field PhysicalMaterialProperty UDEPRECATED_PhysicalMaterialPropertyBase
---@field SurfaceType EPhysicalSurface
---@field TireFrictionScale float
---@field TireFrictionScales TArray<FTireFrictionScalePair>
UPhysicalMaterial = {}



---@class UPhysicalMaterialMask : UObject
---@field UVChannelIndex int32
---@field AddressX TextureAddress
---@field AddressY TextureAddress
UPhysicalMaterialMask = {}



---@class UPhysicsAsset : UObject
---@field BoundsBodies TArray<int32>
---@field SkeletalBodySetups TArray<USkeletalBodySetup>
---@field ConstraintSetup TArray<UPhysicsConstraintTemplate>
---@field SolverIterations FSolverIterations
---@field bNotForDedicatedServer boolean
---@field ThumbnailInfo UThumbnailInfo
---@field BodySetup TArray<UBodySetup>
UPhysicsAsset = {}



---@class UPhysicsCollisionHandler : UObject
---@field ImpactThreshold float
---@field ImpactReFireDelay float
---@field DefaultImpactSound USoundBase
---@field LastImpactSoundTime float
UPhysicsCollisionHandler = {}



---@class UPhysicsConstraintComponent : USceneComponent
---@field ConstraintActor1 AActor
---@field ComponentName1 FConstrainComponentPropName
---@field ConstraintActor2 AActor
---@field ComponentName2 FConstrainComponentPropName
---@field ConstraintSetup UPhysicsConstraintTemplate
---@field OnConstraintBroken FPhysicsConstraintComponentOnConstraintBroken
---@field ConstraintInstance FConstraintInstance
UPhysicsConstraintComponent = {}

---@param bEnableTwistDrive boolean
---@param bEnableSwingDrive boolean
function UPhysicsConstraintComponent:SetOrientationDriveTwistAndSwing(bEnableTwistDrive, bEnableSwingDrive) end
---@param bEnableSLERP boolean
function UPhysicsConstraintComponent:SetOrientationDriveSLERP(bEnableSLERP) end
---@param ConstraintType ELinearConstraintMotion
---@param LimitSize float
function UPhysicsConstraintComponent:SetLinearZLimit(ConstraintType, LimitSize) end
---@param ConstraintType ELinearConstraintMotion
---@param LimitSize float
function UPhysicsConstraintComponent:SetLinearYLimit(ConstraintType, LimitSize) end
---@param ConstraintType ELinearConstraintMotion
---@param LimitSize float
function UPhysicsConstraintComponent:SetLinearXLimit(ConstraintType, LimitSize) end
---@param InVelTarget FVector
function UPhysicsConstraintComponent:SetLinearVelocityTarget(InVelTarget) end
---@param bEnableDriveX boolean
---@param bEnableDriveY boolean
---@param bEnableDriveZ boolean
function UPhysicsConstraintComponent:SetLinearVelocityDrive(bEnableDriveX, bEnableDriveY, bEnableDriveZ) end
---@param InPosTarget FVector
function UPhysicsConstraintComponent:SetLinearPositionTarget(InPosTarget) end
---@param bEnableDriveX boolean
---@param bEnableDriveY boolean
---@param bEnableDriveZ boolean
function UPhysicsConstraintComponent:SetLinearPositionDrive(bEnableDriveX, bEnableDriveY, bEnableDriveZ) end
---@param PositionStrength float
---@param VelocityStrength float
---@param InForceLimit float
function UPhysicsConstraintComponent:SetLinearDriveParams(PositionStrength, VelocityStrength, InForceLimit) end
---@param bLinearBreakable boolean
---@param LinearBreakThreshold float
function UPhysicsConstraintComponent:SetLinearBreakable(bLinearBreakable, LinearBreakThreshold) end
---@param bDisableCollision boolean
function UPhysicsConstraintComponent:SetDisableCollision(bDisableCollision) end
---@param Frame EConstraintFrame::Type
---@param RefPosition FVector
function UPhysicsConstraintComponent:SetConstraintReferencePosition(Frame, RefPosition) end
---@param Frame EConstraintFrame::Type
---@param PriAxis FVector
---@param SecAxis FVector
function UPhysicsConstraintComponent:SetConstraintReferenceOrientation(Frame, PriAxis, SecAxis) end
---@param Frame EConstraintFrame::Type
---@param RefFrame FTransform
function UPhysicsConstraintComponent:SetConstraintReferenceFrame(Frame, RefFrame) end
---@param Component1 UPrimitiveComponent
---@param BoneName1 FName
---@param Component2 UPrimitiveComponent
---@param BoneName2 FName
function UPhysicsConstraintComponent:SetConstrainedComponents(Component1, BoneName1, Component2, BoneName2) end
---@param InVelTarget FVector
function UPhysicsConstraintComponent:SetAngularVelocityTarget(InVelTarget) end
---@param bEnableTwistDrive boolean
---@param bEnableSwingDrive boolean
function UPhysicsConstraintComponent:SetAngularVelocityDriveTwistAndSwing(bEnableTwistDrive, bEnableSwingDrive) end
---@param bEnableSLERP boolean
function UPhysicsConstraintComponent:SetAngularVelocityDriveSLERP(bEnableSLERP) end
---@param bEnableSwingDrive boolean
---@param bEnableTwistDrive boolean
function UPhysicsConstraintComponent:SetAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive) end
---@param ConstraintType EAngularConstraintMotion
---@param TwistLimitAngle float
function UPhysicsConstraintComponent:SetAngularTwistLimit(ConstraintType, TwistLimitAngle) end
---@param MotionType EAngularConstraintMotion
---@param Swing2LimitAngle float
function UPhysicsConstraintComponent:SetAngularSwing2Limit(MotionType, Swing2LimitAngle) end
---@param MotionType EAngularConstraintMotion
---@param Swing1LimitAngle float
function UPhysicsConstraintComponent:SetAngularSwing1Limit(MotionType, Swing1LimitAngle) end
---@param InPosTarget FRotator
function UPhysicsConstraintComponent:SetAngularOrientationTarget(InPosTarget) end
---@param bEnableSwingDrive boolean
---@param bEnableTwistDrive boolean
function UPhysicsConstraintComponent:SetAngularOrientationDrive(bEnableSwingDrive, bEnableTwistDrive) end
---@param PositionStrength float
---@param VelocityStrength float
---@param InForceLimit float
function UPhysicsConstraintComponent:SetAngularDriveParams(PositionStrength, VelocityStrength, InForceLimit) end
---@param DriveMode EAngularDriveMode::Type
function UPhysicsConstraintComponent:SetAngularDriveMode(DriveMode) end
---@param bAngularBreakable boolean
---@param AngularBreakThreshold float
function UPhysicsConstraintComponent:SetAngularBreakable(bAngularBreakable, AngularBreakThreshold) end
---@return boolean
function UPhysicsConstraintComponent:IsBroken() end
---@return float
function UPhysicsConstraintComponent:GetCurrentTwist() end
---@return float
function UPhysicsConstraintComponent:GetCurrentSwing2() end
---@return float
function UPhysicsConstraintComponent:GetCurrentSwing1() end
---@param OutLinearForce FVector
---@param OutAngularForce FVector
function UPhysicsConstraintComponent:GetConstraintForce(OutLinearForce, OutAngularForce) end
function UPhysicsConstraintComponent:BreakConstraint() end


---@class UPhysicsConstraintTemplate : UObject
---@field DefaultInstance FConstraintInstance
---@field ProfileHandles TArray<FPhysicsConstraintProfileHandle>
---@field DefaultProfile FConstraintProfileProperties
UPhysicsConstraintTemplate = {}



---@class UPhysicsHandleComponent : UActorComponent
---@field GrabbedComponent UPrimitiveComponent
---@field bSoftAngularConstraint boolean
---@field bSoftLinearConstraint boolean
---@field bInterpolateTarget boolean
---@field LinearDamping float
---@field LinearStiffness float
---@field AngularDamping float
---@field AngularStiffness float
---@field InterpolationSpeed float
UPhysicsHandleComponent = {}

---@param NewRotation FRotator
function UPhysicsHandleComponent:SetTargetRotation(NewRotation) end
---@param NewLocation FVector
---@param NewRotation FRotator
function UPhysicsHandleComponent:SetTargetLocationAndRotation(NewLocation, NewRotation) end
---@param NewLocation FVector
function UPhysicsHandleComponent:SetTargetLocation(NewLocation) end
---@param NewLinearStiffness float
function UPhysicsHandleComponent:SetLinearStiffness(NewLinearStiffness) end
---@param NewLinearDamping float
function UPhysicsHandleComponent:SetLinearDamping(NewLinearDamping) end
---@param NewInterpolationSpeed float
function UPhysicsHandleComponent:SetInterpolationSpeed(NewInterpolationSpeed) end
---@param NewAngularStiffness float
function UPhysicsHandleComponent:SetAngularStiffness(NewAngularStiffness) end
---@param NewAngularDamping float
function UPhysicsHandleComponent:SetAngularDamping(NewAngularDamping) end
function UPhysicsHandleComponent:ReleaseComponent() end
---@param Component UPrimitiveComponent
---@param InBoneName FName
---@param Location FVector
---@param Rotation FRotator
function UPhysicsHandleComponent:GrabComponentAtLocationWithRotation(Component, InBoneName, Location, Rotation) end
---@param Component UPrimitiveComponent
---@param InBoneName FName
---@param GrabLocation FVector
function UPhysicsHandleComponent:GrabComponentAtLocation(Component, InBoneName, GrabLocation) end
---@param Component UPrimitiveComponent
---@param InBoneName FName
---@param GrabLocation FVector
---@param bConstrainRotation boolean
function UPhysicsHandleComponent:GrabComponent(Component, InBoneName, GrabLocation, bConstrainRotation) end
---@param TargetLocation FVector
---@param TargetRotation FRotator
function UPhysicsHandleComponent:GetTargetLocationAndRotation(TargetLocation, TargetRotation) end
---@return UPrimitiveComponent
function UPhysicsHandleComponent:GetGrabbedComponent() end


---@class UPhysicsSettings : UDeveloperSettings
---@field DefaultGravityZ float
---@field DefaultTerminalVelocity float
---@field DefaultFluidFriction float
---@field SimulateScratchMemorySize int32
---@field RagdollAggregateThreshold int32
---@field TriangleMeshTriangleMinAreaThreshold float
---@field bEnableShapeSharing boolean
---@field bEnablePCM boolean
---@field bEnableStabilization boolean
---@field bWarnMissingLocks boolean
---@field bEnable2DPhysics boolean
---@field PhysicErrorCorrection FRigidBodyErrorCorrection
---@field LockedAxis ESettingsLockedAxis::Type
---@field DefaultDegreesOfFreedom ESettingsDOF::Type
---@field BounceThresholdVelocity float
---@field FrictionCombineMode EFrictionCombineMode::Type
---@field RestitutionCombineMode EFrictionCombineMode::Type
---@field MaxAngularVelocity float
---@field MaxDepenetrationVelocity float
---@field ContactOffsetMultiplier float
---@field MinContactOffset float
---@field MaxContactOffset float
---@field bSimulateSkeletalMeshOnDedicatedServer boolean
---@field DefaultShapeComplexity ECollisionTraceFlag
---@field bDefaultHasComplexCollision boolean
---@field bSuppressFaceRemapTable boolean
---@field bSupportUVFromHitResults boolean
---@field bDisableActiveActors boolean
---@field bDisableKinematicStaticPairs boolean
---@field bDisableKinematicKinematicPairs boolean
---@field bDisableCCD boolean
---@field bEnableEnhancedDeterminism boolean
---@field AnimPhysicsMinDeltaTime float
---@field bSimulateAnimPhysicsAfterReset boolean
---@field MaxPhysicsDeltaTime float
---@field bSubstepping boolean
---@field bSubsteppingAsync boolean
---@field MaxSubstepDeltaTime float
---@field MaxSubsteps int32
---@field SyncSceneSmoothingFactor float
---@field InitialAverageFrameRate float
---@field PhysXTreeRebuildRate int32
---@field PhysicalSurfaces TArray<FPhysicalSurfaceName>
---@field DefaultBroadphaseSettings FBroadphaseSettings
---@field ChaosSettings FChaosPhysicsSettings
UPhysicsSettings = {}



---@class UPhysicsSpringComponent : USceneComponent
---@field SpringStiffness float
---@field SpringDamping float
---@field SpringLengthAtRest float
---@field SpringRadius float
---@field SpringChannel ECollisionChannel
---@field bIgnoreSelf boolean
---@field SpringCompression float
UPhysicsSpringComponent = {}

---@return FVector
function UPhysicsSpringComponent:GetSpringRestingPoint() end
---@return FVector
function UPhysicsSpringComponent:GetSpringDirection() end
---@return FVector
function UPhysicsSpringComponent:GetSpringCurrentEndPoint() end
---@return float
function UPhysicsSpringComponent:GetNormalizedCompressionScalar() end


---@class UPhysicsThrusterComponent : USceneComponent
---@field ThrustStrength float
UPhysicsThrusterComponent = {}



---@class UPlanarReflectionComponent : USceneCaptureComponent
---@field PreviewBox UBoxComponent
---@field NormalDistortionStrength float
---@field PrefilterRoughness float
---@field PrefilterRoughnessDistance float
---@field ScreenPercentage int32
---@field ExtraFOV float
---@field DistanceFromPlaneFadeStart float
---@field DistanceFromPlaneFadeEnd float
---@field DistanceFromPlaneFadeoutStart float
---@field DistanceFromPlaneFadeoutEnd float
---@field AngleFromPlaneFadeStart float
---@field AngleFromPlaneFadeEnd float
---@field bShowPreviewPlane boolean
---@field bRenderSceneTwoSided boolean
UPlanarReflectionComponent = {}



---@class UPlaneReflectionCaptureComponent : UReflectionCaptureComponent
---@field InfluenceRadiusScale float
---@field PreviewInfluenceRadius UDrawSphereComponent
---@field PreviewCaptureBox UBoxComponent
UPlaneReflectionCaptureComponent = {}



---@class UPlatformEventsComponent : UActorComponent
---@field PlatformChangedToLaptopModeDelegate FPlatformEventsComponentPlatformChangedToLaptopModeDelegate
---@field PlatformChangedToTabletModeDelegate FPlatformEventsComponentPlatformChangedToTabletModeDelegate
UPlatformEventsComponent = {}

---@return boolean
function UPlatformEventsComponent:SupportsConvertibleLaptops() end
function UPlatformEventsComponent:PlatformEventDelegate__DelegateSignature() end
---@return boolean
function UPlatformEventsComponent:IsInTabletMode() end
---@return boolean
function UPlatformEventsComponent:IsInLaptopMode() end


---@class UPlatformGameInstance : UGameInstance
---@field ApplicationWillDeactivateDelegate FPlatformGameInstanceApplicationWillDeactivateDelegate
---@field ApplicationHasReactivatedDelegate FPlatformGameInstanceApplicationHasReactivatedDelegate
---@field ApplicationWillEnterBackgroundDelegate FPlatformGameInstanceApplicationWillEnterBackgroundDelegate
---@field ApplicationHasEnteredForegroundDelegate FPlatformGameInstanceApplicationHasEnteredForegroundDelegate
---@field ApplicationWillTerminateDelegate FPlatformGameInstanceApplicationWillTerminateDelegate
---@field ApplicationShouldUnloadResourcesDelegate FPlatformGameInstanceApplicationShouldUnloadResourcesDelegate
---@field ApplicationReceivedStartupArgumentsDelegate FPlatformGameInstanceApplicationReceivedStartupArgumentsDelegate
---@field ApplicationRegisteredForRemoteNotificationsDelegate FPlatformGameInstanceApplicationRegisteredForRemoteNotificationsDelegate
---@field ApplicationRegisteredForUserNotificationsDelegate FPlatformGameInstanceApplicationRegisteredForUserNotificationsDelegate
---@field ApplicationFailedToRegisterForRemoteNotificationsDelegate FPlatformGameInstanceApplicationFailedToRegisterForRemoteNotificationsDelegate
---@field ApplicationReceivedRemoteNotificationDelegate FPlatformGameInstanceApplicationReceivedRemoteNotificationDelegate
---@field ApplicationReceivedLocalNotificationDelegate FPlatformGameInstanceApplicationReceivedLocalNotificationDelegate
---@field ApplicationReceivedScreenOrientationChangedNotificationDelegate FPlatformGameInstanceApplicationReceivedScreenOrientationChangedNotificationDelegate
UPlatformGameInstance = {}



---@class UPlatformInterfaceBase : UObject
---@field AllDelegates TArray<FDelegateArray>
UPlatformInterfaceBase = {}



---@class UPlatformInterfaceWebResponse : UObject
---@field OriginalURL FString
---@field ResponseCode int32
---@field Tag int32
---@field StringResponse FString
---@field BinaryResponse TArray<uint8>
UPlatformInterfaceWebResponse = {}

---@return int32
function UPlatformInterfaceWebResponse:GetNumHeaders() end
---@param HeaderName FString
---@return FString
function UPlatformInterfaceWebResponse:GetHeaderValue(HeaderName) end
---@param HeaderIndex int32
---@param Header FString
---@param Value FString
function UPlatformInterfaceWebResponse:GetHeader(HeaderIndex, Header, Value) end


---@class UPlayer : UObject
---@field PlayerController APlayerController
---@field CurrentNetSpeed int32
---@field ConfiguredInternetSpeed int32
---@field ConfiguredLanSpeed int32
UPlayer = {}



---@class UPlayerInput : UObject
---@field DebugExecBindings TArray<FKeyBind>
---@field InvertedAxis TArray<FName>
UPlayerInput = {}

---@param Sensitivity float
function UPlayerInput:SetMouseSensitivity(Sensitivity) end
---@param BindName FName
---@param Command FString
function UPlayerInput:SetBind(BindName, Command) end
---@param AxisKey FKey
function UPlayerInput:InvertAxisKey(AxisKey) end
---@param AxisName FName
function UPlayerInput:InvertAxis(AxisName) end
function UPlayerInput:ClearSmoothing() end


---@class UPluginCommandlet : UCommandlet
UPluginCommandlet = {}


---@class UPointLightComponent : ULocalLightComponent
---@field bUseInverseSquaredFalloff boolean
---@field LightFalloffExponent float
---@field SourceRadius float
---@field SoftSourceRadius float
---@field SourceLength float
UPointLightComponent = {}

---@param bNewValue float
function UPointLightComponent:SetSourceRadius(bNewValue) end
---@param NewValue float
function UPointLightComponent:SetSourceLength(NewValue) end
---@param bNewValue float
function UPointLightComponent:SetSoftSourceRadius(bNewValue) end
---@param NewLightFalloffExponent float
function UPointLightComponent:SetLightFalloffExponent(NewLightFalloffExponent) end


---@class UPolys : UObject
UPolys = {}


---@class UPoseAsset : UAnimationAsset
---@field PoseContainer FPoseDataContainer
---@field bAdditivePose boolean
---@field BasePoseIndex int32
---@field RetargetSource FName
UPoseAsset = {}



---@class UPoseWatch : UObject
---@field Node UEdGraphNode
---@field PoseWatchColour FColor
UPoseWatch = {}



---@class UPoseableMeshComponent : USkinnedMeshComponent
UPoseableMeshComponent = {}

---@param BoneName FName
---@param InTransform FTransform
---@param BoneSpace EBoneSpaces::Type
function UPoseableMeshComponent:SetBoneTransformByName(BoneName, InTransform, BoneSpace) end
---@param BoneName FName
---@param InScale3D FVector
---@param BoneSpace EBoneSpaces::Type
function UPoseableMeshComponent:SetBoneScaleByName(BoneName, InScale3D, BoneSpace) end
---@param BoneName FName
---@param InRotation FRotator
---@param BoneSpace EBoneSpaces::Type
function UPoseableMeshComponent:SetBoneRotationByName(BoneName, InRotation, BoneSpace) end
---@param BoneName FName
---@param InLocation FVector
---@param BoneSpace EBoneSpaces::Type
function UPoseableMeshComponent:SetBoneLocationByName(BoneName, InLocation, BoneSpace) end
---@param BoneName FName
function UPoseableMeshComponent:ResetBoneTransformByName(BoneName) end
---@param BoneName FName
---@param BoneSpace EBoneSpaces::Type
---@return FTransform
function UPoseableMeshComponent:GetBoneTransformByName(BoneName, BoneSpace) end
---@param BoneName FName
---@param BoneSpace EBoneSpaces::Type
---@return FVector
function UPoseableMeshComponent:GetBoneScaleByName(BoneName, BoneSpace) end
---@param BoneName FName
---@param BoneSpace EBoneSpaces::Type
---@return FRotator
function UPoseableMeshComponent:GetBoneRotationByName(BoneName, BoneSpace) end
---@param BoneName FName
---@param BoneSpace EBoneSpaces::Type
---@return FVector
function UPoseableMeshComponent:GetBoneLocationByName(BoneName, BoneSpace) end
---@param InComponentToCopy USkeletalMeshComponent
function UPoseableMeshComponent:CopyPoseFromSkeletalComponent(InComponentToCopy) end


---@class UPostProcessComponent : USceneComponent
---@field Settings FPostProcessSettings
---@field Priority float
---@field BlendRadius float
---@field BlendWeight float
---@field bEnabled boolean
---@field bUnbound boolean
UPostProcessComponent = {}

---@param InBlendableObject TScriptInterface<IBlendableInterface>
---@param InWeight float
function UPostProcessComponent:AddOrUpdateBlendable(InBlendableObject, InWeight) end


---@class UPreviewMeshCollection : UDataAsset
---@field Skeleton USkeleton
---@field SkeletalMeshes TArray<FPreviewMeshCollectionEntry>
UPreviewMeshCollection = {}



---@class UPrimaryAssetLabel : UPrimaryDataAsset
---@field Rules FPrimaryAssetRules
---@field bLabelAssetsInMyDirectory boolean
---@field bIsRuntimeLabel boolean
---@field ExplicitAssets TArray<TSoftObjectPtr<UObject>>
---@field ExplicitBlueprints TArray<TSoftClassPtr<UObject>>
---@field AssetCollection FCollectionReference
UPrimaryAssetLabel = {}



---@class UPrimaryDataAsset : UDataAsset
UPrimaryDataAsset = {}


---@class UPrimitiveComponent : USceneComponent
---@field MinDrawDistance float
---@field LDMaxDrawDistance float
---@field CachedMaxDrawDistance float
---@field DepthPriorityGroup ESceneDepthPriorityGroup
---@field ViewOwnerDepthPriorityGroup ESceneDepthPriorityGroup
---@field IndirectLightingCacheQuality EIndirectLightingCacheQuality
---@field LightmapType ELightmapType
---@field bUseMaxLODAsImposter boolean
---@field bBatchImpostersAsInstances boolean
---@field bNeverDistanceCull boolean
---@field bAlwaysCreatePhysicsState boolean
---@field bGenerateOverlapEvents boolean
---@field bMultiBodyOverlap boolean
---@field bTraceComplexOnMove boolean
---@field bReturnMaterialOnMove boolean
---@field bUseViewOwnerDepthPriorityGroup boolean
---@field bAllowCullDistanceVolume boolean
---@field bHasMotionBlurVelocityMeshes boolean
---@field bVisibleInReflectionCaptures boolean
---@field bVisibleInRayTracing boolean
---@field bRenderInMainPass boolean
---@field bRenderInDepthPass boolean
---@field bReceivesDecals boolean
---@field bOwnerNoSee boolean
---@field bOnlyOwnerSee boolean
---@field bTreatAsBackgroundForOcclusion boolean
---@field bUseAsOccluder boolean
---@field bSelectable boolean
---@field bForceMipStreaming boolean
---@field bHasPerInstanceHitProxies boolean
---@field CastShadow boolean
---@field bAffectDynamicIndirectLighting boolean
---@field bAffectDistanceFieldLighting boolean
---@field bCastDynamicShadow boolean
---@field bCastStaticShadow boolean
---@field bCastVolumetricTranslucentShadow boolean
---@field bSelfShadowOnly boolean
---@field bCastFarShadow boolean
---@field bCastInsetShadow boolean
---@field bCastCinematicShadow boolean
---@field bCastHiddenShadow boolean
---@field bCastShadowAsTwoSided boolean
---@field bLightAsIfStatic boolean
---@field bLightAttachmentsAsGroup boolean
---@field bExcludeFromLightAttachmentGroup boolean
---@field bReceiveMobileCSMShadows boolean
---@field bSingleSampleShadowFromStationaryLights boolean
---@field bIgnoreRadialImpulse boolean
---@field bIgnoreRadialForce boolean
---@field bApplyImpulseOnDamage boolean
---@field bReplicatePhysicsToAutonomousProxy boolean
---@field bFillCollisionUnderneathForNavmesh boolean
---@field AlwaysLoadOnClient boolean
---@field AlwaysLoadOnServer boolean
---@field bUseEditorCompositing boolean
---@field bRenderCustomDepth boolean
---@field bHasCustomNavigableGeometry EHasCustomNavigableGeometry::Type
---@field CanCharacterStepUpOn ECanBeCharacterBase
---@field LightingChannels FLightingChannels
---@field CustomDepthStencilWriteMask ERendererStencilMask
---@field CustomDepthStencilValue int32
---@field CustomPrimitiveData FCustomPrimitiveData
---@field CustomPrimitiveDataInternal FCustomPrimitiveData
---@field TranslucencySortPriority int32
---@field VisibilityId int32
---@field RuntimeVirtualTextures TArray<URuntimeVirtualTexture>
---@field VirtualTextureLodBias int8
---@field VirtualTextureCullMips int8
---@field VirtualTextureMinCoverage int8
---@field VirtualTextureRenderPassType ERuntimeVirtualTextureMainPassType
---@field LpvBiasMultiplier float
---@field BoundsScale float
---@field MoveIgnoreActors TArray<AActor>
---@field MoveIgnoreComponents TArray<UPrimitiveComponent>
---@field BodyInstance FBodyInstance
---@field OnComponentHit FPrimitiveComponentOnComponentHit
---@field OnComponentBeginOverlap FPrimitiveComponentOnComponentBeginOverlap
---@field OnComponentEndOverlap FPrimitiveComponentOnComponentEndOverlap
---@field OnComponentWake FPrimitiveComponentOnComponentWake
---@field OnComponentSleep FPrimitiveComponentOnComponentSleep
---@field OnBeginCursorOver FPrimitiveComponentOnBeginCursorOver
---@field OnEndCursorOver FPrimitiveComponentOnEndCursorOver
---@field OnClicked FPrimitiveComponentOnClicked
---@field OnReleased FPrimitiveComponentOnReleased
---@field OnInputTouchBegin FPrimitiveComponentOnInputTouchBegin
---@field OnInputTouchEnd FPrimitiveComponentOnInputTouchEnd
---@field OnInputTouchEnter FPrimitiveComponentOnInputTouchEnter
---@field OnInputTouchLeave FPrimitiveComponentOnInputTouchLeave
---@field LODParentPrimitive UPrimitiveComponent
UPrimitiveComponent = {}

---@param Tolerance float
---@return boolean
function UPrimitiveComponent:WasRecentlyRendered(Tolerance) end
---@param BoneName FName
function UPrimitiveComponent:WakeRigidBody(BoneName) end
function UPrimitiveComponent:WakeAllRigidBodies() end
---@param NewOverride FWalkableSlopeOverride
function UPrimitiveComponent:SetWalkableSlopeOverride(NewOverride) end
---@param InUseCCD boolean
---@param BoneName FName
function UPrimitiveComponent:SetUseCCD(InUseCCD, BoneName) end
---@param NewTranslucentSortPriority int32
function UPrimitiveComponent:SetTranslucentSortPriority(NewTranslucentSortPriority) end
---@param bNewSingleSampleShadowFromStationaryLights boolean
function UPrimitiveComponent:SetSingleSampleShadowFromStationaryLights(bNewSingleSampleShadowFromStationaryLights) end
---@param bSimulate boolean
function UPrimitiveComponent:SetSimulatePhysics(bSimulate) end
---@param bValue boolean
function UPrimitiveComponent:SetRenderInMainPass(bValue) end
---@param bValue boolean
function UPrimitiveComponent:SetRenderCustomDepth(bValue) end
---@param bNewReceivesDecals boolean
function UPrimitiveComponent:SetReceivesDecals(bNewReceivesDecals) end
---@param NewPhysMaterial UPhysicalMaterial
function UPrimitiveComponent:SetPhysMaterialOverride(NewPhysMaterial) end
---@param NewMaxAngVel float
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsMaxAngularVelocityInRadians(NewMaxAngVel, bAddToCurrent, BoneName) end
---@param NewMaxAngVel float
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsMaxAngularVelocityInDegrees(NewMaxAngVel, bAddToCurrent, BoneName) end
---@param NewMaxAngVel float
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsMaxAngularVelocity(NewMaxAngVel, bAddToCurrent, BoneName) end
---@param NewVel FVector
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsLinearVelocity(NewVel, bAddToCurrent, BoneName) end
---@param NewAngVel FVector
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsAngularVelocityInRadians(NewAngVel, bAddToCurrent, BoneName) end
---@param NewAngVel FVector
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsAngularVelocityInDegrees(NewAngVel, bAddToCurrent, BoneName) end
---@param NewAngVel FVector
---@param bAddToCurrent boolean
---@param BoneName FName
function UPrimitiveComponent:SetPhysicsAngularVelocity(NewAngVel, bAddToCurrent, BoneName) end
---@param bNewOwnerNoSee boolean
function UPrimitiveComponent:SetOwnerNoSee(bNewOwnerNoSee) end
---@param bNewOnlyOwnerSee boolean
function UPrimitiveComponent:SetOnlyOwnerSee(bNewOnlyOwnerSee) end
---@param bNewNotifyRigidBodyCollision boolean
function UPrimitiveComponent:SetNotifyRigidBodyCollision(bNewNotifyRigidBodyCollision) end
---@param MaterialSlotName FName
---@param Material UMaterialInterface
function UPrimitiveComponent:SetMaterialByName(MaterialSlotName, Material) end
---@param ElementIndex int32
---@param Material UMaterialInterface
function UPrimitiveComponent:SetMaterial(ElementIndex, Material) end
---@param BoneName FName
---@param InMassScale float
function UPrimitiveComponent:SetMassScale(BoneName, InMassScale) end
---@param BoneName FName
---@param MassInKg float
---@param bOverrideMass boolean
function UPrimitiveComponent:SetMassOverrideInKg(BoneName, MassInKg, bOverrideMass) end
---@param InDamping float
function UPrimitiveComponent:SetLinearDamping(InDamping) end
---@param bChannel0 boolean
---@param bChannel1 boolean
---@param bChannel2 boolean
function UPrimitiveComponent:SetLightingChannels(bChannel0, bChannel1, bChannel2) end
---@param bInLightAttachmentsAsGroup boolean
function UPrimitiveComponent:SetLightAttachmentsAsGroup(bInLightAttachmentsAsGroup) end
---@param bInGenerateOverlapEvents boolean
function UPrimitiveComponent:SetGenerateOverlapEvents(bInGenerateOverlapEvents) end
---@param bInExcludeFromLightAttachmentGroup boolean
function UPrimitiveComponent:SetExcludeFromLightAttachmentGroup(bInExcludeFromLightAttachmentGroup) end
---@param bGravityEnabled boolean
function UPrimitiveComponent:SetEnableGravity(bGravityEnabled) end
---@param DataIndex int32
---@param Value FVector4
function UPrimitiveComponent:SetCustomPrimitiveDataVector4(DataIndex, Value) end
---@param DataIndex int32
---@param Value FVector
function UPrimitiveComponent:SetCustomPrimitiveDataVector3(DataIndex, Value) end
---@param DataIndex int32
---@param Value FVector2D
function UPrimitiveComponent:SetCustomPrimitiveDataVector2(DataIndex, Value) end
---@param DataIndex int32
---@param Value float
function UPrimitiveComponent:SetCustomPrimitiveDataFloat(DataIndex, Value) end
---@param WriteMaskBit ERendererStencilMask
function UPrimitiveComponent:SetCustomDepthStencilWriteMask(WriteMaskBit) end
---@param Value int32
function UPrimitiveComponent:SetCustomDepthStencilValue(Value) end
---@param NewCullDistance float
function UPrimitiveComponent:SetCullDistance(NewCullDistance) end
---@param ConstraintMode EDOFMode::Type
function UPrimitiveComponent:SetConstraintMode(ConstraintMode) end
---@param Channel ECollisionChannel
---@param NewResponse ECollisionResponse
function UPrimitiveComponent:SetCollisionResponseToChannel(Channel, NewResponse) end
---@param NewResponse ECollisionResponse
function UPrimitiveComponent:SetCollisionResponseToAllChannels(NewResponse) end
---@param InCollisionProfileName FName
---@param bUpdateOverlaps boolean
function UPrimitiveComponent:SetCollisionProfileName(InCollisionProfileName, bUpdateOverlaps) end
---@param Channel ECollisionChannel
function UPrimitiveComponent:SetCollisionObjectType(Channel) end
---@param NewType ECollisionEnabled::Type
function UPrimitiveComponent:SetCollisionEnabled(NewType) end
---@param CenterOfMassOffset FVector
---@param BoneName FName
function UPrimitiveComponent:SetCenterOfMass(CenterOfMassOffset, BoneName) end
---@param NewCastShadow boolean
function UPrimitiveComponent:SetCastShadow(NewCastShadow) end
---@param bInCastInsetShadow boolean
function UPrimitiveComponent:SetCastInsetShadow(bInCastInsetShadow) end
---@param NewBoundsScale float
function UPrimitiveComponent:SetBoundsScale(NewBoundsScale) end
---@param InDamping float
function UPrimitiveComponent:SetAngularDamping(InDamping) end
---@param InUseCCD boolean
function UPrimitiveComponent:SetAllUseCCD(InUseCCD) end
---@param NewVel FVector
---@param bAddToCurrent boolean
function UPrimitiveComponent:SetAllPhysicsLinearVelocity(NewVel, bAddToCurrent) end
---@param NewAngVel FVector
---@param bAddToCurrent boolean
function UPrimitiveComponent:SetAllPhysicsAngularVelocityInRadians(NewAngVel, bAddToCurrent) end
---@param NewAngVel FVector
---@param bAddToCurrent boolean
function UPrimitiveComponent:SetAllPhysicsAngularVelocityInDegrees(NewAngVel, bAddToCurrent) end
---@param InMassScale float
function UPrimitiveComponent:SetAllMassScale(InMassScale) end
---@param InputVector FVector
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:ScaleByMomentOfInertia(InputVector, BoneName) end
---@param BoneName FName
function UPrimitiveComponent:PutRigidBodyToSleep(BoneName) end
---@param TraceStart FVector
---@param TraceEnd FVector
---@param SphereRadius float
---@param bTraceComplex boolean
---@param bShowTrace boolean
---@param bPersistentShowTrace boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param BoneName FName
---@param OutHit FHitResult
---@return boolean
function UPrimitiveComponent:K2_SphereTraceComponent(TraceStart, TraceEnd, SphereRadius, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit) end
---@param InSphereCentre FVector
---@param InSphereRadius float
---@param bTraceComplex boolean
---@param bShowTrace boolean
---@param bPersistentShowTrace boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param BoneName FName
---@param OutHit FHitResult
---@return boolean
function UPrimitiveComponent:K2_SphereOverlapComponent(InSphereCentre, InSphereRadius, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit) end
---@param TraceStart FVector
---@param TraceEnd FVector
---@param bTraceComplex boolean
---@param bShowTrace boolean
---@param bPersistentShowTrace boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param BoneName FName
---@param OutHit FHitResult
---@return boolean
function UPrimitiveComponent:K2_LineTraceComponent(TraceStart, TraceEnd, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit) end
---@return boolean
function UPrimitiveComponent:K2_IsQueryCollisionEnabled() end
---@return boolean
function UPrimitiveComponent:K2_IsPhysicsCollisionEnabled() end
---@return boolean
function UPrimitiveComponent:K2_IsCollisionEnabled() end
---@param InBoxCentre FVector
---@param InBox FBox
---@param bTraceComplex boolean
---@param bShowTrace boolean
---@param bPersistentShowTrace boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param BoneName FName
---@param OutHit FHitResult
---@return boolean
function UPrimitiveComponent:K2_BoxOverlapComponent(InBoxCentre, InBox, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit) end
---@param OtherComp UPrimitiveComponent
---@return boolean
function UPrimitiveComponent:IsOverlappingComponent(OtherComp) end
---@param Other AActor
---@return boolean
function UPrimitiveComponent:IsOverlappingActor(Other) end
---@return boolean
function UPrimitiveComponent:IsGravityEnabled() end
---@return boolean
function UPrimitiveComponent:IsAnyRigidBodyAwake() end
---@param Component UPrimitiveComponent
---@param bShouldIgnore boolean
function UPrimitiveComponent:IgnoreComponentWhenMoving(Component, bShouldIgnore) end
---@param Actor AActor
---@param bShouldIgnore boolean
function UPrimitiveComponent:IgnoreActorWhenMoving(Actor, bShouldIgnore) end
---@return FWalkableSlopeOverride
function UPrimitiveComponent:GetWalkableSlopeOverride() end
---@param Point FVector
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetPhysicsLinearVelocityAtPoint(Point, BoneName) end
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetPhysicsLinearVelocity(BoneName) end
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetPhysicsAngularVelocityInRadians(BoneName) end
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetPhysicsAngularVelocityInDegrees(BoneName) end
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetPhysicsAngularVelocity(BoneName) end
---@param OutOverlappingComponents TArray<UPrimitiveComponent>
function UPrimitiveComponent:GetOverlappingComponents(OutOverlappingComponents) end
---@param OverlappingActors TArray<AActor>
---@param ClassFilter TSubclassOf<AActor>
function UPrimitiveComponent:GetOverlappingActors(OverlappingActors, ClassFilter) end
---@return int32
function UPrimitiveComponent:GetNumMaterials() end
---@param FaceIndex int32
---@param SectionIndex int32
---@return UMaterialInterface
function UPrimitiveComponent:GetMaterialFromCollisionFaceIndex(FaceIndex, SectionIndex) end
---@param ElementIndex int32
---@return UMaterialInterface
function UPrimitiveComponent:GetMaterial(ElementIndex) end
---@param BoneName FName
---@return float
function UPrimitiveComponent:GetMassScale(BoneName) end
---@return float
function UPrimitiveComponent:GetMass() end
---@return float
function UPrimitiveComponent:GetLinearDamping() end
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetInertiaTensor(BoneName) end
---@return boolean
function UPrimitiveComponent:GetGenerateOverlapEvents() end
---@param Channel ECollisionChannel
---@return ECollisionResponse
function UPrimitiveComponent:GetCollisionResponseToChannel(Channel) end
---@return FName
function UPrimitiveComponent:GetCollisionProfileName() end
---@return ECollisionChannel
function UPrimitiveComponent:GetCollisionObjectType() end
---@return ECollisionEnabled::Type
function UPrimitiveComponent:GetCollisionEnabled() end
---@param Point FVector
---@param OutPointOnBody FVector
---@param BoneName FName
---@return float
function UPrimitiveComponent:GetClosestPointOnCollision(Point, OutPointOnBody, BoneName) end
---@param BoneName FName
---@return FVector
function UPrimitiveComponent:GetCenterOfMass(BoneName) end
---@return float
function UPrimitiveComponent:GetAngularDamping() end
---@param ElementIndex int32
---@param SourceMaterial UMaterialInterface
---@param OptionalName FName
---@return UMaterialInstanceDynamic
function UPrimitiveComponent:CreateDynamicMaterialInstance(ElementIndex, SourceMaterial, OptionalName) end
---@param ElementIndex int32
---@param Parent UMaterialInterface
---@return UMaterialInstanceDynamic
function UPrimitiveComponent:CreateAndSetMaterialInstanceDynamicFromMaterial(ElementIndex, Parent) end
---@param ElementIndex int32
---@return UMaterialInstanceDynamic
function UPrimitiveComponent:CreateAndSetMaterialInstanceDynamic(ElementIndex) end
---@return TArray<UPrimitiveComponent>
function UPrimitiveComponent:CopyArrayOfMoveIgnoreComponents() end
---@return TArray<AActor>
function UPrimitiveComponent:CopyArrayOfMoveIgnoreActors() end
function UPrimitiveComponent:ClearMoveIgnoreComponents() end
function UPrimitiveComponent:ClearMoveIgnoreActors() end
---@param Pawn APawn
---@return boolean
function UPrimitiveComponent:CanCharacterStepUp(Pawn) end
---@param Torque FVector
---@param BoneName FName
---@param bAccelChange boolean
function UPrimitiveComponent:AddTorqueInRadians(Torque, BoneName, bAccelChange) end
---@param Torque FVector
---@param BoneName FName
---@param bAccelChange boolean
function UPrimitiveComponent:AddTorqueInDegrees(Torque, BoneName, bAccelChange) end
---@param Torque FVector
---@param BoneName FName
---@param bAccelChange boolean
function UPrimitiveComponent:AddTorque(Torque, BoneName, bAccelChange) end
---@param Origin FVector
---@param Radius float
---@param Strength float
---@param Falloff ERadialImpulseFalloff
---@param bVelChange boolean
function UPrimitiveComponent:AddRadialImpulse(Origin, Radius, Strength, Falloff, bVelChange) end
---@param Origin FVector
---@param Radius float
---@param Strength float
---@param Falloff ERadialImpulseFalloff
---@param bAccelChange boolean
function UPrimitiveComponent:AddRadialForce(Origin, Radius, Strength, Falloff, bAccelChange) end
---@param Impulse FVector
---@param Location FVector
---@param BoneName FName
function UPrimitiveComponent:AddImpulseAtLocation(Impulse, Location, BoneName) end
---@param Impulse FVector
---@param BoneName FName
---@param bVelChange boolean
function UPrimitiveComponent:AddImpulse(Impulse, BoneName, bVelChange) end
---@param Force FVector
---@param Location FVector
---@param BoneName FName
function UPrimitiveComponent:AddForceAtLocationLocal(Force, Location, BoneName) end
---@param Force FVector
---@param Location FVector
---@param BoneName FName
function UPrimitiveComponent:AddForceAtLocation(Force, Location, BoneName) end
---@param Force FVector
---@param BoneName FName
---@param bAccelChange boolean
function UPrimitiveComponent:AddForce(Force, BoneName, bAccelChange) end
---@param Impulse FVector
---@param BoneName FName
---@param bVelChange boolean
function UPrimitiveComponent:AddAngularImpulseInRadians(Impulse, BoneName, bVelChange) end
---@param Impulse FVector
---@param BoneName FName
---@param bVelChange boolean
function UPrimitiveComponent:AddAngularImpulseInDegrees(Impulse, BoneName, bVelChange) end
---@param Impulse FVector
---@param BoneName FName
---@param bVelChange boolean
function UPrimitiveComponent:AddAngularImpulse(Impulse, BoneName, bVelChange) end


---@class UProjectileMovementComponent : UMovementComponent
---@field InitialSpeed float
---@field MaxSpeed float
---@field bRotationFollowsVelocity boolean
---@field bRotationRemainsVertical boolean
---@field bShouldBounce boolean
---@field bInitialVelocityInLocalSpace boolean
---@field bForceSubStepping boolean
---@field bSimulationEnabled boolean
---@field bSweepCollision boolean
---@field bIsHomingProjectile boolean
---@field bBounceAngleAffectsFriction boolean
---@field bIsSliding boolean
---@field bInterpMovement boolean
---@field bInterpRotation boolean
---@field PreviousHitTime float
---@field PreviousHitNormal FVector
---@field ProjectileGravityScale float
---@field Buoyancy float
---@field Bounciness float
---@field Friction float
---@field BounceVelocityStopSimulatingThreshold float
---@field MinFrictionFraction float
---@field OnProjectileBounce FProjectileMovementComponentOnProjectileBounce
---@field OnProjectileStop FProjectileMovementComponentOnProjectileStop
---@field HomingAccelerationMagnitude float
---@field HomingTargetComponent TWeakObjectPtr<USceneComponent>
---@field MaxSimulationTimeStep float
---@field MaxSimulationIterations int32
---@field BounceAdditionalIterations int32
---@field InterpLocationTime float
---@field InterpRotationTime float
---@field InterpLocationMaxLagDistance float
---@field InterpLocationSnapToTargetDistance float
UProjectileMovementComponent = {}

---@param HitResult FHitResult
function UProjectileMovementComponent:StopSimulating(HitResult) end
---@param NewVelocity FVector
function UProjectileMovementComponent:SetVelocityInLocalSpace(NewVelocity) end
---@param Component USceneComponent
function UProjectileMovementComponent:SetInterpolatedComponent(Component) end
function UProjectileMovementComponent:ResetInterpolation() end
---@param ImpactResult FHitResult
function UProjectileMovementComponent:OnProjectileStopDelegate__DelegateSignature(ImpactResult) end
---@param ImpactResult FHitResult
---@param ImpactVelocity FVector
function UProjectileMovementComponent:OnProjectileBounceDelegate__DelegateSignature(ImpactResult, ImpactVelocity) end
---@param NewLocation FVector
---@param NewRotation FRotator
function UProjectileMovementComponent:MoveInterpolationTarget(NewLocation, NewRotation) end
---@param NewVelocity FVector
---@return FVector
function UProjectileMovementComponent:LimitVelocity(NewVelocity) end
---@return boolean
function UProjectileMovementComponent:IsVelocityUnderSimulationThreshold() end
---@return boolean
function UProjectileMovementComponent:IsInterpolationComplete() end


---@class UProxyLODMeshSimplificationSettings : UDeveloperSettings
---@field ProxyLODMeshReductionModuleName FName
UProxyLODMeshSimplificationSettings = {}



---@class URadialForceComponent : USceneComponent
---@field Radius float
---@field Falloff ERadialImpulseFalloff
---@field ImpulseStrength float
---@field bImpulseVelChange boolean
---@field bIgnoreOwningActor boolean
---@field ForceStrength float
---@field DestructibleDamage float
---@field ObjectTypesToAffect TArray<EObjectTypeQuery>
URadialForceComponent = {}

---@param ObjectType EObjectTypeQuery
function URadialForceComponent:RemoveObjectTypeToAffect(ObjectType) end
function URadialForceComponent:FireImpulse() end
---@param ObjectType EObjectTypeQuery
function URadialForceComponent:AddObjectTypeToAffect(ObjectType) end


---@class URectLightComponent : ULocalLightComponent
---@field SourceWidth float
---@field SourceHeight float
---@field BarnDoorAngle float
---@field BarnDoorLength float
---@field SourceTexture UTexture
URectLightComponent = {}

---@param bNewValue float
function URectLightComponent:SetSourceWidth(bNewValue) end
---@param bNewValue UTexture
function URectLightComponent:SetSourceTexture(bNewValue) end
---@param NewValue float
function URectLightComponent:SetSourceHeight(NewValue) end
---@param NewValue float
function URectLightComponent:SetBarnDoorLength(NewValue) end
---@param NewValue float
function URectLightComponent:SetBarnDoorAngle(NewValue) end


---@class UReflectionCaptureComponent : USceneComponent
---@field CaptureOffsetComponent UBillboardComponent
---@field ReflectionSourceType EReflectionSourceType
---@field Cubemap UTextureCube
---@field SourceCubemapAngle float
---@field Brightness float
---@field CaptureOffset FVector
---@field MapBuildDataId FGuid
UReflectionCaptureComponent = {}



---@class URendererOverrideSettings : UDeveloperSettings
---@field bSupportAllShaderPermutations boolean
---@field bForceRecomputeTangents boolean
URendererOverrideSettings = {}



---@class URendererSettings : UDeveloperSettings
---@field bMobileDisableVertexFog boolean
---@field MaxMobileCascades int32
---@field MobileMSAASampleCount EMobileMSAASampleCount::Type
---@field bMobileUseLegacyShadingModel boolean
---@field bMobileAllowDitheredLODTransition boolean
---@field bMobileAllowSoftwareOcclusionCulling boolean
---@field bMobileVirtualTextures boolean
---@field bDiscardUnusedQualityLevels boolean
---@field bOcclusionCulling boolean
---@field MinScreenRadiusForLights float
---@field MinScreenRadiusForEarlyZPass float
---@field MinScreenRadiusForCSMdepth float
---@field bPrecomputedVisibilityWarning boolean
---@field bTextureStreaming boolean
---@field bUseDXT5NormalMaps boolean
---@field bVirtualTextures boolean
---@field bVirtualTexturedLightmaps boolean
---@field VirtualTextureTileSize uint32
---@field VirtualTextureTileBorderSize uint32
---@field VirtualTextureFeedbackFactor uint32
---@field bVirtualTextureEnableCompressZlib boolean
---@field bVirtualTextureEnableCompressCrunch boolean
---@field bClearCoatEnableSecondNormal boolean
---@field bAnisotropicBRDF boolean
---@field ReflectionCaptureResolution int32
---@field ReflectionEnvironmentLightmapMixBasedOnRoughness boolean
---@field bForwardShading boolean
---@field bVertexFoggingForOpaque boolean
---@field bAllowStaticLighting boolean
---@field bUseNormalMapsForStaticLighting boolean
---@field bGenerateMeshDistanceFields boolean
---@field bEightBitMeshDistanceFields boolean
---@field bGenerateLandscapeGIData boolean
---@field bCompressMeshDistanceFields boolean
---@field TessellationAdaptivePixelsPerTriangle float
---@field bSeparateTranslucency boolean
---@field TranslucentSortPolicy ETranslucentSortPolicy::Type
---@field TranslucentSortAxis FVector
---@field CustomDepthStencil ECustomDepthStencil::Type
---@field bCustomDepthTaaJitter boolean
---@field bEnableAlphaChannelInPostProcessing EAlphaChannelMode::Type
---@field bDefaultFeatureBloom boolean
---@field bDefaultFeatureAmbientOcclusion boolean
---@field bDefaultFeatureAmbientOcclusionStaticFraction boolean
---@field bDefaultFeatureAutoExposure boolean
---@field DefaultFeatureAutoExposure EAutoExposureMethodUI::Type
---@field DefaultFeatureAutoExposureBias float
---@field bExtendDefaultLuminanceRangeInAutoExposureSettings boolean
---@field bUsePreExposure boolean
---@field bEnablePreExposureOnlyInTheEditor boolean
---@field bDefaultFeatureMotionBlur boolean
---@field bDefaultFeatureLensFlare boolean
---@field bTemporalUpsampling boolean
---@field bSSGI boolean
---@field DefaultFeatureAntiAliasing EAntiAliasingMethod
---@field DefaultLightUnits ELightUnits
---@field DefaultBackBufferPixelFormat EDefaultBackBufferPixelFormat::Type
---@field bRenderUnbuiltPreviewShadowsInGame boolean
---@field bStencilForLODDither boolean
---@field EarlyZPass EEarlyZPass::Type
---@field bEarlyZPassOnlyMaterialMasking boolean
---@field bDBuffer boolean
---@field ClearSceneMethod EClearSceneOptions::Type
---@field bBasePassOutputsVelocity boolean
---@field bVertexDeformationOutputsVelocity boolean
---@field bSelectiveBasePassOutputs boolean
---@field bDefaultParticleCutouts boolean
---@field GPUSimulationTextureSizeX int32
---@field GPUSimulationTextureSizeY int32
---@field bGlobalClipPlane boolean
---@field GBufferFormat EGBufferFormat::Type
---@field bUseGPUMorphTargets boolean
---@field bNvidiaAftermathEnabled boolean
---@field bMultiView boolean
---@field bMobilePostProcessing boolean
---@field bMobileMultiView boolean
---@field bMobileUseHWsRGBEncoding boolean
---@field bRoundRobinOcclusion boolean
---@field bODSCapture boolean
---@field bMeshStreaming boolean
---@field WireframeCullThreshold float
---@field bEnableRayTracing boolean
---@field bEnableRayTracingTextureLOD boolean
---@field bSupportStationarySkylight boolean
---@field bSupportLowQualityLightmaps boolean
---@field bSupportPointLightWholeSceneShadows boolean
---@field bSupportAtmosphericFog boolean
---@field bSupportSkyAtmosphere boolean
---@field bSupportSkyAtmosphereAffectsHeightFog boolean
---@field bSupportSkinCacheShaders boolean
---@field DefaultSkinCacheBehavior ESkinCacheDefaultBehavior
---@field SkinCacheSceneMemoryLimitInMB float
---@field bMobileEnableStaticAndCSMShadowReceivers boolean
---@field bMobileEnableMovableLightCSMShaderCulling boolean
---@field bMobileAllowDistanceFieldShadows boolean
---@field bMobileAllowMovableDirectionalLights boolean
---@field MobileNumDynamicPointLights uint32
---@field bMobileDynamicPointLightsUseStaticBranch boolean
---@field bMobileAllowMovableSpotlights boolean
---@field bSupport16BitBoneIndex boolean
---@field bGPUSkinLimit2BoneInfluences boolean
---@field bSupportDepthOnlyIndexBuffers boolean
---@field bSupportReversedIndexBuffers boolean
---@field bSupportMaterialLayers boolean
---@field bLPV boolean
URendererSettings = {}



---@class UReplicationConnectionDriver : UObject
UReplicationConnectionDriver = {}


---@class UReplicationDriver : UObject
UReplicationDriver = {}


---@class UReporterBase : UObject
UReporterBase = {}


---@class UReporterGraph : UReporterBase
UReporterGraph = {}


---@class UReverbEffect : UObject
---@field Density float
---@field Diffusion float
---@field Gain float
---@field GainHF float
---@field DecayTime float
---@field DecayHFRatio float
---@field ReflectionsGain float
---@field ReflectionsDelay float
---@field LateGain float
---@field LateDelay float
---@field AirAbsorptionGainHF float
---@field RoomRolloffFactor float
UReverbEffect = {}



---@class URig : UObject
---@field TransformBases TArray<FTransformBase>
---@field Nodes TArray<FNode>
URig = {}



---@class URotatingMovementComponent : UMovementComponent
---@field RotationRate FRotator
---@field PivotTranslation FVector
---@field bRotationInLocalSpace boolean
URotatingMovementComponent = {}



---@class URuntimeOptionsBase : UObject
URuntimeOptionsBase = {}


---@class URuntimeVirtualTexture : UObject
---@field MaterialType ERuntimeVirtualTextureMaterialType
---@field bCompressTextures boolean
---@field bEnable boolean
---@field bClearTextures boolean
---@field bSinglePhysicalSpace boolean
---@field bPrivateSpace boolean
---@field bEnableScalability boolean
---@field Size int32
---@field TileCount int32
---@field TileSize int32
---@field TileBorderSize int32
---@field StreamLowMips int32
---@field StreamingTexture URuntimeVirtualTextureStreamingProxy
---@field bEnableCompressCrunch boolean
---@field RemoveLowMips int32
URuntimeVirtualTexture = {}

---@return int32
function URuntimeVirtualTexture:GetTileSize() end
---@return int32
function URuntimeVirtualTexture:GetTileCount() end
---@return int32
function URuntimeVirtualTexture:GetTileBorderSize() end
---@return int32
function URuntimeVirtualTexture:GetSize() end


---@class URuntimeVirtualTextureComponent : USceneComponent
---@field VirtualTexture URuntimeVirtualTexture
---@field bUseStreamingLowMipsInEditor boolean
---@field BoundsSourceActor AActor
URuntimeVirtualTextureComponent = {}

---@return FTransform
function URuntimeVirtualTextureComponent:GetVirtualTextureTransform() end


---@class URuntimeVirtualTextureStreamingProxy : UTexture2D
---@field Settings FVirtualTextureBuildSettings
---@field bSinglePhysicalSpace boolean
---@field BuildHash uint32
URuntimeVirtualTextureStreamingProxy = {}



---@class USCS_Node : UObject
---@field ComponentClass UClass
---@field ComponentTemplate UActorComponent
---@field CookedComponentInstancingData FBlueprintCookedComponentInstancingData
---@field AttachToName FName
---@field ParentComponentOrVariableName FName
---@field ParentComponentOwnerClassName FName
---@field bIsParentComponentNative boolean
---@field ChildNodes TArray<USCS_Node>
---@field MetaDataArray TArray<FBPVariableMetaDataEntry>
---@field VariableGuid FGuid
---@field InternalVariableName FName
USCS_Node = {}



---@class USaveGame : UObject
USaveGame = {}


---@class UScene : UObject
UScene = {}


---@class USceneCaptureComponent : USceneComponent
---@field PrimitiveRenderMode ESceneCapturePrimitiveRenderMode
---@field CaptureSource ESceneCaptureSource
---@field bCaptureEveryFrame boolean
---@field bCaptureOnMovement boolean
---@field bAlwaysPersistRenderingState boolean
---@field HiddenComponents TArray<TWeakObjectPtr<UPrimitiveComponent>>
---@field HiddenActors TArray<AActor>
---@field ShowOnlyComponents TArray<TWeakObjectPtr<UPrimitiveComponent>>
---@field ShowOnlyActors TArray<AActor>
---@field LODDistanceFactor float
---@field MaxViewDistanceOverride float
---@field CaptureSortPriority int32
---@field bUseRayTracingIfEnabled boolean
---@field ShowFlagSettings TArray<FEngineShowFlagsSetting>
---@field ProfilingEventName FString
USceneCaptureComponent = {}

---@param InComponent UPrimitiveComponent
function USceneCaptureComponent:ShowOnlyComponent(InComponent) end
---@param InActor AActor
---@param bIncludeFromChildActors boolean
function USceneCaptureComponent:ShowOnlyActorComponents(InActor, bIncludeFromChildActors) end
---@param NewCaptureSortPriority int32
function USceneCaptureComponent:SetCaptureSortPriority(NewCaptureSortPriority) end
---@param InComponent UPrimitiveComponent
function USceneCaptureComponent:RemoveShowOnlyComponent(InComponent) end
---@param InActor AActor
---@param bIncludeFromChildActors boolean
function USceneCaptureComponent:RemoveShowOnlyActorComponents(InActor, bIncludeFromChildActors) end
---@param InComponent UPrimitiveComponent
function USceneCaptureComponent:HideComponent(InComponent) end
---@param InActor AActor
---@param bIncludeFromChildActors boolean
function USceneCaptureComponent:HideActorComponents(InActor, bIncludeFromChildActors) end
function USceneCaptureComponent:ClearShowOnlyComponents() end
function USceneCaptureComponent:ClearHiddenComponents() end


---@class USceneCaptureComponent2D : USceneCaptureComponent
---@field ProjectionType ECameraProjectionMode::Type
---@field FOVAngle float
---@field OrthoWidth float
---@field TextureTarget UTextureRenderTarget2D
---@field CompositeMode ESceneCaptureCompositeMode
---@field PostProcessSettings FPostProcessSettings
---@field PostProcessBlendWeight float
---@field bOverride_CustomNearClippingPlane boolean
---@field CustomNearClippingPlane float
---@field bUseCustomProjectionMatrix boolean
---@field CustomProjectionMatrix FMatrix
---@field bEnableClipPlane boolean
---@field ClipPlaneBase FVector
---@field ClipPlaneNormal FVector
---@field bCameraCutThisFrame boolean
---@field bConsiderUnrenderedOpaquePixelAsFullyTranslucent boolean
---@field bDisableFlipCopyGLES boolean
USceneCaptureComponent2D = {}

function USceneCaptureComponent2D:CaptureScene() end
---@param InBlendableObject TScriptInterface<IBlendableInterface>
---@param InWeight float
function USceneCaptureComponent2D:AddOrUpdateBlendable(InBlendableObject, InWeight) end


---@class USceneCaptureComponentCube : USceneCaptureComponent
---@field TextureTarget UTextureRenderTargetCube
---@field bCaptureRotation boolean
---@field TextureTargetLeft UTextureRenderTargetCube
---@field TextureTargetRight UTextureRenderTargetCube
---@field TextureTargetODS UTextureRenderTarget2D
---@field IPD float
USceneCaptureComponentCube = {}

function USceneCaptureComponentCube:CaptureScene() end


---@class USceneComponent : UActorComponent
---@field PhysicsVolume TWeakObjectPtr<APhysicsVolume>
---@field AttachParent USceneComponent
---@field AttachSocketName FName
---@field AttachChildren TArray<USceneComponent>
---@field ClientAttachedChildren TArray<USceneComponent>
---@field RelativeLocation FVector
---@field RelativeRotation FRotator
---@field RelativeScale3D FVector
---@field ComponentVelocity FVector
---@field bComponentToWorldUpdated boolean
---@field bAbsoluteLocation boolean
---@field bAbsoluteRotation boolean
---@field bAbsoluteScale boolean
---@field bVisible boolean
---@field bShouldBeAttached boolean
---@field bShouldSnapLocationWhenAttached boolean
---@field bShouldSnapRotationWhenAttached boolean
---@field bShouldUpdatePhysicsVolume boolean
---@field bHiddenInGame boolean
---@field bBoundsChangeTriggersStreamingDataRebuild boolean
---@field bUseAttachParentBound boolean
---@field Mobility EComponentMobility::Type
---@field DetailMode EDetailMode
---@field PhysicsVolumeChangedDelegate FSceneComponentPhysicsVolumeChangedDelegate
USceneComponent = {}

---@param bPropagateToChildren boolean
function USceneComponent:ToggleVisibility(bPropagateToChildren) end
---@param InParent USceneComponent
---@param InSocketName FName
---@return boolean
function USceneComponent:SnapTo(InParent, InSocketName) end
---@param NewScale FVector
function USceneComponent:SetWorldScale3D(NewScale) end
---@param bNewVisibility boolean
---@param bPropagateToChildren boolean
function USceneComponent:SetVisibility(bNewVisibility, bPropagateToChildren) end
---@param bInShouldUpdatePhysicsVolume boolean
function USceneComponent:SetShouldUpdatePhysicsVolume(bInShouldUpdatePhysicsVolume) end
---@param NewScale3D FVector
function USceneComponent:SetRelativeScale3D(NewScale3D) end
---@param NewMobility EComponentMobility::Type
function USceneComponent:SetMobility(NewMobility) end
---@param NewHidden boolean
---@param bPropagateToChildren boolean
function USceneComponent:SetHiddenInGame(NewHidden, bPropagateToChildren) end
---@param bNewAbsoluteLocation boolean
---@param bNewAbsoluteRotation boolean
---@param bNewAbsoluteScale boolean
function USceneComponent:SetAbsolute(bNewAbsoluteLocation, bNewAbsoluteRotation, bNewAbsoluteScale) end
function USceneComponent:ResetRelativeTransform() end
---@param OldValue boolean
function USceneComponent:OnRep_Visibility(OldValue) end
function USceneComponent:OnRep_Transform() end
function USceneComponent:OnRep_AttachSocketName() end
function USceneComponent:OnRep_AttachParent() end
function USceneComponent:OnRep_AttachChildren() end
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetWorldTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetWorldRotation(NewRotation, bSweep, SweepHitResult, bTeleport) end
---@param NewLocation FVector
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetWorldLocationAndRotation(NewLocation, NewRotation, bSweep, SweepHitResult, bTeleport) end
---@param NewLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetWorldLocation(NewLocation, bSweep, SweepHitResult, bTeleport) end
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeRotation(NewRotation, bSweep, SweepHitResult, bTeleport) end
---@param NewLocation FVector
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeLocationAndRotation(NewLocation, NewRotation, bSweep, SweepHitResult, bTeleport) end
---@param NewLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_SetRelativeLocation(NewLocation, bSweep, SweepHitResult, bTeleport) end
---@return FTransform
function USceneComponent:K2_GetComponentToWorld() end
---@return FVector
function USceneComponent:K2_GetComponentScale() end
---@return FRotator
function USceneComponent:K2_GetComponentRotation() end
---@return FVector
function USceneComponent:K2_GetComponentLocation() end
---@param LocationRule EDetachmentRule
---@param RotationRule EDetachmentRule
---@param ScaleRule EDetachmentRule
---@param bCallModify boolean
function USceneComponent:K2_DetachFromComponent(LocationRule, RotationRule, ScaleRule, bCallModify) end
---@param Parent USceneComponent
---@param SocketName FName
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
---@param bWeldSimulatedBodies boolean
---@return boolean
function USceneComponent:K2_AttachToComponent(Parent, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies) end
---@param InParent USceneComponent
---@param InSocketName FName
---@param AttachType EAttachLocation::Type
---@param bWeldSimulatedBodies boolean
---@return boolean
function USceneComponent:K2_AttachTo(InParent, InSocketName, AttachType, bWeldSimulatedBodies) end
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddWorldTransform(DeltaTransform, bSweep, SweepHitResult, bTeleport) end
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddWorldRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddWorldOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddRelativeRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddRelativeLocation(DeltaLocation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddLocalTransform(DeltaTransform, bSweep, SweepHitResult, bTeleport) end
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddLocalRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult
---@param bTeleport boolean
function USceneComponent:K2_AddLocalOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end
---@return boolean
function USceneComponent:IsVisible() end
---@param BoneName FName
---@return boolean
function USceneComponent:IsSimulatingPhysics(BoneName) end
---@return boolean
function USceneComponent:IsAnySimulatingPhysics() end
---@return FVector
function USceneComponent:GetUpVector() end
---@param InSocketName FName
---@param TransformSpace ERelativeTransformSpace
---@return FTransform
function USceneComponent:GetSocketTransform(InSocketName, TransformSpace) end
---@param InSocketName FName
---@return FRotator
function USceneComponent:GetSocketRotation(InSocketName) end
---@param InSocketName FName
---@return FQuat
function USceneComponent:GetSocketQuaternion(InSocketName) end
---@param InSocketName FName
---@return FVector
function USceneComponent:GetSocketLocation(InSocketName) end
---@return boolean
function USceneComponent:GetShouldUpdatePhysicsVolume() end
---@return FVector
function USceneComponent:GetRightVector() end
---@return FTransform
function USceneComponent:GetRelativeTransform() end
---@return APhysicsVolume
function USceneComponent:GetPhysicsVolume() end
---@param Parents TArray<USceneComponent>
function USceneComponent:GetParentComponents(Parents) end
---@return int32
function USceneComponent:GetNumChildrenComponents() end
---@return FVector
function USceneComponent:GetForwardVector() end
---@return FVector
function USceneComponent:GetComponentVelocity() end
---@param bIncludeAllDescendants boolean
---@param Children TArray<USceneComponent>
function USceneComponent:GetChildrenComponents(bIncludeAllDescendants, Children) end
---@param ChildIndex int32
---@return USceneComponent
function USceneComponent:GetChildComponent(ChildIndex) end
---@return FName
function USceneComponent:GetAttachSocketName() end
---@return USceneComponent
function USceneComponent:GetAttachParent() end
---@return TArray<FName>
function USceneComponent:GetAllSocketNames() end
---@param InSocketName FName
---@return boolean
function USceneComponent:DoesSocketExist(InSocketName) end
---@param bMaintainWorldPosition boolean
---@param bCallModify boolean
function USceneComponent:DetachFromParent(bMaintainWorldPosition, bCallModify) end


---@class UScriptViewportClient : UObject
UScriptViewportClient = {}


---@class USelection : UObject
USelection = {}


---@class UShadowMapTexture2D : UTexture2D
---@field ShadowmapFlags EShadowMapFlags
UShadowMapTexture2D = {}



---@class UShapeComponent : UPrimitiveComponent
---@field ShapeBodySetup UBodySetup
---@field AreaClass TSubclassOf<UNavAreaBase>
---@field ShapeColor FColor
---@field bDrawOnlyIfSelected boolean
---@field bShouldCollideWhenPlacing boolean
---@field bDynamicObstacle boolean
UShapeComponent = {}



---@class USimpleConstructionScript : UObject
---@field RootNodes TArray<USCS_Node>
---@field AllNodes TArray<USCS_Node>
---@field DefaultSceneRootNode USCS_Node
USimpleConstructionScript = {}



---@class USimulatedClientNetConnection : UNetConnection
USimulatedClientNetConnection = {}


---@class USkeletalBodySetup : UBodySetup
---@field bSkipScaleFromAnimation boolean
---@field PhysicalAnimationData TArray<FPhysicalAnimationProfile>
USkeletalBodySetup = {}



---@class USkeletalMesh : UStreamableRenderAsset
---@field Skeleton USkeleton
---@field ImportedBounds FBoxSphereBounds
---@field ExtendedBounds FBoxSphereBounds
---@field PositiveBoundsExtension FVector
---@field NegativeBoundsExtension FVector
---@field Materials TArray<FSkeletalMaterial>
---@field SkelMirrorTable TArray<FBoneMirrorInfo>
---@field LODInfo TArray<FSkeletalMeshLODInfo>
---@field MinLOD FPerPlatformInt
---@field DisableBelowMinLodStripping FPerPlatformBool
---@field SkelMirrorAxis EAxis::Type
---@field SkelMirrorFlipAxis EAxis::Type
---@field bUseFullPrecisionUVs boolean
---@field bUseHighPrecisionTangentBasis boolean
---@field bHasBeenSimplified boolean
---@field bHasVertexColors boolean
---@field bEnablePerPolyCollision boolean
---@field BodySetup UBodySetup
---@field PhysicsAsset UPhysicsAsset
---@field ShadowPhysicsAsset UPhysicsAsset
---@field NodeMappingData TArray<UNodeMappingContainer>
---@field MorphTargets TArray<UMorphTarget>
---@field PostProcessAnimBlueprint TSubclassOf<UAnimInstance>
---@field MeshClothingAssets TArray<UClothingAssetBase>
---@field SamplingInfo FSkeletalMeshSamplingInfo
---@field AssetUserData TArray<UAssetUserData>
---@field Sockets TArray<USkeletalMeshSocket>
---@field SkinWeightProfiles TArray<FSkinWeightProfileInfo>
USkeletalMesh = {}

---@param InLODSettings USkeletalMeshLODSettings
function USkeletalMesh:SetLODSettings(InLODSettings) end
---@return int32
function USkeletalMesh:NumSockets() end
---@return TArray<FString>
function USkeletalMesh:K2_GetAllMorphTargetNames() end
---@param InSectionIndex int32
---@param bCheckCorrespondingSections boolean
---@return boolean
function USkeletalMesh:IsSectionUsingCloth(InSectionIndex, bCheckCorrespondingSections) end
---@param Index int32
---@return USkeletalMeshSocket
function USkeletalMesh:GetSocketByIndex(Index) end
---@param SourceAsset UBlueprint
---@return UNodeMappingContainer
function USkeletalMesh:GetNodeMappingContainer(SourceAsset) end
---@return FBoxSphereBounds
function USkeletalMesh:GetImportedBounds() end
---@return FBoxSphereBounds
function USkeletalMesh:GetBounds() end
---@param InSocketName FName
---@param OutTransform FTransform
---@param OutBoneIndex int32
---@param OutIndex int32
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocketInfo(InSocketName, OutTransform, OutBoneIndex, OutIndex) end
---@param InSocketName FName
---@param OutIndex int32
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocketAndIndex(InSocketName, OutIndex) end
---@param InSocketName FName
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocket(InSocketName) end


---@class USkeletalMeshComponent : USkinnedMeshComponent
---@field AnimBlueprintGeneratedClass UClass
---@field AnimClass TSubclassOf<UAnimInstance>
---@field AnimScriptInstance UAnimInstance
---@field PostProcessAnimInstance UAnimInstance
---@field AnimationData FSingleAnimationPlayData
---@field RootBoneTranslation FVector
---@field LineCheckBoundsScale FVector
---@field LinkedInstances TArray<UAnimInstance>
---@field CachedBoneSpaceTransforms TArray<FTransform>
---@field CachedComponentSpaceTransforms TArray<FTransform>
---@field GlobalAnimRateScale float
---@field KinematicBonesUpdateType EKinematicBonesUpdateToPhysics::Type
---@field PhysicsTransformUpdateMode EPhysicsTransformUpdateMode::Type
---@field AnimationMode EAnimationMode::Type
---@field bDisablePostProcessBlueprint boolean
---@field bUpdateOverlapsOnAnimationFinalize boolean
---@field bHasValidBodies boolean
---@field bBlendPhysics boolean
---@field bEnablePhysicsOnDedicatedServer boolean
---@field bUpdateJointsFromAnimation boolean
---@field bDisableClothSimulation boolean
---@field bDisableRigidBodyAnimNode boolean
---@field bAllowAnimCurveEvaluation boolean
---@field bDisableAnimCurves boolean
---@field bCollideWithEnvironment boolean
---@field bCollideWithAttachedChildren boolean
---@field bLocalSpaceSimulation boolean
---@field bResetAfterTeleport boolean
---@field bDeferKinematicBoneUpdate boolean
---@field bNoSkeletonUpdate boolean
---@field bPauseAnims boolean
---@field bUseRefPoseOnInitAnim boolean
---@field bEnablePerPolyCollision boolean
---@field bForceRefpose boolean
---@field bOnlyAllowAutonomousTickPose boolean
---@field bIsAutonomousTickPose boolean
---@field bOldForceRefPose boolean
---@field bShowPrePhysBones boolean
---@field bRequiredBonesUpToDate boolean
---@field bAnimTreeInitialised boolean
---@field bIncludeComponentLocationIntoBounds boolean
---@field bEnableLineCheckWithBounds boolean
---@field bUseBendingElements boolean
---@field bUseTetrahedralConstraints boolean
---@field bUseThinShellVolumeConstraints boolean
---@field bUseSelfCollisions boolean
---@field bUseContinuousCollisionDetection boolean
---@field bPropagateCurvesToSlaves boolean
---@field bSkipKinematicUpdateWhenInterpolating boolean
---@field bSkipBoundsUpdateWhenInterpolating boolean
---@field bNeedsQueuedAnimEventsDispatched boolean
---@field CachedAnimCurveUidVersion uint16
---@field MassMode EClothMassMode
---@field UniformMass float
---@field TotalMass float
---@field Density float
---@field MinPerParticleMass float
---@field ClothBlendWeight float
---@field EdgeStiffness float
---@field BendingStiffness float
---@field AreaStiffness float
---@field VolumeStiffness float
---@field StrainLimitingStiffness float
---@field ShapeTargetStiffness float
---@field DisallowedAnimCurves TArray<FName>
---@field BodySetup UBodySetup
---@field OnConstraintBroken FSkeletalMeshComponentOnConstraintBroken
---@field ClothingSimulationFactory TSubclassOf<UClothingSimulationFactory>
---@field TeleportDistanceThreshold float
---@field TeleportRotationThreshold float
---@field LastPoseTickFrame uint32
---@field ClothingInteractor UClothingSimulationInteractor
---@field OnAnimInitialized FSkeletalMeshComponentOnAnimInitialized
USkeletalMeshComponent = {}

---@param InClass TSubclassOf<UAnimInstance>
function USkeletalMeshComponent:UnlinkAnimClassLayers(InClass) end
---@param bRestoreSimulationSpace boolean
function USkeletalMeshComponent:UnbindClothFromMasterPoseComponent(bRestoreSimulationSpace) end
function USkeletalMeshComponent:ToggleDisablePostProcessBlueprint() end
---@param ParentBoneName FName
function USkeletalMeshComponent:TermBodiesBelow(ParentBoneName) end
function USkeletalMeshComponent:SuspendClothingSimulation() end
function USkeletalMeshComponent:Stop() end
---@param Snapshot FPoseSnapshot
function USkeletalMeshComponent:SnapshotPose(Snapshot) end
---@param NewUpdateState boolean
function USkeletalMeshComponent:SetUpdateAnimationInEditor(NewUpdateState) end
---@param Threshold float
function USkeletalMeshComponent:SetTeleportRotationThreshold(Threshold) end
---@param Threshold float
function USkeletalMeshComponent:SetTeleportDistanceThreshold(Threshold) end
---@param InPos float
---@param bFireNotifies boolean
function USkeletalMeshComponent:SetPosition(InPos, bFireNotifies) end
---@param Rate float
function USkeletalMeshComponent:SetPlayRate(Rate) end
---@param PhysicsBlendWeight float
function USkeletalMeshComponent:SetPhysicsBlendWeight(PhysicsBlendWeight) end
---@param bNewNotifyRigidBodyCollision boolean
---@param BoneName FName
---@param bIncludeSelf boolean
function USkeletalMeshComponent:SetNotifyRigidBodyCollisionBelow(bNewNotifyRigidBodyCollision, BoneName, bIncludeSelf) end
---@param MorphTargetName FName
---@param Value float
---@param bRemoveZeroWeight boolean
function USkeletalMeshComponent:SetMorphTarget(MorphTargetName, Value, bRemoveZeroWeight) end
---@param bNewBlendPhysics boolean
function USkeletalMeshComponent:SetEnablePhysicsBlending(bNewBlendPhysics) end
---@param bEnableGravity boolean
---@param BoneName FName
---@param bIncludeSelf boolean
function USkeletalMeshComponent:SetEnableGravityOnAllBodiesBelow(bEnableGravity, BoneName, bIncludeSelf) end
---@param bEnableGravity boolean
---@param BoneName FName
function USkeletalMeshComponent:SetEnableBodyGravity(bEnableGravity, BoneName) end
---@param bInDisablePostProcess boolean
function USkeletalMeshComponent:SetDisablePostProcessBlueprint(bInDisablePostProcess) end
---@param bInDisableAnimCurves boolean
function USkeletalMeshComponent:SetDisableAnimCurves(bInDisableAnimCurves) end
---@param ProfileName FName
---@param bDefaultIfNotFound boolean
function USkeletalMeshComponent:SetConstraintProfileForAll(ProfileName, bDefaultIfNotFound) end
---@param JointName FName
---@param ProfileName FName
---@param bDefaultIfNotFound boolean
function USkeletalMeshComponent:SetConstraintProfile(JointName, ProfileName, bDefaultIfNotFound) end
---@param Scale float
function USkeletalMeshComponent:SetClothMaxDistanceScale(Scale) end
---@param bNewNotifyRigidBodyCollision boolean
---@param BoneName FName
function USkeletalMeshComponent:SetBodyNotifyRigidBodyCollision(bNewNotifyRigidBodyCollision, BoneName) end
---@param NewClass UClass
function USkeletalMeshComponent:SetAnimClass(NewClass) end
---@param InAnimationMode EAnimationMode::Type
function USkeletalMeshComponent:SetAnimationMode(InAnimationMode) end
---@param NewAnimToPlay UAnimationAsset
function USkeletalMeshComponent:SetAnimation(NewAnimToPlay) end
---@param InBoneName FName
---@param Swing1LimitAngle float
---@param TwistLimitAngle float
---@param Swing2LimitAngle float
function USkeletalMeshComponent:SetAngularLimits(InBoneName, Swing1LimitAngle, TwistLimitAngle, Swing2LimitAngle) end
---@param bInAllow boolean
---@param bReinitAnim boolean
function USkeletalMeshComponent:SetAllowRigidBodyAnimNode(bInAllow, bReinitAnim) end
---@param List TArray<FName>
---@param bAllow boolean
function USkeletalMeshComponent:SetAllowedAnimCurvesEvaluation(List, bAllow) end
---@param bInAllow boolean
function USkeletalMeshComponent:SetAllowAnimCurveEvaluation(bInAllow) end
---@param bEnableSwingDrive boolean
---@param bEnableTwistDrive boolean
---@param bSkipCustomPhysicsType boolean
function USkeletalMeshComponent:SetAllMotorsAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive, bSkipCustomPhysicsType) end
---@param bEnableSwingDrive boolean
---@param bEnableTwistDrive boolean
---@param bSkipCustomPhysicsType boolean
function USkeletalMeshComponent:SetAllMotorsAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive, bSkipCustomPhysicsType) end
---@param InSpring float
---@param InDamping float
---@param InForceLimit float
---@param bSkipCustomPhysicsType boolean
function USkeletalMeshComponent:SetAllMotorsAngularDriveParams(InSpring, InDamping, InForceLimit, bSkipCustomPhysicsType) end
---@param bNewSimulate boolean
function USkeletalMeshComponent:SetAllBodiesSimulatePhysics(bNewSimulate) end
---@param PhysicsBlendWeight float
---@param bSkipCustomPhysicsType boolean
function USkeletalMeshComponent:SetAllBodiesPhysicsBlendWeight(PhysicsBlendWeight, bSkipCustomPhysicsType) end
---@param InBoneName FName
---@param bNewSimulate boolean
---@param bIncludeSelf boolean
function USkeletalMeshComponent:SetAllBodiesBelowSimulatePhysics(InBoneName, bNewSimulate, bIncludeSelf) end
---@param InBoneName FName
---@param PhysicsBlendWeight float
---@param bSkipCustomPhysicsType boolean
---@param bIncludeSelf boolean
function USkeletalMeshComponent:SetAllBodiesBelowPhysicsBlendWeight(InBoneName, PhysicsBlendWeight, bSkipCustomPhysicsType, bIncludeSelf) end
function USkeletalMeshComponent:ResumeClothingSimulation() end
function USkeletalMeshComponent:ResetClothTeleportMode() end
---@param InTeleportType ETeleportType
function USkeletalMeshComponent:ResetAnimInstanceDynamics(InTeleportType) end
function USkeletalMeshComponent:ResetAllowedAnimCurveEvaluation() end
function USkeletalMeshComponent:ResetAllBodiesSimulatePhysics() end
---@param NewAnimToPlay UAnimationAsset
---@param bLooping boolean
function USkeletalMeshComponent:PlayAnimation(NewAnimToPlay, bLooping) end
---@param bLooping boolean
function USkeletalMeshComponent:Play(bLooping) end
---@param InAnimToPlay UAnimationAsset
---@param bIsLooping boolean
---@param bIsPlaying boolean
---@param Position float
---@param PlayRate float
function USkeletalMeshComponent:OverrideAnimationData(InAnimToPlay, bIsLooping, bIsPlaying, Position, PlayRate) end
---@param InTag FName
---@param InClass TSubclassOf<UAnimInstance>
function USkeletalMeshComponent:LinkAnimGraphByTag(InTag, InClass) end
---@param InClass TSubclassOf<UAnimInstance>
function USkeletalMeshComponent:LinkAnimClassLayers(InClass) end
---@param WorldPosition FVector
---@param ClosestWorldPosition FVector
---@param Normal FVector
---@param BoneName FName
---@param Distance float
---@return boolean
function USkeletalMeshComponent:K2_GetClosestPointOnPhysicsAsset(WorldPosition, ClosestWorldPosition, Normal, BoneName, Distance) end
---@return boolean
function USkeletalMeshComponent:IsPlaying() end
---@return boolean
function USkeletalMeshComponent:IsClothingSimulationSuspended() end
---@param BoneName FName
---@return boolean
function USkeletalMeshComponent:IsBodyGravityEnabled(BoneName) end
---@return boolean
function USkeletalMeshComponent:HasValidAnimationInstance() end
---@return float
function USkeletalMeshComponent:GetTeleportRotationThreshold() end
---@return float
function USkeletalMeshComponent:GetTeleportDistanceThreshold() end
---@return FVector
function USkeletalMeshComponent:GetSkeletalCenterOfMass() end
---@return UAnimInstance
function USkeletalMeshComponent:GetPostProcessInstance() end
---@return float
function USkeletalMeshComponent:GetPosition() end
---@return float
function USkeletalMeshComponent:GetPlayRate() end
---@param MorphTargetName FName
---@return float
function USkeletalMeshComponent:GetMorphTarget(MorphTargetName) end
---@param InGroup FName
---@return UAnimInstance
function USkeletalMeshComponent:GetLinkedAnimLayerInstanceByGroup(InGroup) end
---@param InClass TSubclassOf<UAnimInstance>
---@return UAnimInstance
function USkeletalMeshComponent:GetLinkedAnimLayerInstanceByClass(InClass) end
---@param InTag FName
---@param OutLinkedInstances TArray<UAnimInstance>
function USkeletalMeshComponent:GetLinkedAnimGraphInstancesByTag(InTag, OutLinkedInstances) end
---@param InTag FName
---@return UAnimInstance
function USkeletalMeshComponent:GetLinkedAnimGraphInstanceByTag(InTag) end
---@return boolean
function USkeletalMeshComponent:GetDisablePostProcessBlueprint() end
---@return boolean
function USkeletalMeshComponent:GetDisableAnimCurves() end
---@param InBoneName FName
---@param Swing1Angle float
---@param TwistAngle float
---@param Swing2Angle float
function USkeletalMeshComponent:GetCurrentJointAngles(InBoneName, Swing1Angle, TwistAngle, Swing2Angle) end
---@return float
function USkeletalMeshComponent:GetClothMaxDistanceScale() end
---@return UClothingSimulationInteractor
function USkeletalMeshComponent:GetClothingSimulationInteractor() end
---@param BoneName FName
---@param bScaleMass boolean
---@return float
function USkeletalMeshComponent:GetBoneMass(BoneName, bScaleMass) end
---@return UAnimInstance
function USkeletalMeshComponent:GetAnimInstance() end
---@return UClass
function USkeletalMeshComponent:GetAnimClass() end
---@return EAnimationMode::Type
function USkeletalMeshComponent:GetAnimationMode() end
---@return boolean
function USkeletalMeshComponent:GetAllowRigidBodyAnimNode() end
---@return boolean
function USkeletalMeshComponent:GetAllowedAnimCurveEvaluate() end
function USkeletalMeshComponent:ForceClothNextUpdateTeleportAndReset() end
function USkeletalMeshComponent:ForceClothNextUpdateTeleport() end
---@param ConstraintIndex int32
---@return FName
function USkeletalMeshComponent:FindConstraintBoneName(ConstraintIndex) end
function USkeletalMeshComponent:ClearMorphTargets() end
---@param Impulse FVector
---@param HitLocation FVector
---@param InBoneName FName
function USkeletalMeshComponent:BreakConstraint(Impulse, HitLocation, InBoneName) end
function USkeletalMeshComponent:BindClothToMasterPoseComponent() end
---@param NameOfCurve FName
---@param bAllow boolean
function USkeletalMeshComponent:AllowAnimCurveEvaluation(NameOfCurve, bAllow) end
---@param Impulse FVector
---@param BoneName FName
---@param bVelChange boolean
---@param bIncludeSelf boolean
function USkeletalMeshComponent:AddImpulseToAllBodiesBelow(Impulse, BoneName, bVelChange, bIncludeSelf) end
---@param Force FVector
---@param BoneName FName
---@param bAccelChange boolean
---@param bIncludeSelf boolean
function USkeletalMeshComponent:AddForceToAllBodiesBelow(Force, BoneName, bAccelChange, bIncludeSelf) end
---@param InBoneName FName
---@param AddPhysicsBlendWeight float
---@param bSkipCustomPhysicsType boolean
function USkeletalMeshComponent:AccumulateAllBodiesBelowPhysicsBlendWeight(InBoneName, AddPhysicsBlendWeight, bSkipCustomPhysicsType) end


---@class USkeletalMeshEditorData : UObject
USkeletalMeshEditorData = {}


---@class USkeletalMeshLODSettings : UDataAsset
---@field MinLOD FPerPlatformInt
---@field DisableBelowMinLodStripping FPerPlatformBool
---@field bSupportLODStreaming FPerPlatformBool
---@field MaxNumStreamedLODs FPerPlatformInt
---@field MaxNumOptionalLODs FPerPlatformInt
---@field LODGroups TArray<FSkeletalMeshLODGroupSettings>
USkeletalMeshLODSettings = {}



---@class USkeletalMeshSimplificationSettings : UDeveloperSettings
---@field SkeletalMeshReductionModuleName FName
USkeletalMeshSimplificationSettings = {}



---@class USkeletalMeshSocket : UObject
---@field SocketName FName
---@field BoneName FName
---@field RelativeLocation FVector
---@field RelativeRotation FRotator
---@field RelativeScale FVector
---@field bForceAlwaysAnimated boolean
USkeletalMeshSocket = {}

---@param SkelComp USkeletalMeshComponent
---@param WorldLocation FVector
---@param WorldNormal FVector
function USkeletalMeshSocket:InitializeSocketFromLocation(SkelComp, WorldLocation, WorldNormal) end
---@param SkelComp USkeletalMeshComponent
---@return FVector
function USkeletalMeshSocket:GetSocketLocation(SkelComp) end


---@class USkeleton : UObject
---@field BoneTree TArray<FBoneNode>
---@field RefLocalPoses TArray<FTransform>
---@field VirtualBoneGuid FGuid
---@field VirtualBones TArray<FVirtualBone>
---@field Sockets TArray<USkeletalMeshSocket>
---@field SmartNames FSmartNameContainer
---@field BlendProfiles TArray<UBlendProfile>
---@field SlotGroups TArray<FAnimSlotGroup>
---@field AssetUserData TArray<UAssetUserData>
USkeleton = {}



---@class USkinnedMeshComponent : UMeshComponent
---@field SkeletalMesh USkeletalMesh
---@field MasterPoseComponent TWeakObjectPtr<USkinnedMeshComponent>
---@field SkinCacheUsage TArray<ESkinCacheUsage>
---@field PhysicsAssetOverride UPhysicsAsset
---@field ForcedLodModel int32
---@field MinLodModel int32
---@field StreamingDistanceMultiplier float
---@field LODInfo TArray<FSkelMeshComponentLODInfo>
---@field VisibilityBasedAnimTickOption EVisibilityBasedAnimTickOption
---@field bOverrideMinLOD boolean
---@field bUseBoundsFromMasterPoseComponent boolean
---@field bForceWireframe boolean
---@field bDisplayBones boolean
---@field bDisableMorphTarget boolean
---@field bHideSkin boolean
---@field bPerBoneMotionBlur boolean
---@field bComponentUseFixedSkelBounds boolean
---@field bConsiderAllBodiesForBounds boolean
---@field bSyncAttachParentLOD boolean
---@field bCanHighlightSelectedSections boolean
---@field bRecentlyRendered boolean
---@field bCastCapsuleDirectShadow boolean
---@field bCastCapsuleIndirectShadow boolean
---@field bCPUSkinning boolean
---@field bEnableUpdateRateOptimizations boolean
---@field bDisplayDebugUpdateRateOptimizations boolean
---@field bRenderStatic boolean
---@field bIgnoreMasterPoseComponentLOD boolean
---@field bCachedLocalBoundsUpToDate boolean
---@field bForceMeshObjectUpdate boolean
---@field CapsuleIndirectShadowMinVisibility float
---@field CachedWorldSpaceBounds FBoxSphereBounds
---@field CachedWorldToLocalTransform FMatrix
USkinnedMeshComponent = {}

---@param InProfileName FName
function USkinnedMeshComponent:UnloadSkinWeightProfile(InProfileName) end
---@param BoneName FName
function USkinnedMeshComponent:UnHideBoneByName(BoneName) end
---@param BoneName FName
---@param InPosition FVector
---@param InRotation FRotator
---@param OutPosition FVector
---@param OutRotation FRotator
function USkinnedMeshComponent:TransformToBoneSpace(BoneName, InPosition, InRotation, OutPosition, OutRotation) end
---@param BoneName FName
---@param InPosition FVector
---@param InRotation FRotator
---@param OutPosition FVector
---@param OutRotation FRotator
function USkinnedMeshComponent:TransformFromBoneSpace(BoneName, InPosition, InRotation, OutPosition, OutRotation) end
---@param MaterialID int32
---@param SectionIndex int32
---@param bShow boolean
---@param LODIndex int32
function USkinnedMeshComponent:ShowMaterialSection(MaterialID, SectionIndex, bShow, LODIndex) end
---@param LODIndex int32
function USkinnedMeshComponent:ShowAllMaterialSections(LODIndex) end
---@param LODIndex int32
---@param VertexColors TArray<FLinearColor>
function USkinnedMeshComponent:SetVertexColorOverride_LinearColor(LODIndex, VertexColors) end
---@param InProfileName FName
---@return boolean
function USkinnedMeshComponent:SetSkinWeightProfile(InProfileName) end
---@param LODIndex int32
---@param SkinWeights TArray<FSkelMeshSkinWeightInfo>
function USkinnedMeshComponent:SetSkinWeightOverride(LODIndex, SkinWeights) end
---@param NewMesh USkeletalMesh
---@param bReinitPose boolean
function USkinnedMeshComponent:SetSkeletalMesh(NewMesh, bReinitPose) end
---@param bNewValue boolean
function USkinnedMeshComponent:SetRenderStatic(bNewValue) end
---@param NewPhysicsAsset UPhysicsAsset
---@param bForceReInit boolean
function USkinnedMeshComponent:SetPhysicsAsset(NewPhysicsAsset, bForceReInit) end
---@param InNewMinLOD int32
function USkinnedMeshComponent:SetMinLOD(InNewMinLOD) end
---@param NewMasterBoneComponent USkinnedMeshComponent
---@param bForceUpdate boolean
function USkinnedMeshComponent:SetMasterPoseComponent(NewMasterBoneComponent, bForceUpdate) end
---@param InNewForcedLOD int32
function USkinnedMeshComponent:SetForcedLOD(InNewForcedLOD) end
---@param bNewValue boolean
function USkinnedMeshComponent:SetCastCapsuleIndirectShadow(bNewValue) end
---@param bNewValue boolean
function USkinnedMeshComponent:SetCastCapsuleDirectShadow(bNewValue) end
---@param NewValue float
function USkinnedMeshComponent:SetCapsuleIndirectShadowMinVisibility(NewValue) end
---@return boolean
function USkinnedMeshComponent:IsUsingSkinWeightProfile() end
---@param MaterialID int32
---@param LODIndex int32
---@return boolean
function USkinnedMeshComponent:IsMaterialSectionShown(MaterialID, LODIndex) end
---@param BoneName FName
---@return boolean
function USkinnedMeshComponent:IsBoneHiddenByName(BoneName) end
---@param BoneName FName
---@param PhysBodyOption EPhysBodyOp
function USkinnedMeshComponent:HideBoneByName(BoneName, PhysBodyOption) end
---@param BoneName FName
---@param OutTwistAngle float
---@param OutSwingAngle float
---@return boolean
function USkinnedMeshComponent:GetTwistAndSwingAngleOfDeltaRotationFromRefPose(BoneName, OutTwistAngle, OutSwingAngle) end
---@param InSocketName FName
---@return FName
function USkinnedMeshComponent:GetSocketBoneName(InSocketName) end
---@param BoneIndex int32
---@return FVector
function USkinnedMeshComponent:GetRefPosePosition(BoneIndex) end
---@param BoneName FName
---@return FName
function USkinnedMeshComponent:GetParentBone(BoneName) end
---@return int32
function USkinnedMeshComponent:GetNumLODs() end
---@return int32
function USkinnedMeshComponent:GetNumBones() end
---@return int32
function USkinnedMeshComponent:GetForcedLOD() end
---@param BoneName FName
---@param BaseName FName
---@return FTransform
function USkinnedMeshComponent:GetDeltaTransformFromRefPose(BoneName, BaseName) end
---@return FName
function USkinnedMeshComponent:GetCurrentSkinWeightProfileName() end
---@param BoneIndex int32
---@return FName
function USkinnedMeshComponent:GetBoneName(BoneIndex) end
---@param BoneName FName
---@return int32
function USkinnedMeshComponent:GetBoneIndex(BoneName) end
---@param TestLocation FVector
---@param BoneLocation FVector
---@param IgnoreScale float
---@param bRequirePhysicsAsset boolean
---@return FName
function USkinnedMeshComponent:FindClosestBone_K2(TestLocation, BoneLocation, IgnoreScale, bRequirePhysicsAsset) end
---@param LODIndex int32
function USkinnedMeshComponent:ClearVertexColorOverride(LODIndex) end
function USkinnedMeshComponent:ClearSkinWeightProfile() end
---@param LODIndex int32
function USkinnedMeshComponent:ClearSkinWeightOverride(LODIndex) end
---@param BoneName FName
---@param ParentBoneName FName
---@return boolean
function USkinnedMeshComponent:BoneIsChildOf(BoneName, ParentBoneName) end


---@class USkyAtmosphereComponent : USceneComponent
---@field TransformMode ESkyAtmosphereTransformMode
---@field BottomRadius float
---@field GroundAlbedo FColor
---@field AtmosphereHeight float
---@field MultiScatteringFactor float
---@field RayleighScatteringScale float
---@field RayleighScattering FLinearColor
---@field RayleighExponentialDistribution float
---@field MieScatteringScale float
---@field MieScattering FLinearColor
---@field MieAbsorptionScale float
---@field MieAbsorption FLinearColor
---@field MieAnisotropy float
---@field MieExponentialDistribution float
---@field OtherAbsorptionScale float
---@field OtherAbsorption FLinearColor
---@field OtherTentDistribution FTentDistribution
---@field SkyLuminanceFactor FLinearColor
---@field AerialPespectiveViewDistanceScale float
---@field HeightFogContribution float
---@field TransmittanceMinLightElevationAngle float
---@field bStaticLightingBuiltGUID FGuid
USkyAtmosphereComponent = {}

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetSkyLuminanceFactor(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetRayleighScatteringScale(NewValue) end
---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetRayleighScattering(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetRayleighExponentialDistribution(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetOtherAbsorptionScale(NewValue) end
---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetOtherAbsorption(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetMieScatteringScale(NewValue) end
---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetMieScattering(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetMieExponentialDistribution(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetMieAnisotropy(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetMieAbsorptionScale(NewValue) end
---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetMieAbsorption(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetHeightFogContribution(NewValue) end
---@param NewValue float
function USkyAtmosphereComponent:SetAerialPespectiveViewDistanceScale(NewValue) end
---@param AtmosphereLightIndex int32
---@param LightDirection FVector
function USkyAtmosphereComponent:OverrideAtmosphereLightDirection(AtmosphereLightIndex, LightDirection) end


---@class USkyLightComponent : ULightComponentBase
---@field SourceType ESkyLightSourceType
---@field Cubemap UTextureCube
---@field SourceCubemapAngle float
---@field CubemapResolution int32
---@field SkyDistanceThreshold float
---@field bCaptureEmissiveOnly boolean
---@field bLowerHemisphereIsBlack boolean
---@field LowerHemisphereColor FLinearColor
---@field OcclusionMaxDistance float
---@field Contrast float
---@field OcclusionExponent float
---@field MinOcclusion float
---@field OcclusionTint FColor
---@field OcclusionCombineMode EOcclusionCombineMode
---@field BlendDestinationCubemap UTextureCube
USkyLightComponent = {}

---@param NewIntensity float
function USkyLightComponent:SetVolumetricScatteringIntensity(NewIntensity) end
---@param InTint FColor
function USkyLightComponent:SetOcclusionTint(InTint) end
---@param InOcclusionExponent float
function USkyLightComponent:SetOcclusionExponent(InOcclusionExponent) end
---@param InOcclusionContrast float
function USkyLightComponent:SetOcclusionContrast(InOcclusionContrast) end
---@param InMinOcclusion float
function USkyLightComponent:SetMinOcclusion(InMinOcclusion) end
---@param InLowerHemisphereColor FLinearColor
function USkyLightComponent:SetLowerHemisphereColor(InLowerHemisphereColor) end
---@param NewLightColor FLinearColor
function USkyLightComponent:SetLightColor(NewLightColor) end
---@param NewIntensity float
function USkyLightComponent:SetIntensity(NewIntensity) end
---@param NewIntensity float
function USkyLightComponent:SetIndirectLightingIntensity(NewIntensity) end
---@param SourceCubemap UTextureCube
---@param DestinationCubemap UTextureCube
---@param InBlendFraction float
function USkyLightComponent:SetCubemapBlend(SourceCubemap, DestinationCubemap, InBlendFraction) end
---@param NewCubemap UTextureCube
function USkyLightComponent:SetCubemap(NewCubemap) end
function USkyLightComponent:RecaptureSky() end


---@class USlateBrushAsset : UObject
---@field Brush FSlateBrush
USlateBrushAsset = {}



---@class USmokeTestCommandlet : UCommandlet
USmokeTestCommandlet = {}


---@class USoundAttenuation : UObject
---@field Attenuation FSoundAttenuationSettings
USoundAttenuation = {}



---@class USoundBase : UObject
---@field SoundClassObject USoundClass
---@field bDebug boolean
---@field bOverrideConcurrency boolean
---@field bOutputToBusOnly boolean
---@field bHasDelayNode boolean
---@field bHasConcatenatorNode boolean
---@field bBypassVolumeScaleForPriority boolean
---@field VirtualizationMode EVirtualizationMode
---@field ConcurrencySet TSet<USoundConcurrency>
---@field ConcurrencyOverrides FSoundConcurrencySettings
---@field Duration float
---@field MaxDistance float
---@field TotalSamples float
---@field Priority float
---@field AttenuationSettings USoundAttenuation
---@field Modulation FSoundModulation
---@field SoundSubmixObject USoundSubmixBase
---@field SoundSubmixSends TArray<FSoundSubmixSendInfo>
---@field SourceEffectChain USoundEffectSourcePresetChain
---@field BusSends TArray<FSoundSourceBusSendInfo>
---@field PreEffectBusSends TArray<FSoundSourceBusSendInfo>
USoundBase = {}



---@class USoundClass : UObject
---@field Properties FSoundClassProperties
---@field ChildClasses TArray<USoundClass>
---@field PassiveSoundMixModifiers TArray<FPassiveSoundMixModifier>
---@field Modulation FSoundModulation
---@field ParentClass USoundClass
USoundClass = {}



---@class USoundConcurrency : UObject
---@field Concurrency FSoundConcurrencySettings
USoundConcurrency = {}



---@class USoundCue : USoundBase
---@field bPrimeOnLoad boolean
---@field FirstNode USoundNode
---@field VolumeMultiplier float
---@field PitchMultiplier float
---@field AttenuationOverrides FSoundAttenuationSettings
---@field SubtitlePriority float
---@field bOverrideAttenuation boolean
---@field bExcludeFromRandomNodeBranchCulling boolean
---@field CookedQualityIndex int32
---@field bHasPlayWhenSilent boolean
USoundCue = {}



---@class USoundEffectPreset : UObject
USoundEffectPreset = {}


---@class USoundEffectSourcePreset : USoundEffectPreset
USoundEffectSourcePreset = {}


---@class USoundEffectSourcePresetChain : UObject
---@field Chain TArray<FSourceEffectChainEntry>
---@field bPlayEffectChainTails boolean
USoundEffectSourcePresetChain = {}



---@class USoundEffectSubmixPreset : USoundEffectPreset
USoundEffectSubmixPreset = {}


---@class USoundGroups : UObject
---@field SoundGroupProfiles TArray<FSoundGroup>
USoundGroups = {}



---@class USoundMix : UObject
---@field bApplyEQ boolean
---@field EQPriority float
---@field EQSettings FAudioEQEffect
---@field SoundClassEffects TArray<FSoundClassAdjuster>
---@field InitialDelay float
---@field FadeInTime float
---@field Duration float
---@field FadeOutTime float
USoundMix = {}



---@class USoundNode : UObject
---@field ChildNodes TArray<USoundNode>
USoundNode = {}



---@class USoundNodeAssetReferencer : USoundNode
USoundNodeAssetReferencer = {}


---@class USoundNodeAttenuation : USoundNode
---@field AttenuationSettings USoundAttenuation
---@field AttenuationOverrides FSoundAttenuationSettings
---@field bOverrideAttenuation boolean
USoundNodeAttenuation = {}



---@class USoundNodeBranch : USoundNode
---@field BoolParameterName FName
USoundNodeBranch = {}



---@class USoundNodeConcatenator : USoundNode
---@field InputVolume TArray<float>
USoundNodeConcatenator = {}



---@class USoundNodeDelay : USoundNode
---@field DelayMin float
---@field DelayMax float
USoundNodeDelay = {}



---@class USoundNodeDialoguePlayer : USoundNode
---@field DialogueWaveParameter FDialogueWaveParameter
---@field bLooping boolean
USoundNodeDialoguePlayer = {}



---@class USoundNodeDistanceCrossFade : USoundNode
---@field CrossFadeInput TArray<FDistanceDatum>
USoundNodeDistanceCrossFade = {}



---@class USoundNodeDoppler : USoundNode
---@field DopplerIntensity float
---@field bUseSmoothing boolean
---@field SmoothingInterpSpeed float
USoundNodeDoppler = {}



---@class USoundNodeEnveloper : USoundNode
---@field LoopStart float
---@field LoopEnd float
---@field DurationAfterLoop float
---@field LoopCount int32
---@field bLoopIndefinitely boolean
---@field bLoop boolean
---@field VolumeInterpCurve UDistributionFloatConstantCurve
---@field PitchInterpCurve UDistributionFloatConstantCurve
---@field VolumeCurve FRuntimeFloatCurve
---@field PitchCurve FRuntimeFloatCurve
---@field PitchMin float
---@field PitchMax float
---@field VolumeMin float
---@field VolumeMax float
USoundNodeEnveloper = {}



---@class USoundNodeGroupControl : USoundNode
---@field GroupSizes TArray<int32>
USoundNodeGroupControl = {}



---@class USoundNodeLooping : USoundNode
---@field LoopCount int32
---@field bLoopIndefinitely boolean
USoundNodeLooping = {}



---@class USoundNodeMature : USoundNode
USoundNodeMature = {}


---@class USoundNodeMixer : USoundNode
---@field InputVolume TArray<float>
USoundNodeMixer = {}



---@class USoundNodeModulator : USoundNode
---@field PitchMin float
---@field PitchMax float
---@field VolumeMin float
---@field VolumeMax float
USoundNodeModulator = {}



---@class USoundNodeModulatorContinuous : USoundNode
---@field PitchModulationParams FModulatorContinuousParams
---@field VolumeModulationParams FModulatorContinuousParams
USoundNodeModulatorContinuous = {}



---@class USoundNodeOscillator : USoundNode
---@field bModulateVolume boolean
---@field bModulatePitch boolean
---@field AmplitudeMin float
---@field AmplitudeMax float
---@field FrequencyMin float
---@field FrequencyMax float
---@field OffsetMin float
---@field OffsetMax float
---@field CenterMin float
---@field CenterMax float
USoundNodeOscillator = {}



---@class USoundNodeParamCrossFade : USoundNodeDistanceCrossFade
---@field ParamName FName
USoundNodeParamCrossFade = {}



---@class USoundNodeQualityLevel : USoundNode
USoundNodeQualityLevel = {}


---@class USoundNodeRandom : USoundNode
---@field Weights TArray<float>
---@field HasBeenUsed TArray<boolean>
---@field NumRandomUsed int32
---@field PreselectAtLevelLoad int32
---@field bShouldExcludeFromBranchCulling boolean
---@field bSoundCueExcludedFromBranchCulling boolean
---@field bRandomizeWithoutReplacement boolean
USoundNodeRandom = {}



---@class USoundNodeSoundClass : USoundNode
---@field SoundClassOverride USoundClass
USoundNodeSoundClass = {}



---@class USoundNodeSwitch : USoundNode
---@field IntParameterName FName
USoundNodeSwitch = {}



---@class USoundNodeWaveParam : USoundNode
---@field WaveParameterName FName
USoundNodeWaveParam = {}



---@class USoundNodeWavePlayer : USoundNodeAssetReferencer
---@field SoundWaveAssetPtr TSoftObjectPtr<USoundWave>
---@field SoundWave USoundWave
---@field bLooping boolean
USoundNodeWavePlayer = {}



---@class USoundSourceBus : USoundWave
---@field SourceBusChannels ESourceBusChannels
---@field SourceBusDuration float
---@field bAutoDeactivateWhenSilent boolean
USoundSourceBus = {}



---@class USoundSubmix : USoundSubmixWithParentBase
---@field bMuteWhenBackgrounded boolean
---@field SubmixEffectChain TArray<USoundEffectSubmixPreset>
---@field AmbisonicsPluginSettings USoundfieldEncodingSettingsBase
---@field EnvelopeFollowerAttackTime int32
---@field EnvelopeFollowerReleaseTime int32
---@field OutputVolume float
---@field OnSubmixRecordedFileDone FSoundSubmixOnSubmixRecordedFileDone
USoundSubmix = {}

---@param WorldContextObject UObject
---@param ExportType EAudioRecordingExportType
---@param Name FString
---@param Path FString
---@param ExistingSoundWaveToOverwrite USoundWave
function USoundSubmix:StopRecordingOutput(WorldContextObject, ExportType, Name, Path, ExistingSoundWaveToOverwrite) end
---@param WorldContextObject UObject
function USoundSubmix:StopEnvelopeFollowing(WorldContextObject) end
---@param WorldContextObject UObject
---@param ExpectedDuration float
function USoundSubmix:StartRecordingOutput(WorldContextObject, ExpectedDuration) end
---@param WorldContextObject UObject
function USoundSubmix:StartEnvelopeFollowing(WorldContextObject) end
---@param WorldContextObject UObject
---@param InOutputVolume float
function USoundSubmix:SetSubmixOutputVolume(WorldContextObject, InOutputVolume) end
---@param WorldContextObject UObject
---@param OnSubmixEnvelopeBP FAddEnvelopeFollowerDelegateOnSubmixEnvelopeBP
function USoundSubmix:AddEnvelopeFollowerDelegate(WorldContextObject, OnSubmixEnvelopeBP) end


---@class USoundSubmixBase : UObject
---@field ChildSubmixes TArray<USoundSubmixBase>
USoundSubmixBase = {}



---@class USoundSubmixWithParentBase : USoundSubmixBase
---@field ParentSubmix USoundSubmixBase
USoundSubmixWithParentBase = {}



---@class USoundWave : USoundBase
---@field CompressionQuality int32
---@field StreamingPriority int32
---@field SampleRateQuality ESoundwaveSampleRateSettings
---@field SoundGroup ESoundGroup
---@field bLooping boolean
---@field bStreaming boolean
---@field bSeekableStreaming boolean
---@field LoadingBehavior ESoundWaveLoadingBehavior
---@field bMature boolean
---@field bManualWordWrap boolean
---@field bSingleLine boolean
---@field bIsAmbisonics boolean
---@field FrequenciesToAnalyze TArray<float>
---@field CookedSpectralTimeData TArray<FSoundWaveSpectralTimeData>
---@field CookedEnvelopeTimeData TArray<FSoundWaveEnvelopeTimeData>
---@field InitialChunkSize int32
---@field SpokenText FString
---@field SubtitlePriority float
---@field Volume float
---@field Pitch float
---@field NumChannels int32
---@field SampleRate int32
---@field Subtitles TArray<FSubtitleCue>
---@field Curves UCurveTable
---@field InternalCurves UCurveTable
USoundWave = {}



---@class USoundWaveProcedural : USoundWave
USoundWaveProcedural = {}


---@class USoundfieldEndpointSubmix : USoundSubmixBase
---@field SoundfieldEndpointType FName
---@field EndpointSettingsClass TSubclassOf<UAudioEndpointSettingsBase>
---@field EndpointSettings USoundfieldEndpointSettingsBase
---@field EncodingSettingsClass TSubclassOf<USoundfieldEncodingSettingsBase>
---@field EncodingSettings USoundfieldEncodingSettingsBase
---@field SoundfieldEffectChain TArray<USoundfieldEffectBase>
USoundfieldEndpointSubmix = {}



---@class USoundfieldSubmix : USoundSubmixWithParentBase
---@field SoundfieldEncodingFormat FName
---@field EncodingSettings USoundfieldEncodingSettingsBase
---@field SoundfieldEffectChain TArray<USoundfieldEffectBase>
---@field EncodingSettingsClass TSubclassOf<USoundfieldEncodingSettingsBase>
USoundfieldSubmix = {}



---@class USpectatorPawnMovement : UFloatingPawnMovement
---@field bIgnoreTimeDilation boolean
USpectatorPawnMovement = {}



---@class USphereComponent : UShapeComponent
---@field SphereRadius float
USphereComponent = {}

---@param InSphereRadius float
---@param bUpdateOverlaps boolean
function USphereComponent:SetSphereRadius(InSphereRadius, bUpdateOverlaps) end
---@return float
function USphereComponent:GetUnscaledSphereRadius() end
---@return float
function USphereComponent:GetShapeScale() end
---@return float
function USphereComponent:GetScaledSphereRadius() end


---@class USphereReflectionCaptureComponent : UReflectionCaptureComponent
---@field InfluenceRadius float
---@field CaptureDistanceScale float
---@field PreviewInfluenceRadius UDrawSphereComponent
USphereReflectionCaptureComponent = {}



---@class USplineComponent : UPrimitiveComponent
---@field SplineCurves FSplineCurves
---@field SplineInfo FInterpCurveVector
---@field SplineRotInfo FInterpCurveQuat
---@field SplineScaleInfo FInterpCurveVector
---@field SplineReparamTable FInterpCurveFloat
---@field bAllowSplineEditingPerInstance boolean
---@field ReparamStepsPerSegment int32
---@field Duration float
---@field bStationaryEndpoints boolean
---@field bSplineHasBeenEdited boolean
---@field bModifiedByConstructionScript boolean
---@field bInputSplinePointsToConstructionScript boolean
---@field bDrawDebug boolean
---@field bClosedLoop boolean
---@field bLoopPositionOverride boolean
---@field LoopPosition float
---@field DefaultUpVector FVector
USplineComponent = {}

function USplineComponent:UpdateSpline() end
---@param PointIndex int32
---@param InLocation FVector
function USplineComponent:SetWorldLocationAtSplinePoint(PointIndex, InLocation) end
---@param PointIndex int32
---@param InUpVector FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:SetUpVectorAtSplinePoint(PointIndex, InUpVector, CoordinateSpace, bUpdateSpline) end
---@param SegmentColor FLinearColor
function USplineComponent:SetUnselectedSplineSegmentColor(SegmentColor) end
---@param PointIndex int32
---@param InArriveTangent FVector
---@param InLeaveTangent FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:SetTangentsAtSplinePoint(PointIndex, InArriveTangent, InLeaveTangent, CoordinateSpace, bUpdateSpline) end
---@param PointIndex int32
---@param InTangent FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:SetTangentAtSplinePoint(PointIndex, InTangent, CoordinateSpace, bUpdateSpline) end
---@param Points TArray<FVector>
function USplineComponent:SetSplineWorldPoints(Points) end
---@param PointIndex int32
---@param Type ESplinePointType::Type
---@param bUpdateSpline boolean
function USplineComponent:SetSplinePointType(PointIndex, Type, bUpdateSpline) end
---@param Points TArray<FVector>
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:SetSplinePoints(Points, CoordinateSpace, bUpdateSpline) end
---@param Points TArray<FVector>
function USplineComponent:SetSplineLocalPoints(Points) end
---@param SegmentColor FLinearColor
function USplineComponent:SetSelectedSplineSegmentColor(SegmentColor) end
---@param PointIndex int32
---@param InLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:SetLocationAtSplinePoint(PointIndex, InLocation, CoordinateSpace, bUpdateSpline) end
---@param bShow boolean
function USplineComponent:SetDrawDebug(bShow) end
---@param UpVector FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
function USplineComponent:SetDefaultUpVector(UpVector, CoordinateSpace) end
---@param bInClosedLoop boolean
---@param Key float
---@param bUpdateSpline boolean
function USplineComponent:SetClosedLoopAtPosition(bInClosedLoop, Key, bUpdateSpline) end
---@param bInClosedLoop boolean
---@param bUpdateSpline boolean
function USplineComponent:SetClosedLoop(bInClosedLoop, bUpdateSpline) end
---@param Index int32
---@param bUpdateSpline boolean
function USplineComponent:RemoveSplinePoint(Index, bUpdateSpline) end
---@return boolean
function USplineComponent:IsClosedLoop() end
---@param Distance float
---@return FVector
function USplineComponent:GetWorldTangentAtDistanceAlongSpline(Distance) end
---@param Time float
---@param bUseConstantVelocity boolean
---@return FRotator
function USplineComponent:GetWorldRotationAtTime(Time, bUseConstantVelocity) end
---@param Distance float
---@return FRotator
function USplineComponent:GetWorldRotationAtDistanceAlongSpline(Distance) end
---@param Time float
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetWorldLocationAtTime(Time, bUseConstantVelocity) end
---@param PointIndex int32
---@return FVector
function USplineComponent:GetWorldLocationAtSplinePoint(PointIndex) end
---@param Distance float
---@return FVector
function USplineComponent:GetWorldLocationAtDistanceAlongSpline(Distance) end
---@param Time float
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetWorldDirectionAtTime(Time, bUseConstantVelocity) end
---@param Distance float
---@return FVector
function USplineComponent:GetWorldDirectionAtDistanceAlongSpline(Distance) end
---@param Index int32
---@param PropertyName FName
---@return FVector
function USplineComponent:GetVectorPropertyAtSplinePoint(Index, PropertyName) end
---@param InKey float
---@param PropertyName FName
---@return FVector
function USplineComponent:GetVectorPropertyAtSplineInputKey(InKey, PropertyName) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetUpVectorAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetUpVectorAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetUpVectorAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetUpVectorAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@param bUseScale boolean
---@return FTransform
function USplineComponent:GetTransformAtTime(Time, CoordinateSpace, bUseConstantVelocity, bUseScale) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseScale boolean
---@return FTransform
function USplineComponent:GetTransformAtSplinePoint(PointIndex, CoordinateSpace, bUseScale) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseScale boolean
---@return FTransform
function USplineComponent:GetTransformAtSplineInputKey(InKey, CoordinateSpace, bUseScale) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseScale boolean
---@return FTransform
function USplineComponent:GetTransformAtDistanceAlongSpline(Distance, CoordinateSpace, bUseScale) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetTangentAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetTangentAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetTangentAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetTangentAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@param PointIndex int32
---@return ESplinePointType::Type
function USplineComponent:GetSplinePointType(PointIndex) end
---@return float
function USplineComponent:GetSplineLength() end
---@param Time float
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetScaleAtTime(Time, bUseConstantVelocity) end
---@param PointIndex int32
---@return FVector
function USplineComponent:GetScaleAtSplinePoint(PointIndex) end
---@param InKey float
---@return FVector
function USplineComponent:GetScaleAtSplineInputKey(InKey) end
---@param Distance float
---@return FVector
function USplineComponent:GetScaleAtDistanceAlongSpline(Distance) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return FRotator
function USplineComponent:GetRotationAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FRotator
function USplineComponent:GetRotationAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FRotator
function USplineComponent:GetRotationAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FRotator
function USplineComponent:GetRotationAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return float
function USplineComponent:GetRollAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return float
function USplineComponent:GetRollAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return float
function USplineComponent:GetRollAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return float
function USplineComponent:GetRollAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetRightVectorAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetRightVectorAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetRightVectorAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetRightVectorAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@return int32
function USplineComponent:GetNumberOfSplineSegments() end
---@return int32
function USplineComponent:GetNumberOfSplinePoints() end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetLocationAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetLocationAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetLocationAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetLocationAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@param PointIndex int32
---@param Location FVector
---@param Tangent FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
function USplineComponent:GetLocationAndTangentAtSplinePoint(PointIndex, Location, Tangent, CoordinateSpace) end
---@param PointIndex int32
---@param LocalLocation FVector
---@param LocalTangent FVector
function USplineComponent:GetLocalLocationAndTangentAtSplinePoint(PointIndex, LocalLocation, LocalTangent) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetLeaveTangentAtSplinePoint(PointIndex, CoordinateSpace) end
---@param Distance float
---@return float
function USplineComponent:GetInputKeyAtDistanceAlongSpline(Distance) end
---@param Index int32
---@param PropertyName FName
---@return float
function USplineComponent:GetFloatPropertyAtSplinePoint(Index, PropertyName) end
---@param InKey float
---@param PropertyName FName
---@return float
function USplineComponent:GetFloatPropertyAtSplineInputKey(InKey, PropertyName) end
---@param PointIndex int32
---@return float
function USplineComponent:GetDistanceAlongSplineAtSplinePoint(PointIndex) end
---@param Time float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseConstantVelocity boolean
---@return FVector
function USplineComponent:GetDirectionAtTime(Time, CoordinateSpace, bUseConstantVelocity) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetDirectionAtSplinePoint(PointIndex, CoordinateSpace) end
---@param InKey float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetDirectionAtSplineInputKey(InKey, CoordinateSpace) end
---@param Distance float
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetDirectionAtDistanceAlongSpline(Distance, CoordinateSpace) end
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetDefaultUpVector(CoordinateSpace) end
---@param PointIndex int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:GetArriveTangentAtSplinePoint(PointIndex, CoordinateSpace) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:FindUpVectorClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUseScale boolean
---@return FTransform
function USplineComponent:FindTransformClosestToWorldLocation(WorldLocation, CoordinateSpace, bUseScale) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:FindTangentClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param WorldLocation FVector
---@return FVector
function USplineComponent:FindScaleClosestToWorldLocation(WorldLocation) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FRotator
function USplineComponent:FindRotationClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return float
function USplineComponent:FindRollClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:FindRightVectorClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:FindLocationClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param WorldLocation FVector
---@return float
function USplineComponent:FindInputKeyClosestToWorldLocation(WorldLocation) end
---@param WorldLocation FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@return FVector
function USplineComponent:FindDirectionClosestToWorldLocation(WorldLocation, CoordinateSpace) end
---@param bUpdateSpline boolean
function USplineComponent:ClearSplinePoints(bUpdateSpline) end
---@param Position FVector
function USplineComponent:AddSplineWorldPoint(Position) end
---@param Position FVector
---@param Index int32
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:AddSplinePointAtIndex(Position, Index, CoordinateSpace, bUpdateSpline) end
---@param Position FVector
---@param CoordinateSpace ESplineCoordinateSpace::Type
---@param bUpdateSpline boolean
function USplineComponent:AddSplinePoint(Position, CoordinateSpace, bUpdateSpline) end
---@param Position FVector
function USplineComponent:AddSplineLocalPoint(Position) end
---@param Points TArray<FSplinePoint>
---@param bUpdateSpline boolean
function USplineComponent:AddPoints(Points, bUpdateSpline) end
---@param Point FSplinePoint
---@param bUpdateSpline boolean
function USplineComponent:AddPoint(Point, bUpdateSpline) end


---@class USplineMeshComponent : UStaticMeshComponent
---@field SplineParams FSplineMeshParams
---@field SplineUpDir FVector
---@field SplineBoundaryMin float
---@field CachedMeshBodySetupGuid FGuid
---@field BodySetup UBodySetup
---@field SplineBoundaryMax float
---@field bAllowSplineEditingPerInstance boolean
---@field bSmoothInterpRollScale boolean
---@field bMeshDirty boolean
---@field ForwardAxis ESplineMeshAxis::Type
---@field VirtualTextureMainPassMaxDrawDistance float
USplineMeshComponent = {}

function USplineMeshComponent:UpdateMesh() end
---@param StartTangent FVector
---@param bUpdateMesh boolean
function USplineMeshComponent:SetStartTangent(StartTangent, bUpdateMesh) end
---@param StartScale FVector2D
---@param bUpdateMesh boolean
function USplineMeshComponent:SetStartScale(StartScale, bUpdateMesh) end
---@param StartRoll float
---@param bUpdateMesh boolean
function USplineMeshComponent:SetStartRoll(StartRoll, bUpdateMesh) end
---@param StartPos FVector
---@param bUpdateMesh boolean
function USplineMeshComponent:SetStartPosition(StartPos, bUpdateMesh) end
---@param StartOffset FVector2D
---@param bUpdateMesh boolean
function USplineMeshComponent:SetStartOffset(StartOffset, bUpdateMesh) end
---@param StartPos FVector
---@param StartTangent FVector
---@param EndPos FVector
---@param EndTangent FVector
---@param bUpdateMesh boolean
function USplineMeshComponent:SetStartAndEnd(StartPos, StartTangent, EndPos, EndTangent, bUpdateMesh) end
---@param InSplineUpDir FVector
---@param bUpdateMesh boolean
function USplineMeshComponent:SetSplineUpDir(InSplineUpDir, bUpdateMesh) end
---@param InForwardAxis ESplineMeshAxis::Type
---@param bUpdateMesh boolean
function USplineMeshComponent:SetForwardAxis(InForwardAxis, bUpdateMesh) end
---@param EndTangent FVector
---@param bUpdateMesh boolean
function USplineMeshComponent:SetEndTangent(EndTangent, bUpdateMesh) end
---@param EndScale FVector2D
---@param bUpdateMesh boolean
function USplineMeshComponent:SetEndScale(EndScale, bUpdateMesh) end
---@param EndRoll float
---@param bUpdateMesh boolean
function USplineMeshComponent:SetEndRoll(EndRoll, bUpdateMesh) end
---@param EndPos FVector
---@param bUpdateMesh boolean
function USplineMeshComponent:SetEndPosition(EndPos, bUpdateMesh) end
---@param EndOffset FVector2D
---@param bUpdateMesh boolean
function USplineMeshComponent:SetEndOffset(EndOffset, bUpdateMesh) end
---@param InBoundaryMin float
---@param bUpdateMesh boolean
function USplineMeshComponent:SetBoundaryMin(InBoundaryMin, bUpdateMesh) end
---@param InBoundaryMax float
---@param bUpdateMesh boolean
function USplineMeshComponent:SetBoundaryMax(InBoundaryMax, bUpdateMesh) end
---@return FVector
function USplineMeshComponent:GetStartTangent() end
---@return FVector2D
function USplineMeshComponent:GetStartScale() end
---@return float
function USplineMeshComponent:GetStartRoll() end
---@return FVector
function USplineMeshComponent:GetStartPosition() end
---@return FVector2D
function USplineMeshComponent:GetStartOffset() end
---@return FVector
function USplineMeshComponent:GetSplineUpDir() end
---@return ESplineMeshAxis::Type
function USplineMeshComponent:GetForwardAxis() end
---@return FVector
function USplineMeshComponent:GetEndTangent() end
---@return FVector2D
function USplineMeshComponent:GetEndScale() end
---@return float
function USplineMeshComponent:GetEndRoll() end
---@return FVector
function USplineMeshComponent:GetEndPosition() end
---@return FVector2D
function USplineMeshComponent:GetEndOffset() end
---@return float
function USplineMeshComponent:GetBoundaryMin() end
---@return float
function USplineMeshComponent:GetBoundaryMax() end


---@class USplineMetadata : UObject
USplineMetadata = {}


---@class USpotLightComponent : UPointLightComponent
---@field InnerConeAngle float
---@field OuterConeAngle float
---@field LightShaftConeAngle float
USpotLightComponent = {}

---@param NewOuterConeAngle float
function USpotLightComponent:SetOuterConeAngle(NewOuterConeAngle) end
---@param NewInnerConeAngle float
function USpotLightComponent:SetInnerConeAngle(NewInnerConeAngle) end


---@class USpringArmComponent : USceneComponent
---@field TargetArmLength float
---@field SocketOffset FVector
---@field TargetOffset FVector
---@field ProbeSize float
---@field ProbeChannel ECollisionChannel
---@field bDoCollisionTest boolean
---@field bUsePawnControlRotation boolean
---@field bInheritPitch boolean
---@field bInheritYaw boolean
---@field bInheritRoll boolean
---@field bEnableCameraLag boolean
---@field bEnableCameraRotationLag boolean
---@field bUseCameraLagSubstepping boolean
---@field bDrawDebugLagMarkers boolean
---@field CameraLagSpeed float
---@field CameraRotationLagSpeed float
---@field CameraLagMaxTimeStep float
---@field CameraLagMaxDistance float
USpringArmComponent = {}

---@return boolean
function USpringArmComponent:IsCollisionFixApplied() end
---@return FVector
function USpringArmComponent:GetUnfixedCameraPosition() end
---@return FRotator
function USpringArmComponent:GetTargetRotation() end


---@class UStaticMesh : UStreamableRenderAsset
---@field MinLOD FPerPlatformInt
---@field LpvBiasMultiplier float
---@field StaticMaterials TArray<FStaticMaterial>
---@field LightmapUVDensity float
---@field LightMapResolution int32
---@field LightMapCoordinateIndex int32
---@field DistanceFieldSelfShadowBias float
---@field BodySetup UBodySetup
---@field LODForCollision int32
---@field bGenerateMeshDistanceField boolean
---@field bStripComplexCollisionForConsole boolean
---@field bHasNavigationData boolean
---@field bSupportUniformlyDistributedSampling boolean
---@field bSupportPhysicalMaterialMasks boolean
---@field bIsBuiltAtRuntime boolean
---@field bAllowCPUAccess boolean
---@field bSupportGpuUniformlyDistributedSampling boolean
---@field Sockets TArray<UStaticMeshSocket>
---@field PositiveBoundsExtension FVector
---@field NegativeBoundsExtension FVector
---@field ExtendedBounds FBoxSphereBounds
---@field ElementToIgnoreForTexFactor int32
---@field AssetUserData TArray<UAssetUserData>
---@field EditableMesh UObject
---@field NavCollision UNavCollisionBase
UStaticMesh = {}

---@param Socket UStaticMeshSocket
function UStaticMesh:RemoveSocket(Socket) end
---@param InLOD int32
---@return int32
function UStaticMesh:GetNumSections(InLOD) end
---@return int32
function UStaticMesh:GetNumLODs() end
---@param PlatformMinimumLODs TMap<FName, int32>
function UStaticMesh:GetMinimumLODForPlatforms(PlatformMinimumLODs) end
---@param PlatformName FName
---@return int32
function UStaticMesh:GetMinimumLODForPlatform(PlatformName) end
---@param MaterialSlotName FName
---@return int32
function UStaticMesh:GetMaterialIndex(MaterialSlotName) end
---@param MaterialIndex int32
---@return UMaterialInterface
function UStaticMesh:GetMaterial(MaterialIndex) end
---@return FBoxSphereBounds
function UStaticMesh:GetBounds() end
---@return FBox
function UStaticMesh:GetBoundingBox() end
---@param InSocketName FName
---@return UStaticMeshSocket
function UStaticMesh:FindSocket(InSocketName) end
---@param Outer UObject
---@return UStaticMeshDescription
function UStaticMesh:CreateStaticMeshDescription(Outer) end
---@param StaticMeshDescriptions TArray<UStaticMeshDescription>
---@param bBuildSimpleCollision boolean
function UStaticMesh:BuildFromStaticMeshDescriptions(StaticMeshDescriptions, bBuildSimpleCollision) end
---@param Socket UStaticMeshSocket
function UStaticMesh:AddSocket(Socket) end
---@param Material UMaterialInterface
---@return FName
function UStaticMesh:AddMaterial(Material) end


---@class UStaticMeshComponent : UMeshComponent
---@field ForcedLodModel int32
---@field PreviousLODLevel int32
---@field MinLOD int32
---@field SubDivisionStepSize int32
---@field StaticMesh UStaticMesh
---@field WireframeColorOverride FColor
---@field bEvaluateWorldPositionOffset boolean
---@field bOverrideWireframeColor boolean
---@field bOverrideMinLOD boolean
---@field bOverrideNavigationExport boolean
---@field bForceNavigationObstacle boolean
---@field bDisallowMeshPaintPerInstance boolean
---@field bIgnoreInstanceForTextureStreaming boolean
---@field bOverrideLightMapRes boolean
---@field bCastDistanceFieldIndirectShadow boolean
---@field bOverrideDistanceFieldSelfShadowBias boolean
---@field bUseSubDivisions boolean
---@field bUseDefaultCollision boolean
---@field bReverseCulling boolean
---@field OverriddenLightMapRes int32
---@field DistanceFieldIndirectShadowMinVisibility float
---@field DistanceFieldSelfShadowBias float
---@field StreamingDistanceMultiplier float
---@field LODData TArray<FStaticMeshComponentLODInfo>
---@field StreamingTextureData TArray<FStreamingTextureBuildInfo>
---@field LightmassSettings FLightmassPrimitiveSettings
UStaticMeshComponent = {}

---@param NewMesh UStaticMesh
---@return boolean
function UStaticMeshComponent:SetStaticMesh(NewMesh) end
---@param ReverseCulling boolean
function UStaticMeshComponent:SetReverseCulling(ReverseCulling) end
---@param NewForcedLodModel int32
function UStaticMeshComponent:SetForcedLodModel(NewForcedLodModel) end
---@param NewValue float
function UStaticMeshComponent:SetDistanceFieldSelfShadowBias(NewValue) end
---@param OldStaticMesh UStaticMesh
function UStaticMeshComponent:OnRep_StaticMesh(OldStaticMesh) end
---@param Min FVector
---@param Max FVector
function UStaticMeshComponent:GetLocalBounds(Min, Max) end


---@class UStaticMeshSocket : UObject
---@field SocketName FName
---@field RelativeLocation FVector
---@field RelativeRotation FRotator
---@field RelativeScale FVector
---@field Tag FString
UStaticMeshSocket = {}



---@class UStereoLayerComponent : USceneComponent
---@field bLiveTexture boolean
---@field bSupportsDepth boolean
---@field bNoAlphaChannel boolean
---@field Texture UTexture
---@field LeftTexture UTexture
---@field bQuadPreserveTextureRatio boolean
---@field QuadSize FVector2D
---@field UVRect FBox2D
---@field CylinderRadius float
---@field CylinderOverlayArc float
---@field CylinderHeight int32
---@field EquirectProps FEquirectProps
---@field StereoLayerType EStereoLayerType
---@field StereoLayerShape EStereoLayerShape
---@field Shape UStereoLayerShape
---@field Priority int32
UStereoLayerComponent = {}

---@param InUVRect FBox2D
function UStereoLayerComponent:SetUVRect(InUVRect) end
---@param InTexture UTexture
function UStereoLayerComponent:SetTexture(InTexture) end
---@param InQuadSize FVector2D
function UStereoLayerComponent:SetQuadSize(InQuadSize) end
---@param InPriority int32
function UStereoLayerComponent:SetPriority(InPriority) end
---@param InTexture UTexture
function UStereoLayerComponent:SetLeftTexture(InTexture) end
---@param InScaleBiases FEquirectProps
function UStereoLayerComponent:SetEquirectProps(InScaleBiases) end
function UStereoLayerComponent:MarkTextureForUpdate() end
---@return FBox2D
function UStereoLayerComponent:GetUVRect() end
---@return UTexture
function UStereoLayerComponent:GetTexture() end
---@return FVector2D
function UStereoLayerComponent:GetQuadSize() end
---@return int32
function UStereoLayerComponent:GetPriority() end
---@return UTexture
function UStereoLayerComponent:GetLeftTexture() end


---@class UStereoLayerFunctionLibrary : UBlueprintFunctionLibrary
UStereoLayerFunctionLibrary = {}

function UStereoLayerFunctionLibrary:ShowSplashScreen() end
---@param Texture UTexture
---@param Scale FVector2D
---@param Offset FVector
---@param bShowLoadingMovie boolean
---@param bShowOnSet boolean
function UStereoLayerFunctionLibrary:SetSplashScreen(Texture, Scale, Offset, bShowLoadingMovie, bShowOnSet) end
function UStereoLayerFunctionLibrary:HideSplashScreen() end
---@param InAutoShowEnabled boolean
function UStereoLayerFunctionLibrary:EnableAutoLoadingSplashScreen(InAutoShowEnabled) end


---@class UStereoLayerShape : UObject
UStereoLayerShape = {}


---@class UStereoLayerShapeCubemap : UStereoLayerShape
UStereoLayerShapeCubemap = {}


---@class UStereoLayerShapeCylinder : UStereoLayerShape
---@field Radius float
---@field OverlayArc float
---@field Height int32
UStereoLayerShapeCylinder = {}

---@param InRadius float
function UStereoLayerShapeCylinder:SetRadius(InRadius) end
---@param InOverlayArc float
function UStereoLayerShapeCylinder:SetOverlayArc(InOverlayArc) end
---@param InHeight int32
function UStereoLayerShapeCylinder:SetHeight(InHeight) end


---@class UStereoLayerShapeEquirect : UStereoLayerShape
---@field LeftUVRect FBox2D
---@field RightUVRect FBox2D
---@field LeftScale FVector2D
---@field RightScale FVector2D
---@field LeftBias FVector2D
---@field RightBias FVector2D
UStereoLayerShapeEquirect = {}

---@param InScaleBiases FEquirectProps
function UStereoLayerShapeEquirect:SetEquirectProps(InScaleBiases) end


---@class UStereoLayerShapeQuad : UStereoLayerShape
UStereoLayerShapeQuad = {}


---@class UStreamableRenderAsset : UObject
---@field ForceMipLevelsToBeResidentTimestamp double
---@field NumCinematicMipLevels int32
---@field StreamingIndex int32
---@field CachedCombinedLODBias int32
---@field CachedNumResidentLODs uint8
---@field bCachedReadyForStreaming boolean
---@field NeverStream boolean
---@field bGlobalForceMipLevelsToBeResident boolean
---@field bIsStreamable boolean
---@field bHasStreamingUpdatePending boolean
---@field bForceMiplevelsToBeResident boolean
---@field bIgnoreStreamingMipBias boolean
---@field bUseCinematicMipLevels boolean
UStreamableRenderAsset = {}



---@class UStreamingSettings : UDeveloperSettings
---@field AsyncLoadingThreadEnabled boolean
---@field WarnIfTimeLimitExceeded boolean
---@field TimeLimitExceededMultiplier float
---@field TimeLimitExceededMinTime float
---@field MinBulkDataSizeForAsyncLoading int32
---@field UseBackgroundLevelStreaming boolean
---@field AsyncLoadingUseFullTimeLimit boolean
---@field AsyncLoadingTimeLimit float
---@field PriorityAsyncLoadingExtraTime float
---@field LevelStreamingActorsUpdateTimeLimit float
---@field PriorityLevelStreamingActorsUpdateExtraTime float
---@field LevelStreamingComponentsRegistrationGranularity int32
---@field LevelStreamingUnregisterComponentsTimeLimit float
---@field LevelStreamingComponentsUnregistrationGranularity int32
---@field FlushStreamingOnExit boolean
---@field EventDrivenLoaderEnabled boolean
UStreamingSettings = {}



---@class UStringTable : UObject
UStringTable = {}


---@class USubUVAnimation : UObject
---@field SubUVTexture UTexture2D
---@field SubImages_Horizontal int32
---@field SubImages_Vertical int32
---@field BoundingMode ESubUVBoundingVertexCount
---@field OpacitySourceMode EOpacitySourceMode
---@field AlphaThreshold float
USubUVAnimation = {}



---@class USubsurfaceProfile : UObject
---@field Settings FSubsurfaceProfileStruct
USubsurfaceProfile = {}



---@class USubsystem : UObject
USubsystem = {}


---@class USubsystemBlueprintLibrary : UBlueprintFunctionLibrary
USubsystemBlueprintLibrary = {}

---@param ContextObject UObject
---@param Class TSubclassOf<UWorldSubsystem>
---@return UWorldSubsystem
function USubsystemBlueprintLibrary:GetWorldSubsystem(ContextObject, Class) end
---@param PlayerController APlayerController
---@param Class TSubclassOf<ULocalPlayerSubsystem>
---@return ULocalPlayerSubsystem
function USubsystemBlueprintLibrary:GetLocalPlayerSubSystemFromPlayerController(PlayerController, Class) end
---@param ContextObject UObject
---@param Class TSubclassOf<ULocalPlayerSubsystem>
---@return ULocalPlayerSubsystem
function USubsystemBlueprintLibrary:GetLocalPlayerSubsystem(ContextObject, Class) end
---@param ContextObject UObject
---@param Class TSubclassOf<UGameInstanceSubsystem>
---@return UGameInstanceSubsystem
function USubsystemBlueprintLibrary:GetGameInstanceSubsystem(ContextObject, Class) end
---@param Class TSubclassOf<UEngineSubsystem>
---@return UEngineSubsystem
function USubsystemBlueprintLibrary:GetEngineSubsystem(Class) end


---@class USystemTimeTimecodeProvider : UTimecodeProvider
---@field FrameRate FFrameRate
---@field bGenerateFullFrame boolean
---@field bUseHighPerformanceClock boolean
USystemTimeTimecodeProvider = {}



---@class UTextPropertyTestObject : UObject
---@field DefaultedText FText
---@field UndefaultedText FText
---@field TransientText FText
UTextPropertyTestObject = {}



---@class UTextRenderComponent : UPrimitiveComponent
---@field Text FText
---@field TextMaterial UMaterialInterface
---@field Font UFont
---@field HorizontalAlignment EHorizTextAligment
---@field VerticalAlignment EVerticalTextAligment
---@field TextRenderColor FColor
---@field XScale float
---@field YScale float
---@field WorldSize float
---@field InvDefaultSize float
---@field HorizSpacingAdjust float
---@field VertSpacingAdjust float
---@field bAlwaysRenderAsText boolean
UTextRenderComponent = {}

---@param Value float
function UTextRenderComponent:SetYScale(Value) end
---@param Value float
function UTextRenderComponent:SetXScale(Value) end
---@param Value float
function UTextRenderComponent:SetWorldSize(Value) end
---@param Value float
function UTextRenderComponent:SetVertSpacingAdjust(Value) end
---@param Value EVerticalTextAligment
function UTextRenderComponent:SetVerticalAlignment(Value) end
---@param Value FColor
function UTextRenderComponent:SetTextRenderColor(Value) end
---@param Material UMaterialInterface
function UTextRenderComponent:SetTextMaterial(Material) end
---@param Value FString
function UTextRenderComponent:SetText(Value) end
---@param Value float
function UTextRenderComponent:SetHorizSpacingAdjust(Value) end
---@param Value EHorizTextAligment
function UTextRenderComponent:SetHorizontalAlignment(Value) end
---@param Value UFont
function UTextRenderComponent:SetFont(Value) end
---@param Value FText
function UTextRenderComponent:K2_SetText(Value) end
---@return FVector
function UTextRenderComponent:GetTextWorldSize() end
---@return FVector
function UTextRenderComponent:GetTextLocalSize() end


---@class UTexture : UStreamableRenderAsset
---@field LightingGuid FGuid
---@field LODBias int32
---@field CompressionSettings TextureCompressionSettings
---@field Filter TextureFilter
---@field MipLoadOptions ETextureMipLoadOptions
---@field LODGroup TextureGroup
---@field SRGB boolean
---@field bNoTiling boolean
---@field VirtualTextureStreaming boolean
---@field CompressionYCoCg boolean
---@field bAsyncResourceReleaseHasBeenStarted boolean
---@field AssetUserData TArray<UAssetUserData>
UTexture = {}



---@class UTexture2D : UTexture
---@field LevelIndex int32
---@field FirstResourceMemMip int32
---@field bTemporarilyDisableStreaming boolean
---@field AddressX TextureAddress
---@field AddressY TextureAddress
---@field ImportedSize FIntPoint
UTexture2D = {}

---@return int32
function UTexture2D:Blueprint_GetSizeY() end
---@return int32
function UTexture2D:Blueprint_GetSizeX() end


---@class UTexture2DArray : UTexture
UTexture2DArray = {}


---@class UTexture2DDynamic : UTexture
---@field Format EPixelFormat
UTexture2DDynamic = {}



---@class UTextureCube : UTexture
UTextureCube = {}


---@class UTextureLODSettings : UObject
---@field TextureLODGroups TArray<FTextureLODGroup>
UTextureLODSettings = {}



---@class UTextureLightProfile : UTexture2D
---@field Brightness float
---@field TextureMultiplier float
UTextureLightProfile = {}



---@class UTextureMipDataProviderFactory : UAssetUserData
UTextureMipDataProviderFactory = {}


---@class UTextureRenderTarget : UTexture
---@field TargetGamma float
UTextureRenderTarget = {}



---@class UTextureRenderTarget2D : UTextureRenderTarget
---@field SizeX int32
---@field SizeY int32
---@field ClearColor FLinearColor
---@field AddressX TextureAddress
---@field AddressY TextureAddress
---@field bForceLinearGamma boolean
---@field bHDR boolean
---@field bGPUSharedFlag boolean
---@field RenderTargetFormat ETextureRenderTargetFormat
---@field bAutoGenerateMips boolean
---@field MipsSamplerFilter TextureFilter
---@field MipsAddressU TextureAddress
---@field MipsAddressV TextureAddress
---@field OverrideFormat EPixelFormat
UTextureRenderTarget2D = {}



---@class UTextureRenderTargetCube : UTextureRenderTarget
---@field SizeX int32
---@field ClearColor FLinearColor
---@field OverrideFormat EPixelFormat
---@field bHDR boolean
---@field bForceLinearGamma boolean
UTextureRenderTargetCube = {}



---@class UThumbnailInfo : UObject
UThumbnailInfo = {}


---@class UTimecodeProvider : UObject
---@field FrameDelay float
UTimecodeProvider = {}

---@return FTimecode
function UTimecodeProvider:GetTimecode() end
---@return ETimecodeProviderSynchronizationState
function UTimecodeProvider:GetSynchronizationState() end
---@return FQualifiedFrameTime
function UTimecodeProvider:GetQualifiedFrameTime() end
---@return FFrameRate
function UTimecodeProvider:GetFrameRate() end
---@return FTimecode
function UTimecodeProvider:GetDelayedTimecode() end
---@return FQualifiedFrameTime
function UTimecodeProvider:GetDelayedQualifiedFrameTime() end


---@class UTimelineComponent : UActorComponent
---@field TheTimeline FTimeline
---@field bIgnoreTimeDilation boolean
UTimelineComponent = {}

function UTimelineComponent:Stop() end
---@param NewVectorCurve UCurveVector
---@param VectorTrackName FName
function UTimelineComponent:SetVectorCurve(NewVectorCurve, VectorTrackName) end
---@param NewLengthMode ETimelineLengthMode
function UTimelineComponent:SetTimelineLengthMode(NewLengthMode) end
---@param NewLength float
function UTimelineComponent:SetTimelineLength(NewLength) end
---@param NewRate float
function UTimelineComponent:SetPlayRate(NewRate) end
---@param NewPosition float
---@param bFireEvents boolean
---@param bFireUpdate boolean
function UTimelineComponent:SetPlaybackPosition(NewPosition, bFireEvents, bFireUpdate) end
---@param NewTime float
function UTimelineComponent:SetNewTime(NewTime) end
---@param bNewLooping boolean
function UTimelineComponent:SetLooping(bNewLooping) end
---@param NewLinearColorCurve UCurveLinearColor
---@param LinearColorTrackName FName
function UTimelineComponent:SetLinearColorCurve(NewLinearColorCurve, LinearColorTrackName) end
---@param bNewIgnoreTimeDilation boolean
function UTimelineComponent:SetIgnoreTimeDilation(bNewIgnoreTimeDilation) end
---@param NewFloatCurve UCurveFloat
---@param FloatTrackName FName
function UTimelineComponent:SetFloatCurve(NewFloatCurve, FloatTrackName) end
function UTimelineComponent:ReverseFromEnd() end
function UTimelineComponent:Reverse() end
function UTimelineComponent:PlayFromStart() end
function UTimelineComponent:Play() end
function UTimelineComponent:OnRep_Timeline() end
---@return boolean
function UTimelineComponent:IsReversing() end
---@return boolean
function UTimelineComponent:IsPlaying() end
---@return boolean
function UTimelineComponent:IsLooping() end
---@return float
function UTimelineComponent:GetTimelineLength() end
---@return float
function UTimelineComponent:GetPlayRate() end
---@return float
function UTimelineComponent:GetPlaybackPosition() end
---@return boolean
function UTimelineComponent:GetIgnoreTimeDilation() end


---@class UTimelineTemplate : UObject
---@field TimelineLength float
---@field LengthMode ETimelineLengthMode
---@field bAutoPlay boolean
---@field bLoop boolean
---@field bReplicated boolean
---@field bIgnoreTimeDilation boolean
---@field EventTracks TArray<FTTEventTrack>
---@field FloatTracks TArray<FTTFloatTrack>
---@field VectorTracks TArray<FTTVectorTrack>
---@field LinearColorTracks TArray<FTTLinearColorTrack>
---@field MetaDataArray TArray<FBPVariableMetaDataEntry>
---@field TimelineGuid FGuid
---@field VariableName FName
---@field DirectionPropertyName FName
---@field UpdateFunctionName FName
---@field FinishedFunctionName FName
UTimelineTemplate = {}



---@class UTireType : UDataAsset
---@field FrictionScale float
UTireType = {}



---@class UTouchInterface : UObject
---@field Controls TArray<FTouchInputControl>
---@field ActiveOpacity float
---@field InactiveOpacity float
---@field TimeUntilDeactive float
---@field TimeUntilReset float
---@field ActivationDelay float
---@field bPreventRecenter boolean
---@field StartupDelay float
UTouchInterface = {}



---@class UTwitterIntegrationBase : UPlatformInterfaceBase
UTwitterIntegrationBase = {}

---@param URL FString
---@param ParamKeysAndValues TArray<FString>
---@param RequestMethod ETwitterRequestMethod
---@param AccountIndex int32
---@return boolean
function UTwitterIntegrationBase:TwitterRequest(URL, ParamKeysAndValues, RequestMethod, AccountIndex) end
---@param InitialMessage FString
---@param URL FString
---@param Picture FString
---@return boolean
function UTwitterIntegrationBase:ShowTweetUI(InitialMessage, URL, Picture) end
function UTwitterIntegrationBase:Init() end
---@return int32
function UTwitterIntegrationBase:GetNumAccounts() end
---@param AccountIndex int32
---@return FString
function UTwitterIntegrationBase:GetAccountName(AccountIndex) end
---@return boolean
function UTwitterIntegrationBase:CanShowTweetUI() end
---@return boolean
function UTwitterIntegrationBase:AuthorizeAccounts() end


---@class UUserDefinedEnum : UEnum
---@field DisplayNameMap TMap<FName, FText>
UUserDefinedEnum = {}



---@class UUserDefinedStruct : UScriptStruct
---@field Status EUserDefinedStructureStatus
---@field Guid FGuid
UUserDefinedStruct = {}



---@class UUserInterfaceSettings : UDeveloperSettings
---@field RenderFocusRule ERenderFocusRule
---@field HardwareCursors TMap<EMouseCursor::Type, FHardwareCursorReference>
---@field SoftwareCursors TMap<EMouseCursor::Type, FSoftClassPath>
---@field DefaultCursor FSoftClassPath
---@field TextEditBeamCursor FSoftClassPath
---@field CrosshairsCursor FSoftClassPath
---@field HandCursor FSoftClassPath
---@field GrabHandCursor FSoftClassPath
---@field GrabHandClosedCursor FSoftClassPath
---@field SlashedCircleCursor FSoftClassPath
---@field ApplicationScale float
---@field UIScaleRule EUIScalingRule
---@field CustomScalingRuleClass FSoftClassPath
---@field UIScaleCurve FRuntimeFloatCurve
---@field bAllowHighDPIInGameMode boolean
---@field bLoadWidgetsOnDedicatedServer boolean
---@field CursorClasses TArray<UObject>
---@field CustomScalingRuleClassInstance UClass
---@field CustomScalingRule UDPICustomScalingRule
UUserInterfaceSettings = {}



---@class UVOIPStatics : UBlueprintFunctionLibrary
UVOIPStatics = {}

---@param InThreshold float
function UVOIPStatics:SetMicThreshold(InThreshold) end


---@class UVOIPTalker : UActorComponent
---@field Settings FVoiceSettings
UVOIPTalker = {}

---@param OwningState APlayerState
function UVOIPTalker:RegisterWithPlayerState(OwningState) end
---@return float
function UVOIPTalker:GetVoiceLevel() end
---@param OwningState APlayerState
---@return UVOIPTalker
function UVOIPTalker:CreateTalkerForPlayer(OwningState) end
function UVOIPTalker:BPOnTalkingEnd() end
---@param AudioComponent UAudioComponent
function UVOIPTalker:BPOnTalkingBegin(AudioComponent) end


---@class UVectorField : UObject
---@field Bounds FBox
---@field Intensity float
UVectorField = {}



---@class UVectorFieldAnimated : UVectorField
---@field Texture UTexture2D
---@field ConstructionOp EVectorFieldConstructionOp
---@field VolumeSizeX int32
---@field VolumeSizeY int32
---@field VolumeSizeZ int32
---@field SubImagesX int32
---@field SubImagesY int32
---@field FrameCount int32
---@field FramesPerSecond float
---@field bLoop boolean
---@field NoiseField UVectorFieldStatic
---@field NoiseScale float
---@field NoiseMax float
UVectorFieldAnimated = {}



---@class UVectorFieldComponent : UPrimitiveComponent
---@field VectorField UVectorField
---@field Intensity float
---@field Tightness float
---@field bPreviewVectorField boolean
UVectorFieldComponent = {}

---@param NewIntensity float
function UVectorFieldComponent:SetIntensity(NewIntensity) end


---@class UVectorFieldStatic : UVectorField
---@field SizeX int32
---@field SizeY int32
---@field SizeZ int32
---@field bAllowCPUAccess boolean
---@field CPUData TArray<FVector4>
UVectorFieldStatic = {}



---@class UViewModeUtils : UObject
UViewModeUtils = {}


---@class UVirtualTexture : UObject
UVirtualTexture = {}


---@class UVirtualTexturePoolConfig : UObject
---@field DefaultSizeInMegabyte int32
---@field Pools TArray<FVirtualTextureSpacePoolConfig>
UVirtualTexturePoolConfig = {}



---@class UVisualLoggerAutomationTests : UObject
UVisualLoggerAutomationTests = {}


---@class UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary
UVisualLoggerKismetLibrary = {}

---@param SourceOwner UObject
---@param DestinationOwner UObject
function UVisualLoggerKismetLibrary:RedirectVislog(SourceOwner, DestinationOwner) end
---@param WorldContextObject UObject
---@param Text FString
---@param LogCategory FName
---@param bAddToMessageLog boolean
function UVisualLoggerKismetLibrary:LogText(WorldContextObject, Text, LogCategory, bAddToMessageLog) end
---@param WorldContextObject UObject
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@param Text FString
---@param ObjectColor FLinearColor
---@param Thickness float
---@param CategoryName FName
---@param bAddToMessageLog boolean
function UVisualLoggerKismetLibrary:LogSegment(WorldContextObject, SegmentStart, SegmentEnd, Text, ObjectColor, Thickness, CategoryName, bAddToMessageLog) end
---@param WorldContextObject UObject
---@param Location FVector
---@param Text FString
---@param ObjectColor FLinearColor
---@param Radius float
---@param LogCategory FName
---@param bAddToMessageLog boolean
function UVisualLoggerKismetLibrary:LogLocation(WorldContextObject, Location, Text, ObjectColor, Radius, LogCategory, bAddToMessageLog) end
---@param WorldContextObject UObject
---@param BoxShape FBox
---@param Text FString
---@param ObjectColor FLinearColor
---@param LogCategory FName
---@param bAddToMessageLog boolean
function UVisualLoggerKismetLibrary:LogBox(WorldContextObject, BoxShape, Text, ObjectColor, LogCategory, bAddToMessageLog) end
---@param bEnabled boolean
function UVisualLoggerKismetLibrary:EnableRecording(bEnabled) end


---@class UVoiceChannel : UChannel
UVoiceChannel = {}


---@class UVolumeTexture : UTexture
UVolumeTexture = {}


---@class UWindDirectionalSourceComponent : USceneComponent
---@field Strength float
---@field Speed float
---@field MinGustAmount float
---@field MaxGustAmount float
---@field Radius float
---@field bPointWind boolean
UWindDirectionalSourceComponent = {}

---@param InNewType EWindSourceType
function UWindDirectionalSourceComponent:SetWindType(InNewType) end
---@param InNewStrength float
function UWindDirectionalSourceComponent:SetStrength(InNewStrength) end
---@param InNewSpeed float
function UWindDirectionalSourceComponent:SetSpeed(InNewSpeed) end
---@param InNewRadius float
function UWindDirectionalSourceComponent:SetRadius(InNewRadius) end
---@param InNewMinGust float
function UWindDirectionalSourceComponent:SetMinimumGustAmount(InNewMinGust) end
---@param InNewMaxGust float
function UWindDirectionalSourceComponent:SetMaximumGustAmount(InNewMaxGust) end


---@class UWorld : UObject
---@field PersistentLevel ULevel
---@field NetDriver UNetDriver
---@field LineBatcher ULineBatchComponent
---@field PersistentLineBatcher ULineBatchComponent
---@field ForegroundLineBatcher ULineBatchComponent
---@field NetworkManager AGameNetworkManager
---@field PhysicsCollisionHandler UPhysicsCollisionHandler
---@field ExtraReferencedObjects TArray<UObject>
---@field PerModuleDataObjects TArray<UObject>
---@field LevelSequenceActors TArray<AActor>
---@field StreamingLevels TArray<ULevelStreaming>
---@field StreamingLevelsToConsider FStreamingLevelsToConsider
---@field StreamingLevelsPrefix FString
---@field CurrentLevelPendingVisibility ULevel
---@field CurrentLevelPendingInvisibility ULevel
---@field DemoNetDriver UDemoNetDriver
---@field MyParticleEventManager AParticleEventManager
---@field DefaultPhysicsVolume APhysicsVolume
---@field bAreConstraintsDirty boolean
---@field NavigationSystem UNavigationSystemBase
---@field AuthorityGameMode AGameModeBase
---@field GameState AGameStateBase
---@field AISystem UAISystemBase
---@field AvoidanceManager UAvoidanceManager
---@field Levels TArray<ULevel>
---@field LevelCollections TArray<FLevelCollection>
---@field OwningGameInstance UGameInstance
---@field ParameterCollectionInstances TArray<UMaterialParameterCollectionInstance>
---@field CanvasForRenderingToTarget UCanvas
---@field CanvasForDrawMaterialToRenderTarget UCanvas
---@field ComponentsThatNeedEndOfFrameUpdate TArray<UActorComponent>
---@field ComponentsThatNeedEndOfFrameUpdate_OnGameThread TArray<UActorComponent>
---@field WorldComposition UWorldComposition
---@field PSCPool FWorldPSCPool
UWorld = {}

---@return AWorldSettings
function UWorld:K2_GetWorldSettings() end
function UWorld:HandleTimelineScrubbed() end


---@class UWorldComposition : UObject
---@field TilesStreaming TArray<ULevelStreaming>
---@field TilesStreamingTimeThreshold double
---@field bLoadAllTilesDuringCinematic boolean
---@field bRebaseOriginIn3DSpace boolean
---@field RebaseOriginDistance float
UWorldComposition = {}



---@class UWorldSubsystem : USubsystem
UWorldSubsystem = {}


