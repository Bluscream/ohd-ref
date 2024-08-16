#ifndef UE4SS_SDK_BP_ViewPunchRecoilHandler_HPP
#define UE4SS_SDK_BP_ViewPunchRecoilHandler_HPP

class UBP_ViewPunchRecoilHandler_C : public UDFGunRecoilHandler
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    float CurrentCofAngleDegrees;                                                     // 0x0030 (size: 0x4)
    float ConeOfFireAngleGrowthPerShotDegrees;                                        // 0x0034 (size: 0x4)
    float MaxConeOfFireAngleDegrees;                                                  // 0x0038 (size: 0x4)
    float MinConeOfFireAngleDegrees;                                                  // 0x003C (size: 0x4)
    float ConeOfFireDecayRate;                                                        // 0x0040 (size: 0x4)
    float DesiredCoF;                                                                 // 0x0044 (size: 0x4)
    float RecoilDirection;                                                            // 0x0048 (size: 0x4)
    float RecoilPunchMagnitude;                                                       // 0x004C (size: 0x4)
    float RecoilCounter;                                                              // 0x0050 (size: 0x4)
    FRotator InitialViewAngle;                                                        // 0x0054 (size: 0xC)
    float Recoil_DX;                                                                  // 0x0060 (size: 0x4)
    float Recoil_DY;                                                                  // 0x0064 (size: 0x4)
    float RecoilRestitutionTime;                                                      // 0x0068 (size: 0x4)
    TEnumAsByte<EEasingFunc::Type> VerticalRecoilEasingMode;                          // 0x006C (size: 0x1)
    TEnumAsByte<EEasingFunc::Type> HorizontalRecoilEasingMode;                        // 0x006D (size: 0x1)
    char padding_0[0x2];                                                              // 0x006E (size: 0x2)
    float RecoilDT;                                                                   // 0x0070 (size: 0x4)

    void GetController(class AController*& Controller);
    void GetControlRotation(FRotator& ViewRotation);
    FVector GetConeOfFireOffset();
    void OnWeaponFire();
    void ViewPunch();
    void OnTick(float DeltaTime);
    void ComputeConeOfFire(float DT);
    void ComputeRecoil(float DT);
    void OnWeaponStopFire();
    void OnWeaponStartFire();
    void ExecuteUbergraph_BP_ViewPunchRecoilHandler(int32 EntryPoint);
}; // Size: 0x74

#endif
