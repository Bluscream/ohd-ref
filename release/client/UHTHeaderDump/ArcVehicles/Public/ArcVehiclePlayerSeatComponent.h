#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "ArcVehicleSeatReference.h"
#include "EArcVehicleSeatChangeType.h"
#include "ArcVehiclePlayerSeatComponent.generated.h"

class APlayerState;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARCVEHICLES_API UArcVehiclePlayerSeatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SeatConfig, meta=(AllowPrivateAccess=true))
    FArcVehicleSeatReference CurrentSeatConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArcVehicleSeatReference PreviousSeatConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StoredPlayerState, meta=(AllowPrivateAccess=true))
    APlayerState* StoredPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerDebugStrings, meta=(AllowPrivateAccess=true))
    TArray<FString> ServerDebugStrings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> PreviousVehicleCollisionResponses;
    
public:
    UArcVehiclePlayerSeatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPrintDebug_Request();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredPlayerState(APlayerState* InPreviousPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerDebugStrings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SeatConfig(const FArcVehicleSeatReference& InPreviousSeatConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRep_StoredPlayerState(APlayerState* InPreviousPlayerState);
    
};

