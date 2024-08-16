---@meta

---@class UChaosClothConfig : UClothConfigCommon
---@field MassMode EClothMassMode
---@field UniformMass float
---@field TotalMass float
---@field Density float
---@field MinPerParticleMass float
---@field EdgeStiffness float
---@field BendingStiffness float
---@field AreaStiffness float
---@field VolumeStiffness float
---@field StrainLimitingStiffness float
---@field LimitScale float
---@field bUseGeodesicDistance boolean
---@field ShapeTargetStiffness float
---@field CollisionThickness float
---@field FrictionCoefficient float
---@field DampingCoefficient float
---@field DragCoefficient float
---@field AnimDriveSpringStiffness float
---@field bUseBendingElements boolean
---@field bUseTetrahedralConstraints boolean
---@field bUseThinShellVolumeConstraints boolean
---@field bUseSelfCollisions boolean
---@field bUseContinuousCollisionDetection boolean
---@field LinearVelocityScale FVector
---@field AngularVelocityScale float
UChaosClothConfig = {}



---@class UChaosClothSharedSimConfig : UClothSharedConfigCommon
---@field IterationCount int32
---@field SubdivisionCount int32
---@field SelfCollisionThickness float
---@field CollisionThickness float
---@field bUseDampingOverride boolean
---@field Damping float
---@field bUseGravityOverride boolean
---@field GravityScale float
---@field Gravity FVector
---@field bUseLocalSpaceSimulation boolean
---@field bUseXPBDConstraints boolean
UChaosClothSharedSimConfig = {}



---@class UChaosClothingSimulationFactory : UClothingSimulationFactory
UChaosClothingSimulationFactory = {}


---@class UChaosClothingSimulationInteractor : UClothingSimulationInteractor
UChaosClothingSimulationInteractor = {}


