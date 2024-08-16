#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Slider -FallbackName=Slider
#include "TBSlider.generated.h"

UCLASS(Blueprintable)
class TINKERUI_API UTBSlider : public USlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderFgBarColor;
    
    UTBSlider();

    UFUNCTION(BlueprintCallable)
    void SetSliderFgBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseUsesStep(bool bInValue);
    
};

