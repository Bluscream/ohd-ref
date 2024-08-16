#ifndef UE4SS_SDK_BP_HDProj_M67_P_Grenade_HPP
#define UE4SS_SDK_BP_HDProj_M67_P_Grenade_HPP

class ABP_HDProj_M67_P_Grenade_C : public ABP_HDProj_GrenadeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x03D0 (size: 0x8)

    void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_HDProj_M67_P_Grenade(int32 EntryPoint);
}; // Size: 0x3D8

#endif
