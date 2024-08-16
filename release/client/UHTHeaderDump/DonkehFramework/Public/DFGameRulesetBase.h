#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFGameRulesetBase.generated.h"

class AActor;
class AController;
class ADFBaseGameMode;
class ADFBaseGameState;
class APawn;
class APlayerController;
class UDamageType;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API UDFGameRulesetBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickable: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    UDFGameRulesetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterActor(AActor* UnregisteredActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterActor(AActor* RegisteredActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerWounded(AController* Victim, float DamageAmount, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerSuicide(AController* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerSpawn(AController* Player, APawn* NewPlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerPostLogout(AController* ExitingPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerPostLogin(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerKilled(AController* Killer, AController* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerJoinedTeam(AController* JoiningPlayer, uint8 TeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerJoined(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerDied(AController* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MatchHasEnded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseGameState* GetGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseGameMode* GetGameMode() const;
    
};

