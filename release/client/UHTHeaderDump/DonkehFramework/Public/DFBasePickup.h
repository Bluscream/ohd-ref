#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UseableInterface.h"
#include "DFBasePickup.generated.h"

class ADFBaseCharacter;
class USoundCue;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class DONKEHFRAMEWORK_API ADFBasePickup : public AActor, public IUseableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    uint8 bActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseCharacter* InvokingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverlap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickupSound;
    
public:
    ADFBasePickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePickupState(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void RespawnPickup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRespawn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Active();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializePickup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GivePickupTo(ADFBaseCharacter* PickupOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePickedUp(ADFBaseCharacter* Invoker) const;
    

    // Fix for true pure virtual functions not being implemented
};

