#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENetworkFailure.h"
#include "ETravelFailure.h"
#include "GameInstance.generated.h"

class ULocalPlayer;
class UOnlineSession;

UCLASS(Blueprintable, Transient, Config=Game)
class ENGINE_API UGameInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULocalPlayer*> LocalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnlineSession* OnlineSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReferencedObjects;
    
public:
    UGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTravelError(TEnumAsByte<ETravelFailure::Type> FailureType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNetworkError(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRemovePlayer(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreatePlayer(int32 ControllerId);
    
};

