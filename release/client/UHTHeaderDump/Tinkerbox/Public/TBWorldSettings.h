#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFWorldSettings -FallbackName=DFWorldSettings
#include "MinimapGenerationSettings.h"
#include "TBWorldSettings.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class TINKERBOX_API ATBWorldSettings : public ADFWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapGenerationSettings MinimapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MinimapImg;
    
public:
    ATBWorldSettings(const FObjectInitializer& ObjectInitializer);

};

