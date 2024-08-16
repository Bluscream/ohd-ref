---@meta

---@class FClothConfig_Legacy
---@field WindMethod EClothingWindMethod_Legacy
---@field VerticalConstraintConfig FClothConstraintSetup_Legacy
---@field HorizontalConstraintConfig FClothConstraintSetup_Legacy
---@field BendConstraintConfig FClothConstraintSetup_Legacy
---@field ShearConstraintConfig FClothConstraintSetup_Legacy
---@field SelfCollisionRadius float
---@field SelfCollisionStiffness float
---@field SelfCollisionCullScale float
---@field Damping FVector
---@field Friction float
---@field WindDragCoefficient float
---@field WindLiftCoefficient float
---@field LinearDrag FVector
---@field AngularDrag FVector
---@field LinearInertiaScale FVector
---@field AngularInertiaScale FVector
---@field CentrifugalInertiaScale FVector
---@field SolverFrequency float
---@field StiffnessFrequency float
---@field GravityScale float
---@field GravityOverride FVector
---@field bUseGravityOverride boolean
---@field TetherStiffness float
---@field TetherLimit float
---@field CollisionThickness float
---@field AnimDriveSpringStiffness float
---@field AnimDriveDamperStiffness float
FClothConfig_Legacy = {}



---@class FClothConstraintSetup_Legacy
---@field Stiffness float
---@field StiffnessMultiplier float
---@field StretchLimit float
---@field CompressionLimit float
FClothConstraintSetup_Legacy = {}



---@class FClothLODDataCommon
---@field PhysicalMeshData FClothPhysicalMeshData
---@field CollisionData FClothCollisionData
FClothLODDataCommon = {}



---@class FClothParameterMask_Legacy
---@field MaskName FName
---@field CurrentTarget EWeightMapTargetCommon
---@field MaxValue float
---@field MinValue float
---@field Values TArray<float>
---@field bEnabled boolean
FClothParameterMask_Legacy = {}



---@class FClothPhysicalMeshData
---@field Vertices TArray<FVector>
---@field Normals TArray<FVector>
---@field Indices TArray<uint32>
---@field WeightMaps TMap<uint32, FPointWeightMap>
---@field InverseMasses TArray<float>
---@field BoneData TArray<FClothVertBoneData>
---@field MaxBoneWeights int32
---@field NumFixedVerts int32
---@field SelfCollisionIndices TArray<uint32>
---@field MaxDistances TArray<float>
---@field BackstopDistances TArray<float>
---@field BackstopRadiuses TArray<float>
---@field AnimDriveMultipliers TArray<float>
FClothPhysicalMeshData = {}



---@class FPointWeightMap
---@field Values TArray<float>
FPointWeightMap = {}



---@class UClothConfigCommon : UClothConfigBase
UClothConfigCommon = {}


---@class UClothLODDataCommon_Legacy : UObject
---@field PhysicalMeshData UClothPhysicalMeshDataBase_Legacy
---@field ClothPhysicalMeshData FClothPhysicalMeshData
---@field CollisionData FClothCollisionData
UClothLODDataCommon_Legacy = {}



---@class UClothSharedConfigCommon : UClothConfigCommon
UClothSharedConfigCommon = {}


---@class UClothingAssetCommon : UClothingAssetBase
---@field PhysicsAsset UPhysicsAsset
---@field ClothConfigs TMap<FName, UClothConfigBase>
---@field ClothSharedSimConfig UClothConfigBase
---@field ClothSimConfig UClothConfigBase
---@field ChaosClothSimConfig UClothConfigBase
---@field ClothLODData TArray<UClothLODDataCommon_Legacy>
---@field LODData TArray<FClothLODDataCommon>
---@field LodMap TArray<int32>
---@field UsedBoneNames TArray<FName>
---@field UsedBoneIndices TArray<int32>
---@field ReferenceBoneIndex int32
---@field CustomData UClothingAssetCustomData
---@field ClothConfig FClothConfig_Legacy
UClothingAssetCommon = {}



---@class UClothingAssetCustomData : UObject
UClothingAssetCustomData = {}


