#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFCheatManager -FallbackName=DFCheatManager
#include "HDCheatManager.generated.h"

UCLASS(Blueprintable, Within=HDPlayerController)
class HDMAIN_API UHDCheatManager : public UDFCheatManager {
    GENERATED_BODY()
public:
    UHDCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIdleSway();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFreeAimADS();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFreeAim();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnVehicle();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxFreeAimYawADS(float NewYaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxFreeAimYaw(float NewYaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxFreeAimPitchADS(float NewPitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxFreeAimPitch(float NewPitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFreeAimReturnToCenterInterpSpeed(float NewInterpSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFreeAimDeadzoneCameraSpeedFactor(float NewSpeedFactor);
    
};

