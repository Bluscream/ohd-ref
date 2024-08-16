#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HDButtonBase.generated.h"

class UButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDButtonBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
public:
    UHDButtonBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonText(const FText& InText);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
};

