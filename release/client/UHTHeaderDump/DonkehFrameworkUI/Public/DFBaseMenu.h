#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DFBaseMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DONKEHFRAMEWORKUI_API UDFBaseMenu : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMenuConstructedInDesigner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMenuPopped: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFlushPlayerInputUponConstruction: 1;
    
public:
    UDFBaseMenu();

    UFUNCTION(BlueprintCallable)
    void RemoveFromMenuStack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMenuUncovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMenuPush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMenuPop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnMenuCovered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopOfMenuStack() const;
    
};

