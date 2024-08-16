#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DFNetworkEventSubsystem.generated.h"

class AGameStateBase;
class UDFNetworkEventSubsystem;
class UObject;

UCLASS(Blueprintable)
class DONKEHFRAMEWORK_API UDFNetworkEventSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStateEventDynamic, AGameStateBase*, GameState);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnGameStateEventDynamic OnPlayersUpdatedDynamic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnGameStateEventDynamic OnTeamsUpdatedDynamic;
    
public:
    UDFNetworkEventSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDFNetworkEventSubsystem* Get(const UObject* WorldContextObject);
    
};

