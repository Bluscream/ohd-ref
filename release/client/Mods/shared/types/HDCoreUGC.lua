---@meta

---@class FHDCoreUGCPluginStateMachineProperties
---@field UGCData UHDCoreUGCData
FHDCoreUGCPluginStateMachineProperties = {}



---@class FUGCPrimaryAssetSearchInfo
---@field AssetType FPrimaryAssetType
---@field Directory FString
FUGCPrimaryAssetSearchInfo = {}



---@class UHDCoreDefaultUGCProjectPolicies : UHDCoreUGCProjectPolicies
UHDCoreDefaultUGCProjectPolicies = {}


---@class UHDCoreUGCData : UPrimaryDataAsset
UHDCoreUGCData = {}


---@class UHDCoreUGCPluginStateMachine : UObject
---@field StateProperties FHDCoreUGCPluginStateMachineProperties
UHDCoreUGCPluginStateMachine = {}



---@class UHDCoreUGCProjectPolicies : UObject
UHDCoreUGCProjectPolicies = {}


---@class UHDCoreUGCSubsystem : UEngineSubsystem
---@field UGCPluginStateMachines TMap<FString, UHDCoreUGCPluginStateMachine>
---@field GameSpecificPolicies UHDCoreUGCProjectPolicies
UHDCoreUGCSubsystem = {}



---@class UHDCoreUGCSubsystemSettings : UDeveloperSettings
---@field UGCManagerClassName FSoftClassPath
---@field DisabledPlugins TArray<FString>
---@field AdditionalPluginMetadataKeys TArray<FString>
UHDCoreUGCSubsystemSettings = {}



