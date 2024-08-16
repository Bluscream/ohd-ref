#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFGameDialog -FallbackName=DFGameDialog
#include "HDConfirmationDialog.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDConfirmationDialog : public UDFGameDialog {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* ButtonsEntryBox;
    
public:
    UHDConfirmationDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDialogText(const FText& TitleText, const FText& DescriptionText);
    
};

