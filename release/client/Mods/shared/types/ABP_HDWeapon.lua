---@meta

---@class UABP_HDWeapon_C : UHDWeaponAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_Slot FAnimNode_Slot
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field bEmpty boolean
---@field BasePoseAnim UAnimSequence
---@field EmptyBasePoseAnim UAnimSequence
---@field OwningWeapon ABP_HDWeaponBase_C
UABP_HDWeapon_C = {}

---@param MontageToPlay UAnimMontage
---@return float
function UABP_HDWeapon_C:PlayEquipMontage(MontageToPlay) end
---@param MontageToPlay UAnimMontage
---@param bFireLast boolean
---@param bAiming boolean
---@return float
function UABP_HDWeapon_C:PlayFireMontage(MontageToPlay, bFireLast, bAiming) end
---@param MontageToPlay UAnimMontage
---@param bFullReload boolean
---@return float
function UABP_HDWeapon_C:PlayReloadMontage(MontageToPlay, bFullReload) end
---@param MontageToPlay UAnimMontage
---@return float
function UABP_HDWeapon_C:PlayUnEquipMontage(MontageToPlay) end
---@param AnimGraph FPoseLink
function UABP_HDWeapon_C:AnimGraph(AnimGraph) end
---@param MontageToPlay UAnimMontage
---@param bForceDisableAutoBlendOut boolean
---@param PlayDuration float
function UABP_HDWeapon_C:PlayWeaponFPPMontage(MontageToPlay, bForceDisableAutoBlendOut, PlayDuration) end
function UABP_HDWeapon_C:AnimNotify_HideMag() end
function UABP_HDWeapon_C:AnimNotify_ShowMag() end
function UABP_HDWeapon_C:AnimNotify_HideBullet() end
function UABP_HDWeapon_C:AnimNotify_ShowBullet() end
---@param bLastFire boolean
function UABP_HDWeapon_C:WeaponFire(bLastFire) end
---@param Gun ADFBaseGun
function UABP_HDWeapon_C:WeaponReloadFinished(Gun) end
---@param NewWeap ADFBaseWeapon
function UABP_HDWeapon_C:BlueprintUpdateWeaponOwnerRefs(NewWeap) end
function UABP_HDWeapon_C:BlueprintInitializeAnimation() end
function UABP_HDWeapon_C:BlueprintBeginPlay() end
---@param EntryPoint int32
function UABP_HDWeapon_C:ExecuteUbergraph_ABP_HDWeapon(EntryPoint) end


