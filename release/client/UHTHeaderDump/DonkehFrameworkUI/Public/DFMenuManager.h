#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "EMenuActivationMode.h"
#include "MenuStackEntry.h"
#include "DFMenuManager.generated.h"

class UDFBaseMenu;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class DONKEHFRAMEWORKUI_API UDFMenuManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMenuStackEntry> MenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath MenuManagerClassName;
    
public:
    UDFMenuManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDFBaseMenu* Top() const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveMenu(UDFBaseMenu* MenuToRemove);
    
    UFUNCTION(BlueprintCallable)
    void PopMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClearMenuStack();
    
    UFUNCTION(BlueprintCallable)
    void ActivateMenu(UDFBaseMenu* MenuToAdd, EMenuActivationMode ActivationMode, const bool bShowMouseCursor, const bool bUIOnlyInput);
    
};

