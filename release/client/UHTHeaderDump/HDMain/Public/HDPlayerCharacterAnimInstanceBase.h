#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkAnim -ObjectName=DFCharacterAnimInstance -FallbackName=DFCharacterAnimInstance
#include "HDPlayerCharacterAnimInstanceBase.generated.h"

class AHDBaseWeapon;
class AHDPlayerCharacter;
class AHDPlayerController;

UCLASS(Abstract, Blueprintable, NonTransient)
class HDMAIN_API UHDPlayerCharacterAnimInstanceBase : public UDFCharacterAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlayerCharacter* HDPlyCharOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDPlayerController* HDPCOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseWeapon* HDEquippedWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInVehicle: 1;
    
public:
    UHDPlayerCharacterAnimInstanceBase();

};

