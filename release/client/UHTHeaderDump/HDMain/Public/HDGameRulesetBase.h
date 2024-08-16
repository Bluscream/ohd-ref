#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFGameRulesetBase -FallbackName=DFGameRulesetBase
#include "EHDTeam.h"
#include "HDGameRulesetBase.generated.h"

class AHDBaseGameMode;
class AHDGameState;

UCLASS(Abstract, Blueprintable)
class HDMAIN_API UHDGameRulesetBase : public UDFGameRulesetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTickets: 1;
    
public:
    UHDGameRulesetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void RevokeTicketsFromTeam(EHDTeam TicketTeam, int32 TicketsToRemove);
    
    UFUNCTION(BlueprintCallable)
    void GiveTicketsToTeam(EHDTeam TicketTeam, int32 TicketsToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDGameState* GetHDGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHDBaseGameMode* GetHDGameMode() const;
    
};

