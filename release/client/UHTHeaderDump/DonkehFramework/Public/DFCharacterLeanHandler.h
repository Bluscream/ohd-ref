#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "ECharacterStance.h"
#include "ELeanDirection.h"
#include "DFCharacterLeanHandler.generated.h"

class ADFBaseCharacter;
class UDFCharacterMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class DONKEHFRAMEWORK_API UDFCharacterLeanHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StationaryStandLeanCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MobileStandLeanCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StationaryCrouchLeanCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MobileCrouchLeanCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandLeanInYOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchLeanInYOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanRollAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELeanDirection LeanDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeanTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAtFullLeanTarget: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeanAmount;
    
    UDFCharacterLeanHandler();

    UFUNCTION(BlueprintCallable)
    void UpdateLeanDirection(ELeanDirection NewLeanDir);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterStance GetStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterStance GetPreviousStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFCharacterMovementComponent* GetOwningCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseCharacter* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLeanXOffset(ELeanDirection NewLeanDir, ECharacterStance LeanStance, bool bMoving) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanYOffset(float DesiredLeanAmt) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanXOffset(float DesiredLeanAmt) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanRollRot(float DesiredLeanAmt) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DetermineLeanTargetAmount(ELeanDirection DesiredLeanDir, bool bMoving) const;
    
};

