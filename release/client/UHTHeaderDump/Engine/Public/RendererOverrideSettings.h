#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "RendererOverrideSettings.generated.h"

UCLASS(Blueprintable, GlobalUserConfig, Config=Engine)
class ENGINE_API URendererOverrideSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportAllShaderPermutations: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRecomputeTangents: 1;
    
    URendererOverrideSettings();

};

