#ifndef UE4SS_SDK_Foliage_HPP
#define UE4SS_SDK_Foliage_HPP

#include "Foliage_enums.hpp"

struct FFoliageTypeObject
{
    class UObject* FoliageTypeObject;                                                 // 0x0000 (size: 0x8)
    class UFoliageType* TypeInstance;                                                 // 0x0008 (size: 0x8)
    bool bIsAsset;                                                                    // 0x0010 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0011 (size: 0x7)
    TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FFoliageVertexColorChannelMask
{
    uint8 UseMask;                                                                    // 0x0000 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0001 (size: 0x3)
    float MaskThreshold;                                                              // 0x0004 (size: 0x4)
    uint8 InvertMask;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FProceduralFoliageInstance
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    char padding_0[0x4];                                                              // 0x000C (size: 0x4)
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)
    FVector Normal;                                                                   // 0x0020 (size: 0xC)
    float Age;                                                                        // 0x002C (size: 0x4)
    float Scale;                                                                      // 0x0030 (size: 0x4)
    char padding_1[0x4];                                                              // 0x0034 (size: 0x4)
    class UFoliageType* Type;                                                         // 0x0038 (size: 0x8)

}; // Size: 0x60

class AInstancedFoliageActor : public AActor
{
    char padding_0[0x270];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x270

class AInteractiveFoliageActor : public AStaticMeshActor
{
    class UCapsuleComponent* CapsuleComponent;                                        // 0x0230 (size: 0x8)
    FVector TouchingActorEntryPosition;                                               // 0x0238 (size: 0xC)
    FVector FoliageVelocity;                                                          // 0x0244 (size: 0xC)
    FVector FoliageForce;                                                             // 0x0250 (size: 0xC)
    FVector FoliagePosition;                                                          // 0x025C (size: 0xC)
    float FoliageDamageImpulseScale;                                                  // 0x0268 (size: 0x4)
    float FoliageTouchImpulseScale;                                                   // 0x026C (size: 0x4)
    float FoliageStiffness;                                                           // 0x0270 (size: 0x4)
    float FoliageStiffnessQuadratic;                                                  // 0x0274 (size: 0x4)
    float FoliageDamping;                                                             // 0x0278 (size: 0x4)
    float MaxDamageImpulse;                                                           // 0x027C (size: 0x4)
    float MaxTouchImpulse;                                                            // 0x0280 (size: 0x4)
    float MaxForce;                                                                   // 0x0284 (size: 0x4)
    float Mass;                                                                       // 0x0288 (size: 0x4)

    void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
}; // Size: 0x290

class AProceduralFoliageBlockingVolume : public AVolume
{
    class AProceduralFoliageVolume* ProceduralFoliageVolume;                          // 0x0258 (size: 0x8)

}; // Size: 0x260

class AProceduralFoliageVolume : public AVolume
{
    class UProceduralFoliageComponent* ProceduralComponent;                           // 0x0258 (size: 0x8)

}; // Size: 0x260

class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage; // 0x0630 (size: 0x10)
    void InstancePointDamageSignature(int32 InstanceIndex, float Damage, class AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser);
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage; // 0x0640 (size: 0x10)
    void InstanceRadialDamageSignature(const TArray<int32>& Instances, const TArray<float>& Damages, class AController* InstigatedBy, FVector Origin, float MaxRadius, const class UDamageType* DamageType, class AActor* DamageCauser);
    FGuid GenerationGuid;                                                             // 0x0650 (size: 0x10)

}; // Size: 0x660

class UFoliageStatistics : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FBox Box);
}; // Size: 0x28

class UFoliageType : public UObject
{
    FGuid UpdateGuid;                                                                 // 0x0028 (size: 0x10)
    float Density;                                                                    // 0x0038 (size: 0x4)
    float DensityAdjustmentFactor;                                                    // 0x003C (size: 0x4)
    float Radius;                                                                     // 0x0040 (size: 0x4)
    bool bSingleInstanceModeOverrideRadius;                                           // 0x0044 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0045 (size: 0x3)
    float SingleInstanceModeRadius;                                                   // 0x0048 (size: 0x4)
    EFoliageScaling Scaling;                                                          // 0x004C (size: 0x1)
    char padding_1[0x3];                                                              // 0x004D (size: 0x3)
    FFloatInterval ScaleX;                                                            // 0x0050 (size: 0x8)
    FFloatInterval ScaleY;                                                            // 0x0058 (size: 0x8)
    FFloatInterval ScaleZ;                                                            // 0x0060 (size: 0x8)
    FFoliageVertexColorChannelMask VertexColorMaskByChannel;                          // 0x0068 (size: 0x30)
    TEnumAsByte<FoliageVertexColorMask> VertexColorMask;                              // 0x0098 (size: 0x1)
    char padding_2[0x3];                                                              // 0x0099 (size: 0x3)
    float VertexColorMaskThreshold;                                                   // 0x009C (size: 0x4)
    uint8 VertexColorMaskInvert;                                                      // 0x00A0 (size: 0x1)
    char padding_3[0x3];                                                              // 0x00A1 (size: 0x3)
    FFloatInterval ZOffset;                                                           // 0x00A4 (size: 0x8)
    uint8 AlignToNormal;                                                              // 0x00AC (size: 0x1)
    char padding_4[0x3];                                                              // 0x00AD (size: 0x3)
    float AlignMaxAngle;                                                              // 0x00B0 (size: 0x4)
    uint8 RandomYaw;                                                                  // 0x00B4 (size: 0x1)
    char padding_5[0x3];                                                              // 0x00B5 (size: 0x3)
    float RandomPitchAngle;                                                           // 0x00B8 (size: 0x4)
    FFloatInterval GroundSlopeAngle;                                                  // 0x00BC (size: 0x8)
    FFloatInterval Height;                                                            // 0x00C4 (size: 0x8)
    char padding_6[0x4];                                                              // 0x00CC (size: 0x4)
    TArray<FName> LandscapeLayers;                                                    // 0x00D0 (size: 0x10)
    float MinimumLayerWeight;                                                         // 0x00E0 (size: 0x4)
    char padding_7[0x4];                                                              // 0x00E4 (size: 0x4)
    TArray<FName> ExclusionLandscapeLayers;                                           // 0x00E8 (size: 0x10)
    float MinimumExclusionLayerWeight;                                                // 0x00F8 (size: 0x4)
    FName LandscapeLayer;                                                             // 0x00FC (size: 0x8)
    uint8 CollisionWithWorld;                                                         // 0x0104 (size: 0x1)
    char padding_8[0x3];                                                              // 0x0105 (size: 0x3)
    FVector CollisionScale;                                                           // 0x0108 (size: 0xC)
    FBoxSphereBounds MeshBounds;                                                      // 0x0114 (size: 0x1C)
    FVector LowBoundOriginRadius;                                                     // 0x0130 (size: 0xC)
    TEnumAsByte<EComponentMobility::Type> Mobility;                                   // 0x013C (size: 0x1)
    char padding_9[0x3];                                                              // 0x013D (size: 0x3)
    FInt32Interval CullDistance;                                                      // 0x0140 (size: 0x8)
    uint8 bEnableStaticLighting;                                                      // 0x0148 (size: 0x1)
    uint8 CastShadow;                                                                 // 0x0148 (size: 0x1)
    uint8 bAffectDynamicIndirectLighting;                                             // 0x0148 (size: 0x1)
    uint8 bAffectDistanceFieldLighting;                                               // 0x0148 (size: 0x1)
    uint8 bCastDynamicShadow;                                                         // 0x0148 (size: 0x1)
    uint8 bCastStaticShadow;                                                          // 0x0148 (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x0148 (size: 0x1)
    uint8 bReceivesDecals;                                                            // 0x0148 (size: 0x1)
    uint8 bOverrideLightMapRes;                                                       // 0x0149 (size: 0x1)
    char padding_10[0x2];                                                             // 0x014A (size: 0x2)
    int32 OverriddenLightMapRes;                                                      // 0x014C (size: 0x4)
    ELightmapType LightmapType;                                                       // 0x0150 (size: 0x1)
    char padding_11[0x3];                                                             // 0x0151 (size: 0x3)
    uint8 bUseAsOccluder;                                                             // 0x0154 (size: 0x1)
    char padding_12[0x3];                                                             // 0x0155 (size: 0x3)
    FBodyInstance BodyInstance;                                                       // 0x0158 (size: 0x130)
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;           // 0x0288 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x0289 (size: 0x1)
    char padding_13[0x2];                                                             // 0x028A (size: 0x2)
    uint8 bRenderCustomDepth;                                                         // 0x028C (size: 0x1)
    char padding_14[0x3];                                                             // 0x028D (size: 0x3)
    int32 CustomDepthStencilValue;                                                    // 0x0290 (size: 0x4)
    int32 TranslucencySortPriority;                                                   // 0x0294 (size: 0x4)
    float CollisionRadius;                                                            // 0x0298 (size: 0x4)
    float ShadeRadius;                                                                // 0x029C (size: 0x4)
    int32 NumSteps;                                                                   // 0x02A0 (size: 0x4)
    float InitialSeedDensity;                                                         // 0x02A4 (size: 0x4)
    float AverageSpreadDistance;                                                      // 0x02A8 (size: 0x4)
    float SpreadVariance;                                                             // 0x02AC (size: 0x4)
    int32 SeedsPerStep;                                                               // 0x02B0 (size: 0x4)
    int32 DistributionSeed;                                                           // 0x02B4 (size: 0x4)
    float MaxInitialSeedOffset;                                                       // 0x02B8 (size: 0x4)
    bool bCanGrowInShade;                                                             // 0x02BC (size: 0x1)
    bool bSpawnsInShade;                                                              // 0x02BD (size: 0x1)
    char padding_15[0x2];                                                             // 0x02BE (size: 0x2)
    float MaxInitialAge;                                                              // 0x02C0 (size: 0x4)
    float MaxAge;                                                                     // 0x02C4 (size: 0x4)
    float OverlapPriority;                                                            // 0x02C8 (size: 0x4)
    FFloatInterval ProceduralScale;                                                   // 0x02CC (size: 0x8)
    char padding_16[0x4];                                                             // 0x02D4 (size: 0x4)
    FRuntimeFloatCurve ScaleCurve;                                                    // 0x02D8 (size: 0x88)
    int32 ChangeCount;                                                                // 0x0360 (size: 0x4)
    uint8 ReapplyDensity;                                                             // 0x0364 (size: 0x1)
    uint8 ReapplyRadius;                                                              // 0x0364 (size: 0x1)
    uint8 ReapplyAlignToNormal;                                                       // 0x0364 (size: 0x1)
    uint8 ReapplyRandomYaw;                                                           // 0x0364 (size: 0x1)
    uint8 ReapplyScaling;                                                             // 0x0364 (size: 0x1)
    uint8 ReapplyScaleX;                                                              // 0x0364 (size: 0x1)
    uint8 ReapplyScaleY;                                                              // 0x0364 (size: 0x1)
    uint8 ReapplyScaleZ;                                                              // 0x0364 (size: 0x1)
    uint8 ReapplyRandomPitchAngle;                                                    // 0x0365 (size: 0x1)
    uint8 ReapplyGroundSlope;                                                         // 0x0365 (size: 0x1)
    uint8 ReapplyHeight;                                                              // 0x0365 (size: 0x1)
    uint8 ReapplyLandscapeLayers;                                                     // 0x0365 (size: 0x1)
    uint8 ReapplyZOffset;                                                             // 0x0365 (size: 0x1)
    uint8 ReapplyCollisionWithWorld;                                                  // 0x0365 (size: 0x1)
    uint8 ReapplyVertexColorMask;                                                     // 0x0365 (size: 0x1)
    uint8 bEnableDensityScaling;                                                      // 0x0365 (size: 0x1)
    char padding_17[0x2];                                                             // 0x0366 (size: 0x2)
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;                     // 0x0368 (size: 0x10)
    int32 VirtualTextureCullMips;                                                     // 0x0378 (size: 0x4)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                  // 0x037C (size: 0x1)

}; // Size: 0x380

class UFoliageType_Actor : public UFoliageType
{
    TSubclassOf<class AActor> ActorClass;                                             // 0x0380 (size: 0x8)
    bool bShouldAttachToBaseComponent;                                                // 0x0388 (size: 0x1)

}; // Size: 0x390

class UFoliageType_InstancedStaticMesh : public UFoliageType
{
    class UStaticMesh* Mesh;                                                          // 0x0380 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0388 (size: 0x10)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;           // 0x0398 (size: 0x8)

}; // Size: 0x3A0

class UInteractiveFoliageComponent : public UStaticMeshComponent
{
    char padding_0[0x4A0];                                                            // 0x0000 (size: 0x0)
}; // Size: 0x4A0

class UProceduralFoliageComponent : public UActorComponent
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x00B0 (size: 0x8)
    float TileOverlap;                                                                // 0x00B8 (size: 0x4)
    char padding_0[0x4];                                                              // 0x00BC (size: 0x4)
    class AVolume* SpawningVolume;                                                    // 0x00C0 (size: 0x8)
    FGuid ProceduralGuid;                                                             // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UProceduralFoliageSpawner : public UObject
{
    int32 RandomSeed;                                                                 // 0x0028 (size: 0x4)
    float TileSize;                                                                   // 0x002C (size: 0x4)
    int32 NumUniqueTiles;                                                             // 0x0030 (size: 0x4)
    float MinimumQuadTreeSize;                                                        // 0x0034 (size: 0x4)
    char padding_0[0x8];                                                              // 0x0038 (size: 0x8)
    TArray<FFoliageTypeObject> FoliageTypes;                                          // 0x0040 (size: 0x10)

    void Simulate(int32 NumSteps);
}; // Size: 0x68

class UProceduralFoliageTile : public UObject
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x0028 (size: 0x8)
    char padding_0[0xA0];                                                             // 0x0030 (size: 0xA0)
    TArray<FProceduralFoliageInstance> InstancesArray;                                // 0x00D0 (size: 0x10)

}; // Size: 0x158

#endif
