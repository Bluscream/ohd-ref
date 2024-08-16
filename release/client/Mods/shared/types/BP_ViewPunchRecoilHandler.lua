---@meta

---@class UBP_ViewPunchRecoilHandler_C : UDFGunRecoilHandler
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CurrentCofAngleDegrees float
---@field ConeOfFireAngleGrowthPerShotDegrees float
---@field MaxConeOfFireAngleDegrees float
---@field MinConeOfFireAngleDegrees float
---@field ConeOfFireDecayRate float
---@field DesiredCoF float
---@field RecoilDirection float
---@field RecoilPunchMagnitude float
---@field RecoilCounter float
---@field InitialViewAngle FRotator
---@field Recoil_DX float
---@field Recoil_DY float
---@field RecoilRestitutionTime float
---@field VerticalRecoilEasingMode EEasingFunc::Type
---@field HorizontalRecoilEasingMode EEasingFunc::Type
---@field RecoilDT float
UBP_ViewPunchRecoilHandler_C = {}

---@param Controller AController
function UBP_ViewPunchRecoilHandler_C:GetController(Controller) end
---@param ViewRotation FRotator
function UBP_ViewPunchRecoilHandler_C:GetControlRotation(ViewRotation) end
---@return FVector
function UBP_ViewPunchRecoilHandler_C:GetConeOfFireOffset() end
function UBP_ViewPunchRecoilHandler_C:OnWeaponFire() end
function UBP_ViewPunchRecoilHandler_C:ViewPunch() end
---@param DeltaTime float
function UBP_ViewPunchRecoilHandler_C:OnTick(DeltaTime) end
---@param DT float
function UBP_ViewPunchRecoilHandler_C:ComputeConeOfFire(DT) end
---@param DT float
function UBP_ViewPunchRecoilHandler_C:ComputeRecoil(DT) end
function UBP_ViewPunchRecoilHandler_C:OnWeaponStopFire() end
function UBP_ViewPunchRecoilHandler_C:OnWeaponStartFire() end
---@param EntryPoint int32
function UBP_ViewPunchRecoilHandler_C:ExecuteUbergraph_BP_ViewPunchRecoilHandler(EntryPoint) end


