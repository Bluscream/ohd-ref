#ifndef UE4SS_SDK_BP_HDWeap_AoFWeapBase_HPP
#define UE4SS_SDK_BP_HDWeap_AoFWeapBase_HPP

class ABP_HDWeap_AoFWeapBase_C : public ABP_HDWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A58 (size: 0x8)
    class USphereComponent* AreaOfEffectCollisionSphere;                              // 0x0A60 (size: 0x8)
    float AuraRadius;                                                                 // 0x0A68 (size: 0x4)
    float AuraEffectTimerInterval;                                                    // 0x0A6C (size: 0x4)
    FTimerHandle AuraEffectTimerHandle;                                               // 0x0A70 (size: 0x8)
    bool bIsTimerSet;                                                                 // 0x0A78 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0A79 (size: 0x7)
    TArray<class ADFBaseCharacter*> AffectedPawns;                                    // 0x0A80 (size: 0x10)

    bool CanFire();
    void InitAffectedPawns();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void DoAuraEffect();
    void OnAuraEffectBegin();
    void OnAuraEffectEnd();
    void ExecuteUbergraph_BP_HDWeap_AoFWeapBase(int32 EntryPoint);
}; // Size: 0xA90

#endif
