#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EHDTeam.h"
#include "HDURLStatics.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDURLStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHDURLStatics();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNumTicketsOptionName(EHDTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNumBotsOptionName(EHDTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFactionOptionName(EHDTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisableKitRestrictionsOptionName();
    
};

