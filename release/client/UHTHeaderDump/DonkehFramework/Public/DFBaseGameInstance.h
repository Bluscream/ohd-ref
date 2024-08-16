#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENetworkFailure -FallbackName=ENetworkFailure
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENetworkLagState -FallbackName=ENetworkLagState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETravelFailure -FallbackName=ETravelFailure
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "ESessionSearchPresenceType.h"
#include "PlayerTalkingStateChangedDelegate.h"
#include "DFBaseGameInstance.generated.h"

class UDFGameDialogDescriptor;
class UNetDriver;
class UWorld;

UCLASS(Abstract, Blueprintable, NonTransient)
class DONKEHFRAMEWORK_API UDFBaseGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDFGameDialogDescriptor* PendingReturnToMainMenuMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTalkingStateChanged OnPlayerStateTalkingStateChanged;
    
public:
    UDFBaseGameInstance();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void ProjectVersion() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTravelFailure(UWorld* World, TEnumAsByte<ETravelFailure::Type> FailureType, const FString& ErrorString);
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkLagStateChanged(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState::Type> LagType);
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorString);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinGameByIP(const FString& IPAddress, const FString& JoinPassword);
    
    UFUNCTION(BlueprintCallable)
    void JoinGame(int32 SearchResultIndex, const FString& JoinPassword);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHibernating() const;
    
    UFUNCTION(BlueprintCallable)
    void HostGame(const FString& TravelURL, bool bLANGame, int32 MaxPlayers, const FString& HostName, const FString& Password);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ForceUpdateSession();
    
public:
    UFUNCTION(BlueprintCallable)
    void FindGames(const ESessionSearchPresenceType SearchPresenceType);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpOnlineSessionState();
    
};

