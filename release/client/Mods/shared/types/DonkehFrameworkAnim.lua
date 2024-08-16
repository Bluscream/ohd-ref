---@meta

---@class FBoneModifier
---@field Bone FName
---@field Offset float
FBoneModifier = {}



---@class FDFCharStanceContext
---@field bWantsToBeInStance boolean
---@field bIsInStance boolean
---@field bFullyTransitionedIntoStance boolean
FDFCharStanceContext = {}



---@class FFootstepFXSettings
---@field SoundsToPlay TMap<EPhysicalSurface, FPerspectiveSound>
---@field VolumeMultiplier float
---@field PitchMultiplier float
---@field bAttachSound boolean
---@field bPlaySoundsWithPerspMeshOnly boolean
---@field EffectsToSpawn TMap<EPhysicalSurface, UFXSystemAsset>
---@field bAttachEffect boolean
---@field EffectLocationOffset FVector
---@field EffectRotationOffset FRotator
---@field EffectScale FVector
---@field bSpawnEffectsWithPerspMeshOnly boolean
---@field FootstepVariant EFootstepVariant
---@field FootstepVariantParamName FName
---@field FootBoneName FName
---@field FootTraceOffset float
---@field bDebug boolean
FFootstepFXSettings = {}



---@class UAnimNotify_PlayFootstepFX : UAnimNotify
---@field SoundsToPlay TMap<EPhysicalSurface, FPerspectiveSound>
---@field VolumeMultiplier float
---@field PitchMultiplier float
---@field bAttachSound boolean
---@field bPlaySoundsWithPerspMeshOnly boolean
---@field EffectsToSpawn TMap<EPhysicalSurface, UFXSystemAsset>
---@field bAttachEffect boolean
---@field EffectLocationOffset FVector
---@field EffectRotationOffset FRotator
---@field EffectScale FVector
---@field bSpawnEffectsWithPerspMeshOnly boolean
---@field FootstepVariant EFootstepVariant
---@field FootstepVariantParamName FName
---@field FootBoneName FName
---@field FootTraceOffset float
---@field bDebug boolean
UAnimNotify_PlayFootstepFX = {}

---@param PropsToUse FFootstepFXSettings
function UAnimNotify_PlayFootstepFX:SetFootstepNotifyProps(PropsToUse) end
---@return FFootstepFXSettings
function UAnimNotify_PlayFootstepFX:GetFootstepNotifyProps() end
---@param Props FFootstepFXSettings
---@param OtherProps FFootstepFXSettings
---@return boolean
function UAnimNotify_PlayFootstepFX:EqualProps(Props, OtherProps) end


---@class UDFCharacterAnimInstance : UAnimInstance
---@field bPreviewAnimInstance boolean
---@field CachedPawnOwner APawn
---@field DFCharOwner ADFBaseCharacter
---@field ControllerOwner AController
---@field EquippedWeapon ADFBaseItem
---@field MoveMode EMovementMode
---@field MoveStance ECharacterStance
---@field MoveVelocity FVector
---@field MoveSpeed float
---@field MoveDirectionDeg float
---@field bMoving boolean
---@field bInAir boolean
---@field bJumped boolean
---@field bSprinting boolean
---@field bAiming boolean
---@field bLeaning boolean
---@field StandState FDFCharStanceContext
---@field CrouchState FDFCharStanceContext
---@field ProneState FDFCharStanceContext
---@field AimOffsets FRotator
UDFCharacterAnimInstance = {}

---@return ADFBaseItem
function UDFCharacterAnimInstance:TryGetOwnerWeapon() end
---@return AController
function UDFCharacterAnimInstance:TryGetControllerOwner() end
---@param Character ADFBaseCharacter
---@param NewEquippedWeap ADFBaseItem
---@param PrevEquippedWeap ADFBaseItem
function UDFCharacterAnimInstance:EquippedWeaponChanged(Character, NewEquippedWeap, PrevEquippedWeap) end
---@param NewPawn APawn
function UDFCharacterAnimInstance:BlueprintUpdatePawnOwnerRefs(NewPawn) end
---@param NewWeap ADFBaseItem
function UDFCharacterAnimInstance:BlueprintUpdateEquippedWeaponRefs(NewWeap) end
---@param NewC AController
function UDFCharacterAnimInstance:BlueprintUpdateControllerOwnerRefs(NewC) end


---@class UDFWeaponAnimInstance : UAnimInstance
---@field bPreviewAnimInstance boolean
---@field WeaponOwner ADFBaseWeapon
UDFWeaponAnimInstance = {}

---@return ADFBaseWeapon
function UDFWeaponAnimInstance:TryGetWeaponOwner() end
---@param NewWeap ADFBaseWeapon
function UDFWeaponAnimInstance:BlueprintUpdateWeaponOwnerRefs(NewWeap) end


