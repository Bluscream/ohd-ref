#pragma once
#include "CoreMinimal.h"
#include "ControlPointRulesetSettings.h"
#include "EHDTeam.h"
#include "HDGameRulesetBase.h"
#include "HDRuleset_ControlPoint.generated.h"

class AHDBaseCapturePoint;

UCLASS(Blueprintable)
class HDMAIN_API UHDRuleset_ControlPoint : public UHDGameRulesetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlPointRulesetSettings BluforTeamCPSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlPointRulesetSettings OpforTeamCPSettings;
    
public:
    UHDRuleset_ControlPoint();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FControlPointRulesetSettings GetControlPointSettingsForTeam(EHDTeam ControlPointTeam) const;
    
    UFUNCTION(BlueprintCallable)
    void ControlPointTeamUpdated(AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
    
    UFUNCTION(BlueprintCallable)
    void ControlPointCaptureProgressUpdated(AHDBaseCapturePoint* ControlPoint, bool bContested, int32 Progress);
    
};

