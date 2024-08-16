#ifndef UE4SS_SDK_GeometryCollectionEngine_HPP
#define UE4SS_SDK_GeometryCollectionEngine_HPP

#include "GeometryCollectionEngine_enums.hpp"

struct FChaosBreakingEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Velocity;                                                                 // 0x000C (size: 0xC)
    float Mass;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FChaosBreakingEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinRadius;                                                                  // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinMass;                                                                    // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosBreakingSortMethod SortMethod;                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FChaosCollisionEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Normal;                                                                   // 0x000C (size: 0xC)
    FVector Velocity1;                                                                // 0x0018 (size: 0xC)
    FVector Velocity2;                                                                // 0x0024 (size: 0xC)
    float Mass1;                                                                      // 0x0030 (size: 0x4)
    float Mass2;                                                                      // 0x0034 (size: 0x4)
    FVector Impulse;                                                                  // 0x0038 (size: 0xC)

}; // Size: 0x58

struct FChaosCollisionEventRequestSettings
{
    int32 MaxNumberResults;                                                           // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinImpulse;                                                                 // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosCollisionSortMethod SortMethod;                                             // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FChaosTrailingEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FVector Velocity;                                                                 // 0x000C (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0018 (size: 0xC)
    float Mass;                                                                       // 0x0024 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FChaosTrailingEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinAngularSpeed;                                                            // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosTrailingSortMethod SortMethod;                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FGeomComponentCacheParameters
{
    EGeometryCollectionCacheType CacheMode;                                           // 0x0000 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0001 (size: 0x7)
    class UGeometryCollectionCache* TargetCache;                                      // 0x0008 (size: 0x8)
    float ReverseCacheBeginTime;                                                      // 0x0010 (size: 0x4)
    bool SaveCollisionData;                                                           // 0x0014 (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x0015 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0016 (size: 0x2)
    int32 CollisionDataSizeMax;                                                       // 0x0018 (size: 0x4)
    bool DoCollisionDataSpatialHash;                                                  // 0x001C (size: 0x1)
    char padding_2[0x3];                                                              // 0x001D (size: 0x3)
    float CollisionDataSpatialHashRadius;                                             // 0x0020 (size: 0x4)
    int32 MaxCollisionPerCell;                                                        // 0x0024 (size: 0x4)
    bool SaveBreakingData;                                                            // 0x0028 (size: 0x1)
    bool DoGenerateBreakingData;                                                      // 0x0029 (size: 0x1)
    char padding_3[0x2];                                                              // 0x002A (size: 0x2)
    int32 BreakingDataSizeMax;                                                        // 0x002C (size: 0x4)
    bool DoBreakingDataSpatialHash;                                                   // 0x0030 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0031 (size: 0x3)
    float BreakingDataSpatialHashRadius;                                              // 0x0034 (size: 0x4)
    int32 MaxBreakingPerCell;                                                         // 0x0038 (size: 0x4)
    bool SaveTrailingData;                                                            // 0x003C (size: 0x1)
    bool DoGenerateTrailingData;                                                      // 0x003D (size: 0x1)
    char padding_5[0x2];                                                              // 0x003E (size: 0x2)
    int32 TrailingDataSizeMax;                                                        // 0x0040 (size: 0x4)
    float TrailingMinSpeedThreshold;                                                  // 0x0044 (size: 0x4)
    float TrailingMinVolumeThreshold;                                                 // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    char padding_0[0x4];                                                              // 0x0004 (size: 0x4)
    class AChaosSolverActor* Solver;                                                  // 0x0008 (size: 0x8)
    class AGeometryCollectionActor* GeometryCollection;                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FGeometryCollectionDebugDrawWarningMessage
{
    char padding_0[0x1];                                                              // 0x0000 (size: 0x0)
}; // Size: 0x1

struct FGeometryCollectionSizeSpecificData
{
    float MaxSize;                                                                    // 0x0000 (size: 0x4)
    ECollisionTypeEnum CollisionType;                                                 // 0x0004 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x0005 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0006 (size: 0x2)
    int32 MinLevelSetResolution;                                                      // 0x0008 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x000C (size: 0x4)
    int32 MinClusterLevelSetResolution;                                               // 0x0010 (size: 0x4)
    int32 MaxClusterLevelSetResolution;                                               // 0x0014 (size: 0x4)
    int32 CollisionObjectReductionPercentage;                                         // 0x0018 (size: 0x4)
    float CollisionParticlesFraction;                                                 // 0x001C (size: 0x4)
    int32 MaximumCollisionParticles;                                                  // 0x0020 (size: 0x4)

}; // Size: 0x24

class AGeometryCollectionActor : public AActor
{
    class UGeometryCollectionComponent* GeometryCollectionComponent;                  // 0x0220 (size: 0x8)
    class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x0228 (size: 0x8)

    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
}; // Size: 0x230

class AGeometryCollectionDebugDrawActor : public AActor
{
    FGeometryCollectionDebugDrawWarningMessage WarningMessage;                        // 0x0220 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0221 (size: 0x7)
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;             // 0x0228 (size: 0x18)
    bool bDebugDrawWholeCollection;                                                   // 0x0240 (size: 0x1)
    bool bDebugDrawHierarchy;                                                         // 0x0241 (size: 0x1)
    bool bDebugDrawClustering;                                                        // 0x0242 (size: 0x1)
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                       // 0x0243 (size: 0x1)
    bool bShowRigidBodyId;                                                            // 0x0244 (size: 0x1)
    bool bShowRigidBodyCollision;                                                     // 0x0245 (size: 0x1)
    bool bCollisionAtOrigin;                                                          // 0x0246 (size: 0x1)
    bool bShowRigidBodyTransform;                                                     // 0x0247 (size: 0x1)
    bool bShowRigidBodyInertia;                                                       // 0x0248 (size: 0x1)
    bool bShowRigidBodyVelocity;                                                      // 0x0249 (size: 0x1)
    bool bShowRigidBodyForce;                                                         // 0x024A (size: 0x1)
    bool bShowRigidBodyInfos;                                                         // 0x024B (size: 0x1)
    bool bShowTransformIndex;                                                         // 0x024C (size: 0x1)
    bool bShowTransform;                                                              // 0x024D (size: 0x1)
    bool bShowParent;                                                                 // 0x024E (size: 0x1)
    bool bShowLevel;                                                                  // 0x024F (size: 0x1)
    bool bShowConnectivityEdges;                                                      // 0x0250 (size: 0x1)
    bool bShowGeometryIndex;                                                          // 0x0251 (size: 0x1)
    bool bShowGeometryTransform;                                                      // 0x0252 (size: 0x1)
    bool bShowBoundingBox;                                                            // 0x0253 (size: 0x1)
    bool bShowFaces;                                                                  // 0x0254 (size: 0x1)
    bool bShowFaceIndices;                                                            // 0x0255 (size: 0x1)
    bool bShowFaceNormals;                                                            // 0x0256 (size: 0x1)
    bool bShowSingleFace;                                                             // 0x0257 (size: 0x1)
    int32 SingleFaceIndex;                                                            // 0x0258 (size: 0x4)
    bool bShowVertices;                                                               // 0x025C (size: 0x1)
    bool bShowVertexIndices;                                                          // 0x025D (size: 0x1)
    bool bShowVertexNormals;                                                          // 0x025E (size: 0x1)
    bool bUseActiveVisualization;                                                     // 0x025F (size: 0x1)
    float PointThickness;                                                             // 0x0260 (size: 0x4)
    float LineThickness;                                                              // 0x0264 (size: 0x4)
    bool bTextShadow;                                                                 // 0x0268 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0269 (size: 0x3)
    float TextScale;                                                                  // 0x026C (size: 0x4)
    float NormalScale;                                                                // 0x0270 (size: 0x4)
    float AxisScale;                                                                  // 0x0274 (size: 0x4)
    float ArrowScale;                                                                 // 0x0278 (size: 0x4)
    FColor RigidBodyIdColor;                                                          // 0x027C (size: 0x4)
    float RigidBodyTransformScale;                                                    // 0x0280 (size: 0x4)
    FColor RigidBodyCollisionColor;                                                   // 0x0284 (size: 0x4)
    FColor RigidBodyInertiaColor;                                                     // 0x0288 (size: 0x4)
    FColor RigidBodyVelocityColor;                                                    // 0x028C (size: 0x4)
    FColor RigidBodyForceColor;                                                       // 0x0290 (size: 0x4)
    FColor RigidBodyInfoColor;                                                        // 0x0294 (size: 0x4)
    FColor TransformIndexColor;                                                       // 0x0298 (size: 0x4)
    float TransformScale;                                                             // 0x029C (size: 0x4)
    FColor LevelColor;                                                                // 0x02A0 (size: 0x4)
    FColor ParentColor;                                                               // 0x02A4 (size: 0x4)
    float ConnectivityEdgeThickness;                                                  // 0x02A8 (size: 0x4)
    FColor GeometryIndexColor;                                                        // 0x02AC (size: 0x4)
    float GeometryTransformScale;                                                     // 0x02B0 (size: 0x4)
    FColor BoundingBoxColor;                                                          // 0x02B4 (size: 0x4)
    FColor FaceColor;                                                                 // 0x02B8 (size: 0x4)
    FColor FaceIndexColor;                                                            // 0x02BC (size: 0x4)
    FColor FaceNormalColor;                                                           // 0x02C0 (size: 0x4)
    FColor SingleFaceColor;                                                           // 0x02C4 (size: 0x4)
    FColor VertexColor;                                                               // 0x02C8 (size: 0x4)
    FColor VertexIndexColor;                                                          // 0x02CC (size: 0x4)
    FColor VertexNormalColor;                                                         // 0x02D0 (size: 0x4)
    char padding_2[0x4];                                                              // 0x02D4 (size: 0x4)
    class UBillboardComponent* SpriteComponent;                                       // 0x02D8 (size: 0x8)

}; // Size: 0x308

class AGeometryCollectionRenderLevelSetActor : public AActor
{
    class UVolumeTexture* TargetVolumeTexture;                                        // 0x0220 (size: 0x8)
    class UMaterial* RayMarchMaterial;                                                // 0x0228 (size: 0x8)
    float SurfaceTolerance;                                                           // 0x0230 (size: 0x4)
    float Isovalue;                                                                   // 0x0234 (size: 0x4)
    bool Enabled;                                                                     // 0x0238 (size: 0x1)
    bool RenderVolumeBoundingBox;                                                     // 0x0239 (size: 0x1)

}; // Size: 0x2C0

class UChaosDestructionListener : public USceneComponent
{
    uint8 bIsCollisionEventListeningEnabled;                                          // 0x01F0 (size: 0x1)
    uint8 bIsBreakingEventListeningEnabled;                                           // 0x01F0 (size: 0x1)
    uint8 bIsTrailingEventListeningEnabled;                                           // 0x01F0 (size: 0x1)
    char padding_0[0x3];                                                              // 0x01F1 (size: 0x3)
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;                // 0x01F4 (size: 0x18)
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;                  // 0x020C (size: 0x18)
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;                  // 0x0224 (size: 0x18)
    char padding_1[0x4];                                                              // 0x023C (size: 0x4)
    TSet<AChaosSolverActor*> ChaosSolverActors;                                       // 0x0240 (size: 0x50)
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;                         // 0x0290 (size: 0x50)
    FChaosDestructionListenerOnCollisionEvents OnCollisionEvents;                     // 0x02E0 (size: 0x10)
    void OnChaosCollisionEvents(const TArray<FChaosCollisionEventData>& CollisionEvents);
    FChaosDestructionListenerOnBreakingEvents OnBreakingEvents;                       // 0x02F0 (size: 0x10)
    void OnChaosBreakingEvents(const TArray<FChaosBreakingEventData>& BreakingEvents);
    FChaosDestructionListenerOnTrailingEvents OnTrailingEvents;                       // 0x0300 (size: 0x10)
    void OnChaosTrailingEvents(const TArray<FChaosTrailingEventData>& TrailingEvents);

    void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
}; // Size: 0x420

class UGeometryCollection : public UObject
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0030 (size: 0x10)
    ECollisionTypeEnum CollisionType;                                                 // 0x0040 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x0041 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0042 (size: 0x2)
    int32 MinLevelSetResolution;                                                      // 0x0044 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x0048 (size: 0x4)
    int32 MinClusterLevelSetResolution;                                               // 0x004C (size: 0x4)
    int32 MaxClusterLevelSetResolution;                                               // 0x0050 (size: 0x4)
    float CollisionObjectReductionPercentage;                                         // 0x0054 (size: 0x4)
    bool bMassAsDensity;                                                              // 0x0058 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0059 (size: 0x3)
    float Mass;                                                                       // 0x005C (size: 0x4)
    float MinimumMassClamp;                                                           // 0x0060 (size: 0x4)
    float CollisionParticlesFraction;                                                 // 0x0064 (size: 0x4)
    int32 MaximumCollisionParticles;                                                  // 0x0068 (size: 0x4)
    char padding_2[0x4];                                                              // 0x006C (size: 0x4)
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;                     // 0x0070 (size: 0x10)
    bool EnableRemovePiecesOnFracture;                                                // 0x0080 (size: 0x1)
    char padding_3[0x7];                                                              // 0x0081 (size: 0x7)
    TArray<class UMaterialInterface*> RemoveOnFractureMaterials;                      // 0x0088 (size: 0x10)
    FGuid PersistentGuid;                                                             // 0x0098 (size: 0x10)
    FGuid StateGuid;                                                                  // 0x00A8 (size: 0x10)
    int32 BoneSelectedMaterialIndex;                                                  // 0x00B8 (size: 0x4)

}; // Size: 0xD0

class UGeometryCollectionCache : public UObject
{
    FRecordedTransformTrack RecordedData;                                             // 0x0028 (size: 0x10)
    class UGeometryCollection* SupportedCollection;                                   // 0x0038 (size: 0x8)
    FGuid CompatibleCollectionState;                                                  // 0x0040 (size: 0x10)

}; // Size: 0x50

class UGeometryCollectionComponent : public UMeshComponent
{
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x0438 (size: 0x8)
    char padding_0[0xE0];                                                             // 0x0440 (size: 0xE0)
    class UGeometryCollection* RestCollection;                                        // 0x0520 (size: 0x8)
    TArray<class AFieldSystemActor*> InitializationFields;                            // 0x0528 (size: 0x10)
    bool Simulating;                                                                  // 0x0538 (size: 0x1)
    char padding_1[0x7];                                                              // 0x0539 (size: 0x7)
    EObjectStateTypeEnum ObjectType;                                                  // 0x0540 (size: 0x1)
    bool EnableClustering;                                                            // 0x0541 (size: 0x1)
    char padding_2[0x2];                                                              // 0x0542 (size: 0x2)
    int32 ClusterGroupIndex;                                                          // 0x0544 (size: 0x4)
    int32 MaxClusterLevel;                                                            // 0x0548 (size: 0x4)
    char padding_3[0x4];                                                              // 0x054C (size: 0x4)
    TArray<float> DamageThreshold;                                                    // 0x0550 (size: 0x10)
    EClusterConnectionTypeEnum ClusterConnectionType;                                 // 0x0560 (size: 0x1)
    char padding_4[0x3];                                                              // 0x0561 (size: 0x3)
    int32 CollisionGroup;                                                             // 0x0564 (size: 0x4)
    float CollisionSampleFraction;                                                    // 0x0568 (size: 0x4)
    float LinearEtherDrag;                                                            // 0x056C (size: 0x4)
    float AngularEtherDrag;                                                           // 0x0570 (size: 0x4)
    char padding_5[0x4];                                                              // 0x0574 (size: 0x4)
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x0578 (size: 0x8)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x0580 (size: 0x1)
    char padding_6[0x3];                                                              // 0x0581 (size: 0x3)
    FVector InitialLinearVelocity;                                                    // 0x0584 (size: 0xC)
    FVector InitialAngularVelocity;                                                   // 0x0590 (size: 0xC)
    char padding_7[0x4];                                                              // 0x059C (size: 0x4)
    FGeomComponentCacheParameters CacheParameters;                                    // 0x05A0 (size: 0x50)
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange; // 0x05F0 (size: 0x10)
    void NotifyGeometryCollectionPhysicsStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x0600 (size: 0x10)
    void NotifyGeometryCollectionPhysicsLoadingStateChange(class UGeometryCollectionComponent* FracturedComponent);
    char padding_8[0x18];                                                             // 0x0610 (size: 0x18)
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;                  // 0x0628 (size: 0x10)
    void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);
    float DesiredCacheTime;                                                           // 0x0638 (size: 0x4)
    bool CachePlayback;                                                               // 0x063C (size: 0x1)
    char padding_9[0x3];                                                              // 0x063D (size: 0x3)
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;      // 0x0640 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    bool bNotifyBreaks;                                                               // 0x0650 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x0651 (size: 0x1)
    char padding_10[0x1FE];                                                           // 0x0652 (size: 0x1FE)
    class UBodySetup* DummyBodySetup;                                                 // 0x0850 (size: 0x8)

    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyKinematicField(float Radius, FVector Position);
}; // Size: 0x880

class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
    class AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;        // 0x00B0 (size: 0x8)
    class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0x00B8 (size: 0x8)

}; // Size: 0xC8

class USkeletalMeshSimulationComponent : public UActorComponent
{
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x00B8 (size: 0x8)
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x00C0 (size: 0x8)
    class UPhysicsAsset* OverridePhysicsAsset;                                        // 0x00C8 (size: 0x8)
    bool bSimulating;                                                                 // 0x00D0 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x00D1 (size: 0x1)
    EObjectStateTypeEnum ObjectType;                                                  // 0x00D2 (size: 0x1)
    char padding_0[0x1];                                                              // 0x00D3 (size: 0x1)
    float Density;                                                                    // 0x00D4 (size: 0x4)
    float MinMass;                                                                    // 0x00D8 (size: 0x4)
    float MaxMass;                                                                    // 0x00DC (size: 0x4)
    ECollisionTypeEnum CollisionType;                                                 // 0x00E0 (size: 0x1)
    char padding_1[0x3];                                                              // 0x00E1 (size: 0x3)
    float ImplicitShapeParticlesPerUnitArea;                                          // 0x00E4 (size: 0x4)
    int32 ImplicitShapeMinNumParticles;                                               // 0x00E8 (size: 0x4)
    int32 ImplicitShapeMaxNumParticles;                                               // 0x00EC (size: 0x4)
    int32 MinLevelSetResolution;                                                      // 0x00F0 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x00F4 (size: 0x4)
    int32 CollisionGroup;                                                             // 0x00F8 (size: 0x4)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x00FC (size: 0x1)
    char padding_2[0x3];                                                              // 0x00FD (size: 0x3)
    FVector InitialLinearVelocity;                                                    // 0x0100 (size: 0xC)
    FVector InitialAngularVelocity;                                                   // 0x010C (size: 0xC)
    FSkeletalMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;  // 0x0118 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
}; // Size: 0x138

class UStaticMeshSimulationComponent : public UActorComponent
{
    bool Simulating;                                                                  // 0x00B8 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x00B9 (size: 0x1)
    EObjectStateTypeEnum ObjectType;                                                  // 0x00BA (size: 0x1)
    char padding_0[0x1];                                                              // 0x00BB (size: 0x1)
    float Mass;                                                                       // 0x00BC (size: 0x4)
    ECollisionTypeEnum CollisionType;                                                 // 0x00C0 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x00C1 (size: 0x1)
    char padding_1[0x2];                                                              // 0x00C2 (size: 0x2)
    int32 MinLevelSetResolution;                                                      // 0x00C4 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x00C8 (size: 0x4)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x00CC (size: 0x1)
    char padding_2[0x3];                                                              // 0x00CD (size: 0x3)
    FVector InitialLinearVelocity;                                                    // 0x00D0 (size: 0xC)
    FVector InitialAngularVelocity;                                                   // 0x00DC (size: 0xC)
    float DamageThreshold;                                                            // 0x00E8 (size: 0x4)
    char padding_3[0x4];                                                              // 0x00EC (size: 0x4)
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x00F0 (size: 0x8)
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x00F8 (size: 0x8)
    FStaticMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;    // 0x0100 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    char padding_4[0x10];                                                             // 0x0110 (size: 0x10)
    TArray<class UPrimitiveComponent*> SimulatedComponents;                           // 0x0120 (size: 0x10)

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void ForceRecreatePhysicsState();
}; // Size: 0x138

#endif
