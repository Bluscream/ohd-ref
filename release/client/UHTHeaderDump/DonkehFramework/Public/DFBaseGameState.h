#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "GameStatePSAddRemoveDelegate.h"
#include "GameStateTSAddRemoveDelegate.h"
#include "DFBaseGameState.generated.h"

class ADFTeamState;
class UDFVotingComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBaseGameState : public AGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumTeams, meta=(AllowPrivateAccess=true))
    uint8 NumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bTimerPaused;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedRemainingTime, meta=(AllowPrivateAccess=true))
    int32 ReplicatedRemainingTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> TeamScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADFTeamState*> TeamArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateTSAddRemove OnTeamStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateTSAddRemove OnTeamStateRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStatePSAddRemove OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStatePSAddRemove OnPlayerStateRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAllowVoting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayerToChangeVote: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDFVotingComponent* GameStateVotingComponent;
    
public:
    ADFBaseGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerPauseState(bool bNewPauseState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRemainingTime(int32 NewRemainingTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedRemainingTime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumTeams();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTeamId(const uint8 TeamId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFTeamState* GetTeamStateById(const uint8 TeamIdNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFVotingComponent* GetGameStateVotingComponent() const;
    
};

