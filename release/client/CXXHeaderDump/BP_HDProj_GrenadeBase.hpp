#ifndef UE4SS_SDK_BP_HDProj_GrenadeBase_HPP
#define UE4SS_SDK_BP_HDProj_GrenadeBase_HPP

class ABP_HDProj_GrenadeBase_C : public AHDProj_Grenade
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0398 (size: 0x8)
    class USphereComponent* ProjectileCollision;                                      // 0x03A0 (size: 0x8)
    class UParticleSystem* ExplosionPS;                                               // 0x03A8 (size: 0x8)
    class USoundBase* ExplosionSnd;                                                   // 0x03B0 (size: 0x8)
    TSubclassOf<class UCameraShake> CameraShake;                                      // 0x03B8 (size: 0x8)
    float CameraShakeInnerRadius;                                                     // 0x03C0 (size: 0x4)
    float CameraShakeOuterRadius;                                                     // 0x03C4 (size: 0x4)

    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    void ExecuteUbergraph_BP_HDProj_GrenadeBase(int32 EntryPoint);
}; // Size: 0x3C8

#endif
