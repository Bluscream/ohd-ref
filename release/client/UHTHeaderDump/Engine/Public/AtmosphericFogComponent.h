#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "AtmospherePrecomputeParameters.h"
#include "SceneComponent.h"
#include "AtmosphericFogComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAtmosphericFogComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DensityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltitudeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GroundOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SunDiscScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DefaultBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FColor DefaultLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bDisableSunDisk: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bAtmosphereAffectsSunIlluminance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bDisableGroundScattering: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtmospherePrecomputeParameters PrecomputeParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TransmittanceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IrradianceTexture;
    
    UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPrecompute();
    
    UFUNCTION(BlueprintCallable)
    void SetSunMultiplier(float NewSunMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDistance(float NewStartDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);
    
    UFUNCTION(BlueprintCallable)
    void SetFogMultiplier(float NewFogMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceScale(float NewDistanceScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceOffset(float NewDistanceOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDensityOffset(float NewDensityOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDensityMultiplier(float NewDensityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLightColor(FLinearColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBrightness(float NewBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetAltitudeScale(float NewAltitudeScale);
    
    UFUNCTION(BlueprintCallable)
    void DisableSunDisk(bool NewSunDisk);
    
    UFUNCTION(BlueprintCallable)
    void DisableGroundScattering(bool NewGroundScattering);
    
};

