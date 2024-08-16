#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "HDGameProjectBuildSettings.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDGameProjectBuildSettings : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHDGameProjectBuildSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoBuild();
    
};

