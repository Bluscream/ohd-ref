---@meta

---@class FUdpMockMessage
---@field Data TArray<uint8>
FUdpMockMessage = {}



---@class UUdpMessagingSettings : UObject
---@field EnableTransport boolean
---@field bAutoRepair boolean
---@field bStopServiceWhenAppDeactivates boolean
---@field UnicastEndpoint FString
---@field MulticastEndpoint FString
---@field MessageFormat EUdpMessageFormat
---@field MulticastTimeToLive uint8
---@field StaticEndpoints TArray<FString>
---@field EnableTunnel boolean
---@field TunnelUnicastEndpoint FString
---@field TunnelMulticastEndpoint FString
---@field RemoteTunnelEndpoints TArray<FString>
UUdpMessagingSettings = {}



