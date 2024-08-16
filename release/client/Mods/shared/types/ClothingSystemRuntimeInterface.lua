---@meta

---@class FClothCollisionData
---@field Spheres TArray<FClothCollisionPrim_Sphere>
---@field SphereConnections TArray<FClothCollisionPrim_SphereConnection>
---@field Convexes TArray<FClothCollisionPrim_Convex>
---@field Boxes TArray<FClothCollisionPrim_Box>
FClothCollisionData = {}



---@class FClothCollisionPrim_Box
---@field LocalPosition FVector
---@field LocalRotation FQuat
---@field HalfExtents FVector
---@field BoneIndex int32
FClothCollisionPrim_Box = {}



---@class FClothCollisionPrim_Convex
---@field Planes TArray<FPlane>
---@field SurfacePoints TArray<FVector>
---@field BoneIndex int32
FClothCollisionPrim_Convex = {}



---@class FClothCollisionPrim_Sphere
---@field BoneIndex int32
---@field Radius float
---@field LocalPosition FVector
FClothCollisionPrim_Sphere = {}



---@class FClothCollisionPrim_SphereConnection
---@field SphereIndices int32
FClothCollisionPrim_SphereConnection = {}



---@class FClothVertBoneData
---@field NumInfluences int32
---@field BoneIndices uint16
---@field BoneWeights float
FClothVertBoneData = {}



---@class UClothConfigBase : UObject
UClothConfigBase = {}


---@class UClothPhysicalMeshDataBase_Legacy : UObject
---@field Vertices TArray<FVector>
---@field Normals TArray<FVector>
---@field Indices TArray<uint32>
---@field InverseMasses TArray<float>
---@field BoneData TArray<FClothVertBoneData>
---@field NumFixedVerts int32
---@field MaxBoneWeights int32
---@field SelfCollisionIndices TArray<uint32>
UClothPhysicalMeshDataBase_Legacy = {}



---@class UClothingAssetBase : UObject
---@field ImportedFilePath FString
---@field AssetGuid FGuid
UClothingAssetBase = {}



---@class UClothingSimulationFactory : UObject
UClothingSimulationFactory = {}


---@class UClothingSimulationInteractor : UObject
UClothingSimulationInteractor = {}

---@param InStiffness float
function UClothingSimulationInteractor:SetAnimDriveSpringStiffness(InStiffness) end
function UClothingSimulationInteractor:PhysicsAssetUpdated() end
---@param InVector FVector
function UClothingSimulationInteractor:EnableGravityOverride(InVector) end
function UClothingSimulationInteractor:DisableGravityOverride() end
function UClothingSimulationInteractor:ClothConfigUpdated() end


---@class UDEPRECATED_ClothSharedSimConfigBase : UObject
UDEPRECATED_ClothSharedSimConfigBase = {}


