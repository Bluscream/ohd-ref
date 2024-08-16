#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DFActiveVoteInfo.h"
#include "DFVoteIssueContext.h"
#include "DFVoteIssueDefinition.h"
#include "Templates/SubclassOf.h"
#include "DFVotingComponent.generated.h"

class APlayerState;
class UDFVoteIssue;
class UDFVotingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DONKEHFRAMEWORK_API UDFVotingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerVoteIssueEventDynamic, UDFVotingComponent*, SourceVotingComponent);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnPlayerVoteIssueEventDynamic OnPlayerVoteInitiatedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnPlayerVoteIssueEventDynamic OnPlayerVoteEndedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnPlayerVoteIssueEventDynamic OnPlayerVoteStateUpdatedDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveVoteInfo, meta=(AllowPrivateAccess=true))
    FDFActiveVoteInfo ActiveVoteInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDFVoteIssue* ActiveVoteIssue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDFVoteIssue*> VoteIssues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDFVoteIssueDefinition> VoteIssueDefinitions;
    
public:
    UDFVotingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveVoteInfo(const FDFActiveVoteInfo& PreviousValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVotingInProgress() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool InitiateVote(APlayerState* InvokingPlayer, TSubclassOf<UDFVoteIssue> IssueClass, const FDFVoteIssueContext& IssueContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    UDFVoteIssue* GetVoteIssueForClass(TSubclassOf<UDFVoteIssue> IssueClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoteIssueDefinitionForClass(TSubclassOf<UDFVoteIssue> IssueClass, FDFVoteIssueDefinition& OutIssueDefinition) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CastVote(APlayerState* InvokingPlayer, int32 VoteSelectionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVoteTargetPlayer(APlayerState* TargetPS, TSubclassOf<UDFVoteIssue> IssueClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInitiateVote(APlayerState* InvokingPlayer, TSubclassOf<UDFVoteIssue> IssueClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCastVote(APlayerState* VotingPlayer, int32 VoteSelectionID) const;
    
};

