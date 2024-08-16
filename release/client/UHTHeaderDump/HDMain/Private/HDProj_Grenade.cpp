#include "HDProj_Grenade.h"
#include "Net/UnrealNetwork.h"

AHDProj_Grenade::AHDProj_Grenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bApplyDamageOnImpact = false;
    this->bApplyDamageToInstigator = true;
    this->bTriggerPayloadWhenStopped = false;
    this->bTearOffOnPayloadActivation = false;
    this->FuzeDelay = 5.00f;
    this->PayloadPostTriggerLifeSpan = 0.00f;
    this->PayloadServerActivationTime = -1.00f;
}

void AHDProj_Grenade::OnRep_PayloadServerActivationTime() {
}

void AHDProj_Grenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDProj_Grenade, PayloadServerActivationTime);
}


