---@meta

---@class ABP_HDAIControllerBase_C : AHDAIController
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PerceptionComp UAIPerceptionComponent
---@field GOAPComp UHDGOAPComponent
---@field SavedMaxConeOfFireAngleDegrees float
---@field SavedMinConeOfFireAngleDegrees float
---@field bSavedInfiniteAmmo boolean
---@field bSavedInfiniteClipAmmo boolean
---@field DefaultFactionVocalProfiles UDataTable
ABP_HDAIControllerBase_C = {}

function ABP_HDAIControllerBase_C:SetupVocalProfile() end
---@param Weapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:ResetWeaponBase(Weapon) end
---@param Weapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:SetupWeaponBase(Weapon) end
function ABP_HDAIControllerBase_C:ClearWeaponSavedValues() end
---@param Weapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:RestorePreviousValuesForWeapon(Weapon) end
---@param Weapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:SaveAndApplyNewValuesToWeapon(Weapon) end
---@param Weapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:ResetRecoilHandler(Weapon) end
---@param Weapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:SetupRecoilHandler(Weapon) end
---@param Character ABP_HDPlayerCharacterBase_C
function ABP_HDAIControllerBase_C:CharacterCleanup(Character) end
---@param Character ABP_HDPlayerCharacterBase_C
function ABP_HDAIControllerBase_C:UnbindEventsFromCharacter(Character) end
---@param Character ABP_HDPlayerCharacterBase_C
function ABP_HDAIControllerBase_C:BindEventsToCharacter(Character) end
---@param EquippedWeapon ABP_HDWeaponBase_C
function ABP_HDAIControllerBase_C:WarnOfNoRecoilHandler(EquippedWeapon) end
---@return UHDKit
function ABP_HDAIControllerBase_C:GetFactionSpecifiedSquadMemberKit() end
---@return UHDKit
function ABP_HDAIControllerBase_C:GetFactionSpecifiedSquadLeaderKit() end
---@param VictimPawn APawn
---@param VictimController AController
---@param KillingDamage float
---@param DamageEvent FDamageEvent
---@param InstigatingPawn APawn
---@param DamageCauser AActor
function ABP_HDAIControllerBase_C:OnOwnerPawnDeath(VictimPawn, VictimController, KillingDamage, DamageEvent, InstigatingPawn, DamageCauser) end
---@param Character ADFBaseCharacter
---@param NewEquippedItem ADFBaseItem
---@param PrevEquippedItem ADFBaseItem
function ABP_HDAIControllerBase_C:OnOwnerPawnEquippedItemChange(Character, NewEquippedItem, PrevEquippedItem) end
---@param PossessedPawn APawn
function ABP_HDAIControllerBase_C:ReceivePossess(PossessedPawn) end
---@param OtherProjectile ADFBaseProjectile
---@param Pickup ADFBasePickup
function ABP_HDAIControllerBase_C:SuppressionEvent(OtherProjectile, Pickup) end
---@param OtherProjectile ADFBaseProjectile
---@param Pickup ADFBasePickup
function ABP_HDAIControllerBase_C:HitDamageEvent(OtherProjectile, Pickup) end
---@param UnpossessedPawn APawn
function ABP_HDAIControllerBase_C:ReceiveUnPossess(UnpossessedPawn) end
---@param EntryPoint int32
function ABP_HDAIControllerBase_C:ExecuteUbergraph_BP_HDAIControllerBase(EntryPoint) end


