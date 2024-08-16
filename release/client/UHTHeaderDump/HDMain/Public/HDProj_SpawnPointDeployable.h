#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFramework -ObjectName=DFTeamAgentInterface -FallbackName=DFTeamAgentInterface
#include "EHDTeam.h"
#include "HDProj_Deployable.h"
#include "HDProj_SpawnPointDeployable.generated.h"

UCLASS(Abstract, Blueprintable)
class HDMAIN_API AHDProj_SpawnPointDeployable : public AHDProj_Deployable, public IDFTeamAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EHDTeam Team;
    
public:
    AHDProj_SpawnPointDeployable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

