#include "CameraShakeSourceComponent.h"
#include "Templates/SubclassOf.h"

UCameraShakeSourceComponent::UCameraShakeSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Attenuation = ECameraShakeAttenuation::Quadratic;
    this->InnerAttenuationRadius = 100.00f;
    this->OuterAttenuationRadius = 1000.00f;
    this->CameraShake = NULL;
    this->bAutoPlay = false;
}

void UCameraShakeSourceComponent::StopAllCameraShakes(bool bImmediately) {
}

void UCameraShakeSourceComponent::PlayCameraShake(TSubclassOf<UCameraShake> InCameraShake) {
}

void UCameraShakeSourceComponent::Play() {
}

float UCameraShakeSourceComponent::GetAttenuationFactor(const FVector& Location) const {
    return 0.0f;
}


