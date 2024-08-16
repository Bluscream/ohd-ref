#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ConstructionSystemBuildUI.generated.h"

class UConstructionSystemComponent;
class UConstructionSystemUIAsset;

UINTERFACE(Blueprintable)
class UConstructionSystemBuildUI : public UInterface {
    GENERATED_BODY()
};

class IConstructionSystemBuildUI : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUIAsset(UConstructionSystemUIAsset* UIAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConstructionSystem(UConstructionSystemComponent* ConstructionSystem);
    
};

