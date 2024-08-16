#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFBaseMenu -FallbackName=DFBaseMenu
#include "HDUGCLoadProgressScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDUGCLoadProgressScreen : public UDFBaseMenu {
    GENERATED_BODY()
public:
    UHDUGCLoadProgressScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLoadProgress(int32 NumUGCRemainingToLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupProgressScreen(int32 TotalUGCToLoad);
    
};

