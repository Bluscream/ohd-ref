#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0220 (size: 0x8)

}; // Size: 0x228

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0430 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0431 (size: 0x1)
    char padding_0[0x6];                                                              // 0x0432 (size: 0x6)
    FComponentReference AttachEndTo;                                                  // 0x0438 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x0460 (size: 0x8)
    FVector EndLocation;                                                              // 0x0468 (size: 0xC)
    float CableLength;                                                                // 0x0474 (size: 0x4)
    int32 NumSegments;                                                                // 0x0478 (size: 0x4)
    float SubstepTime;                                                                // 0x047C (size: 0x4)
    int32 SolverIterations;                                                           // 0x0480 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x0484 (size: 0x1)
    bool bEnableCollision;                                                            // 0x0485 (size: 0x1)
    char padding_1[0x2];                                                              // 0x0486 (size: 0x2)
    float CollisionFriction;                                                          // 0x0488 (size: 0x4)
    FVector CableForce;                                                               // 0x048C (size: 0xC)
    float CableGravityScale;                                                          // 0x0498 (size: 0x4)
    float CableWidth;                                                                 // 0x049C (size: 0x4)
    int32 NumSides;                                                                   // 0x04A0 (size: 0x4)
    float TileMaterial;                                                               // 0x04A4 (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x4C0

#endif
