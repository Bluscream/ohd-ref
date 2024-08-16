---@meta

---@class UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState
---@field Template UNiagaraSystem
---@field SocketName FName
---@field LocationOffset FVector
---@field RotationOffset FRotator
---@field bDestroyAtEnd boolean
UAnimNotifyState_TimedNiagaraEffect = {}



---@class UAnimNotify_PlayNiagaraEffect : UAnimNotify
---@field Template UNiagaraSystem
---@field LocationOffset FVector
---@field RotationOffset FRotator
---@field Scale FVector
---@field Attached boolean
---@field SocketName FName
UAnimNotify_PlayNiagaraEffect = {}

---@return UFXSystemComponent
function UAnimNotify_PlayNiagaraEffect:GetSpawnedEffect() end


