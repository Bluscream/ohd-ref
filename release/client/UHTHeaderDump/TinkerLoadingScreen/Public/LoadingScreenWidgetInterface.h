#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LoadScreenLevelData.h"
#include "LoadingScreenDescription.h"
#include "LoadingScreenWidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULoadingScreenWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class ILoadingScreenWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLoadingScreenDescription(const FLoadingScreenDescription& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLevelLoadData(const FLoadScreenLevelData& LevelData);
    
};

