---@meta

---@class AArcVehicleSampleCharacter : ACharacter
---@field bUseAttachedVehicleRelevancy boolean
AArcVehicleSampleCharacter = {}



---@class AArcVehicleSpawner : AActor
---@field EditorVehicleMesh UChildActorComponent
---@field VehicleClass TSubclassOf<AArcBaseVehicle>
---@field bSpawnImmediately boolean
---@field RespawnDelay float
---@field MaxVehiclesAlive int32
AArcVehicleSpawner = {}

function AArcVehicleSpawner:SpawnVehicleTimerEnd() end
---@param DestroyedActor AActor
function AArcVehicleSpawner:OnVehicleDestroyed(DestroyedActor) end


