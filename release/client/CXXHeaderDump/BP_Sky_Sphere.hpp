#ifndef UE4SS_SDK_BP_Sky_Sphere_HPP
#define UE4SS_SDK_BP_Sky_Sphere_HPP

class ABP_Sky_Sphere_C : public AActor
{
    class UStaticMeshComponent* SkySphereMesh;                                        // 0x0220 (size: 0x8)
    class USceneComponent* Base;                                                      // 0x0228 (size: 0x8)
    class UMaterialInstanceDynamic* Sky material;                                     // 0x0230 (size: 0x8)
    bool Refresh material;                                                            // 0x0238 (size: 0x1)
    char padding_0[0x7];                                                              // 0x0239 (size: 0x7)
    class ADirectionalLight* Directional light actor;                                 // 0x0240 (size: 0x8)
    bool Colors determined by sun position;                                           // 0x0248 (size: 0x1)
    char padding_1[0x3];                                                              // 0x0249 (size: 0x3)
    float Sun height;                                                                 // 0x024C (size: 0x4)
    float Sun brightness;                                                             // 0x0250 (size: 0x4)
    float Horizon falloff;                                                            // 0x0254 (size: 0x4)
    FLinearColor Zenith color;                                                        // 0x0258 (size: 0x10)
    FLinearColor Horizon color;                                                       // 0x0268 (size: 0x10)
    FLinearColor Cloud color;                                                         // 0x0278 (size: 0x10)
    FLinearColor Overall Color;                                                       // 0x0288 (size: 0x10)
    float Cloud speed;                                                                // 0x0298 (size: 0x4)
    float Cloud opacity;                                                              // 0x029C (size: 0x4)
    float Stars brightness;                                                           // 0x02A0 (size: 0x4)
    char padding_2[0x4];                                                              // 0x02A4 (size: 0x4)
    class UCurveLinearColor* Horizon color curve;                                     // 0x02A8 (size: 0x8)
    class UCurveLinearColor* Zenith color curve;                                      // 0x02B0 (size: 0x8)
    class UCurveLinearColor* Cloud color curve;                                       // 0x02B8 (size: 0x8)

    void RefreshMaterial();
    void UpdateSunDirection();
    void UserConstructionScript();
}; // Size: 0x2C0

#endif
