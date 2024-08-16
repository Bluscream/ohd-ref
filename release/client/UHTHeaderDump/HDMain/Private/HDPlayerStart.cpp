#include "HDPlayerStart.h"

AHDPlayerStart::AHDPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
}

UCapsuleComponent* AHDPlayerStart::K2_GetCapsuleComponent() const {
    return NULL;
}


