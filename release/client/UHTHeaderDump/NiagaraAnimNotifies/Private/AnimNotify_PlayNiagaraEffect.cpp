#include "AnimNotify_PlayNiagaraEffect.h"

UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect() {
    this->Template = NULL;
    this->Attached = true;
}

UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() const {
    return NULL;
}


