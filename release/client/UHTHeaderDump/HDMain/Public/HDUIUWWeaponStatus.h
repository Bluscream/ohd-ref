#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=EFireMode -FallbackName=EFireMode
#include "EHDWeaponAimStyle.h"
#include "HDUIUserWidget.h"
#include "HDUIWeaponAmmoState.h"
#include "HDUIUWWeaponStatus.generated.h"

class ADFBaseGun;
class AHDBaseWeapon;
class AHDPlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDUIUWWeaponStatus : public UHDUIUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHDBaseWeapon* OwnerEquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHDUIWeaponAmmoState WeapAmmoState;
    
public:
    UHDUIUWWeaponStatus();

private:
    UFUNCTION(BlueprintCallable)
    void OwnerWeaponFireModeChanged(ADFBaseGun* Gun, EFireMode NewFireMode, EFireMode PrevFireMode, bool bFromPlayerInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerSetAimStyle(EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerAimStyleChanged(AHDPlayerCharacter* Character, EHDWeaponAimStyle NewAimStyle, EHDWeaponAimStyle PrevAimStyle, bool bFromPlayerInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOwnerWeaponSetFireMode(EFireMode NewFireMode, EFireMode PreviousFireMode, bool bFromPlayerInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOwnerWeaponAmmoUpdated(const FHDUIWeaponAmmoState& AmmoState, bool bFromReload, bool bTotalFreeAmmoUpdated, bool bNumFreeAmmoClipsUpdated);
    
};

