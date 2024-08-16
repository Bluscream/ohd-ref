---@meta

---@class FRecordedFrame
---@field Transforms TArray<FTransform>
---@field TransformIndices TArray<int32>
---@field PreviousTransformIndices TArray<int32>
---@field DisabledFlags TArray<boolean>
---@field Collisions TArray<FSolverCollisionData>
---@field Breakings TArray<FSolverBreakingData>
---@field Trailings TSet<FSolverTrailingData>
---@field Timestamp float
FRecordedFrame = {}



---@class FRecordedTransformTrack
---@field Records TArray<FRecordedFrame>
FRecordedTransformTrack = {}



---@class FSolverBreakingData
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field ParticleIndex int32
---@field ParticleIndexMesh int32
FSolverBreakingData = {}



---@class FSolverCollisionData
---@field Location FVector
---@field AccumulatedImpulse FVector
---@field Normal FVector
---@field Velocity1 FVector
---@field Velocity2 FVector
---@field AngularVelocity1 FVector
---@field AngularVelocity2 FVector
---@field Mass1 float
---@field Mass2 float
---@field ParticleIndex int32
---@field LevelsetIndex int32
---@field ParticleIndexMesh int32
---@field LevelsetIndexMesh int32
FSolverCollisionData = {}



---@class FSolverTrailingData
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field ParticleIndex int32
---@field ParticleIndexMesh int32
FSolverTrailingData = {}



