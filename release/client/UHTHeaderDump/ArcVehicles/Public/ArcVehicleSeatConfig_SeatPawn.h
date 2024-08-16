#pragma once
#include "CoreMinimal.h"
#include "ArcOwnerAttachmentReference.h"
#include "ArcVehicleSeatConfig_PlayerAttachment.h"
#include "Templates/SubclassOf.h"
#include "ArcVehicleSeatConfig_SeatPawn.generated.h"

class AArcVehiclePawn;
class AArcVehicleSeat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARCVEHICLES_API UArcVehicleSeatConfig_SeatPawn : public UArcVehicleSeatConfig_PlayerAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<AArcVehicleSeat> SeatPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FArcOwnerAttachmentReference PlayerCharacterAttachToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bResetControlRotationOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SeatPawn, meta=(AllowPrivateAccess=true))
    AArcVehiclePawn* SeatPawn;
    
    UArcVehicleSeatConfig_SeatPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_SeatPawn(AArcVehiclePawn* OldSeatPawn);
    
};

