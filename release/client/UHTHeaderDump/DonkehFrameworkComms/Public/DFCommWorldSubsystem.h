#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DFCommWorldSubsystem.generated.h"

class AActor;
class AGameModeBase;
class APlayerController;
class UDFPlayerCommsComponent;

UCLASS(Blueprintable)
class DONKEHFRAMEWORKCOMMS_API UDFCommWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UDFCommWorldSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void PostSeamlessTravelPCDestroyed(AActor* DestroyedPlayerActor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UDFPlayerCommsComponent* InitPlayerComms(APlayerController* Player);
    
private:
    UFUNCTION(BlueprintCallable)
    void GameModePostLogin(AGameModeBase* GameMode, APlayerController* NewPlayer);
    
};

