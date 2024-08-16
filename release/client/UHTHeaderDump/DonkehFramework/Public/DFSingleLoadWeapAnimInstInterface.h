#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DFSingleLoadWeapAnimInstInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UDFSingleLoadWeapAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IDFSingleLoadWeapAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayStartReloadMontage(UAnimMontage* MontageToPlay, bool bFullReload);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float PlayEndReloadMontage(UAnimMontage* MontageToPlay, bool bFullReload);
    
};

