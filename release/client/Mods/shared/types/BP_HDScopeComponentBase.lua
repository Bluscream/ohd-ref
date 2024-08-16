---@meta

---@class UBP_HDScopeComponentBase_C : UHDWeaponScopeComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field UseOverlay boolean
---@field ScopeRadius float
---@field AimingFOV float
---@field ADSOffset float
---@field ScopeMaterialIndex int32
---@field PostProcessMaterial TArray<FWeightedBlendable>
---@field ScopeGlassMaterial UMaterialInterface
---@field ScopeOpticMaterial UMaterialInterface
---@field ScopeOverlayClass TSubclassOf<UUserWidget>
---@field FreeAimMaxPitch float
---@field FreeAimMaxYaw float
---@field ReticleOffsetY float
---@field ReticleOffsetX float
---@field ScopeMIDGlass UMaterialInstanceDynamic
---@field ScopeOverlay UUserWidget
---@field AimInterpSpeed float
---@field ScopeMID UMaterialInstanceDynamic
---@field DefaultAimingFOV float
---@field DefaultAimInterpSpeed float
---@field DefaultFreeAimPitch float
---@field DefaultFreeAimYaw float
---@field DefaultCameraPostProcess FPostProcessSettings
---@field bIsScopedIn boolean
---@field DefaultADSOffset float
---@field ParentMesh UMeshComponent
---@field ControllerRef AHDPlayerController
---@field CharacterRef ABP_HDPlayerCharacterBase_C
---@field ParentWeaponRef ABP_HDWeaponBase_C
---@field PostProcessRef TArray<FWeightedBlendable>
---@field CameraRef ADFPlayerCameraManager
---@field ParentSightList TArray<UBP_HDScopeComponentBase_C>
---@field MPC FMaterialParameterInfo
UBP_HDScopeComponentBase_C = {}

function UBP_HDScopeComponentBase_C:ClearOwnerData() end
---@param IsValid boolean
function UBP_HDScopeComponentBase_C:SetupOwnerData(IsValid) end
---@param IsPlayerDead boolean
function UBP_HDScopeComponentBase_C:LoadDefaults(IsPlayerDead) end
function UBP_HDScopeComponentBase_C:SaveDefaults() end
function UBP_HDScopeComponentBase_C:Init() end
function UBP_HDScopeComponentBase_C:ScopeEffect() end
---@param CanScope boolean
function UBP_HDScopeComponentBase_C:CanScope(CanScope) end
---@param Character ABP_HDPlayerCharacterBase_C
---@param Controller AHDPlayerController
---@param Movement UDFCharacterMovementComponent
---@param Camera ADFPlayerCameraManager
---@param Parent ABP_HDWeaponBase_C
---@param CharacterMesh USkeletalMeshComponent
---@param WeaponMesh UMeshComponent
---@param ParentSightList TArray<UBP_HDScopeComponentBase_C>
---@param FirstPersonMatArray TArray<UMaterialInstanceDynamic>
---@param ThirdPersonMatArray TArray<UMaterialInstanceDynamic>
function UBP_HDScopeComponentBase_C:GetData(Character, Controller, Movement, Camera, Parent, CharacterMesh, WeaponMesh, ParentSightList, FirstPersonMatArray, ThirdPersonMatArray) end
function UBP_HDScopeComponentBase_C:AimOut() end
function UBP_HDScopeComponentBase_C:AimIn() end
---@param bIsStartTransition boolean
function UBP_HDScopeComponentBase_C:AimTransition(bIsStartTransition) end
---@param Character AHDPlayerCharacter
---@param NewAimStyle EHDWeaponAimStyle
---@param PrevAimStyle EHDWeaponAimStyle
---@param bFromPlayerInput boolean
function UBP_HDScopeComponentBase_C:AimStyle(Character, NewAimStyle, PrevAimStyle, bFromPlayerInput) end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UBP_HDScopeComponentBase_C:DeathEvent(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param Character ADFBaseCharacter
---@param NewEquippedItem ADFBaseItem
---@param PrevEquippedItem ADFBaseItem
function UBP_HDScopeComponentBase_C:ItemChanged(Character, NewEquippedItem, PrevEquippedItem) end
function UBP_HDScopeComponentBase_C:ChangeSights() end
---@param DeltaSeconds float
function UBP_HDScopeComponentBase_C:ReceiveTick(DeltaSeconds) end
---@param Component UActorComponent
---@param bReset boolean
function UBP_HDScopeComponentBase_C:EventActivated(Component, bReset) end
---@param Component UActorComponent
function UBP_HDScopeComponentBase_C:EventDeactivated(Component) end
---@param NewCharacter ABP_HDPlayerCharacterBase_C
---@param NewWeapon ABP_HDWeaponBase_C
function UBP_HDScopeComponentBase_C:BindEvents(NewCharacter, NewWeapon) end
---@param OldCharacter ABP_HDPlayerCharacterBase_C
---@param OldWeapon ABP_HDWeaponBase_C
function UBP_HDScopeComponentBase_C:UnbindEvents(OldCharacter, OldWeapon) end
---@param EntryPoint int32
function UBP_HDScopeComponentBase_C:ExecuteUbergraph_BP_HDScopeComponentBase(EntryPoint) end


