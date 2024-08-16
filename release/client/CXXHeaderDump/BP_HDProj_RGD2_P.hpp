#ifndef UE4SS_SDK_BP_HDProj_RGD2_P_HPP
#define UE4SS_SDK_BP_HDProj_RGD2_P_HPP

class ABP_HDProj_RGD2_P_C : public ABP_HDProj_SmokeGrenadeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0430 (size: 0x8)

    void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void ExecuteUbergraph_BP_HDProj_RGD2_P(int32 EntryPoint);
}; // Size: 0x438

#endif
