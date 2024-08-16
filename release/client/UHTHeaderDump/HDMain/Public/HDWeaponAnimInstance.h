#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkAnim -ObjectName=DFWeaponAnimInstance -FallbackName=DFWeaponAnimInstance
#include "HDWeaponAnimInstance.generated.h"

class AHDBaseWeapon;

UCLASS(Blueprintable, NonTransient)
class HDMAIN_API UHDWeaponAnimInstance : public UDFWeaponAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseWeapon* HDWeaponOwner;
    
public:
    UHDWeaponAnimInstance();

};

