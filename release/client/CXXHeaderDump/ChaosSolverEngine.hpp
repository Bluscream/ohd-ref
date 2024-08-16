#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

struct FBreakEventCallbackWrapper
{
    char padding_0[0x40];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x40

struct FChaosBreakEvent
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FVector Velocity;                                                                 // 0x0014 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0020 (size: 0xC)
    float Mass;                                                                       // 0x002C (size: 0x4)

}; // Size: 0x30

struct FChaosDebugSubstepControl
{
    bool bPause;                                                                      // 0x0000 (size: 0x1)
    bool bSubstep;                                                                    // 0x0001 (size: 0x1)
    bool bStep;                                                                       // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;                                                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FChaosPhysicsCollisionInfo
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    class UPrimitiveComponent* OtherComponent;                                        // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0xC)
    FVector Normal;                                                                   // 0x001C (size: 0xC)
    FVector AccumulatedImpulse;                                                       // 0x0028 (size: 0xC)
    FVector Velocity;                                                                 // 0x0034 (size: 0xC)
    FVector OtherVelocity;                                                            // 0x0040 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x004C (size: 0xC)
    FVector OtherAngularVelocity;                                                     // 0x0058 (size: 0xC)
    float Mass;                                                                       // 0x0064 (size: 0x4)
    float OtherMass;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class AChaosSolverActor : public AActor
{
    float TimeStepMultiplier;                                                         // 0x0220 (size: 0x4)
    int32 CollisionIterations;                                                        // 0x0224 (size: 0x4)
    int32 PushOutIterations;                                                          // 0x0228 (size: 0x4)
    int32 PushOutPairIterations;                                                      // 0x022C (size: 0x4)
    float ClusterConnectionFactor;                                                    // 0x0230 (size: 0x4)
    EClusterConnectionTypeEnum ClusterUnionConnectionType;                            // 0x0234 (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x0235 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0236 (size: 0x2)
    FSolverCollisionFilterSettings CollisionFilterSettings;                           // 0x0238 (size: 0x10)
    bool DoGenerateBreakingData;                                                      // 0x0248 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0249 (size: 0x3)
    FSolverBreakingFilterSettings BreakingFilterSettings;                             // 0x024C (size: 0x10)
    bool DoGenerateTrailingData;                                                      // 0x025C (size: 0x1)
    char padding_2[0x3];                                                              // 0x025D (size: 0x3)
    FSolverTrailingFilterSettings TrailingFilterSettings;                             // 0x0260 (size: 0x10)
    bool bHasFloor;                                                                   // 0x0270 (size: 0x1)
    char padding_3[0x3];                                                              // 0x0271 (size: 0x3)
    float FloorHeight;                                                                // 0x0274 (size: 0x4)
    float MassScale;                                                                  // 0x0278 (size: 0x4)
    bool bGenerateContactGraph;                                                       // 0x027C (size: 0x1)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;                               // 0x027D (size: 0x3)
    class UBillboardComponent* SpriteComponent;                                       // 0x0280 (size: 0x8)
    char padding_4[0x18];                                                             // 0x0288 (size: 0x18)
    class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;            // 0x02A0 (size: 0x8)

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x2A8

class IChaosNotifyHandlerInterface : public IInterface
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UChaosDebugDrawComponent : public UActorComponent
{
    char padding_0[0xB8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB8

class UChaosEventListenerComponent : public UActorComponent
{
    char padding_0[0xB8];                                                             // 0x0000 (size: 0x0)
}; // Size: 0xB8

class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    TMap<class UPrimitiveComponent*, class FChaosHandlerSet> CollisionEventRegistrations; // 0x01C8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x0218 (size: 0x50)

}; // Size: 0x270

class UChaosSolver : public UObject
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)
}; // Size: 0x28

class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
    char padding_0[0x28];                                                             // 0x0000 (size: 0x0)

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28

class UChaosSolverSettings : public UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;                                      // 0x0040 (size: 0x18)

}; // Size: 0x58

#endif
