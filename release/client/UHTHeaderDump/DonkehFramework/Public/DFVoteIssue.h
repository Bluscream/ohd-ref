#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DFPlayerVote.h"
#include "DFPlayerVoteSelection.h"
#include "DFVoteIssueContext.h"
#include "EDFVoteStatus.h"
#include "DFVoteIssue.generated.h"

class APlayerState;
class UDFVotingComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class DONKEHFRAMEWORK_API UDFVoteIssue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassedVoteCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedVoteCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyVACBannedUsersFromVoting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableVACBanCheckWhileAdminIsOnline;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAdminsCanInitiateVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IssueDisplayNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VotePromptFormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumEligibleVoters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDFPlayerVote> Votes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VoteStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VoteEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDFVoteStatus VoteEndStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* VoteOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFVoteIssueContext IssueContext;
    
public:
    UDFVoteIssue();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VotePassed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VoteFailed();
    
    UFUNCTION(BlueprintCallable)
    void ResetVote();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVoteReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVoteInit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetYesNoVoteCounts(int32& OutYesVotes, int32& OutNoVotes) const;
    
    UFUNCTION(BlueprintCallable)
    void GetVoteSelections(TArray<FDFPlayerVoteSelection>& OutVoteSelections);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredVoteCountToPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFVotingComponent* GetOwningVotingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEligibleVoters(TArray<APlayerState*>& OutEligibleVoters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEligibleVoterCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDFVoteStatus DetermineVoteStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVoteOn(APlayerState* VoterPS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartVote(APlayerState* InvokingPlayer) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowsVoteFrom(APlayerState* VoterPS) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowsStartVoteBy(APlayerState* InvokingPlayer) const;
    
};

