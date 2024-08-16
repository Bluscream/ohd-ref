#ifndef UE4SS_SDK_BP_HDProj_SmokeGrenadeBase_HPP
#define UE4SS_SDK_BP_HDProj_SmokeGrenadeBase_HPP

class ABP_HDProj_SmokeGrenadeBase_C : public ABP_HDProj_GrenadeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UCapsuleComponent* VisibilityCapsule;                                       // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* SmokePS;                                          // 0x03D8 (size: 0x8)
    FVector VisibilityTimeline_Location_D0E2F33E4AF1451ABB7ED786E44EA639;             // 0x03E0 (size: 0xC)
    float VisibilityTimeline_HalfHeight_D0E2F33E4AF1451ABB7ED786E44EA639;             // 0x03EC (size: 0x4)
    float VisibilityTimeline_Radius_D0E2F33E4AF1451ABB7ED786E44EA639;                 // 0x03F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> VisibilityTimeline__Direction_D0E2F33E4AF1451ABB7ED786E44EA639; // 0x03F4 (size: 0x1)
    char padding_0[0x3];                                                              // 0x03F5 (size: 0x3)
    class UTimelineComponent* VisibilityTimeline;                                     // 0x03F8 (size: 0x8)
    class UCurveFloat* VisibilityTimelineRadiusCurve;                                 // 0x0400 (size: 0x8)
    class UCurveFloat* VisibilityTimelineHalfHeightCurve;                             // 0x0408 (size: 0x8)
    class UCurveVector* VisibilityTimelineLocationCurve;                              // 0x0410 (size: 0x8)
    FRotator VisibilityCapsuleRotation;                                               // 0x0418 (size: 0xC)

    void UpdateVisibilityTimeline(float InRadius, float InHalfHeight, FVector InLocation);
    void StartVisibilityTimeline();
    void VisibilityTimeline__FinishedFunc();
    void VisibilityTimeline__UpdateFunc();
    void ReceivePayloadActivated(const FHitResult& ImpactHitResult);
    void ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase(int32 EntryPoint);
}; // Size: 0x424

#endif
