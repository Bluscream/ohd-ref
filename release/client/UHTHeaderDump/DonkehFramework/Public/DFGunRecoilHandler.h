#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DFGunRecoilHandler.generated.h"

class ADFBaseGun;
class APawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DONKEHFRAMEWORK_API UDFGunRecoilHandler : public UObject {
    GENERATED_BODY()
public:
    UDFGunRecoilHandler();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponStopFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponStartFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADFBaseGun* GetOwningGun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetConeOfFireOffset();
    
};

