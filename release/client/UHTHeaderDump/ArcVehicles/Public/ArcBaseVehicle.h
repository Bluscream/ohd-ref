#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ArcVehiclePawn.h"
#include "ArcVehicleSeatChangeEvent.h"
#include "ArcBaseVehicle.generated.h"

class APlayerState;
class UArcVehicleSeatConfig;

UCLASS(Blueprintable)
class ARCVEHICLES_API AArcBaseVehicle : public AArcVehiclePawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcVehicleSeatConfig* DriverSeatConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UArcVehicleSeatConfig*> AdditionalSeatConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UArcVehicleSeatConfig*> ReplicatedSeatConfigs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArcVehicleSeatChangeEvent> SeatChangeQueue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerDebugStrings, meta=(AllowPrivateAccess=true))
    TArray<FString> ServerDebugStrings;
    
    AArcBaseVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupSeat(UArcVehicleSeatConfig* SeatConfig);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPrintDebug_Request();
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaveVehicle(APlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterSeat(APlayerState* InPlayerState, int32 RequestedSeatIndex, bool bIgnoreRestrictions);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterAnySeat(APlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerDebugStrings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSeatIndex(int32 InSeatIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSortedExitPoints(FTransform InputLocation, TArray<FTransform>& OutTransformArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetNearestExitTransform(FTransform InputLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArcVehicleSeatConfig* GetDriverSeat();
    
    UFUNCTION(BlueprintCallable)
    void GetAllSeats(TArray<UArcVehicleSeatConfig*>& Seats);
    
};

