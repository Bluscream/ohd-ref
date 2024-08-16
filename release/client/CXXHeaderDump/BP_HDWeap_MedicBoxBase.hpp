#ifndef UE4SS_SDK_BP_HDWeap_MedicBoxBase_HPP
#define UE4SS_SDK_BP_HDWeap_MedicBoxBase_HPP

class ABP_HDWeap_MedicBoxBase_C : public ABP_HDWeap_AoFWeapBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A90 (size: 0x8)
    bool bInfiniteRestore;                                                            // 0x0A98 (size: 0x1)
    char padding_0[0x3];                                                              // 0x0A99 (size: 0x3)
    float HealthRestoreRate;                                                          // 0x0A9C (size: 0x4)
    float TotalRestoreAmount;                                                         // 0x0AA0 (size: 0x4)
    float HealthRestoreRemaining;                                                     // 0x0AA4 (size: 0x4)
    uint8 AuraTeam;                                                                   // 0x0AA8 (size: 0x1)

    void SetIconVisibilityOverlappingPawns(bool bVisibility);
    void SetIconVisibility(class ADFBaseCharacter* Pawn, bool Visibility);
    void HealPawn(float Heal, class ADFBaseCharacter* Pawn);
    void HealingAuraEffect();
    void UserConstructionScript();
    void DoAuraEffect();
    void BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnAuraEffectBegin();
    void OnAuraEffectEnd();
    void ExecuteUbergraph_BP_HDWeap_MedicBoxBase(int32 EntryPoint);
}; // Size: 0xAA9

#endif
