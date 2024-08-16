#include "LightComponentBase.h"

ULightComponentBase::ULightComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Brightness = 3.14f;
    this->Intensity = 3.14f;
    this->bAffectsWorld = true;
    this->CastShadows = true;
    this->CastStaticShadows = true;
    this->CastDynamicShadows = true;
    this->bAffectTranslucentLighting = false;
    this->bTransmission = false;
    this->bCastVolumetricShadow = false;
    this->bCastDeepShadow = false;
    this->bCastRaytracedShadow = true;
    this->bAffectReflection = true;
    this->bAffectGlobalIllumination = true;
    this->IndirectLightingIntensity = 0.00f;
    this->VolumetricScatteringIntensity = 1.00f;
    this->SamplesPerPixel = 0;
}

void ULightComponentBase::SetSamplesPerPixel(int32 NewValue) {
}

void ULightComponentBase::SetCastVolumetricShadow(bool bNewValue) {
}

void ULightComponentBase::SetCastShadows(bool bNewValue) {
}

void ULightComponentBase::SetCastRaytracedShadow(bool bNewValue) {
}

void ULightComponentBase::SetCastDeepShadow(bool bNewValue) {
}

void ULightComponentBase::SetAffectReflection(bool bNewValue) {
}

void ULightComponentBase::SetAffectGlobalIllumination(bool bNewValue) {
}

FLinearColor ULightComponentBase::GetLightColor() const {
    return FLinearColor{};
}


