#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;                                       // 0x0000 (size: 0x10)
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;                   // 0x0010 (size: 0x10)
    TArray<FClothCollisionPrim_Convex> Convexes;                                      // 0x0020 (size: 0x10)
    TArray<FClothCollisionPrim_Box> Boxes;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FClothCollisionPrim_Box
{
    FVector LocalPosition;                                                            // 0x0000 (size: 0xC)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    FQuat LocalRotation;                                                              // 0x0010 (size: 0x10)
    FVector HalfExtents;                                                              // 0x0020 (size: 0xC)
    int32 BoneIndex;                                                                  // 0x002C (size: 0x4)

}; // Size: 0x30

struct FClothCollisionPrim_Convex
{
    TArray<FPlane> Planes;                                                            // 0x0000 (size: 0x10)
    TArray<FVector> SurfacePoints;                                                    // 0x0010 (size: 0x10)
    int32 BoneIndex;                                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    FVector LocalPosition;                                                            // 0x0008 (size: 0xC)

}; // Size: 0x14

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;                                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FClothVertBoneData
{
    int32 NumInfluences;                                                              // 0x0000 (size: 0x4)
    uint16 BoneIndices;                                                               // 0x0004 (size: 0x18)
    float BoneWeights;                                                                // 0x001C (size: 0x30)

}; // Size: 0x4C

class UClothConfigBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UClothPhysicalMeshDataBase_Legacy : public UObject
{
    TArray<FVector> Vertices;                                                         // 0x0028 (size: 0x10)
    TArray<FVector> Normals;                                                          // 0x0038 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0048 (size: 0x10)
    TArray<float> InverseMasses;                                                      // 0x0058 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0068 (size: 0x10)
    int32 NumFixedVerts;                                                              // 0x0078 (size: 0x4)
    int32 MaxBoneWeights;                                                             // 0x007C (size: 0x4)
    TArray<uint32> SelfCollisionIndices;                                              // 0x0080 (size: 0x10)

}; // Size: 0xE0

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;                                                         // 0x0028 (size: 0x10)
    FGuid AssetGuid;                                                                  // 0x0038 (size: 0x10)

}; // Size: 0x48

class UClothingSimulationFactory : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UClothingSimulationInteractor : public UObject
{
    char padding_0[0x30];                                                             // 0x0000 (size: 0x0)

    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
}; // Size: 0x30

class UDEPRECATED_ClothSharedSimConfigBase : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

#endif
