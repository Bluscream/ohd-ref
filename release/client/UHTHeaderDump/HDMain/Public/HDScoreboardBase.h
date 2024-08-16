#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFBaseMenu -FallbackName=DFBaseMenu
#include "Templates/SubclassOf.h"
#include "HDScoreboardBase.generated.h"

class UHDScoreboardListingRowBase;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UHDScoreboardBase : public UDFBaseMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHDScoreboardListingRowBase> ScoreboardListRowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* OpforPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BluforPlayerList;
    
public:
    UHDScoreboardBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveScoreboardListRowAdded(UHDScoreboardListingRowBase* NewListEntry);
    
};

