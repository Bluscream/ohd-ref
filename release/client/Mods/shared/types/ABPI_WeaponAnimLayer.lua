---@meta

---@class IABPI_WeaponAnimLayer_C : IAnimLayerInterface
IABPI_WeaponAnimLayer_C = {}

---@param LowerJumpLoop FPoseLink
---@param WeaponJumpLoop FPoseLink
function IABPI_WeaponAnimLayer_C:WeaponJumpLoop(LowerJumpLoop, WeaponJumpLoop) end
---@param LowerIdle_Move FPoseLink
---@param WeaponIdle_Move FPoseLink
IABPI_WeaponAnimLayer_C['WeaponIdle/Move'] = function(LowerIdle_Move, WeaponIdle_Move) end
---@param WeaponAdditive FPoseLink
function IABPI_WeaponAnimLayer_C:WeaponAdditive(WeaponAdditive) end
---@param UpperBody FPoseLink
---@param WeaponUpperBody FPoseLink
function IABPI_WeaponAnimLayer_C:WeaponUpperBody(UpperBody, WeaponUpperBody) end


