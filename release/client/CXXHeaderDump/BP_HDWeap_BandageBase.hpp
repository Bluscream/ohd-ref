#ifndef UE4SS_SDK_BP_HDWeap_BandageBase_HPP
#define UE4SS_SDK_BP_HDWeap_BandageBase_HPP

class ABP_HDWeap_BandageBase_C : public ABP_HDWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A58 (size: 0x8)
    float HealthRestoreAmount;                                                        // 0x0A60 (size: 0x4)

    bool CanFire();
    void ReceiveFire();
    void ExecuteUbergraph_BP_HDWeap_BandageBase(int32 EntryPoint);
}; // Size: 0xA64

#endif
