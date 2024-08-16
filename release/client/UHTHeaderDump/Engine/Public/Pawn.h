#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Actor.h"
#include "EAutoPossessAI.h"
#include "EAutoReceiveInput.h"
#include "NavAgentInterface.h"
#include "Templates/SubclassOf.h"
#include "Pawn.generated.h"

class AController;
class APawn;
class APlayerState;
class UPawnMovementComponent;

UCLASS(Blueprintable, Config=Game)
class ENGINE_API APawn : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseControllerRotationPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseControllerRotationYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseControllerRotationRoll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAffectNavigationGeneration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoReceiveInput::Type> AutoPossessPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoPossessAI AutoPossessAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RemoteViewPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AController> AIControllerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerState, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* LastHitBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Controller, meta=(AllowPrivateAccess=true))
    AController* Controller;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ControlInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastControlInputVector;
    
public:
    APawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SpawnDefaultController();
    
    UFUNCTION(BlueprintCallable)
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnpossessed(AController* OldController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePossessed(AController* NewController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Controller();
    
    UFUNCTION(BlueprintCallable)
    void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_GetMovementInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBotControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPendingMovementInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNavAgentLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPawnMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetMovementBaseActor(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastMovementInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetControlRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetBaseAimRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromControllerPendingDestroy();
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeMovementInputVector();
    
    UFUNCTION(BlueprintCallable)
    void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddControllerYawInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddControllerRollInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddControllerPitchInput(float Val);
    

    // Fix for true pure virtual functions not being implemented
};

