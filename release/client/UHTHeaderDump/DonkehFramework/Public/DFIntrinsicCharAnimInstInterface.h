#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFIntrinsicCharAnimInstInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UDFIntrinsicCharAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IDFIntrinsicCharAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayDeathMontage(UAnimMontage* MontageToPlay);
    
};

