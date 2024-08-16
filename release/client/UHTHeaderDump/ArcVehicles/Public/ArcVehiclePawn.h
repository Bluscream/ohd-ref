#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "EArcVehicleSeatChangeType.h"
#include "ArcVehiclePawn.generated.h"

class AArcBaseVehicle;
class APlayerState;
class UArcVehicleSeatConfig;

UCLASS(Abstract, Blueprintable)
class ARCVEHICLES_API AArcVehiclePawn : public APawn {
    GENERATED_BODY()
public:
    AArcVehiclePawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyPlayerSeatChangeEvent(APlayerState* Player, UArcVehicleSeatConfig* ToSeat, UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArcVehicleSeatConfig* GetSeatConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AArcBaseVehicle* GetOwningVehicle();
    
};

