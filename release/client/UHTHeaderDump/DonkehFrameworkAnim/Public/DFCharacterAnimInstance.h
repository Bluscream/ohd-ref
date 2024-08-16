#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=ECharacterStance -FallbackName=ECharacterStance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "DFCharStanceContext.h"
#include "DFCharacterAnimInstance.generated.h"

class AController;
class ADFBaseCharacter;
class ADFBaseItem;
class APawn;

UCLASS(Blueprintable, NonTransient)
class DONKEHFRAMEWORKANIM_API UDFCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPreviewAnimInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* CachedPawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseCharacter* DFCharOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* ControllerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseItem* EquippedWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterStance MoveStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveDirectionDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMoving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bJumped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAiming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLeaning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFCharStanceContext StandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFCharStanceContext CrouchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFCharStanceContext ProneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimOffsets;
    
public:
    UDFCharacterAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseItem* TryGetOwnerWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* TryGetControllerOwner() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EquippedWeaponChanged(ADFBaseCharacter* Character, ADFBaseItem* NewEquippedWeap, ADFBaseItem* PrevEquippedWeap);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdatePawnOwnerRefs(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdateEquippedWeaponRefs(ADFBaseItem* NewWeap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdateControllerOwnerRefs(AController* NewC);
    
};

