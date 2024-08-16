#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VisibilityInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVisibilityInterface : public UInterface {
    GENERATED_BODY()
};

class IVisibilityInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector EventGetFocalPoint() const;
    
};

