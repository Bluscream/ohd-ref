#ifndef UE4SS_SDK_BP_ImpactFX_DefaultWeap_HPP
#define UE4SS_SDK_BP_ImpactFX_DefaultWeap_HPP

class ABP_ImpactFX_DefaultWeap_C : public ADFBaseImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04F0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ImpactFX_DefaultWeap(int32 EntryPoint);
}; // Size: 0x4F8

#endif
