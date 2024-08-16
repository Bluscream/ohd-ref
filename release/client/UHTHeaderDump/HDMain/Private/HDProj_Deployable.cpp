#include "HDProj_Deployable.h"

AHDProj_Deployable::AHDProj_Deployable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bApplyDamageOnImpact = false;
    this->bTearOffOnPayloadActivation = false;
    this->bDisableOnPayloadActivation = false;
}


