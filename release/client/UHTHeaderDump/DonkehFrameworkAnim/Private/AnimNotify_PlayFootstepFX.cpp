#include "AnimNotify_PlayFootstepFX.h"

UAnimNotify_PlayFootstepFX::UAnimNotify_PlayFootstepFX() {
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bAttachSound = false;
    this->bPlaySoundsWithPerspMeshOnly = false;
    this->bAttachEffect = true;
    this->bSpawnEffectsWithPerspMeshOnly = false;
    this->FootstepVariant = EFootstepVariant::Walk;
    this->FootstepVariantParamName = TEXT("FootstepVariant");
    this->FootTraceOffset = 100.00f;
    this->bDebug = false;
}

void UAnimNotify_PlayFootstepFX::SetFootstepNotifyProps(const FFootstepFXSettings& PropsToUse) const {
}

FFootstepFXSettings UAnimNotify_PlayFootstepFX::GetFootstepNotifyProps() const {
    return FFootstepFXSettings{};
}

bool UAnimNotify_PlayFootstepFX::EqualProps(const FFootstepFXSettings& Props, const FFootstepFXSettings& OtherProps) const {
    return false;
}


