#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "CSHitInfo.h"
#include "DFTeamAgentInterface.h"
#include "DFVoteIssueContext.h"
#include "EDFVotingChannel.h"
#include "PawnPossessionSignatureDelegate.h"
#include "PlayerChatMsg.h"
#include "TeamNumUpdateSignatureDelegate.h"
#include "TeamStateUpdateSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DFBasePlayerController.generated.h"

class AActor;
class ADFBaseCharacter;
class ADFBaseProjectile;
class ADFTeamState;
class APawn;
class UDFVoteIssue;
class UDFVotingComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBasePlayerController : public APlayerController, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnPossessionSignature OnPossessPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnPossessionSignature OnUnpossessPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADFBaseCharacter* DFCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetGameOnlyInputOnBeginPlay: 1;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamNumUpdateSignature OnPlayerTeamNumUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeamStateUpdateSignature OnPlayerTeamStateUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFTeamState* TeamState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChatMsgLen;
    
public:
    ADFBasePlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Exec)
    void TeamSay(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeamSay(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSay(const FString& Msg);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyProjCSHit(ADFBaseProjectile* HitProj, APawn* HitProjDamageInstigator, const FCSHitInfo& HitInfo, int32 ShotID);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInitiateVote(TSubclassOf<UDFVoteIssue> IssueClass, FDFVoteIssueContext IssueContext, int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnableCheats();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCastVote(int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAdmin(const FString& Cmd);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void Say(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnpossessPawn(APawn* UnpossessedPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePreClientTravel(const FString& PendingURL, bool bIsSeamlessTravelWithRelativeTravelType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePossessPawn(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerTeamStateUpdated(ADFTeamState* LastTeamState, ADFTeamState* NewTeamState, bool bNewTeamStateInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerTeamNumUpdated(uint8 LastTeamNum, uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnRepPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNewChatMsg(const FPlayerChatMsg& ChatMsg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGameHasEnded(AActor* EndGameFocus, bool bIsWinner);
    
    UFUNCTION(BlueprintCallable)
    void OnFireReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnFirePressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerAdministrator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameInputAllowed();
    
    UFUNCTION(BlueprintCallable)
    bool InitiateVote(TSubclassOf<UDFVoteIssue> IssueClass, const FDFVoteIssueContext& IssueContext, int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFVotingComponent* GetVotingComponentByChannel(EDFVotingChannel VotingChannel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimerHandle GetUnFreezeTimerHandle() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnableCheats();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CastVote(int32 VoteSelectionIndex, EDFVotingChannel VotingChannel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Admin(const FString& Cmd);
    

    // Fix for true pure virtual functions not being implemented
};

