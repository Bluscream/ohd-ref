#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "HDServerInfo.h"
#include "HDUIStatics.generated.h"

UCLASS(Blueprintable)
class HDMAIN_API UHDUIStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHDUIStatics();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetServerPort(const FHDServerInfo& InServerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetServerIpPort(const FHDServerInfo& InServerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetServerIp(const FHDServerInfo& InServerInfo);
    
};

