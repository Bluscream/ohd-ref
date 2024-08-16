#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkComms -ObjectName=DFCommChannelStateInterface -FallbackName=DFCommChannelStateInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkComms -ObjectName=DFCommStateSetupParams -FallbackName=DFCommStateSetupParams
#include "HDSQCommChannelState.generated.h"

class AHDSquadState;

UCLASS(Blueprintable)
class HDMAIN_API UHDSQCommChannelState : public UObject, public IDFCommChannelStateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHDSquadState* SquadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDFCommStateSetupParams InitialSetupParams;
    
public:
    UHDSQCommChannelState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupSQChannelState(AHDSquadState* ForSquadState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetChannelNameForSquad(const AHDSquadState* Squad);
    

    // Fix for true pure virtual functions not being implemented
};

