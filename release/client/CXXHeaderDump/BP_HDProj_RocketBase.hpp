#ifndef UE4SS_SDK_BP_HDProj_RocketBase_HPP
#define UE4SS_SDK_BP_HDProj_RocketBase_HPP

class ABP_HDProj_RocketBase_C : public AHDProj_Bullet
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0388 (size: 0x8)
    class UParticleSystem* ExplosionPS;                                               // 0x0390 (size: 0x8)
    class USoundBase* ExplosionSnd;                                                   // 0x0398 (size: 0x8)
    TSubclassOf<class UCameraShake> CameraShake;                                      // 0x03A0 (size: 0x8)
    float CameraShakeInnerRadius;                                                     // 0x03A8 (size: 0x4)
    float CameraShakeOuterRadius;                                                     // 0x03AC (size: 0x4)

    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    void ExecuteUbergraph_BP_HDProj_RocketBase(int32 EntryPoint);
}; // Size: 0x3B0

#endif
