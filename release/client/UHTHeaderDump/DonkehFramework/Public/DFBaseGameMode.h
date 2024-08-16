#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPlayerKind.h"
#include "SpawnPointDef.h"
#include "Templates/SubclassOf.h"
#include "DFBaseGameMode.generated.h"

class AAIController;
class AActor;
class AController;
class ADFBasePlayerController;
class ADFBasePlayerState;
class ADFGameSession;
class ADFTeamState;
class APlayerState;
class UDFGameRulesetBase;
class UDFTeamDefinition;
class UDFVoteIssue;
class UDFVotingComponent;

UCLASS(Abstract, Blueprintable, NonTransient, Config=Engine)
class DONKEHFRAMEWORK_API ADFBaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFGameSession* DFGameSession;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADFTeamState> TeamStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIController> AIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> WinningTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_DefaultTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarmupTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundScoreLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeBetweenMatches;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBalanceTeams: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalanceTimerInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoAssignHumanTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    uint8 bBotAutofill: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowUnassignedTeams: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayerNameChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayerNameChangesUnderNullOSS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayerNameChangesUnderSteamOSS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysDestroyPlayerDuringSeamlessTravel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRespawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomSpawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestartPlayerAtTransformOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFriendlyFire: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdatePlayerGameplayMuteStates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTeamOnlyVoice: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod DefaultPawnSpawnCollisionHandlingMethodOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowBots: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_BalanceTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UDFGameRulesetBase>> GameRulesetClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SignificantActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDFGameRulesetBase*> GameRulesets;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowVoting: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayerToChangeVote: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UDFVoteIssue>> AllowedVoteIssues;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDFVotingComponent> PlayerVotingGameStateComponentClass;
    
public:
    ADFBaseGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerGameplayMuteStates(ADFBasePlayerController* ForPlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterSignificantActor(AActor* ActorToRemove);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToNextMap();
    
private:
    UFUNCTION(BlueprintCallable)
    void SignificantActorEndPlay(AActor* RemovedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHibernate() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldGameplayMuteRemotePlayer(ADFBasePlayerController* ForPlayer, ADFBasePlayerController* PlayerToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBotAutofill() const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveTeamBots(uint8 TeamId, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerByAge(bool bNewest, bool bExcludeBots, bool bExcludeHumans);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOldestPlayer();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOldestBot();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewestPlayer();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewestBot();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBotByName(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBot(APlayerState* BotPS);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAllBots();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSignificantActor(AActor* ActorToRegister);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnSwapAIControllers(AAIController* OldAIC, AAIController* NewAIC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMatchIsWaitingToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMatchHasStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMatchHasEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMatchAborted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnLeavingMap();
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayerCanRestartGeneric(AController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerBotCanRestart(AAIController* Player);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ModifyDamage(float Damage, AActor* DamagedActor, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable)
    bool KickPlayerByName(const FString& KickedPlayerName, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable)
    bool KickPlayerById(int32 KickedPlayerId, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTeamId(uint8 TeamId) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMatchWinner(ADFBasePlayerState* PlayerStateToCheck) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHibernating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendlyFireEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalNumPlayers(bool bIncludeTravellingPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersOnTeam(uint8 TeamId, EPlayerKind PlayerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNextMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNextGameName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAutoAssignHumanTeam() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ForceTeamId(int32 SwitchedPlayerId, uint8 TeamIdToAssign);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ForceTeam(const FString& SwitchedPlayerName, uint8 TeamIdToAssign);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool FindPlayerStartTransform(AController* Player, FTransform& OutFoundSpawnTransform, const FString& IncomingName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActiveRulesets();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetermineMatchWinner();
    
public:
    UFUNCTION(BlueprintCallable)
    ADFTeamState* CreateTeam(const UDFTeamDefinition* NewTeamDef, const uint8 NewTeamIdToUse);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    uint8 ChooseTeam(ADFBasePlayerState* ForPlayerState) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ChooseSpawnPointFromPlayerStart(AController* Player, AActor* StartSpot, FSpawnPointDef& OutChosenSpawnPoint, ESpawnActorCollisionHandlingMethod& OutCollisionHandlingMethod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckWinConditions();
    
    UFUNCTION(BlueprintCallable)
    bool CheckRulesetWinConditions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRegisterSignificantActor(const AActor* ActorToRegister, FString& ActorDenialReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanDealDamage(ADFBasePlayerState* DamageInstigator, ADFBasePlayerState* DamagedPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddRuleset(TSubclassOf<UDFGameRulesetBase>& RulesetClassToAdd, FString& RulesetDenialReason) const;
    
    UFUNCTION(BlueprintCallable)
    bool BanPlayerByName(const FString& BannedPlayerName, const FText& BanReason, float BanDuration);
    
    UFUNCTION(BlueprintCallable)
    bool BanPlayerById(int32 BannedPlayerId, const FText& BanReason, float BanDuration);
    
    UFUNCTION(BlueprintCallable)
    void AutofillWithBots();
    
    UFUNCTION(BlueprintCallable)
    void AssignTeam(AController* ForController, uint8 AssignedTeam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddTeamBots(uint8 TeamId, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddNamedBot(const FString& BotName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBots(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    APlayerState* AddBot(uint8 PlayerTeamID, const FString& PlayerName);
    
};

