#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFThrowableWeapAnimInstInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UDFThrowableWeapAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IDFThrowableWeapAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayThrowUnderhandMontage(UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayThrowOverhandMontage(UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayCockMontage(UAnimMontage* MontageToPlay);
    
};

