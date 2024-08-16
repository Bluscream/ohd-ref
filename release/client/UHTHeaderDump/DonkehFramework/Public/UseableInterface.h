#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UseableInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UUseableInterface : public UInterface {
    GENERATED_BODY()
};

class IUseableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Used(AActor* Invoker);
    
};

