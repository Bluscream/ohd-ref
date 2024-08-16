#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFIntrinsicWeapAnimInstInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UDFIntrinsicWeapAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IDFIntrinsicWeapAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayUnEquipMontage(UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayReloadMontage(UAnimMontage* MontageToPlay, bool bFullReload);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayFireMontage(UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayEquipMontage(UAnimMontage* MontageToPlay);
    
};

