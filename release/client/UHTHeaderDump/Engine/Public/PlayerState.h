#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "Templates/SubclassOf.h"
#include "UniqueNetIdRepl.h"
#include "PlayerState.generated.h"

class APawn;
class APlayerState;
class ULocalMessage;

UCLASS(Blueprintable, NotPlaceable)
class ENGINE_API APlayerState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Score, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerId, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Ping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUpdateReplicatedPing: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsSpectator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bOnlySpectator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsABot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsInactive, meta=(AllowPrivateAccess=true))
    uint8 bIsInactive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bFromPreviousLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULocalMessage> EngineMessageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedNetworkAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PawnPrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerName, meta=(AllowPrivateAccess=true))
    FString PlayerNamePrivate;
    
public:
    APlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOverrideWith(APlayerState* OldPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCopyProperties(APlayerState* NewPlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniqueId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Score();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
};

