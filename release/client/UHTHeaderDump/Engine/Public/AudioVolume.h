#pragma once
#include "CoreMinimal.h"
#include "InteriorSettings.h"
#include "ReverbSettings.h"
#include "Volume.h"
#include "AudioVolume.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AAudioVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReverbSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorSettings AmbientZoneSettings;
    
public:
    AAudioVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetReverbSettings(const FReverbSettings& NewReverbSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(float NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetInteriorSettings(const FInteriorSettings& NewInteriorSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
};

