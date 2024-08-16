#ifndef UE4SS_SDK_BP_HDWeap_AmmoBoxBase_HPP
#define UE4SS_SDK_BP_HDWeap_AmmoBoxBase_HPP

class ABP_HDWeap_AmmoBoxBase_C : public ABP_HDWeap_AoFWeapBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A90 (size: 0x8)
    bool bInfiniteRestore;                                                            // 0x0A98 (size: 0x1)
    bool bDoNotRefillPartialClips;                                                    // 0x0A99 (size: 0x1)
    char padding_0[0x2];                                                              // 0x0A9A (size: 0x2)
    int32 AmmoClipAmount;                                                             // 0x0A9C (size: 0x4)
    int32 TotalRestoreAmount;                                                         // 0x0AA0 (size: 0x4)
    int32 AmmoRestoreRemaining;                                                       // 0x0AA4 (size: 0x4)
    uint8 AuraTeam;                                                                   // 0x0AA8 (size: 0x1)

    void SetIconVisibilityOverlappingPawns(bool bVisibility);
    void SetIconVisibility(class ADFBaseCharacter* Pawn, bool Visibility);
    void ReplenishAmmo(class ADFBaseCharacter* Pawn, int32 Ammo, int32& ClipsRestored);
    void AmmoAuraEffect();
    void UserConstructionScript();
    void DoAuraEffect();
    void BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnAuraEffectBegin();
    void OnAuraEffectEnd();
    void ExecuteUbergraph_BP_HDWeap_AmmoBoxBase(int32 EntryPoint);
}; // Size: 0xAA9

#endif
