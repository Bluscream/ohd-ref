---@meta

---@class UWBP_PlayerStatus_C : UHDUIUWPlayerStatus
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EffectChangeUIAnim UWidgetAnimation
---@field StanceChangeUIAnim UWidgetAnimation
---@field AllStaminaFullUIAnim UWidgetAnimation
---@field SprintInputUIAnim UWidgetAnimation
---@field AmmoResupplyFXIcon UImage
---@field EffectStack UHorizontalBox
---@field JumpStaminaBar UWBP_MobilityStatusBar_C
---@field MedicHealFXIcon UHorizontalBox
---@field SprintStaminaBar UWBP_MobilityStatusBar_C
---@field StanceIndicator UWBP_StanceIndicator_C
UWBP_PlayerStatus_C = {}

---@param EffectWidget UWidget
---@param bVisible boolean
function UWBP_PlayerStatus_C:SetPlayerEffectVisibility(EffectWidget, bVisible) end
---@param bVisible boolean
function UWBP_PlayerStatus_C:SetMedicHealingEffectVisibility(bVisible) end
---@param bVisible boolean
function UWBP_PlayerStatus_C:SetAmmoResupplyEffectVisibility(bVisible) end
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UWBP_PlayerStatus_C:OwnerSetHealth(NewValueNorm, OldValueNorm, bInitial) end
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UWBP_PlayerStatus_C:OwnerSetSprintStamina(NewValueNorm, OldValueNorm, bInitial) end
---@param NewValueNorm float
---@param OldValueNorm float
---@param bInitial boolean
function UWBP_PlayerStatus_C:OwnerSetJumpStamina(NewValueNorm, OldValueNorm, bInitial) end
function UWBP_PlayerStatus_C:OwnerStartSprint() end
function UWBP_PlayerStatus_C:OwnerEndSprint() end
---@param SprintValueNorm float
---@param JumpValueNorm float
---@param bInitial boolean
function UWBP_PlayerStatus_C:OwnerUpdateStamina(SprintValueNorm, JumpValueNorm, bInitial) end
---@param NewState EHDUICharacterStanceState
---@param OldState EHDUICharacterStanceState
---@param bInitial boolean
function UWBP_PlayerStatus_C:OwnerSetStanceState(NewState, OldState, bInitial) end
function UWBP_PlayerStatus_C:Construct() end
---@param EffectIndicatorWidget UWidget
function UWBP_PlayerStatus_C:OwnerActivatePlayerEffect(EffectIndicatorWidget) end
---@param EffectIndicatorWidget UWidget
function UWBP_PlayerStatus_C:OwnerDeactivatePlayerEffect(EffectIndicatorWidget) end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function UWBP_PlayerStatus_C:BPOwnerDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param EntryPoint int32
function UWBP_PlayerStatus_C:ExecuteUbergraph_WBP_PlayerStatus(EntryPoint) end


