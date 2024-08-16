#include "HDProj_SpawnPointDeployable.h"
#include "Net/UnrealNetwork.h"

AHDProj_SpawnPointDeployable::AHDProj_SpawnPointDeployable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysShootable = true;
    this->Team = EHDTeam::NoTeam;
}

void AHDProj_SpawnPointDeployable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDProj_SpawnPointDeployable, Team);
}


