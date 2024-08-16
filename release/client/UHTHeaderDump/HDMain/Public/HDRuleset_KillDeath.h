#pragma once
#include "CoreMinimal.h"
#include "EHDTeam.h"
#include "HDGameRulesetBase.h"
#include "KillDeathRulesetSettings.h"
#include "HDRuleset_KillDeath.generated.h"

class AController;

UCLASS(Blueprintable)
class HDMAIN_API UHDRuleset_KillDeath : public UHDGameRulesetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKillDeathRulesetSettings BluforTeamKDSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKillDeathRulesetSettings OpforTeamKDSettings;
    
public:
    UHDRuleset_KillDeath();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerTeamKilled(AController* Killer, AController* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKillDeathRulesetSettings GetKillDeathSettingsForTeam(EHDTeam KillDeathTeam) const;
    
};

