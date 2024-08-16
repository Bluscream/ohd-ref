#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Tinkerbox -ObjectName=TBWorldSettings -FallbackName=TBWorldSettings
#include "HDWorldSettings.generated.h"

class UHDTeamDefinition;

UCLASS(Blueprintable)
class HDMAIN_API AHDWorldSettings : public ATBWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDTeamDefinition* BluforTeamDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHDTeamDefinition* OpforTeamDefinition;
    
public:
    AHDWorldSettings(const FObjectInitializer& ObjectInitializer);

};

