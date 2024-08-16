#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnButtonClickedEvent__DelegateSignature -FallbackName=OnButtonClickedEventDelegate
#include "TBButton.generated.h"

UCLASS(Blueprintable)
class TINKERUI_API UTBButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedEvent OnDoubleClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStopDoubleClickPropagation: 1;
    
public:
    UTBButton();

    UFUNCTION(BlueprintCallable)
    void StopDoubleClickPropagation();
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool bInIsFocusable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusable() const;
    
};

