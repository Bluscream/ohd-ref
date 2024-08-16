#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFBasePlayerController -FallbackName=DFBasePlayerController
#include "EHDTeam.h"
#include "HDGameRoundEndEventDetails.h"
#include "PTTKeyState.h"
#include "Templates/SubclassOf.h"
#include "HDPlayerController.generated.h"

class AActor;
class AHDPlayerCharacter;
class APlayerState;
class UDFCommChannel;
class UDFLoadout;
class UDFPlayerCommsComponent;
class UHDPlayerComponent;
class UVictoryMenu;

UCLASS(Blueprintable)
class HDMAIN_API AHDPlayerController : public ADFBasePlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHDPlayerCharacter* HDCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHDPlayerComponent* PlayerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPTTKeyState> PushToTalkKeyStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextCommsFormatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TeamLocalVoipCommChannelGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SquadVoipCommChannelGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommandVoipCommChannelGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDFPlayerCommsComponent* CachedPlayerCommsComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVictoryMenu> VictoryMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVictoryMenu* VictoryMenu;
    
public:
    AHDPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadVictoryMenu();
    
    UFUNCTION(BlueprintCallable)
    void TeamTalk();
    
    UFUNCTION(BlueprintCallable)
    void Talk();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopTalkingOverChannelIfActive(const FName TalkStopChannelName);
    
    UFUNCTION(BlueprintCallable)
    void StopTalkingOverChannelGroupIfActive(const FName TalkStopGroupName);
    
    UFUNCTION(BlueprintCallable)
    void StopTalkingOnActiveChannels();
    
    UFUNCTION(BlueprintCallable)
    void StartTalkingOverChannelGroup(const FName TalkStartGroupName);
    
    UFUNCTION(BlueprintCallable)
    void StartTalkingOverChannel(const FName TalkStartChannelName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwitchTeam();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnVehicle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestartPlayerAtStartSpot(AActor* DesiredStartSpot, UDFLoadout* DesiredStartLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickTeam(const EHDTeam DesiredTeam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVoipTalkerMsgReceived(UDFCommChannel* MsgTalkerChannel, APlayerState* MsgTalkerPS, bool bMsgIsTalking);
    
    UFUNCTION(BlueprintCallable)
    void OnShowScoreboardReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnShowScoreboardPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSpawnTimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnPauseMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadVictoryMenu(const FHDGameRoundEndEventDetails& RoundDetails, bool bWinner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkingOverChannelName(const FName TalkChannelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkingOverChannelGroup(const FName TalkGroupName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkingOverChannel(const UDFCommChannel* TalkChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalking(bool bIncludeWantsToTalk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdleSwayAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFCommChannel* GetTalkChannel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFPlayerCommsComponent* GetPlayerCommsComponent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRoundEnd(const FHDGameRoundEndEventDetails& RoundDetails, bool bIsWinner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLoadTeamData(const TArray<FString>& FactionAssetPaths);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatSetAllowIdleSway(bool bIdleSwayDisallowed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTalkOverChannel(const FName TalkChannelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Auth_SpawnVehicle();
    
};

