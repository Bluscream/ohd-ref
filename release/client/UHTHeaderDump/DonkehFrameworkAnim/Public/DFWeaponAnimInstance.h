#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "DFWeaponAnimInstance.generated.h"

class ADFBaseWeapon;

UCLASS(Blueprintable, NonTransient)
class DONKEHFRAMEWORKANIM_API UDFWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPreviewAnimInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADFBaseWeapon* WeaponOwner;
    
public:
    UDFWeaponAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseWeapon* TryGetWeaponOwner() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdateWeaponOwnerRefs(ADFBaseWeapon* NewWeap);
    
};

