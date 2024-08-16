#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=ECharacterStance -FallbackName=ECharacterStance
#include "EHDUICharacterStanceState.h"
#include "HDUIUserWidget.h"
#include "HDUIUWPlayerStatus.generated.h"

class ADFBaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDUIUWPlayerStatus : public UHDUIUserWidget {
    GENERATED_BODY()
public:
    UHDUIUWPlayerStatus();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerUpdateStamina(float SprintValueNorm, float JumpValueNorm, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerStartSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerStartAim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerSprintTransitionUpdate(bool bIsSprinting);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerSetStanceState(EHDUICharacterStanceState NewState, EHDUICharacterStanceState OldState, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerSetStance(ECharacterStance NewStance, ECharacterStance OldStance, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerSetSprintStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerSetJumpStamina(float NewValueNorm, float OldValueNorm, bool bInitial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerSetHealth(float NewValueNorm, float OldValueNorm, bool bInitial);
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerHealthUpdate(ADFBaseCharacter* Character, float NewHealthTotal, float PrevHealthTotal);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerEndSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerEndAim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OwnerAimTransitionUpdate(bool bIsAiming);
    
};

