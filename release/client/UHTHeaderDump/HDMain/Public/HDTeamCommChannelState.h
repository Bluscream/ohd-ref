#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkComms -ObjectName=DFCommChannelStateInterface -FallbackName=DFCommChannelStateInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkComms -ObjectName=DFCommStateSetupParams -FallbackName=DFCommStateSetupParams
#include "HDTeamCommChannelState.generated.h"

class AHDTeamState;

UCLASS(Blueprintable)
class HDMAIN_API UHDTeamCommChannelState : public UObject, public IDFCommChannelStateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHDTeamState* TeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFCommStateSetupParams InitialSetupParams;
    
public:
    UHDTeamCommChannelState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupTeamChannelState(AHDTeamState* ForTeamState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetChannelNameForTeam(const AHDTeamState* Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetChannelNameForCommand(const AHDTeamState* CmdTeam);
    

    // Fix for true pure virtual functions not being implemented
};

