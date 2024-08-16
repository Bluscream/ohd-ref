#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFBaseMenu -FallbackName=DFBaseMenu
#include "HDGameRoundEndEventDetails.h"
#include "VictoryMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HDMAIN_API UVictoryMenu : public UDFBaseMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHDGameRoundEndEventDetails RoundDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWinner: 1;
    
public:
    UVictoryMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryInit();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(const FHDGameRoundEndEventDetails& InRoundDetails, bool bInWinner);
    
};

