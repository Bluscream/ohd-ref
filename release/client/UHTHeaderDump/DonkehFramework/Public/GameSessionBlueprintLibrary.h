#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GameSessionBlueprintLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UGameSessionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameSessionBlueprintLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    void RemoveAdmin(UObject* WorldContextObj, APlayerController* AdminPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static int32 GetMinPlayers(UObject* WorldContextObj);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static int32 GetMaxSpectators(UObject* WorldContextObj);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static int32 GetMaxPlayers(UObject* WorldContextObj);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    static void AddAdmin(UObject* WorldContextObj, APlayerController* AdminPlayer);
    
};

