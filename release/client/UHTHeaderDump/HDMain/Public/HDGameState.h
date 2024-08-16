#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBaseGameState -FallbackName=DFBaseGameState
#include "EHDTeam.h"
#include "HDGameState.generated.h"

class AController;
class AHDTeamState;

UCLASS(Blueprintable)
class HDMAIN_API AHDGameState : public ADFBaseGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ReplicatedMinRespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bReplicatedDisableSpawnKitRestrictions: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 BluforTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 OpforTickets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* BluforTeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* OpforTeamState;
    
    AHDGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32 TicketsToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameUsingTickets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameUsingPlayerSpawnKitRestrictions(const AController* Controller) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveTicketsToTeam(EHDTeam TicketTeam, int32 TicketsToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersOnTeam(EHDTeam TeamToCheck) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTickets();
    
};

