#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DFPlayerComponent.generated.h"

class AActor;
class AController;
class ADFTeamState;
class APawn;
class APlayerState;
class UDFPlayerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DONKEHFRAMEWORK_API UDFPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* ControllerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWantsToRestart: 1;
    
public:
    UDFPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RestartPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSeamlessTravelToCommon(AController* NewC, UDFPlayerComponent* NewCPlayerComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSeamlessTravelFromCommon(AController* OldC, UDFPlayerComponent* OldCPlayerComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnLeavingGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGameHasEnded(AActor* EndGameFocus, bool bIsWinner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingRestart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFTeamState* GetTeamState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinRestartDelay();
    
    UFUNCTION(BlueprintCallable)
    bool CanRestartPlayer();
    
};

