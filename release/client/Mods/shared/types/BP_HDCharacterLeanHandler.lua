---@meta

---@class UBP_HDCharacterLeanHandler_C : UDFCharacterLeanHandler
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CachedFPPCamera UCameraComponent
---@field CachedFPPMesh USkeletalMeshComponent
---@field LastLeanRollAmt float
---@field LastXOffset float
---@field LastYOffset float
---@field CachedFPPSpringArm USpringArmComponent
UBP_HDCharacterLeanHandler_C = {}

---@param DeltaTime float
function UBP_HDCharacterLeanHandler_C:TickRot(DeltaTime) end
---@param DeltaTime float
function UBP_HDCharacterLeanHandler_C:TickYOffset(DeltaTime) end
---@param DeltaTime float
function UBP_HDCharacterLeanHandler_C:TickXOffset(DeltaTime) end
---@param FPPSpringArm USpringArmComponent
function UBP_HDCharacterLeanHandler_C:GetFPPSpringArmComp(FPPSpringArm) end
---@param FPPCamera UCameraComponent
function UBP_HDCharacterLeanHandler_C:GetFPPCameraComp(FPPCamera) end
---@param FPPMesh USkeletalMeshComponent
function UBP_HDCharacterLeanHandler_C:GetFPPMeshComp(FPPMesh) end
---@param DeltaTime float
function UBP_HDCharacterLeanHandler_C:ReceiveTick(DeltaTime) end
---@param EntryPoint int32
function UBP_HDCharacterLeanHandler_C:ExecuteUbergraph_BP_HDCharacterLeanHandler(EntryPoint) end


