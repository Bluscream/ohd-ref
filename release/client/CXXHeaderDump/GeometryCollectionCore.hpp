#ifndef UE4SS_SDK_GeometryCollectionCore_HPP
#define UE4SS_SDK_GeometryCollectionCore_HPP

#include "GeometryCollectionCore_enums.hpp"

struct FRecordedFrame
{
    TArray<FTransform> Transforms;                                                    // 0x0000 (size: 0x10)
    TArray<int32> TransformIndices;                                                   // 0x0010 (size: 0x10)
    TArray<int32> PreviousTransformIndices;                                           // 0x0020 (size: 0x10)
    TArray<bool> DisabledFlags;                                                       // 0x0030 (size: 0x10)
    TArray<FSolverCollisionData> Collisions;                                          // 0x0040 (size: 0x10)
    TArray<FSolverBreakingData> Breakings;                                            // 0x0050 (size: 0x10)
    TSet<FSolverTrailingData> Trailings;                                              // 0x0060 (size: 0x50)
    float Timestamp;                                                                  // 0x00B0 (size: 0x4)

}; // Size: 0xB8

struct FRecordedTransformTrack
{
    TArray<FRecordedFrame> Records;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSolverBreakingData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Velocity;                                                                 // 0x000C (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0018 (size: 0xC)
    float Mass;                                                                       // 0x0024 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x0028 (size: 0x4)
    int32 ParticleIndexMesh;                                                          // 0x002C (size: 0x4)

}; // Size: 0x30

struct FSolverCollisionData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector AccumulatedImpulse;                                                       // 0x000C (size: 0xC)
    FVector Normal;                                                                   // 0x0018 (size: 0xC)
    FVector Velocity1;                                                                // 0x0024 (size: 0xC)
    FVector Velocity2;                                                                // 0x0030 (size: 0xC)
    FVector AngularVelocity1;                                                         // 0x003C (size: 0xC)
    FVector AngularVelocity2;                                                         // 0x0048 (size: 0xC)
    float Mass1;                                                                      // 0x0054 (size: 0x4)
    float Mass2;                                                                      // 0x0058 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x005C (size: 0x4)
    int32 LevelsetIndex;                                                              // 0x0060 (size: 0x4)
    int32 ParticleIndexMesh;                                                          // 0x0064 (size: 0x4)
    int32 LevelsetIndexMesh;                                                          // 0x0068 (size: 0x4)

}; // Size: 0x6C

struct FSolverTrailingData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Velocity;                                                                 // 0x000C (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0018 (size: 0xC)
    float Mass;                                                                       // 0x0024 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x0028 (size: 0x4)
    int32 ParticleIndexMesh;                                                          // 0x002C (size: 0x4)

}; // Size: 0x30

#endif
