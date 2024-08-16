---@meta

---@class IBPI_HDWeaponAnimSet_C : IInterface
IBPI_HDWeaponAnimSet_C = {}

---@param bOutUseMirrored boolean
function IBPI_HDWeaponAnimSet_C:ShouldUseMirroredLowerBodyLoco(bOutUseMirrored) end
---@param OutAnimSet TMap<FName, UAnimSequenceBase>
function IBPI_HDWeaponAnimSet_C:GetLocoTPPAnimSet(OutAnimSet) end
---@param OutAnimSet TMap<FName, UAnimSequenceBase>
function IBPI_HDWeaponAnimSet_C:GetLocoAnimSet(OutAnimSet) end


