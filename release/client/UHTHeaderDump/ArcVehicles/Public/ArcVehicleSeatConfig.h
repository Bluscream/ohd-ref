#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ArcOwnerAttachmentReference.h"
#include "ArcVehicleSeatConfig.generated.h"

class AArcBaseVehicle;
class APlayerState;
class UArcVehiclePlayerSeatComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARCVEHICLES_API UArcVehicleSeatConfig : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FArcOwnerAttachmentReference AttachSeatToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerInSeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcVehiclePlayerSeatComponent* PlayerSeatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPlayerVisible;
    
    UArcVehicleSeatConfig(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnAttachPlayerFromSeat(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupSeatAttachment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenSeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriverSeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AArcBaseVehicle* GetVehicleOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UnAttachPlayerFromSeat(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachPlayerToSeat(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void AttachPlayerToSeat(APlayerState* Player);
    
};

