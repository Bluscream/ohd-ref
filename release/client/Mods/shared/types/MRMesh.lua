---@meta

---@class FMRMeshConfiguration
FMRMeshConfiguration = {}


---@class UMRMeshComponent : UPrimitiveComponent
---@field Material UMaterialInterface
---@field bCreateMeshProxySections boolean
---@field bUpdateNavMeshOnMeshUpdate boolean
---@field bNeverCreateCollisionMesh boolean
---@field CachedBodySetup UBodySetup
---@field BodySetups TArray<UBodySetup>
---@field WireframeMaterial UMaterialInterface
UMRMeshComponent = {}

---@return boolean
function UMRMeshComponent:IsConnected() end
function UMRMeshComponent:ForceNavMeshUpdate() end
function UMRMeshComponent:Clear() end


---@class UMeshReconstructorBase : UObject
UMeshReconstructorBase = {}

function UMeshReconstructorBase:StopReconstruction() end
function UMeshReconstructorBase:StartReconstruction() end
function UMeshReconstructorBase:PauseReconstruction() end
---@return boolean
function UMeshReconstructorBase:IsReconstructionStarted() end
---@return boolean
function UMeshReconstructorBase:IsReconstructionPaused() end
function UMeshReconstructorBase:DisconnectMRMesh() end
---@param Mesh UMRMeshComponent
function UMeshReconstructorBase:ConnectMRMesh(Mesh) end


---@class UMockDataMeshTrackerComponent : USceneComponent
---@field OnMeshTrackerUpdated FMockDataMeshTrackerComponentOnMeshTrackerUpdated
---@field ScanWorld boolean
---@field RequestNormals boolean
---@field RequestVertexConfidence boolean
---@field VertexColorMode EMeshTrackerVertexColorMode
---@field BlockVertexColors TArray<FColor>
---@field VertexColorFromConfidenceZero FLinearColor
---@field VertexColorFromConfidenceOne FLinearColor
---@field UpdateInterval float
---@field MRMesh UMRMeshComponent
UMockDataMeshTrackerComponent = {}

---@param Index int32
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param Confidence TArray<float>
function UMockDataMeshTrackerComponent:OnMockDataMeshTrackerUpdated__DelegateSignature(Index, Vertices, Triangles, Normals, Confidence) end
---@param InMRMeshPtr UMRMeshComponent
function UMockDataMeshTrackerComponent:DisconnectMRMesh(InMRMeshPtr) end
---@param InMRMeshPtr UMRMeshComponent
function UMockDataMeshTrackerComponent:ConnectMRMesh(InMRMeshPtr) end


