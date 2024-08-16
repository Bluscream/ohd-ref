---@meta

---@class URCONServerSystem : UObject
---@field bEnabled boolean
---@field ListenAddress FString
---@field ListenPort uint16
---@field Password FString
---@field MaxActiveConnections uint32
---@field MaxAuthAttempts uint32
URCONServerSystem = {}

function URCONServerSystem:Shutdown() end
function URCONServerSystem:Init() end


