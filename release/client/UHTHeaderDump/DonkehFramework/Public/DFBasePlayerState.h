#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "DFTeamAgentInterface.h"
#include "PlayerTeamNumUpdateSignatureDelegate.h"
#include "RepPlayerNameSignatureDelegate.h"
#include "DFBasePlayerState.generated.h"

class ADFBasePlayerState;
class ADFTeamState;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBasePlayerState : public APlayerState, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepPlayerNameSignature OnRepPlayerName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTeamNumUpdateSignature OnPlayerTeamNumUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamNum, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 PrevTeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamState, meta=(AllowPrivateAccess=true))
    ADFTeamState* TeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFTeamState* PrevTeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bAdmin, meta=(AllowPrivateAccess=true))
    uint8 bAdmin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumKills, meta=(AllowPrivateAccess=true))
    int32 NumKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumAssists, meta=(AllowPrivateAccess=true))
    int32 NumAssists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumDeaths, meta=(AllowPrivateAccess=true))
    int32 NumDeaths;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TeamStartTime;
    
public:
    ADFBasePlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTeam(const uint8 NewTeamNum, bool bCopyToInactivePlayerState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAdminStatus(bool bNewAdminStatus);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ScorePoints(float Points, bool bForceNetUpdate);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ScoreKillPlayer(ADFBasePlayerState* Victim, float Points);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ScoreDeath(ADFBasePlayerState* KilledBy, float Points);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ScoreAssistPlayer(ADFBasePlayerState* Killer, ADFBasePlayerState* Victim, float Points);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnRepPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeamStateUpdated(ADFTeamState* TeamStateBeforeUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeamNumUpdated(uint8 TeamNumBeforeUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamState(ADFTeamState* TeamStateBeforeUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamNum(uint8 TeamNumBeforeUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumKills(int32 PrevNumKills);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumDeaths(int32 PrevNumDeaths);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumAssists(int32 PrevNumAssists);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bAdmin(bool bAdminStatusBeforeUpdate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetPreviousTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssists() const;
    

    // Fix for true pure virtual functions not being implemented
};

