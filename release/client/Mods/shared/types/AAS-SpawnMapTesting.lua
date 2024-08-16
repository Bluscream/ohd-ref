---@meta

---@class AAAS-SpawnMapTesting_C : ATBLevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['BoundaryMarkerB_ExecuteUbergraph_AAS-SpawnMapTesting_RefProperty'] AActor
---@field ['BoundaryMarkerA_ExecuteUbergraph_AAS-SpawnMapTesting_RefProperty'] AActor
AAAS-SpawnMapTesting_C = {}

function AAAS-SpawnMapTesting_C:ReceiveBeginPlay() end
---@param EntryPoint int32
AAAS-SpawnMapTesting_C['ExecuteUbergraph_AAS-SpawnMapTesting'] = function(EntryPoint) end


