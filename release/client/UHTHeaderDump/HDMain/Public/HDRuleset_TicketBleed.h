#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.h"
#include "HDGameRulesetBase.h"
#include "TicketBleedRulesetSettings.h"
#include "HDRuleset_TicketBleed.generated.h"

class AHDBaseCapturePoint;

UCLASS(Blueprintable)
class HDMAIN_API UHDRuleset_TicketBleed : public UHDGameRulesetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHDBaseCapturePoint*> RegisteredCPs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTicketBleedRulesetSettings BluforTeamTBSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTicketBleedRulesetSettings OpforTeamTBSettings;
    
public:
    UHDRuleset_TicketBleed();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTicketBleedState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTicketBleedRulesetSettings GetTicketBleedSettingsForTeam(EHDTeam TicketBleedTeam) const;
    
    UFUNCTION(BlueprintCallable)
    void ControlPointTeamUpdated(AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTicketBleed(EHDTeam BleedTeam, int32 TicketBleedMultiplier, bool bUseMercyTicketBleed);
    
};

