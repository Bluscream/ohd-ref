#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFSingleActionWeapAnimInstInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UDFSingleActionWeapAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IDFSingleActionWeapAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayActionMontage(UAnimMontage* MontageToPlay);
    
};

