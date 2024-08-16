---@meta

---@class ABP_HDScopeWeaponBase_C : ABP_HDWeaponBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadiusDebugSphere USphereComponent
---@field RadiusDebugTopPoint USceneComponent
---@field PlayerCharOwner ABP_HDPlayerCharacterBase_C
---@field PlayerCharOwnerMoveComp UDFCharacterMovementComponent
---@field PCOwner AHDPlayerController
---@field PlayerOwnerCamMgr ADFPlayerCameraManager
---@field DefaultAimingFOV float
---@field DefaultAimingDistance float
---@field DefaultAimInterpSpeed float
---@field DefaultFreeAimPitch float
---@field DefaultFreeAimYaw float
---@field DefaultCameraPostProcess FPostProcessSettings
---@field ScopeMID UMaterialInstanceDynamic
---@field ScopeMIDGlass UMaterialInstanceDynamic
---@field bUseOverlay boolean
---@field AimingFOV float
---@field AimInterpSpeed float
---@field AimInDelay float
---@field BlurEffectDelay float
---@field ScopeRadius float
---@field FreeAimMaxPitch float
---@field FreeAimMaxYaw float
---@field ScopeMaterialIndex int32
---@field PostProcessMaterial TArray<FWeightedBlendable>
---@field ScopeGlassMaterial UMaterialInterface
---@field ScopeOpticMaterial UMaterialInterface
---@field ScopeOverlay UUserWidget
---@field ScopeOverlayClass TSubclassOf<UUserWidget>
---@field ReticleOffsetY float
---@field ReticleOffsetX float
---@field PostProcessRef TArray<FWeightedBlendable>
ABP_HDScopeWeaponBase_C = {}

---@param bUseScope boolean
function ABP_HDScopeWeaponBase_C:ShouldUseScope(bUseScope) end
function ABP_HDScopeWeaponBase_C:SaveOwnerDefaultValues() end
function ABP_HDScopeWeaponBase_C:RestoreOwnerDefaultValues() end
function ABP_HDScopeWeaponBase_C:ScopeEffects() end
function ABP_HDScopeWeaponBase_C:AimOut() end
function ABP_HDScopeWeaponBase_C:AimIn() end
---@param bLocalPlayerOwner boolean
function ABP_HDScopeWeaponBase_C:HasLocallyPlayerControlledOwner(bLocalPlayerOwner) end
---@param bCharAliveCheck boolean
---@param bValidOwnerData boolean
function ABP_HDScopeWeaponBase_C:HasValidOwnerData(bCharAliveCheck, bValidOwnerData) end
function ABP_HDScopeWeaponBase_C:ResetDefaultValues() end
function ABP_HDScopeWeaponBase_C:CleanupOwnerData() end
---@param bValidOwnerData boolean
function ABP_HDScopeWeaponBase_C:SetupOwnerData(bValidOwnerData) end
function ABP_HDScopeWeaponBase_C:UserConstructionScript() end
function ABP_HDScopeWeaponBase_C:StartAimInScope() end
function ABP_HDScopeWeaponBase_C:StartAimOutScope() end
---@param DeltaSeconds float
function ABP_HDScopeWeaponBase_C:ReceiveTick(DeltaSeconds) end
function ABP_HDScopeWeaponBase_C:ReceiveOnEquipFinished() end
---@param bPlayAnimAndWait boolean
---@param bLeavingPawnInventory boolean
function ABP_HDScopeWeaponBase_C:ReceiveOnUnEquip(bPlayAnimAndWait, bLeavingPawnInventory) end
function ABP_HDScopeWeaponBase_C:ResetAimOutGate() end
---@param LastOwner ADFBaseCharacter
function ABP_HDScopeWeaponBase_C:ReceiveOnLeaveInventory(LastOwner) end
---@param Sight USceneComponent
function ABP_HDScopeWeaponBase_C:SetCurrentSight(Sight) end
function ABP_HDScopeWeaponBase_C:OnBraceAimEnd() end
---@param EntryPoint int32
function ABP_HDScopeWeaponBase_C:ExecuteUbergraph_BP_HDScopeWeaponBase(EntryPoint) end


