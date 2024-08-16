#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGameModeDefinition -FallbackName=DFGameModeDefinition
#include "HDGameModeDefinition.generated.h"

class AHDBaseGameMode;

UCLASS(Blueprintable)
class HDMAIN_API UHDGameModeDefinition : public UDFGameModeDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHDBaseGameMode> GameModeClass;
    
public:
    UHDGameModeDefinition();

};

